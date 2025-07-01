#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};

    cout << "Vector ban dau: ";
    for (int x : v) cout << x << " ";

    v.push_back(4);                  // Thêm vào cuối
    v.insert(v.begin() + 1, 99);     // Chèn vào vị trí 1
    v.pop_back();                    // Xoá phần tử cuối
    v.erase(v.begin());             // Xoá phần tử đầu

    cout << "\nSau khi thao tac: ";
    for (int x : v) cout << x << " ";

    cout << "\nSize: " << v.size();
    cout << "\nCapacity: " << v.capacity();

    v.clear();  // Xoá toàn bộ vector
    cout << "\nEmpty: " << (v.empty() ? "Yes" : "No") << endl;

    return 0;
}
