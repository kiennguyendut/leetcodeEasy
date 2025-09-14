# 3Sum

## Solution

Given an integer array `nums`, return all the triplets `[nums[i], nums[j], nums[k]]` such that `i != j`, `i != k`, and `j != k`, and `nums[i] + nums[j] + nums[k] == 0`.

Notice that the solution set must not contain duplicate triplets.

---

### Example 1

**Input:**  
`nums = [-1,0,1,2,-1,-4]`  
**Output:**  
`[[-1,-1,2],[-1,0,1]]`  
**Explanation:**  
- `nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0`
- `nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0`
- `nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0`  
The distinct triplets are `[-1,0,1]` and `[-1,-1,2]`.  
Notice that the order of the output and the order of the triplets does not matter.

---

### Example 2

**Input:**  
`nums = [0,1,1]`  
**Output:**  
`[]`  
**Explanation:**  
The only possible triplet does not sum up to 0.

---

### Example 3

**Input:**  
`nums = [0,0,0]`  
**Output:**  
`[[0,0,0]]`  
**Explanation:**  
The only possible triplet sums up to 0.

---

## Constraints

- `3 <= nums.length <= 3000`
- `-10^5 <= nums[i] <= 10^5`



## Overview cách giải bài 3Sum

1. **Sắp xếp mảng**  
   Đầu tiên, sắp xếp mảng tăng dần để dễ loại bỏ các bộ ba trùng lặp và sử dụng kỹ thuật hai con trỏ.

2. **Duyệt từng phần tử làm phần tử đầu tiên của bộ ba**  
   Dùng biến `i` duyệt từ đầu đến `nums.size() - 2` (vì cần ít nhất 2 phần tử phía sau để tạo bộ ba).

3. **Bỏ qua các phần tử trùng lặp**  
   Nếu `nums[i]` trùng với phần tử trước đó (`nums[i] == nums[i-1]`), bỏ qua để tránh bộ ba trùng lặp.

4. **Sử dụng hai con trỏ**  
   Đặt `left = i + 1` và `right = nums.size() - 1`.  
   Di chuyển hai con trỏ để tìm bộ ba có tổng bằng 0:
   - Nếu tổng nhỏ hơn 0, tăng `left`.
   - Nếu tổng lớn hơn 0, giảm `right`.
   - Nếu tổng bằng 0, lưu bộ ba vào kết quả và di chuyển cả hai con trỏ, đồng thời bỏ qua các phần tử trùng lặp.

5. **Trả về kết quả**  
   Sau khi duyệt hết, trả về danh sách các bộ ba thỏa mãn yêu cầu.

**Ưu điểm:**  
- Độ phức tạp O(n²), tối ưu hơn so với duyệt ba vòng lặp.
- Loại bỏ bộ ba trùng lặp nhờ sắp xếp và kiểm tra phần tử trùng.

**Kỹ thuật chính:**  
- Sắp xếp mảng
- Hai con trỏ
- Loại bỏ trùng lặp