#include <bits/stdc++.h>
using namespace std;

void primeFactor(int n){
    int i=2;
    if(n==1){
        return;
    }
    while(n%i!=0){
        i++;
    }
    cout<<i<<" ";
    primeFactor(n/i);
}

int main()
{
    // code
    //84 = 2 * 2 * 3 * 7
    int n;
    cin>>n;
    primeFactor(n);
    return 0;

}