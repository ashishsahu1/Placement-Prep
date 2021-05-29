#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code
    char chr[100];
    
    cin.getline(chr,100);
    cin.ignore();

    int i=0,c=0;
    while(chr[i]!='\0'){
        if(chr[i]==' '){
            c++;
        }
        i++;
    }

    cout<<chr<<endl;
    cout<<c+1<<endl;
    return 0;
}