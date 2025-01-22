# SOLUTION INSTRUCTION

## REFFERENCE

https://leetcode.com/problems/map-of-highest-peak/

## IDEA

sử dụng bfs để lan rộng từng ô từ water
có 1 biến là nextHighPeak = 1, khi lan ra thì đặt biến này vào rồi ++ biến này lên

## SOLVING

1. tạo mảng res với ban đầu tất cả là -1
2. ô nào là water thì cập nhật res, đồng thời push những ô water này vào queue, khi đó sẽ lan theo queue, số nào thấp hơn sẽ được ưu tiên giải quyết trước
3. tạo queue<pair<int, int>> phục vụ bfs
4. bắt đầu bfs theo thuật toán dx, dy đối với những ô -1
5. với những ô -1 sẽ được thay bằng nextHighPeak
