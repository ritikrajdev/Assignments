class WaterJug:
    def __init__(self,cont,capc):
        self.capacities = capc
        self.container = cont
        print(f"J1 = > {self.capacities[0]} | J2 = > {self.capacities[1]}")
        self.display()
        
    def fill_jug(self,j):
        self.jug = j
        if(self.container < self.capacities):
            self.temp1 = self.capacities[0]
            self.temp2 = self.capacities[1]
            if(self.jug == self.capacities[0]):
                self.container[0] = self.temp1
            else:
                self.container[1] = self.temp2
            self.display()

    def is_full(self,j):
        self.jug = j
        if(self.container[self.jug] == self.capacities[self.jug]):
            return True
        else:
            return False
        
    def empty_j(self,loc):
        self.loc = loc
        if(self.loc == 0):
            self.container[0] = 0
        elif(self.loc == 1):
            self.container[1] = 0
        self.display()

    def pour(self,a,b): #    4 ---> 3
        if(a == self.capacities[0]):
            if(self.is_full(1)):
                print("Your destination is already full can not pour")
            else:
                temp = self.container[0]
                spc_avlbl = self.capacities[1] - self.container[1]
                if(self.container[0] < spc_avlbl):
                    self.container[1] += temp
                    self.container[0] -= self.container[0]
                else:
                    self.container[1] += spc_avlbl
                    self.container[0] -= spc_avlbl
        else:
            if(self.is_full(0)):
                print("Your destination is already full can not pour")
            else:
                temp = self.container[1]
                spc_avlbl = self.capacities[0] - self.container[0]
                if(self.container[1] < spc_avlbl):
                    self.container[0] += temp
                    self.container[1] -= self.container[1]
                else:
                    self.container[0] += spc_avlbl
                    self.container[1] -= spc_avlbl
        self.display()

    def display(self):
        print(self.container)


wj = WaterJug([0,0],[3,4])
wj.fill_jug(3)
wj.pour(3,4) # pour from 3 liter jug to 4 liter jug 
wj.fill_jug(3)
wj.pour(3,4)
wj.empty_j(1)
wj.pour(3,4)
