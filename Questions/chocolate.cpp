#include <bits/stdc++.h>
using namespace std;

int check(int n){
    
    if(n==1 || n==0){
        return 0;
    }
    else
        cout<<n <<" ";
        return (n/3)+check(n/3)+check(n%3);
}

int main()
{
    int n,r=0;
    cin>>n;
    int sum=n;
    while(n){
        r = n%3;
        n = n/3;
        sum+=n;
        cout<<n<<" "<<sum<<" "<<r<<" "<<endl;
        if(r!=0){
            n = n+r;
        }
        if(n==1){
            break;
        }
    }
    cout<<"sum : "<<sum;

}