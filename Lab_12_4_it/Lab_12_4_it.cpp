#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

void addToEnd(Node*& head, int data)
{
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;

    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
    }
    else
    {
        Node* current = head;

        while (current->next != head)
        {
            current = current->next;
        }

        current->next = newNode;
    }
}

void printList(Node* head)
{
    Node* current = head;

    if (head == NULL)
    {
        cout << "Список порожній!" << endl;
        return;
    }

    do
    {
        cout << current->data << " ";
        current = current->next;
    }
    while (current != head);

    cout << endl;
}

bool isSorted(Node* head)
{
    Node* current = head;

    if (head == NULL)
    {
        return true;
    }

    do
    {
        if (current->data > current->next->data)
        {
            return false;
        }

        current = current->next;
    }
    while (current != head);

    return true;
}
    
int main()
{
    Node* head = NULL;
    
    addToEnd(head, 1);
    addToEnd(head, 2);
    addToEnd(head, 3);
    addToEnd(head, 4);
    addToEnd(head, 5);
    
    cout << "Список: ";
    printList(head);
    
    if (isSorted(head))
    {
        cout << "Список відсортовано!" << endl;
    }
    else
    {
        cout << "Список не відсортовано!" << endl;
    }
    
    return 0;
}

