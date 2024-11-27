class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

    def revList(self,head):
        curr = head
        prev = None
        next = head.next
        while curr != None:
            curr.next = prev
            prev = curr
            curr = next
            if next != None:
                next = next.next
        return prev
    
    def midNode(self, head):
        s = head
        f = head
        while f != None and f.next != None:
            s = s.next
            f = f.next.next
        return s
    

head = Node('a')
head.next = Node('b')
head.next.next = Node('c')
head.next.next.next = Node('d')

temp = head
while temp != None:
    print(temp.data)
    temp = temp.next

midNode = head.midNode(head)
print(f"mid Node: {midNode.data}")

print(" In rev order")
rHead = head.revList(head)
while rHead != None:
    print(rHead.data)
    rHead = rHead.next