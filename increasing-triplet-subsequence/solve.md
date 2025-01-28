# SOLUTION INSTRUCTION

## REFFERENCE

https://leetcode.com/problems/increasing-triplet-subsequence

## IDEA

1. Làm sao để đánh dấu lại chỉ số i, j khi duyệt qua từng phần tử cho đến khi tìm được chỉ số k thích hợp
2. Nếu i đánh dấu, j > i đánh dấu, làm sao để tìm được k
3. Như vậy đặt 1 biến first là biến min nhất có thể khi duyệt đến chỉ số x nào đó
4. biến second là biến tạm coi là lớn hơn biến first
5. Nếu chỉ số x ấy chứa giá trị lớn hơn cả first và second coi như xong

## SOLVING

1. đặt biến first, second đều bằng INT_MAX
2. duyệt mảng
3. cài đặt biến first là biến min nhất có thể khi duyệt
4. nếu không thể min được nữa thì set biến second
5. nếu không thể set biến second được nữa coi như ta thỏa đề
6. mà nếu duyệt hết mảng mà không return true coi như false
