#include <bits/stdc++.h>
using namespace std;

bool divisibleby11(int n){
    if(n==0){
        return true;
    }
    if(n<10){
        return false;
    }
    int sumOdd=0,sumEven = 0;
    while(n){
        sumOdd+=(n%10);
        n/=10;
        sumEven+=(n%10);
        n/=10;
    }
    int diff = abs(sumOdd - sumEven);
    return divisibleby11(diff);
}

int main()
{
    // code
    int n;
    cin>>n;
    if(divisibleby11(n))
        cout<<"Divisible";
    else
        cout<<"Not Divisible";
    return 0;
}