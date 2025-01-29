# SOLUTION INSTRUCTION

## REFFERENCE

https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length

## IDEA

sử dụng kĩ thuật sliding window
cứ 1 cụm k quan sát trước, nếu s[i] ổn thì cnt++, nếu s[i - k] không ổn thì cnt--
rồi tổng kết sum

## SOLVING

1. viết hàm check vowel
2. kiểm tra xem k thẳng đầu max vowel là bao nhiêu
3. dùng sliding window xử lý bài toán
