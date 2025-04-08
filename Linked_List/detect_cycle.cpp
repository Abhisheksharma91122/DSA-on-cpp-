#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) {
                return true;
            }
        }
        return false;
    }
};

// Helper function to create a list with or without a cycle
ListNode* createListWithCycle(int n, int pos) {
    if (n == 0) return NULL;

    ListNode* head = new ListNode(0);
    ListNode* current = head;
    ListNode* cycleNode = nullptr;

    for (int i = 1; i < n; ++i) {
        current->next = new ListNode(i);
        current = current->next;
        if (i == pos) {
            cycleNode = current;
        }
    }

    if (pos >= 0) {
        current->next = cycleNode; // Create the cycle
    }

    return head;
}

int main() {
    // Create a linked list of 5 nodes with a cycle starting at index 2
    ListNode* head = createListWithCycle(5, 2);

    Solution sol;
    if (sol.hasCycle(head)) {
        cout << "Cycle detected." << endl;
    } else {
        cout << "No cycle detected." << endl;
    }

    // NOTE: This code doesn't free memory for cycle case to keep it simple.
    return 0;
}
