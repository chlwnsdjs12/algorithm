from collections import deque

class Find_Way():
    def __init__(self, n, m):
        self.n = n
        self.m = m
    
    # 미로 생성
    def make_maze(self):
        maze = [[] for _ in range(n)]
        
        for i in range(n):
            inputs = input()
            nums = [int(char) for char in inputs]
            for j in range(len(nums)):
                maze[i].append(nums[j])
        
        return maze
    
    def bfs(self, maze, start, end):
        que = deque()
        visited = [[False] * self.m for _ in range(self.n)]
        que.append([start, 0])
        visited[start[0]][start[1]] = True
        
        while que:
            x, y, dist = que.popleft()
            
            if(x, y) == end:
                return dist
            
            
        
        return 
        

n, m = map(int, input().split())

fw = Find_Way(n, m)
maze = fw.make_maze()