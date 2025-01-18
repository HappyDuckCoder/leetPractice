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

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        if (!head || !head->next) {
            return head; 
        }

        ListNode* p = head; 
        ListNode* q = head->next; 

        swap(p->val, q->val);


        while (q->next != nullptr && q->next->next != nullptr) {
            p = q->next; 
            q = p->next;
            swap(p->val, q->val);
        }

        return head;
    }
};

int main() {

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    Solution s; 
    head = s.swapPairs(head);

    while (head) {
        cout << head->val << endl;
        head = head->next;
    }

    return 0;
}