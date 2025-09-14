# leetcodeEasy
Practice to perfect
If you think you can, you can.

# 📘 Kế hoạch Học và Áp dụng Thuật Toán bằng C++

## 🎯 Mục tiêu
1. Hiểu sâu cú pháp và STL trong C++
2. Làm chủ các cấu trúc dữ liệu & giải thuật
3. Biết cách tư duy – phân tích – triển khai lời giải
4. Áp dụng vào các bài toán thuật toán: Leetcode, HackerRank, Codeforces, v.v.

---

## 🔰 STEP 1: Ôn lại C++ và chuẩn bị môi trường

### ✅ Kiến thức cần nắm:
- Cấu trúc chương trình C++
- `cin`, `cout`, vòng lặp, `if-else`, hàm, `array`, `vector`
- Khai báo biến, hàm, phạm vi biến, `const`, `reference`

### ✅ Công cụ:
- Compiler: GCC + VS Code / hoặc IDE: Code::Blocks / CLion
- Online: https://leetcode.com, https://www.hackerrank.com

---

## 🧱 STEP 2: Làm chủ STL – Standard Template Library

### ✅ Thực hành các thành phần:

| STL             | Cách dùng                              | Ứng dụng               |
|------------------|----------------------------------------|------------------------|
| `vector`         | Mảng động, thay thế mảng thông thường  | Dễ thao tác và resize  |
| `set`            | Tập hợp không trùng, auto sort         | Xử lý trùng lặp        |
| `map`            | Key-Value                              | Đếm tần suất, tra cứu  |
| `stack`          | LIFO                                   | Duyệt ngược, DFS       |
| `queue`          | FIFO                                   | BFS, xử lý theo thứ tự |
| `priority_queue` | Heap                                   | Bài toán "top k"       |

**Practice:**  
- Viết hàm thêm/xóa/sắp xếp `vector`, `set`, `map`
- Làm bài trên Leetcode tag: *Easy + STL practice*

---

## 🧠 STEP 3: Học từng thuật toán nền tảng

| Chủ đề              | Gợi ý học                   | Bài tập ví dụ     |
|---------------------|-----------------------------|-------------------|
| **Sorting**         | bubble, selection, quicksort| Leetcode 912      |
| **Two Pointers**    | Duyệt 2 đầu mảng            | Leetcode 167, 125 |
| **Sliding Window**  | Giới hạn độ dài cửa sổ      | Leetcode 3, 567   |
| **Binary Search**   | Trên mảng đã sort           | Leetcode 704, 35  |
| **Prefix Sum**      | Tính tổng đoạn nhanh        | Leetcode 560      |
| **Backtracking**    | Sinh tổ hợp/hoán vị         | Leetcode 46, 77   |
| **DFS/BFS**         | Cây, đồ thị                 | Leetcode 200, 733 |
| **Dynamic Programming** | Quy hoạch động         | Leetcode 70, 198, 322 |

---

## 🧩 STEP 4: Áp dụng tư duy giải bài

### 1. **Phân tích đề**
- Đầu vào (Input)? Ràng buộc?
- Đầu ra (Output)? Định dạng?
- Có cần sort không? Có tìm min/max không?
- Có thể dùng cấu trúc gì? (set, map, dp...)

### 2. **Định hướng giải**
- Brute-force → có chạy kịp không?
- Có thể tối ưu bằng: prefix sum / hashmap / sort / binary search / dp?

### 3. **Viết pseudo code**
→ Xác định các bước chính, rồi mới viết C++

### 4. **Code + Test**
- Test case đơn giản
- Test case biên (rỗng, 1 phần tử, max/min)

---

## 🧪 STEP 5: Luyện tập theo chủ đề

| Tuần     | Chủ đề            | Bài tập mẫu               |
|----------|-------------------|---------------------------|
| Tuần 1   | Mảng & String     | 2 sum, đảo ngược chuỗi   |
| Tuần 2   | Set, Map          | Đếm số lần xuất hiện     |
| Tuần 3   | Recursion         | Tổ hợp, hoán vị          |
| Tuần 4   | DP cơ bản         | Climbing Stairs, Robber  |
| Tuần 5   | DFS/BFS           | Số vùng đảo, tìm đường   |
| Tuần 6   | Tổng ôn + contest | Leetcode Weekly, AtCoder |

---

## 🎓 Tips học thuật toán hiệu quả

- 🔍 Đọc hiểu test case mẫu → rất nhiều hint trong đó
- 🧱 Chia nhỏ bài toán → từng bước đơn giản
- 🔁 Làm lại 3 lần: brute-force → optimize → dùng STL
- 📚 Ghi chép bài học sau mỗi bài: lỗi sai, trick mới
- 👨‍💻 Bắt đầu làm contest hoặc luyện mock interview

---

## 📩 Gợi ý hỏi để được hỗ trợ cụ thể

- “Hướng dẫn giải bài Leetcode 70 (Climbing Stairs) bằng tư duy DP”
- “Giải thích tại sao dùng sliding window cho bài Leetcode 3”
- “Cho tôi các bài luyện về DFS, có hướng dẫn từng bước bằng C++”
