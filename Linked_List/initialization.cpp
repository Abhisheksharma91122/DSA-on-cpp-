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

    void Push_front(int val) { // O(1)
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

    void Push_back(int val) {  // O(1)
        Node* newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        
    }

    void Pop_front() {  // O(1)
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

    void Pop_back() { // O(n)
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

    void insert_pos(int val, int pos) { // O(n)
        if (pos < 0)
        {
            cout << "Invalid pos" << endl;
            return;
        }

        if (pos == 0)
        {
            Push_front(val);
            return;
        }
        
        Node* temp = head;

        for (int i = 0; i < pos-1; i++)
        {
            if (temp->next == NULL)
            {
                cout << "Invalid pos" << endl;
                return;
            }
            
            temp =temp->next;
        }

        Node* newNode = new Node(val);

        newNode->next = temp->next;
        temp->next = newNode;
        
    }

    int search(int key) { // O(n)
        if (head == NULL)
        {
            cout << "Linked list is empty" << endl;
            return -1;
        }

        Node* temp = head;
        int i = 0;
        while(temp != NULL) {

            if (temp->data == key)
            {
                return i;
            }
            temp = temp->next;
            i++;
        }

        return -1;
        
    }

    void printLL() { // O(n)
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
    ll.Push_front(3);
    ll.Push_front(2);
    ll.Push_front(1);
    ll.insert_pos(4,3);
    cout << ll.search(4) << endl;
    ll.printLL();

    return 0;
}