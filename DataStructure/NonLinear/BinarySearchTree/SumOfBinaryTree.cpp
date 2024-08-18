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

void Total(Node *root, int &sum)
{
    if (root == NULL)
    {
        return;
    }

    sum = sum + root->data;
    Total(root->left, sum);
    Total(root->right, sum);
}

int getSumBinaryTree(Node *root)
{
    int sum = 0;
    Total(root, sum);
    return sum;
}

int main()
{

    cout << "Enter the root node data : ";

    Node *root = NULL;
    root = BuildTree();

    cout << "The Sum of the Binary Tree is : " << getSumBinaryTree(root);

    return 0;
}