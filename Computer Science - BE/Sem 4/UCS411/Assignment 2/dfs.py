import copy

# c_ state => current


class puzzle:
    def __init__(self, initial, final):
        # self.c_state = copy.deepcopy(initial)
        self.current_s = initial
        self.final = final
        self.blank_id = self.current_s.index(0)
        self.msg = " Invalid move"

    def up(self):
        if (self.blank_id > 2):
            t = self.current_s[self.blank_id]
            self.current_s[self.blank_id] = self.current_s[self.blank_id - 3]
            self.current_s[self.blank_id - 3] = t
            # self.display()
            self.blank_id = self.current_s.index(0)
            # self.goal_state()
            return True
        else:
            # print(self.msg)
            return False

    def down(self):
        if (self.blank_id < 6):
            t = self.current_s[self.blank_id]
            self.current_s[self.blank_id] = self.current_s[self.blank_id + 3]
            self.current_s[self.blank_id + 3] = t
            # self.display()
            self.blank_id = self.current_s.index(0)
            # self.goal_state()
            return True
        else:
            # print(self.msg)
            return False

    def left(self):
        if (self.blank_id % 3 != 0):
            t = self.current_s[self.blank_id]
            self.current_s[self.blank_id] = self.current_s[self.blank_id - 1]
            self.current_s[self.blank_id - 1] = t
            # self.display()
            self.blank_id = self.current_s.index(0)
            # self.goal_state()
            return True
        else:
            # print(self.msg)
            return False

    def right(self):
        if (self.blank_id % 3 != 2):
            t = self.current_s[self.blank_id]
            self.current_s[self.blank_id] = self.current_s[self.blank_id + 1]
            self.current_s[self.blank_id + 1] = t
            # self.display()
            self.blank_id = self.current_s.index(0)
            # self.goal_state()
            return True
        else:
            # print(self.msg)
            return False

    def display(self):
        for i in range(0, 3):
            print(self.current_s[i*3 + 0],
                  self.current_s[i*3 + 1], self.current_s[i*3 + 2])
        print("."*30)

    # def d_c_s(self, c_s):
    #     self.c_s = c_s
    #     for i in range(0, 3):
    #         print(self.c_s[i*3 + 0],
    #               self.c_s[i*3 + 1], self.c_s[i*3 + 2])

    def goal_state(self):
        if self.current_s == self.final:
            print("Reached At Final State")
            print("."*30)
            return True
        return False


def check_visited(current_s):
    if current_s in visited:
        return False
    return True


stack = []
visited = []


def dfs(p):
    print("Initial State is =>")
    p.display()

    stack.append(p)

    while stack != []:
        c_state = stack.pop(0)
        visited.append(c_state.current_s)

        if(c_state.goal_state()):
            c_state.display()
            print("Visited List Length => ", len(visited))
            print("Stack List Length => ", len(stack))
            break

        new_state_up = copy.deepcopy(c_state)
        if new_state_up.up() and check_visited(new_state_up.current_s):
            stack.insert(0, new_state_up)
        else:
            del new_state_up

        new_state_left = copy.deepcopy(c_state)
        if new_state_left.left() and check_visited(new_state_left.current_s):
            stack.insert(0, new_state_left)
        else:
            del new_state_left

        new_state_down = copy.deepcopy(c_state)
        if new_state_down.down() and check_visited(new_state_down.current_s):
            stack.insert(0, new_state_down)
        else:
            del new_state_down

        new_state_right = copy.deepcopy(c_state)
        if new_state_right.right() and check_visited(new_state_right.current_s):
            stack.insert(0, new_state_right)
        else:
            del new_state_right


initial = [2, 0, 3, 1, 8, 4, 7, 6, 5]
final = [1, 2, 3, 8, 0, 4, 7, 6, 5]

p = puzzle(initial, final)
dfs(p)
# p.display()

# p.dfs()

# p.right()
# p.down()
# p.right()
# p.down()
