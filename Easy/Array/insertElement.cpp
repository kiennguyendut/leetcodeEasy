#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int arr[5] = {0, 1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    // Insert Element to place
/*    int pos = 1;
    int value = 22;
    for (int i = size; i > pos; --i)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    size++;
    cout << "array after insert: ";
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
        */

    // Delete Element to place
    int pos = 1;
    for (int i = pos; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    cout << "array after delete: ";
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
}