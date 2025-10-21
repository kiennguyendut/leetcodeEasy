#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int> &arr, int d)
    {
        // code here,
        int n = arr.size();

        for (int i = 0; i < d; i++)
        {
            int last = arr[n - 1];
            for (int j = n - 1; j > 0; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[0] = last;
        }
    }
};

int main()
{
    Solution sol;
    vector<int> arr = {1, 2, 3, 4, 5};
    int d = 2;

    sol.rotateArr(arr, d);

    cout << "Rotated array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
