# SOLUTION INSTRUCTION 

## REFFERENCE

## IDEA 
2 con trỏ
giữ cố định a[i] và quan sát a[j], a[k] 
chuẩn bị mảng: sort 

## SOLVING 
for i in range(n) để xét từng a[i]
đặt j = i + 1, k = n - 1 chuẩn bị cho giai đoạn chạy 2 con trỏ
while(j < k) lúc này chạy 
nếu tolal > 0, tức là phần dương đang trội hơn --> k--
nếu total < 0, tức là phần âm đang trội hơn --> j++
nếu total = 0, thì push_back vào mảng, lưu ý là vẫn j++ để tiếp tục xét 

cứ thế cho đến khi dừng vòng lặp

## NOTABLE
1. xử lý trùng giá trị

nếu như đã thêm thành công bộ a[i], a[j], a[k] 
thì j++
lúc này nếu như a[j] == a[j - 1] thì sẽ thêm bộ trùng gặp tình huống này thì j++

tương tự phải xử lý trùng cho a[i] 

2. j < k hay j <= k 
Test và chạy thử thì báo lỗi indexing, nghĩa là out bound ở chỗ j += 1
về cơ bản thì không ảnh hưởng dấu bằng, nhưng ở bài này có xử lý trùng nên phải cẩn thận


