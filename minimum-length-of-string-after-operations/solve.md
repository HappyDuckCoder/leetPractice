# SOLUTION INSTRUCTION

## REFFERENCE

https://leetcode.com/problems/minimum-length-of-string-after-operations

## IDEA

1. for từ đầu đến cuối, nếu gặp thành phần có thể xóa thì xóa

## SOLVING

1. viết hàm check kiểm tra xem index đó thể xóa không
2. nếu có thể xóa thì viết hàm xóa
3. sử dụng idea để kết thúc bài toán

## PROBLEM

1. Tuy nhiên nếu tiếp cận hướng trên thì O(n^3) thậm chí có optimize code thì cũng tối đa O(n^2)
2. tiếp cận cách khác theo
   https://leetcode.com/problems/minimum-length-of-string-after-operations/?envType=daily-question&envId=2025-01-13
3. Giải thích lời giải của đề
   Bước 1: tạo bảng frequency
   Bước 2: Đếm số kí tự phải trừ ra

- nếu kí tự nào đó xuất hiện lẻ lần thì số kí tự phải trừ là fre - 1
- nếu kí tự nào đó xuất hiện chẵn lần thì fre - 2
  Bước 3: return s.length() - freCount
