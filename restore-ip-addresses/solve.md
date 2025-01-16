# SOLUTION INSTRUCTION 

## REFFERENCE
https://leetcode.com/problems/restore-ip-addresses/

## IDEA 
1. Có 3 dấu chấm --> 3 dòng for, mỗi vòng lặp một dấu chấm

## SOLVING 
1. viết hàm check 1 số có thỏa mãn 1 string ip hay không
2. for dấu chấm đầu tách được t1 
3. nếu t1 thỏa tiếp tục, for dấu chấm 2 tách được t2
4. nếu t2 thỏa tiếp tục, for dấu chấm 3 tách được t3 và t4
5. nếu t3 và t4 thỏa check --> add res




