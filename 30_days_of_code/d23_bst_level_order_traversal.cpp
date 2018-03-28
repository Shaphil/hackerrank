#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;

class Node
{
    public:
        int data;
        Node *left, *right;
        Node(int d)
        {
            data = d;
            left = right = NULL;
        }
};

class Solution
{
    public:
        Node *insert(Node *root, int data)
        {
            if (root == NULL) {
                return new Node(data);
            }
            else {
                Node *cur;
                if (data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else {
                    cur = insert(root->right, data);
                    root->right = cur;
                }
                return root;
            }
        }

        // only the following was editable
        // this is BFS
        // https://www.hackerrank.com/challenges/30-binary-trees/tutorial
        void levelOrder(Node *root)
        {
            queue<Node *> discover;
            discover.push(root);
            while (!discover.empty()) {
                Node *current = discover.front();
                discover.pop();
                cout << current->data << " ";

                if (current->left)
                    discover.push(current->left);
                if (current->right)
                    discover.push(current->right);
            }
        }
};

int main()
{
    Solution myTree;
    Node *root = NULL;
    int T, data;
    cin >> T;
    while (T-- > 0)
    {
        cin >> data;
        root = myTree.insert(root, data);
    }
    myTree.levelOrder(root);
    return 0;
}
