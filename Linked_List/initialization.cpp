#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

    public:

    List() {
        head = tail = NULL;
    }

    void Push_front(int val) {
        Node* newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void Push_back(int val) {
        Node* newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        
    }

    void Pop_front() {
        if (head == NULL)
        {
            cout << "Linked list is empty" << endl;
            return;
        }
        
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void Pop_back() {
        if (head == NULL)
        {
            cout << "Linked list is empty" << endl;
            return;
        }

        Node* temp = head;

        while (temp->next != tail)
        {
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void printLL() {
        Node* temp = head;
        if (head == NULL)
        {
            cout << "Linked list is empty";
            return;
        }
        
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};


int main() {

    List ll;
    ll.Push_front(1);
    ll.Push_front(2);
    ll.Push_front(3);
    ll.Push_back(4);
    ll.printLL();
    ll.Pop_front();
    ll.Pop_back();
    ll.printLL();

    return 0;
}