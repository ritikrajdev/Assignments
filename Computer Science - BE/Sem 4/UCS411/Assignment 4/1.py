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


## Uses stack
def DFS(start,goal):
    count=0
    st=[]
    st.append(start)
    visited=[]
    while(len(st)>0):
        count+=1
        cur=st[-1]
        st.pop(-1)
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
                    if i!=j and compare(temp,visited)==False and compare(temp,st)==False:
                        st.append(temp)

if(__name__=="__main__"):
    s=[['A'],['B','C'],[]]
    g=[['A','B','C'],[],[]]
    DFS(s,g)
