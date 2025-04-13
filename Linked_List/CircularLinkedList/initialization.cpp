#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class CircularList
{
    Node *head;
    Node *tail;

public:
    CircularList()
    {
        head = tail = NULL;
    }

    void inserAtHead(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            newNode->next = head;
        }
        else
        {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }

    void inserAtTail(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            newNode->next = head;
        }
        else
        {
            newNode->next = head;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void deleteAtHead()
    {
        if (head == NULL)
        {
            return;
        }
        if (head == tail)
        {
            delete head;
            head = tail = NULL;
        }

        Node *temp = head;
        head = head->next;
        tail->next = head;
        temp->next = NULL;
        delete temp;
    }

    void deleteAtTail()
    {
        if (head == NULL)
        {
            return;
        } else if (head == tail)
        {
            delete head;
            head = tail = NULL;
        } else {
            Node *temp = tail;
            Node* prev = head;
            while (prev->next != tail)
            {
                prev = prev->next;
            }
            prev->next = head;
            tail = prev;

            temp->next = NULL;
            delete temp;
        }
    }

    void print()
    {
        if (head == NULL)
        {
            return;
        }

        cout << head->data << "->";
        Node *temp = head->next;

        while (temp != head)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << temp->data;
    }
};

int main()
{
    CircularList cll;
    cll.inserAtTail(1);
    cll.inserAtTail(2);
    cll.inserAtTail(3);
    cll.deleteAtTail();
    cll.deleteAtTail();
    cll.deleteAtTail();
    cll.print();
    return 0;
}