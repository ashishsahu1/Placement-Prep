#include <bits/stdc++.h>
using namespace std;

int reversen(int n){
    int ans=0;
    while(n>0){
        int x = n%10;
        ans=ans*10+x;
        n=n/10;
    }
    return ans;
}

string bin(int n){
    string ans,temp,ch;
    int x=1;

    while(n>0){
        x = n%2;
        ch = to_string(x);
        temp.push_back(ch[0]);
        n = n/2;
    }
    reverse(temp.begin(),temp.end());
    return temp;
}

int bin2(int n){
    int x=1,temp,out=0;
    while(x<n){
        x*=2;
    }
    x/=2;

    while(x>0){
        temp = n/x;
        n = n-(temp*x);
        x/=2;
        out=(out*10)+temp;
    }
}

int binAdd(int s1,int s2){
    int ans=0;
    int prevC = 0;

    while(s1>0 && s2>0){
        if(s1%2==0 && s2%2==0){
            ans = (ans*10)+prevC;
            prevC = 0;
        }
        else if((s1%2==0 && s2%2==1)||(s1%2==1 && s2%2==0)){
            if(prevC==1){
                ans = (ans*10)+0;
                prevC = 1;
            }
            else{
                ans = (ans*10)+1;
                prevC = 0;
            }
        }
        else{
            ans = (ans*10)+prevC;
            prevC=1;  
        }
        s1/=10;
        s2/=10;
    }

    while(s1>0){
        if(prevC==1){
            if(s1%2==1){
                ans = ans*10+0;
                prevC=1;
            }else{
                ans = ans*10+1;
                prevC=0;
            }
        }else{
            ans = ans*10+ (s1%2);
        }
        s1/=10;
    }

    while(s2>0){
        if(prevC==1){
            if(s2%2==1){
                ans = ans*10+0;
                prevC=1;
            }else{
                ans = ans*10+1;
                prevC=0;
            }
        }else{
            ans = ans*10+ (s2%2);
        }
        s2/=10;
    }

    if(prevC==1){
        ans=ans*10+1;
    }
    ans = reversen(ans);
    return ans;
}

int main()
{
    // code
    int a,b;
    cin>>a;
    cin>>b;
    int bA,bB;
    bA = bin2(a);
    bB = bin2(b);


    cout<<"Your Answer : "<<binAdd(bA,bB);

    return 0;
}