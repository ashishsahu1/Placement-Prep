#include <bits/stdc++.h>
using namespace std;

bool divisibleby9(int n){
    if(n==9){
        return true;
    }
    if(n<9){
        return false;
    }
    int sum=0;
    while(n!=0){
        sum += n%10;
        n = n/10;
    }
    return divisibleby9(sum);
}

int main()
{
    // code
    /*81 : 8+1 = 9 which is divisible by 9*/
    int n;
    cin>>n;
    if(divisibleby9(n))
        cout<<"Divisible by 9"<<endl;
    else
        cout<<"Not divisible"<<endl;
    return 0;
}