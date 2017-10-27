#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node* Insert(Node *head, int data);
Node* get_last(Node *head);
Node* GetMergeNode(int diff, Node *larger, Node *smaller);
int FindMergeNode(Node *headA, Node *headB);
int length(Node *head);
void Print(Node *head);

int main()
{
    Node *a = nullptr;
    Node *b = nullptr;
    Node *c = nullptr;

//    for (int i = 0; i < 5; i++)
        a = Insert(a, 0);

    for (int i = 6; i < 11; i++)
        b = Insert(b, i);

    for (int i = 11; i < 16; i++)
        c = Insert(c, i);


    Print(a);
    Print(b);
    Print(c);

    Node *last_a = get_last(a);
    Node *last_b = get_last(b);

    last_a->next = c;
    last_b->next = c;

    Print(a);
    Print(b);

    int merge_point = FindMergeNode(a, b);
    cout << "a and b merges at: " << merge_point << endl;

    return 0;
}

int length(Node *head)
{
    int len = 0;
    while (head) {
        len++;
        head = head->next;
    }

    return len;
}

Node* GetMergeNode(int diff, Node *larger, Node *smaller)
{
    Node *node = nullptr;

    for (int i = 0; i < diff; i++)
        larger = larger->next;

    while (larger && smaller) {
        if (larger == smaller) {
            node = larger;
            break;
        }

        larger = larger->next;
        smaller = smaller->next;
    }
    return node;
}

int FindMergeNode(Node *headA, Node *headB)
{
    int a = length(headA);
    int b = length(headB);

    if (a > b)
        return GetMergeNode(a - b, headA, headB)->data;
    else
        return GetMergeNode(b - a, headB, headA)->data;
}

Node* get_last(Node *head)
{
    Node *current = head;
    while (current->next)
        current = current->next;

    return current;
}

Node* Insert(Node *head, int data)
{
    Node *node = new Node();
    node->data = data;
    node->next = nullptr;

    if (!head)
        return node;
    else {
        Node *current = head;
        while(current->next)
            current = current->next;

        current->next = node;
    }
    return head;
}

void Print(Node *head)
{
    Node *current = head;
    while(current) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
