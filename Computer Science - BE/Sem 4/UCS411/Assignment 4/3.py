import copy

###Compare visited and [goal] state
def compare(s,arr):
    for x in arr:
        flag=0
        x=x[0]
        for elem in x:
            if elem in s:
                flag+=1
        if flag==len(s):
            return True
    return False


## Uses stack
def DFS(start,goal,depth):
    count=0
    st=[]
    st.append([start,0])
    visited=[]
    while(len(st)>0):
        count+=1
        cur=st[-1]
        cur1=cur[0]
        st.pop(-1)
        print(cur)
        visited.append(cur)
        if compare(cur1,[[goal,0]]):
            print("Goal State Found!")
            print("No. of times code executed: ",count)
            return True
        if(cur[1]<depth):
            for i in range(len(cur1)):
                sub=cur1[i] ##subarray
                if(len(sub)):
                    elem=sub[-1]
                    for j in range(len(cur1)):
                        temp=copy.deepcopy(cur1)
                        temp[i].pop()
                        temp[j].append(elem)
                        if i!=j and compare(temp,visited)==False and compare(temp,st)==False:
                            st.append([temp,cur[1]+1])
    return False

if(__name__=="__main__"):
    s=[['A'],['B','C'],[]]
    g=[['A','B','C'],[],[]]
    depth=1
    if not DFS(s,g,depth):
        print("Not Found!!")
