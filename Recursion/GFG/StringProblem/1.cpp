//Given a string, print all possible palindromic partitions

#include <bits/stdc++.h>
using namespace std;

bool isPal(string str,int beg,int end){
    while(beg<end){
        if(str[beg]!=str[end])
            return false;
        beg++;
        end--;
    }
    return true;
}

string printPalindrome(string st){
    
}

int main()
{
    // code
    string st;
    getline(cin,st);
    printPalindrome(st);
    return 0;
}