# SOLUTION INSTRUCTION

## REFFERENCE

https://leetcode.com/problems/product-of-array-except-self

## IDEA

1. Vấn đề khó của bài là xử lý số 0
2. Nếu không có số 0 thì nums[i] = p / nums[i] là xong
3. Nếu có 2 số 0 thì chắc chắn là mảng hằng 0
4. Nếu có 1 số 0 thì ngoại trừ vị trí số 0 ấy bằng p thì còn lại bằng 0

## SOLVING

1. Tìm tích p = tích các số khác 0
2. đếm số lượng số 0 hay cnt0
3. nếu cnt0 > 1 --> mảng hằng 0
4. nếu cnt0 = 0 --> nums[i] = p / nums[i]
5. nếu cnt0 = 1 --> nums[cnt0_index] = p, còn lại = 0
