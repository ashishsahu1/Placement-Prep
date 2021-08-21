#include <iostream>
#include <vector>
using namespace std;

int ceiling(vector<int> arr, int key)
{
    int first = 0;
    int last = arr.size() - 1;
    while (first <= last)
    {
        int mid = first + (last - first) / 2;
        cout << first << " " << mid << " " << last << endl;
        if (arr[mid] == key)
        {
            return arr[mid];
        }
        if (arr[mid] < key)
        {
            first = mid + 1;
            continue;
        }
        if (arr[mid] > key)
        {
            last = mid - 1;
            continue;
        }
    }
    cout << first << " " << last << endl;
    return arr[first];
}

int main()
{
    vector<int> arr = {2, 3, 5, 9, 14, 16, 18};
    int key = 7;
    cout << ceiling(arr, key) << endl;
}