#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// main code we have to write

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {

        if (head1 == NULL || head2 == NULL) {
            return head1 == NULL ? head2 : head1;
        }

        if (head1->val <= head2->val) {
            head1->next = mergeTwoLists(head1->next, head2);
            return head1;
        } else {
            head2->next = mergeTwoLists(head1, head2->next);
            return head2;
        }

    }
};

// Utility function to create a new node
ListNode* createNode(int val) {
    return new ListNode(val);
}

// Utility function to print the linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Create first sorted linked list: 1 -> 3 -> 5
    ListNode* l1 = createNode(1);
    l1->next = createNode(3);
    l1->next->next = createNode(5);

    // Create second sorted linked list: 2 -> 4 -> 6
    ListNode* l2 = createNode(2);
    l2->next = createNode(4);
    l2->next->next = createNode(6);

    Solution sol;
    ListNode* mergedHead = sol.mergeTwoLists(l1, l2);

    // Print merged linked list
    cout << "Merged Linked List: ";
    printList(mergedHead);

    return 0;
}
