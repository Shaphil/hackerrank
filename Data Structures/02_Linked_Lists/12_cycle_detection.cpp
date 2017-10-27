#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node* Insert(Node *head, int data);
Node* get_last(Node *head);
bool has_cycle(Node* head);
void Print(Node *head);

int main()
{
    Node *head = nullptr;

    for (int i = 0; i < 10; i++)
        head = Insert(head, i);

    Print(head);
    Node *last = get_last(head);
    cout << last->data << endl;

    // create the cycle
    last->next = head->next->next;

    Node *test = nullptr;
    test = Insert(test, 5);
    test = Insert(test, 10);
    test = Insert(test, 10);
    test = Insert(test, 10);
    test = Insert(test, 10);

    if (has_cycle(head))
        cout << "This list has cycle" << endl;
    else
        cout << "No cycles, boring" << endl;

    return 0;
}

// based on Floyd's Tortoise and Hare
// https://en.wikipedia.org/wiki/Cycle_detection#Floyd.27s_Tortoise_and_Hare
bool has_cycle(Node* head)
{
    Node *rabbit, *turtle;
    rabbit = turtle = head;

    while (rabbit && rabbit->next) {
        turtle = turtle->next;
        rabbit = rabbit->next->next;

        if (rabbit == turtle) {
            return true;
        }
    }

    return false;
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
