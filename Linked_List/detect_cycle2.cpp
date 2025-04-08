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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool isCycle = false;

        // Step 1: Detect if there's a cycle
        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) {
                isCycle = true;
                break;
            }
        }

        // Step 2: If no cycle, return NULL
        if(!isCycle) {
            return NULL;
        }

        // Step 3: Move slow to head. Keep fast at meeting point. Move both 1 step at a time.
        slow = head;
        // remove cycle 
        ListNode* prev = NULL;
        while(slow != fast) {
            slow = slow->next;
            prev = fast;
            fast = fast->next;
        }

        prev->next = NULL;
        // Step 4: The point they meet is the start of the cycle
        return slow;
    }
};

// Helper to create a cycle in the linked list
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
    // Example: Create a list with a cycle at position 2 (0-based index)
    ListNode* head = createListWithCycle(6, 4);

    Solution sol;
    ListNode* start = sol.detectCycle(head);
    if (start) {
        cout << "Cycle starts at node with value: " << start->val << endl;
    } else {
        cout << "No cycle detected." << endl;
    }

    return 0;
}
