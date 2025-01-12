# SOLUTION INSTRUCTION 

## REFFERENCE
https://leetcode.com/problems/3sum-closest/description/

## IDEA 
2 con trỏ
giữ cố định a[i] và quan sát a[j], a[k] 
chuẩn bị mảng: sort 

## SOLVING 
for i in range(n) để xét từng a[i]
đặt j = i + 1, k = n - 1 chuẩn bị cho giai đoạn chạy 2 con trỏ
while(j < k) lúc này chạy 
nếu tolal > target, tức là phần lớn đang trội hơn --> k--
nếu total < target, tức là phần nhỏ đang trội hơn --> j++
nếu total = target thì return luôn

thêm bước lấy min là được

cứ thế cho đến khi dừng vòng lặp



