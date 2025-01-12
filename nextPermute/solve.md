# SOLUTION INSTRUCTION 

## REFFERENCE
https://leetcode.com/problems/next-permutation/

## IDEA 
[4, 3, 5, 2, 1]

1. theo đề ta phải đi tìm 1 con số mới nhỏ nhất nhưng lơn hơn số cũ
2. bước 1 là đi tìm vị trí phải thay thế, tức là đưa số nhỏ nhất lớn hơn số cũ vào đúng vị trí của nó
3. nếu là mảng giảm dần thì ta reverse là xong
4. ngược lại ta sẽ tìm được ind nói ở ý số 2
5. lúc này ta tiếp tục tìm ind2 để thay thế bằng cách đi tìm thì ind1 đổ đi
6. swap 2 phần tử này, lúc này ta có mảng giảm dần từ ind1 đổ đi -> reverse từ ind1 ta có res

## SOLVING 
1. tìm ind1 bằng cách for ngược lại
2. nếu ind1 = -1 tức là mảng giảm dần thì reverse là xong
3. nếu ind1 = i nào đó thì tìm ind2 nhỏ nhất lớn hơn ind1
4. swap(ind1, ind2) ta được mảng giảm từ ind1 + 1
5. reverse từ ind1 + 1 ta được res
 




