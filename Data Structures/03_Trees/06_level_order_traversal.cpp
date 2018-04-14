#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;

class node
{
    public:
        int data;
        node *left, *right;
        node(int d)
        {
            data = d;
            left = right = NULL;
        }
};

class Solution
{
    public:
        node *insert(node *root, int data)
        {
            if (root == NULL) {
                return new node(data);
            }
            else {
                node *cur;
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

        // BFS
        void levelOrder(node *root)
        {
            queue<node *> discovered;
            discovered.push(root);

            while(!discovered.empty()) {
                node *current = discovered.front();
                discovered.pop();
                cout << current->data << " ";

                // push children to queue
                if (current->left)
                    discovered.push(current->left);
                if (current->right)
                    discovered.push(current->right);
            }
            cout << endl;
        }
};

int main()
{
    Solution myTree;
    node *root = NULL;
    int T, data;
    cin >> T;   // number of nodes
    while (T-- > 0)
    {
        cin >> data;
        root = myTree.insert(root, data);
    }
    myTree.levelOrder(root);
    return 0;
}
