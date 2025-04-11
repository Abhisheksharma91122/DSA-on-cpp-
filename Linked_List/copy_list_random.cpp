#include <iostream>
#include <unordered_map>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

// this is main code which we have to complete

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL) {
            return NULL;
        }

        // Map from original node to copied node
        unordered_map<Node*, Node*> m;

        // Create the first node of the new list
        Node* newHead = new Node(head->val);
        m[head] = newHead;

        // First pass: copy all nodes and build the next links
        Node* oldTemp = head->next;
        Node* newTemp = newHead;

        while (oldTemp != NULL) {
            Node* copyNode = new Node(oldTemp->val);
            m[oldTemp] = copyNode;
            newTemp->next = copyNode;
            newTemp = newTemp->next;
            oldTemp = oldTemp->next;
        }

        // Second pass: assign random pointers
        oldTemp = head;
        newTemp = newHead;
        while (oldTemp != NULL) {
            newTemp->random = m[oldTemp->random]; // handles NULL automatically
            newTemp = newTemp->next;
            oldTemp = oldTemp->next;
        }

        return newHead;
    }
};

// Helper function to print the list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << "Node Val: " << temp->val;
        if (temp->random)
            cout << ", Random Val: " << temp->random->val;
        else
            cout << ", Random Val: NULL";
        cout << endl;
        temp = temp->next;
    }
}

// Example usage
int main() {
    // Creating a sample list: 1 -> 2
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    node1->next = node2;
    node1->random = node2;
    node2->random = node2;

    Solution sol;
    Node* copiedList = sol.copyRandomList(node1);

    cout << "Original list:\n";
    printList(node1);

    cout << "\nCopied list:\n";
    printList(copiedList);

    return 0;
}
