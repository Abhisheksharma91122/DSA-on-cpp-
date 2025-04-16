#include <iostream>
#include<vector>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        int cnt = 0;

        // Check if at least k nodes are available
        while (cnt < k) {
            if (temp == nullptr) return head;
            temp = temp->next;
            cnt++;
        }

        // Recursively call for the rest
        ListNode* prevNode = reverseKGroup(temp, k);

        // Reverse current k-group
        temp = head;
        cnt = 0;
        while (cnt < k) {
            ListNode* next = temp->next;
            temp->next = prevNode;
            prevNode = temp;
            temp = next;
            cnt++;
        }

        return prevNode;
    }
};

// Helper function to create linked list from vector
ListNode* createList(const vector<int>& vals) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for (int val : vals) {
        ListNode* node = new ListNode(val);
        if (!head) {
            head = node;
            tail = head;
        } else {
            tail->next = node;
            tail = node;
        }
    }

    return head;
}

// Helper function to print linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Example usage
int main() {
    vector<int> values = {1, 2, 3, 4, 5};
    int k = 2;

    ListNode* head = createList(values);

    cout << "Original list: ";
    printList(head);

    Solution sol;
    ListNode* reversed = sol.reverseKGroup(head, k);

    cout << "Reversed in groups of " << k << ": ";
    printList(reversed);

    return 0;
}
