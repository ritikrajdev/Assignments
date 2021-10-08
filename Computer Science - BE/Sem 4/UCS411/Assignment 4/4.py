import copy

###Compare visited and [goal] state
def compare(s,arr):
    for x in arr:
        flag=0
        y=x[0]
        for elem in y:
            if elem in s:
                flag+=1
        if flag==len(s):
            return True
    return False


## Uses stack
def DFS(start,goal,depth):
    global count
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
    count=0
    s=[['A'],['B','C'],[]]
    g=[['A','B','C'],[],[]]
    depth=0
    while(1):
        depth+=1
        print(depth)
        flag= DFS(s,g,depth)
        if(flag):
            print("Found at depth : ",depth)
            break
    if(flag==False):
        print("Not Found!!")
        