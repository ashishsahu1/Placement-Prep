#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code
    char chr[100];
    cin.getline(chr,100);
    cin.ignore();
    int largest=INT_MIN,i=0;
    int c=0;
    int currstrt=0,maxst;
    // chr+=' ';
    int n=0;
    while(chr[i]!='\0'){
        n++;
        i++;
    }
    cout<<n<<endl;

    i=0;
    
    while(1){
        if(chr[i]==' ' || chr[i]=='\0'){ 
            if(c>largest){
                largest = c;
                maxst = currstrt;
            }
            c=0;
            currstrt=currstrt+1;
        }
        else{
            currstrt+=1;
            c++;
        }
            
        if(chr[i]=='\0')
            break;
        i++; 
    }

    cout<<largest<<endl;
    for(int i=0;i<n;i++){
        cout<<chr[i+maxst];
    }
    return 0;
}