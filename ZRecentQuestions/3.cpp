#include <bits/stdc++.h>
using namespace std;

bool find2nd(int a,int b,int c){
    vector<int> temp(3,0);
    temp[0] = a;
    temp[1] = b;
    temp[2] = c;

    sort(temp.begin(),temp.end());

    if(b == temp[1])
        return true;
    else
        return false;
    
}

int main()
{
    int n,c=0;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    for (int i = 1; i < n - 1; i++)
    {
        int x1 = arr[i - 1];
        int x2 = arr[i];
        int x3 = arr[i + 1];

        if(find2nd(x1,x2,x3))
            c++;
    }
    cout<<c<<endl;
    return 0;
}