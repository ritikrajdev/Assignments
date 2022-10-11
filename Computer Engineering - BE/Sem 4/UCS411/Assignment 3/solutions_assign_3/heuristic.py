#Kunal Demla
import sys
import copy
import math
import numpy as np

def find_pos(s,elem):
    for i in range(len(s)):
        for j in range(len(s[0])):
            if s[i][j] == elem:
                return [i,j]
    return -1



def eucledian(s,g):
    res_mat = np.zeros(len(s)*len(s[0]),dtype = float)
    res_mat = res_mat.reshape(len(s),len(s))
    
    for x1 in range(len(s)):
        for y1 in range(len(s[0])):
            elem = s[x1][y1]
            pos = find_pos(g,elem)
            
            x2 = pos[0]
            y2 = pos[1]
            
            res_mat[x1][y1] = math.sqrt((x2-x1)**2 + (y2-y1)**2)
            
    summ = 0
    
    for i in range(len(res_mat)):
        summ += sum(res_mat[i])
    return summ



def manhattan(s,g):
    res_mat = np.zeros(len(s)*len(s[0]),dtype = float)
    res_mat = res_mat.reshape(len(s),len(s))
    
    for x1 in range(len(s)):
        for y1 in range(len(s[0])):
            elem = s[x1][y1]
            pos = find_pos(g,elem)
            
            x2 = pos[0]
            y2 = pos[1]
            
            res_mat[x1][y1] = abs(x2-x1) + abs(y2-y1)
            
    summ = 0
    
    for i in range(len(res_mat)):
        summ += sum(res_mat[i])
    return summ

def minkowiski(s,g,p):
    res_mat = np.zeros(len(s)*len(s[0]),dtype = float)
    res_mat = res_mat.reshape(len(s),len(s))
    
    for x1 in range(len(s)):
        for y1 in range(len(s[0])):
            elem = s[x1][y1]
            pos = find_pos(g,elem)
            
            x2 = pos[0]
            y2 = pos[1]
            
            res_mat[x1][y1] = ((abs(x2-x1)**p) + (abs(y2-y1)**p))**(1./p)
            
    summ = 0
    
    for i in range(len(res_mat)):
        summ += sum(res_mat[i])
    return summ



    
def main():
    p_val = 3
    s0 = [[2,0,3],[1,8,4],[7,6,5]]
    g = [[1,2,3],[8,4,0],[7,6,5]]
    euc = eucledian(s0,g)
    man = manhattan(s0,g)
    mink = minkowiski(s0,g,p_val)

    print (euc,man,mink)
if __name__ == "__main__":
    main()
