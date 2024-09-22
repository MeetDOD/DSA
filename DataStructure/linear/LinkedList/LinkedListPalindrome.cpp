#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

void insertEnd(Node *&head, int data)
{
    Node *temp = head;
    Node *newNode = new Node(data);

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

Node *getMiddleElement(Node *&head)
{
    Node *flash = head;
    Node *reverseFlash = head;

    while (flash != NULL && flash->next != NULL)
    {
        flash = flash->next->next;
        reverseFlash = reverseFlash->next;
    }

    return reverseFlash;
}

Node *reverseLL(Node *&head)
{
    Node *current = head;
    Node *forward = NULL;
    Node *previous = NULL;

    while (current != NULL)
    {
        forward = current->next;
        current->next = previous;
        previous = current;
        current = forward;
    }

    return previous;
}

bool isPalindrome(Node *&head)
{
    if (head->next == NULL)
    {
        return true;
    }

    // Algo
    // 1. Find Middle.
    Node *middle = getMiddleElement(head);
    // 2. Reverse After the middle part.
    Node *temp = middle->next;
    middle->next = reverseLL(temp);
    // 3. Comparing the start end and the reverse linked list
    Node *head1 = head;
    Node *head2 = middle->next;

    while (head2 != NULL)
    {
        if (head1->data != head2->data)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    return true;
}

void traversal(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " <- ";
        temp = temp->next;
    }
    cout << "NULL";
}

int main()
{

    Node *head = new Node(1);

    insertEnd(head, 2);
    insertEnd(head, 3);
    insertEnd(head, 2);
    insertEnd(head, 1);

    traversal(head);
    cout << endl;
    cout << "The Given LinkedList is a :" << " " << isPalindrome(head) << endl;

    return 0;
}