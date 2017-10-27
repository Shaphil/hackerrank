class Node(object):
    
    def __init__(self, data=None, next_node=None, prev_node=None):
        self.data = data
        self.prev = prev_node
        self.next = next_node

def SortedInsert(head, data):
    node = Node(data)

    if not head:
        return node
    else:
        current = head
        
        while current.next and current.data < data:
            current = current.next
        
        if current.data > data:
            if current.prev:
                prev = current.prev

                node.next = current
                node.prev = prev

                prev.next = node
                current.prev = node
            else:
                current.prev = node
                node.next = current
                head = node
        else:
            if current.next:
                next = current.next

                node.next = next
                node.prev = current

                next.prev = node
                current.next = node
            else:
                current.next = node
                node.prev = current
    return head

def print_list(head):
    temp = head
    while temp:
        print(temp.data, end=' ')
        temp = temp.next
    print()

head = None
data_set = [1, 9, 7, 3, 6, 8, 4]

for i in data_set:
    head = SortedInsert(head, i)

print_list(head)
