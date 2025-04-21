// Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)


#include <iostream>
#include<vector>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* first = head;
        ListNode* second = head->next;
        ListNode* prev = NULL;

        while(first != NULL && second != NULL) {
            ListNode* third = second->next;
            second->next = first;
            first->next = third;

            if(prev != NULL) {
                prev->next = second;
            } else {
                head = second;
            }

            prev = first;
            first = third;
            if(third != NULL) {
                second = third->next;
            } else {
                second = NULL;
            }
        }
        return head;
    }
};

// Helper function to create linked list from array
ListNode* createList(const vector<int>& vals) {
    if (vals.empty()) return nullptr;
    ListNode* head = new ListNode(vals[0]);
    ListNode* curr = head;
    for (size_t i = 1; i < vals.size(); ++i) {
        curr->next = new ListNode(vals[i]);
        curr = curr->next;
    }
    return head;
}

// Helper function to print linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> input = {1, 2, 3, 4};
    ListNode* head = createList(input);

    cout << "Original list: ";
    printList(head);

    Solution sol;
    ListNode* swapped = sol.swapPairs(head);

    cout << "Swapped list: ";
    printList(swapped);

    return 0;
}
