# SOLUTION INSTRUCTION 

## REFFERENCE
https://leetcode.com/problems/merge-two-sorted-lists/description/

## IDEA 
1. 2 con trỏ ở 2 head của 2 list 
2. một con trỏ runner, và một con trỏ res
3. nếu list1 > list2, thì tạo node mới với val của list2 và trỏ res đến
4. đồng thời di chuyển con trỏ của list2
5. ngược lại thì thao tác tương tự với list1 

## SOLVING 
1. xử lí null
- nếu cùng null return null
- nếu 1 trong 2 null thì return list còn lại
2. 2 con trỏ p, q đặt ở head 2 list 
3. 1 con trỏ runner, 1 con trỏ res 
4. so sánh list1->val và list2->val
- nếu list1->val bé hơn => p=p->next, ListNode* tmp = new ListNode(o->val), res->next = tmp
5. ngược lại với list2 
 




