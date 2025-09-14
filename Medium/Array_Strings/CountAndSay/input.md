## Count and Say Sequence

The count-and-say sequence is a sequence of digit strings defined by the recursive formula:

- `countAndSay(1) = "1"`
- `countAndSay(n)` is the run-length encoding of `countAndSay(n - 1)`.

**Run-length encoding (RLE)** is a string compression method that works by replacing consecutive identical characters (repeated 2 or more times) with the concatenation of the character and the number marking the count of the characters (length of the run).  
For example, to compress the string `"3322251"` we replace `"33"` with `"23"`, replace `"222"` with `"32"`, replace `"5"` with `"15"` and replace `"1"` with `"11"`.  
Thus the compressed string becomes `"23321511"`.

Given a positive integer `n`, return the nth element of the count-and-say sequence.

---

### Example 1

**Input:** `n = 4`  
**Output:** `"1211"`

**Explanation:**
- `countAndSay(1) = "1"`
- `countAndSay(2)` = RLE of `"1"` = `"11"`
- `countAndSay(3)` = RLE of `"11"` = `"21"`
- `countAndSay(4)` = RLE of `"21"` = `"1211"`

---

### Example 2

**Input:** `n = 1`  
**Output:** `"1"`

**Explanation:**  
This is the base case.

---

### Constraints

- `1 <= n <= 30`

---

### Follow up

Could you solve it iteratively?


=================PHÂN TÍCH YÊU CẦU BÀI========================

Mục tiêu:
Cho một số nguyên dương n, bạn cần trả về phần tử thứ n trong dãy "count-and-say".

Dãy count-and-say là gì?

Bắt đầu từ chuỗi "1".
Mỗi phần tử tiếp theo được tạo ra bằng cách mô tả chuỗi trước đó theo dạng "số lượng và giá trị ký tự liên tiếp".
Ví dụ: "1" → "11" (có một số 1) → "21" (có hai số 1) → "1211" (có một số 2, một số 1).
Cách hoạt động:

Ở mỗi bước, bạn duyệt qua chuỗi hiện tại, đếm số lần xuất hiện liên tiếp của từng ký tự, rồi ghép số lượng và ký tự đó lại với nhau để tạo chuỗi mới.
Ví dụ minh họa:

- n = 1: "1"

- n = 2: "11" (một số 1)

- n = 3: "21" (hai số 1)

- n = 4: "1211" (một số 2, một số 1)

**Yêu cầu:

Viết hàm trả về chuỗi kết quả cho n bất kỳ (1 ≤ n ≤ 30).
Có thể giải bằng cách lặp (iterative) hoặc đệ quy (recursive).
Kỹ năng kiểm tra:

Xử lý chuỗi, duyệt và nhóm ký tự liên tiếp.
Hiểu về thuật toán nén chuỗi dạng run-length encoding (RLE).
Tối ưu hóa thuật toán để chạy tốt với n lên tới 30.
Lưu ý:

Đề bài kiểm tra khả năng phân tích chuỗi và xây dựng thuật toán sinh chuỗi theo quy tắc đặc biệt.
Đây là một bài toán kinh điển về chuỗi trong LeetCode, thường xuất hiện ở mức độ dễ đến trung bình.