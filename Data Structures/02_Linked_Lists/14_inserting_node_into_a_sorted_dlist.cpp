#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

int len = 0;
Node* SortedInsert(Node *head, int data);

void print_list(Node *head);

int main()
{
    int a[] = {1, 2, 5, 3, 1, 2, 3, 2};
    int size_a = sizeof(a) / sizeof(a[0]);

    Node *head = nullptr;

    for (int i = 0; i < size_a; i++) {
        head = SortedInsert(head, a[i]);
    }
    cout << "List: ";
    print_list(head);
    cout << "len: " << len << endl;

    return 0;
}

Node* SortedInsert(Node *head, int data)
{
    // Create new node with data
    Node *node = new Node();
    node->prev = node->next = nullptr;
    node->data = data;

    // If head is NULL or nullptr then the list is empty
    // then the only node in the list is the one you just created
    if (!head)
        return node;

    else {
        // For iteration purpose
        Node *current = head;

        // Since the list will be in ascending order, traverse the list
        // till there is node with data smaller than given value
        while(current->next && current->data < data)
            current = current->next;

        if (current->data > data) {

            // You may need to insert a node in between two nodes
            if (current->prev) {
                Node *prev = current->prev;

                prev->next = node;
                node->prev = prev;

                node->next = current;
                current->prev = node;
            }
            // or before the first node
            else {
                current->prev = node;
                node->next = current;
                head = node;
            }
        }
        else {
            // Insert in between two existing nodes
            if (current->next) {
                Node *next = current->next;

                next->prev = node;
                node->next = next;

                current->next = node;
                node->prev = current;
            }
            // or, insert after the last
            else {
                current->next = node;
                node->prev = current;
            }
        }
    }
    return head;
}

void print_list(Node *head)
{
    Node *temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
        len++;
    }
    cout << endl;
}
