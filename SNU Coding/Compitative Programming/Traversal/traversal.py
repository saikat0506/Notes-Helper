from collections import defaultdict

class graph:

    def __init__(self,vertex):
        self._vertex=vertex
        self.map=defaultdict(list)
        self.visit=[0]*vertex
        self.res=[]
        print('Enter your graph')
        for i in range(vertex):
            s=int(input("Enter the start : "))
            e=int(input("Enter the end : "))
            self.map[s].append(e)

    def dfs(self):
        for i in range(self.vertex):
            if not self.visit[i]:
                self.compute(i)
        
a = graph(3)
a.dfs()