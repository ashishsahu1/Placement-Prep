#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 15;
    vector<int>::iterator it = find(arr.begin(), arr.end(), key);
    if (arr.end() == it)
    {
        cout << "Cannot find" << endl;
    }
    else
        cout << it - arr.begin() << endl;
}