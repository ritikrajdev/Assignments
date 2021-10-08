import copy

###Compare visited and [goal] state
def compare(s,arr):
    for x in arr:
        flag=0
        for elem in x:
            if elem in s:
                flag+=1
        if flag==len(s):
            return True
    return False



def BFS(start,goal):
    count=0
    q=[]
    q.append(start)
    visited=[]
    while(len(q)>0):
        count+=1
        cur=q[0]
        q.pop(0)
        print(cur)
        visited.append(cur)
        if compare(cur,[goal]):
            print("Goal State Found!")
            print("No. of times code executed: ",count)
            return
            
        for i in range(len(cur)):
            sub=cur[i] ##subarray
            if(len(sub)):
                elem=sub[-1]
                for j in range(len(cur)):
                    temp=copy.deepcopy(cur)
                    temp[i].pop()
                    temp[j].append(elem)
                    if compare(temp,visited)==False and compare(temp,q)==False:
                        q.append(temp)

if(__name__=="__main__"):
    s=[['A'],['B','C'],[]]
    g=[['A','B','C'],[],[]]
    BFS(s,g)
