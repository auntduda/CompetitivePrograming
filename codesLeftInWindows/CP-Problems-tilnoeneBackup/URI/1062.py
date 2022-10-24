class Stack:
  def __init__(self):
    self.items = []

  def empty(self):
    return self.items == []

  def push(self, item):
    self.items.append(item)

  def pop(self):
    return self.items.pop()

  def top(self):
    return self.items[-1]

  def size(self):
    return len(self.items)

def solve(s, n):
    ori = Stack()
    for i in range(1, n+1):
        ori.push(i)
    
    tmp = Stack()
    while not s.empty():
        curr = s.pop()
        
        if curr == ori.top():
            ori.pop()
        else:
            while not tmp.empty():
                if tmp.top() == ori.top():
                    ori.pop()
                    tmp.pop()
                else:
                    break
            
            tmp.push(curr)
    
    while not tmp.empty():
        if tmp.top() == ori.top():
            ori.pop()
            tmp.pop()
        else:
            return False
        
    return True

while True:
    n = int(input())
    if n == 0: break

    while True:
        v = [int(i) for i in input().split()]
        
        if len(v) == 1:
            break
        
        s = Stack()
        for ele in v:
            s.push(ele)
            
        if solve(s, n):
            print('Yes')
        else:
            print('No')
        
    print()