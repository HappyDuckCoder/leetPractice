#include <iostream> 

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL && list2 == NULL) return NULL;
        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;

        ListNode* runner = new ListNode();
        ListNode* res = runner;

        ListNode* p = list1;
        ListNode* q = list2;

        while (p && q) {
            if (p->val < q->val) {
                int tmp = p->val;
                p = p->next;
                runner->next = new ListNode(tmp);
            } else {
                int tmp = q->val;
                q = q->next;
                runner->next = new ListNode(tmp);
            }
            runner = runner->next;
        }

        while (p) {
            int tmp = p->val;
            p = p->next;
            runner->next = new ListNode(tmp);
            runner = runner->next;
        }

        while (q) {
            int tmp = q->val;
            q = q->next;
            runner->next = new ListNode(tmp);
            runner = runner->next;
        }

        return res->next;
    }
};


int main() {
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);    

    ListNode* list2 = new ListNode(3);
    list2->next = new ListNode(5);
    list2->next->next = new ListNode(7);
    list2->next->next->next = new ListNode(10);
    
    Solution s;
    ListNode* res = s.mergeTwoLists(list1, list2);

    while (res) {
        cout << res->val << endl;
        res = res->next;
    }

    delete list1;
    delete list2;
    delete res;

    return 0;
}