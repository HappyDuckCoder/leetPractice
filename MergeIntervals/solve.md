# SOLUTION INSTRUCTION 

## REFFERENCE
https://leetcode.com/problems/merge-intervals/

## IDEA 
1. [a, b] và [c, d] chồng lên nhau khi c > b
2. việc ta quan tâm là từ cặp (a1, b1) đến cặp (ak, bk) có bị chồng chéo lên nhau không
- giải quyết vấn đề đó ta sẽ dùng intervals[0] làm chuẩn và biến prev để lưu lại kết quả phù hợp trước đó, ban đầu prev = intervals[0]
+ nếu không bị overlap, tức là prev thỏa, push prev
+ nếu có bị overlap, cập nhật prev: prev[1] = max(prev[1], interval[1]);
3. dĩ nhiên trước mắt là phải sort theo yếu tố thứ nhất của intervals

## SOLVING 
1. sắp xếp mảng theo yếu tố thứ nhất
2.  
    ```
    if prev[1] >= intervals[i][0]:
        prev[1] = max(prev[1], intervals[i][1])
    else:
        res.append(prev)
        prev = intervals[i]
    ```
3. 




