#include <iostream>
#include <vector>
using namespace std;

int findPeak(vector<int> arr)
{
    int first = 0;
    int last = arr.size() - 1;
    while (first < last)
    {
        int mid = first + (last - first) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            first = mid + 1;
        }
        else
        {
            last = mid;
        }
    }
    return first;
}

int main()
{

    vector<int> arr = {1,2,4,6,8,10,7,5,3};
    cout << arr[findPeak(arr)];
    return 0;
}