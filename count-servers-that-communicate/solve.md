# SOLUTION INSTRUCTION

## REFFERENCE

https://leetcode.com/problems/count-servers-that-communicate

## IDEA

1. Tạo 2 mảng đánh dấu 1 mảng để đánh số server trên hàng, 1 mảng để đánh số server trên cột
2. cột[j] số server trên cột j --> khi duyệt thì chỉ cần chỉ số này > 1 thì ++cnt

## SOLVING

Nếu là server và trên hàng hoặc cột có server thì cộng lên

```
if (grid[i][j] == 1 && (rowCount[i] > 1 || colCount[j] > 1)) {
    result++;
}
```
