# Climbing Stairs

## Solution

You are climbing a staircase. It takes `n` steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

---

## Example 1:

**Input:**  
`n = 2`

**Output:**  
`2`

**Explanation:**  
There are two ways to climb to the top:  
1. 1 step + 1 step  
2. 2 steps  

---

## Example 2:

**Input:**  
`n = 3`

**Output:**  
`3`

**Explanation:**  
There are three ways to climb to the top:  
1. 1 step + 1 step + 1 step  
2. 1 step + 2 steps  
3. 2 steps + 1 step  

---

## Constraints

- `1 <= n <= 45`


## Solution:
Bài toán "`Climbing Stairs`" yêu cầu tìm số cách để leo lên đỉnh cầu thang có n bậc, mỗi lần có thể bước 1 hoặc 2 bậc.
Giả sử `f(n)` là số cách để lên được bậc thứ `n`.

Nếu bước cuối là 1 bậc:
Bạn phải ở bậc `n-1` trước đó, số cách là `f(n-1)`.

Nếu bước cuối là 2 bậc: bạn phải ở bậc `n-2` trước đó, số cách là `f(n-2)`.
Vậy:
- `f(n) = f(n-1) + f(n-2)`
Với điều kiện ban đầu:

- `f(1) = 1` (chỉ có 1 cách để lên bậc 1)
- `f(2) = 2` (có 2 cách: 1+1 hoặc 2)

Giải thích thêm ở code:
Ở đoạn code này:

``first`` lưu số cách lên bậc trước đó `(n-2)`


``second`` lưu số cách lên bậc hiện tại `(n-1)`

`ways` là số cách lên bậc tiếp theo (n), tính bằng ``first`` + ``second``

Sau khi tính xong số cách lên bậc tiếp theo (ways), ta cần cập nhật lại:

`first` thành số cách của bậc trước (`second` cũ)
`second` thành số cách của bậc hiện tại (ways vừa tính)

Việc này giúp vòng lặp luôn có giá trị đúng cho hai bậc liền trước để tính tiếp cho các bậc sau.

Đây là cách tối ưu hóa bộ nhớ, chỉ cần lưu hai giá trị thay vì mảng.