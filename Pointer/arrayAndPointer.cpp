#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code
    int arr[3]= {11,22,33};
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    for(int i=0;i<3;i++){
        int x;
        cin>>x;
        cout<<*arr+i;
    }


    return 0;
}