#include <bits/stdc++.h>
using namespace std;

bool checkPal(char chr[]){
    int i=0;
    int c =0;
    while(chr[c]!='\0'){
        c++;
    }
    
    while(chr[i]!='\0'){
        if(chr[i]!=chr[c]){
            return false;
        }
        c--;
        i++;
        cout<<i<<" "<<c<<endl;
    }
    return true;
}

int main()
{
    // code
    char chr[100];
    cin>>chr;

    cout<<"Original : "<<chr<<endl;
    if(checkPal(chr)){
        cout<<"Yes Palindrome"<<endl;
    }else{
        cout<<"Not palindrome"<<endl;
    }
    return 0;
}