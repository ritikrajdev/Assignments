#Kunal Demla
import sys
import copy
from heuristic import *

q = []
visited = []

def compare(s,g):
    if s==g:
        return(1)
    else:
        return(0)

def find_pos(s):
    
    for i in range(3):
        for j in range(3):
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

def heuristic(s,g):
    d = manhattan(s,g)
    # print (d)
    # d = 0
    # for i in range(3):
    #     for j in range(3):
    #         if s[i][j] != g[i][j]:
    #             d += 1
    return d

                
def dequeue(g):
    
    global q
    global visited
    
    q.sort()
    visited = visited + [q[0][1]]
    
    elem = q[0][1]
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
                print ("Found!! The intermediate states are:")
                for x in range(len(visited)):
                    print(visited[x])
                print([g])
                return
            else:
                if new not in visited:
                    enqueue(new,heuristic(new,g))
            

        new = down(curr_state,pos)

        if new != curr_state:
            if new == g:
                print ("Found!! The intermediate states are:")
                for x in range(len(visited)):
                    print(visited[x])
                print([g])
                return
            else:
                if new not in visited:
                    enqueue(new,heuristic(new,g))

        new = right(curr_state,pos)

        if new != curr_state:
            if new == g:
                print ("Found!! The intermediate states are:")
                for x in range(len(visited)):
                    print(visited[x])
                print([g])
                return
            else:
                if new not in visited:
                    enqueue(new,heuristic(new,g))

        new = left(curr_state,pos)

        if new != curr_state:
            if new == g:
                print ("Found!! The intermediate states are:")
                for x in range(len(visited)):
                    print(visited[x])
                print([g])
                return
            else:
                if new not in visited:
                    enqueue(new,heuristic(new,g))
        
        if len(q) > 0:
            curr_state = dequeue(g)
        else:
            print ("Not found.")
            return
        

def main():
    s = [[1,2,3],[5,6,0],[7,8,4]]
    g = [[1,2,3],[5,8,6],[0,7,4]]
    global q
    global visited
    q = q 
    visited = visited + [s]
    
    search(s,g)
    
if __name__ == "__main__":
    main()
