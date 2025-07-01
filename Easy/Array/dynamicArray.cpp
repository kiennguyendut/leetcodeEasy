#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap kich thuoc mang: ";
    cin >> n;

    // Cấp phát mảng động
    int* arr = new int[n];

    // Nhập giá trị
    cout << "Nhap " << n << " gia tri:\n";
    for (int i = 0; i < n; ++i) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    // In ra mảng
    cout << "Mang vua nhap: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    // Tăng gấp đôi kích thước mảng (manual)
    int* newArr = new int[n * 2];
    for (int i = 0; i < n; ++i)
        newArr[i] = arr[i];

    // Gán thêm phần tử mới
    for (int i = n; i < n * 2; ++i)
        newArr[i] = 0;

    delete[] arr;   // Giải phóng mảng cũ
    arr = newArr;   // Cập nhật con trỏ

    cout << "\nMang sau khi mo rong: ";
    for (int i = 0; i < n * 2; ++i)
        cout << arr[i] << " ";

    delete[] arr;   // Giải phóng cuối cùng

    return 0;
}
