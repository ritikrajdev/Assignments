#Kunal Demla
import sys
import copy

q = []
visited = []

def compare(s,g):
    if s==g:
        return(1)
    else:
        return(0)

def find_pos(s):
    
    for i in range(len(s)):
        for j in range(len(s[0])):
            if s[i][j] == 0:
                return([i,j])


def up(s,pos):
    
    i = pos[0]
    j = pos[1]
    
    if i > 0:
        temp = copy.deepcopy(s)
        temp[i][j] = temp[i-1][j]
        temp[i-1][j] = 0
        return (temp)
    else:
        return (s)

    
def down(s,pos):
    
    i = pos[0]
    j = pos[1]
    
    if i < 2:
        temp = copy.deepcopy(s)
        temp[i][j] = temp[i+1][j]
        temp[i+1][j] = 0
        return (temp)
    else:
        return (s)


def right(s,pos):
    
    i = pos[0]
    j = pos[1]
    
    if j < 2:
        temp = copy.deepcopy(s)
        temp[i][j] = temp[i][j+1]
        temp[i][j+1] = 0
        return (temp)
    else:
        return (s)


def left(s,pos):
    
    i = pos[0]
    j = pos[1]
    
    if j > 0:
        temp = copy.deepcopy(s)
        temp[i][j] = temp[i][j-1]
        temp[i][j-1] = 0
        return (temp)
    else:
        return (s)

def enqueue(s,val):
    global q
    q = q + [(val,s)]


def g_val(s,curr_state,g):
    
    d = 0
    
    for i in range(3):
        for j in range(3):
            
            if s[i][j] != g[i][j]:
                d += 1
    return d

def h_val(g,curr_state):
    
    d = 0
    for i in range(3):
        for j in range(3):
            if curr_state[i][j] != g[i][j]:
                d += 1
    return d


def heuristic_val(s,curr_state,g):
    
    heur_val = g_val(s,curr_state,g) #+ h_val(g,curr_state)
    return heur_val

def dequeue(g,s):
    
    global q
    global visited
    
    q.sort()
    elem = q[0][1]
    visited = visited + [q[0][1]]
    del q[0]
    return (elem)
    
def search(s,g):
    
    curr_state = copy.deepcopy(s)
    if s == g:
        return

    global visited
    while(1):
        
        pos = find_pos(curr_state)
        new = up(curr_state,pos)

        if new != curr_state:
            if new == g:
                print ("The intermediate states are:\n")
                print ("\n",visited + [g])
                return
            else:
                if new not in visited:
                    enqueue(new,heuristic_val(s,new,g))
            

        new = down(curr_state,pos)

        if new != curr_state:
            if new == g:
                print ("The intermediate states are:\n")
                print ("\n",visited + [g])
                return
            else:
                if new not in visited:
                    enqueue(new,heuristic_val(s,new,g))

        new = right(curr_state,pos)

        if new != curr_state:
            if new == g:
                print ("found!! The intermediate states are:\n")
                print ("\n",visited + [g])
                return
            else:
                if new not in visited:
                    enqueue(new,heuristic_val(s,new,g))

        new = left(curr_state,pos)

        if new != curr_state:
            if new == g:
                print ("The intermediate states are:\n")
                print ("\n",visited + [g])
                return
            else:
                if new not in visited:
                    enqueue(new,heuristic_val(s,new,g))
        
        if len(q) > 0:
            curr_state = dequeue(g,s)
        else:
            print ("not found")
            return
        

def main():
    
    s = [[1,2,3],[8,0,4],[7,6,5]]
    g = [[2,8,1],[0,4,3],[7,6,5]]
    global q
    global visited
    q = q 
    visited = visited + [s]
    
    search(s,g)
    
if __name__ == "__main__":
    main()
