from collections import deque

class Find_Relationship():
    def __init__(self, people, rs):
        self.people = people
        self.rs = rs
    
    # 관계도 생성
    def make_relation(self):
        relation = [[] for _ in range(self.people+1)]
        for i in range(self.rs):
            person, friend = map(int, input().split())
            relation[person].append(friend)
            relation[friend].append(person)
        return relation
    
    def bfs(self, relation, start, target):
        visited = [False] * (self.people+1)
        que = deque()
        que.append([start, 0])
        visited[start] = True
        
        while que:
            node, dist = que.popleft()
            
            if node == target:
                return dist
            
            for friend in relation[node]:
                if not visited[friend]:
                    visited[friend] = True
                    que.append([friend, dist+1])
    
    def calculate(self, relation):
        # 사람 별 케빈 베이컨 수
        dist_arr = [0] * (self.people+1)
        
        # 사람 별 케빈 베이컨 수 계산
        for i in range(1, self.people+1):
            # 건넌 다리 수
            sum = 0
            for j in range(1, self.people+1):
                dist = self.bfs(relation, i, j)
                sum += dist
            dist_arr[i] = sum
        
        return dist_arr
        
                
    
# people = 사람수, rs = 친구 관계 수
people, rs = map(int, input().split())
find_rs = Find_Relationship(people, rs)
relation = find_rs.make_relation()
dist_arr = find_rs.calculate(relation)

# 인덱스 0번은 비어있으므로 제외 작업
dist_arr = dist_arr[1:]

print(dist_arr.index(min(dist_arr)) + 1)