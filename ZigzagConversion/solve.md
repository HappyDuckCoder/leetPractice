# SOLUTION INSTRUCTION 

## REFFERENCE
https://leetcode.com/problems/zigzag-conversion/description/

## IDEA 
1. để ý cần 1 mảng gồm numRows string, cộng các string này lại ta có res
2. cứ đi xuống hết 1 lượt, rồi lên dần từ từ --> cần 1 biến count để đi xuống và đi lên
3. nếu count == 0 thì đi lên mà count == numRows - 1 thì đảo chiều đi xuống
4. thêm 1 biến check để implement ý tưởng trên

## SOLVING 
1. tạo 1 mảng string
2. 1 biến count, 1 biến check
3. 1 vòng for trong s, rồi rows[count] += s[i], count++ 
4. nếu count == numRows - 1 thì check = false và count-- 
5. đến khi count == 0 thì check = true để đánh dấu đảo chiều và count++;




