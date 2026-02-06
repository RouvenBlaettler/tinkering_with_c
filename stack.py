class Stack:
    def __init__(self):
        self.stack = []

    def __str__(self):
        return str(self.stack)

    def push(self, value):
        self.stack.append(value)

    def pop(self):
        if not self.stack:
            raise IndexError("Pop from an empty stack")
        index = len(self.stack)-1
        top_element = self.stack[index]
        self.stack = self.stack[:index]
        return top_element
    

s = Stack()
s.push(10)
print(s)
s.push(20)
print(s)
assert (s.pop() == 20)
print(s)



