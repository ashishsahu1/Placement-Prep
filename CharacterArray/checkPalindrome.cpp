#include <bits/stdc++.h>
using namespace std;

bool check2(char chr[], int n){
    int i=0,j=n-1;
    while(j>=i){
        if(chr[i]==chr[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main()
{
    // code
    char chr[100];
    cin>>chr;
    int c =0;
    while(chr[c]!='\0'){
        c++;
    }

    cout<<"Original : "<<chr<<endl;
    if(check2(chr,c)){
        cout<<"Yes Palindrome"<<endl;
    }else{
        cout<<"Not palindrome"<<endl;
    }
    return 0;
}