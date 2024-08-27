#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Node
{

public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node *binaryTree()
{

    int x;
    cin >> x;

    if (x == -1)
    {
        return NULL;
    }

    Node *temp = new Node(x);

    // left
    cout << "Enter the left child of " << x << " : ";
    temp->left = binaryTree();

    // right
    cout << "Enter the right child of " << x << " : ";
    temp->right = binaryTree();

    return temp;
}

void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void leftView(Node *root)
{
    queue<Node *> q;
    q.push(root);
    vector<int> ans;

    while (!q.empty())
    {
        ans.push_back(q.front()->data);

        int n = q.size();

        while (n--)
        {
            Node *temp = q.front();
            q.pop();

            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{

    cout << "Enter the root node : ";
    Node *root;
    root = binaryTree();

    cout << "Inorder : ";
    inOrder(root);

    cout << endl;

    cout << "Left View : ";
    leftView(root);

    return 0;
}