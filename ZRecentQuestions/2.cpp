#include <bits/stdc++.h>
using namespace std;

int findK(vector<int> &arr, int n)
{
    int k = 1;
    int mxK=0;
    int maxScore = INT_MIN;
    while (k <= n)
    {
        int sum=0;
        for (int i = k-1; i < n; i += k)
        {
            sum+=arr[i];
        }
        if(sum>maxScore){
            maxScore = sum;
            mxK = k;
        }
        k++;
    }
    return mxK;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout<<findK(arr,n)<<endl;
    }
    return 0;
}