/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {};
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *p = head;
    
        int size = 0;
        while (p->next) {
            p = p->next;
            size++;
        }

        if (!size) return NULL;
        if (n >= size) return head;

        int m = size - n + 1;

        p = head;
        ListNode* p_prev = p;

        for (int i = 0; i < m; i++) { 
            p_prev = p;
            p = p->next;
        }

        p_prev->next = p->next;
        delete p;

        return head;
    }
};


int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    // head->next->next = new ListNode(3);
    // head->next->next->next = new ListNode(4);
    // head->next->next->next->next = new ListNode(5);
    // head->next->next->next->next->next = new ListNode(6);

    Solution s; 
    head = s.removeNthFromEnd(head, 1);

    while (head) {
        cout << head->val << endl;
        head = head->next;
    }

    return 0;
}