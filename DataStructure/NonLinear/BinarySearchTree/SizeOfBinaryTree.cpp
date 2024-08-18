#include <iostream>
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

Node *BuildTree()
{

    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    Node *temp = new Node(data);

    cout << "Enter the left node data " << data << " : ";
    temp->left = BuildTree();

    cout << "Enter the right node data " << data << " : ";
    temp->right = BuildTree();

    return temp;
}

void PreOrder(Node *root, int &count)
{
    if (root == NULL)
    {
        return;
    }

    count++;
    PreOrder(root->left, count);
    PreOrder(root->right, count);
}

int getSizeBinaryTree(Node *root)
{

    int count = 0;
    PreOrder(root, count);
    return count;
}

int main()
{

    cout << "Enter the root node data : ";

    Node *root = NULL;
    root = BuildTree();

    cout << "The Size of the Binary Tree is : " << getSizeBinaryTree(root);

    return 0;
}