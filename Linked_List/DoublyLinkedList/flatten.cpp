#include <iostream>

// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;

    Node(int _val) {
        val = _val;
        prev = NULL;
        next = NULL;
        child = NULL;
    }
};

class Solution {
public:
    Node* flatten(Node* head) {
        if (head == NULL) return head;

        Node* curr = head;

        while (curr != NULL) {
            if (curr->child != NULL) {
                // flatten the child nodes
                Node* next = curr->next;
                Node* child = flatten(curr->child);

                curr->next = child;
                child->prev = curr;
                curr->child = NULL;

                // find the tail of the flattened child list
                Node* tail = child;
                while(tail->next != NULL) {
                    tail = tail->next;
                }

                // reconnect next part
                tail->next = next;
                if (next != NULL)
                {
                    next->prev = tail;
                }
            }

            curr = curr->next;
        }

        return head;
    }
};

// Optional: Helper functions to create and print the list (for testing)
void printList(Node* head) {
    while (head) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}


int main() {
    Node* head = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);
    Node* child1 = new Node(6);
    Node* child2 = new Node(7);

    head->next = node2;
    node2->prev = head;
    node2->next = node3;
    node3->prev = node2;
    node3->next = node4;
    node4->prev = node3;
    node4->next = node5;
    node5->prev = node4;

    node3->child = child1;
    child1->next = child2;
    child2->prev = child1;

    Solution sol;
    Node* flatHead = sol.flatten(head);

    printList(flatHead); // Output: 1 2 3 6 7 4 5

    return 0;
}
