# SOLUTION INSTRUCTION

## REFFERENCE

https://leetcode.com/problems/reverse-words-in-a-string

## IDEA

Có một mảng phụ để lưu các từ trong string s --> dùng string stream để tách
sau khi tách xong thì reverse mảng phụ
join mảng phụ là xong

## SOLVING

1. tạo mảng tmp
2. dùng sstream lưu các từ trong s
3. reverse mảng tmp
4. join thành string res --> return
