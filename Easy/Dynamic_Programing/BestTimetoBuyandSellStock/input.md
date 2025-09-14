**Best Time to Buy and Sell Stock**
---

You are given an array `prices` where `prices[i]` is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

---

**Example 1:**

Input: `prices = [7,1,5,3,6,4]`  
Output: `5`  
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.  
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

**Example 2:**

Input: `prices = [7,6,4,3,1]`  
Output: `0`  
Explanation: In this case, no transactions are done and the max profit = 0.

---

**Constraints:**

- `1 <= prices.length <= 10^5`
- `0 <= prices[i] <= 10^4`

---
## Solution

- Bạn cần tìm ngày mua với giá thấp nhất và ngày bán sau đó với giá cao nhất để lợi nhuận lớn nhất.
- Duyệt qua mảng `prices`, luôn cập nhật giá mua thấp nhất (`minPrice`) và tính lợi nhuận nếu bán ở ngày hiện tại (`prices[i] - minPrice`).
- Cập nhật lợi nhuận lớn nhất (`maxProfit`) nếu lợi nhuận hiện tại lớn hơn.

## Các bước thực hiện

1. Khởi tạo `minPrice` là giá ở ngày đầu tiên, `maxProfit` là 0.
2. Duyệt từng giá trong mảng:
   - Nếu giá hiện tại nhỏ hơn `minPrice`, cập nhật `minPrice`.
   - Nếu lợi nhuận bán ở ngày hiện tại lớn hơn `maxProfit`, cập nhật `maxProfit`.
3. Kết thúc trả về `maxProfit`.

## Độ phức tạp

- **Thời gian:** O(n) (chỉ duyệt một lần qua mảng)
- **Bộ nhớ:** O(1) (chỉ dùng biến lưu giá trị)