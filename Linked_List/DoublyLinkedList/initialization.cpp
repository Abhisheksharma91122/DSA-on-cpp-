#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = prev = NULL;
    }
};

class DoublyList {
    public:
    Node* head;
    Node* tail;

    DoublyList() {
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
            head->prev = newNode;
            head = newNode;
            return;
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
            return;
        }
    }

    void pop_front() {
        if (head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }
        
        Node* temp = head;
        head = head->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }

    void pop_back() {
        if (head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }
        
        Node* temp = tail;
        tail = tail->prev;
        if (tail != NULL)
        {
            tail->next = NULL;
        } else {
            head = NULL;
        }
        
        temp->prev = NULL;
        delete temp;
    }

    void print() {
        Node* temp = head;

        while (temp != NULL)
        {
            cout << temp->data << "<=>";
            temp = temp->next;
        }
        cout << "NULL";
    }
};

int main() {
    DoublyList dll;

    dll.push_back(1);
    dll.push_back(2);
    dll.push_back(3);
    dll.push_back(4);
    dll.pop_back();
    dll.pop_back();
    dll.pop_back();
    dll.pop_back();
    dll.print();

    return 0;
}