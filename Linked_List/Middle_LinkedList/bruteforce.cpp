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

class Linked {
    public:
    Node* head;
    Node* tail;
    Linked() {
        head = tail = NULL;
    }

    void push_front(int val) {
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

    void print() {
        if (head == NULL)
        {
            cout << "Linked list is empty" << endl;
            return;
        }
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

    void middle_ll() {
        if (head == NULL)
        {
            cout << "Linked list is empty" << endl;
            return;
        }

        int count = 0;
        Node* temp = head;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }

        int middle = count/2;
        temp = head;

        for (int j = 0; j < middle; j++)
        {
            temp = temp->next;
        }

        cout << "The middle node is " << temp->data;
        
    }
};

int main() {
    Linked ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.print();
    ll.middle_ll();
}