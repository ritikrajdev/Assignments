import copy

# c_ state => current


class puzzle:
    def __init__(self, initial, final):
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

    def goal_state(self):
        if self.current_s == self.final:
            print("Reached At Final State")
            print("."*30)
            return True
        return False

    def misplacedtiles(self):
        count = 0
        i = 0
        while i < len(self.current_s):
            if self.current_s[i] != self.final[i]:
                count = count + 1
            i = i + 1
        return count
        # print(count)


def check_visited(current_s):
    if current_s in visited:
        return False
    return True


visited = []
print("Initial State is =>")

def hillclimbing(p):
    print("misplacedtiles Tiles:", p.misplacedtiles())
    print()
    p.display()

    visited.append(p)
    
   

    if(p.goal_state()):
        p.display()
        print("Caught")
        return

    new_state_up = copy.deepcopy(p)
    if new_state_up.up() and check_visited(new_state_up.current_s) and new_state_up.misplacedtiles() < p.misplacedtiles():
        hillclimbing(new_state_up)
        return
    else:
        del new_state_up

    new_state_left = copy.deepcopy(p)
    if new_state_left.left() and check_visited(new_state_left.current_s) and new_state_left.misplacedtiles() < p.misplacedtiles():
        hillclimbing(new_state_left)
        return
    else:
        del new_state_left

    new_state_down = copy.deepcopy(p)
    if new_state_down.down() and check_visited(new_state_down.current_s) and new_state_down.misplacedtiles() < p.misplacedtiles():
        hillclimbing(new_state_down)
        return
    else:
        del new_state_down

    new_state_right = copy.deepcopy(p)
    if new_state_right.right() and check_visited(new_state_right.current_s) and new_state_right.misplacedtiles() < p.misplacedtiles():
        hillclimbing(new_state_right)
    else:
        del new_state_right


initial = [2, 0, 3, 1, 8, 4, 7, 6, 5]
final = [1, 2, 3, 8, 0, 4, 7, 6, 5]

p = puzzle(initial, final)
hillclimbing(p)
# p.misplacedtiles()
