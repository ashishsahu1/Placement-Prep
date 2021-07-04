#include <bits/stdc++.h>
using namespace std;

void printN(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    printN(n-1);
}

int main()
{
    // code
    int n;
    cin>>n;
    printN(n);
    return 0;
}