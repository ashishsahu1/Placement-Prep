#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1 = "ashish";
    string s2 = "ashish";
    string s3 = "ashishsahuhello";
    cout<<s1.at(1)<<endl; 
    s1.append("hello");  
    cout<<s1<<endl;
    s2+="hello";
    cout<<s2<<endl;
    cout<<s1.compare(s2)<<endl;
    cout << s1.compare(s3) << endl;
    cout << s3.compare(s2) << endl;
    char a = 'A';
    cout<<a*3<<endl;
    return 0;
}