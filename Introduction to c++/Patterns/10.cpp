#include <iostream>
using namespace std;

int main()
{
    // 0-1 pattern
    for(int i=0;i<10;i++){
        for(int j=0;j<=i;j++){
            if(i==j || (i-j)%2==0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
    return 0;
}