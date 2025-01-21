# SOLUTION INSTRUCTION

## REFFERENCE

https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays

## IDEA

Quan trọng nhất là bước đọc hiểu đề, thì C[i] = tổng số common trong cả hai mảng đứng trước i
như vậy dẫn đến ý tưởng ta phải đếm số lần xuất hiện của các số từ trước i bằng kĩ thuật chuồng bò, sau đó check lại nếu xuất hiện bằng nhau thì ta cnt++
sau cùng ta sẽ push cnt vào mảng prefix là xong

## SOLVING

1 vòng for đi i từ 0 đến n (n = size A = size B)
i = 0 thì kiểm tra từ i trở về trước thì A, B common bao nhiêu số
--> thiết lập mảng bò bA và bB để đếm tần suất --> đếm cnt --> push cnt
tiếp tục với i = 1 và xây dựng từ từ ta có mảng prefix
