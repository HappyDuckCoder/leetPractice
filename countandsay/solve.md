# SOLUTION INSTRUCTION 

## REFFERENCE
https://leetcode.com/problems/count-and-say

## IDEA 
Gồm 2 bước xử lý:
Bước 1: viết hàm findRLE(string s) để tìm RLE cho một string bất kì
Bước 2: thực hiện quy trình đệ quy

## SOLVING 
Để xử lý bước 1 ta dùng 1 vòng for đi duyệt hết string 
khi hai kí tự giống nhau thì count++ mà kí tự khác nhau thì reset count = 0
khi đó ta sẽ thu về được số kí tự giống nhau của một chữ số 
cộng vào res và lặp lại



