#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;
    int a1[r1][c1],a2[r2][c2];
    if(c1==r2){
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                cin>>a1[i][j];
            }
        }

        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                cin>>a2[i][j];
            }
        }
    }else{
        cout<<"dimension mismatch"<<endl;
        exit(0);
    }

    cout<<"A1"<<endl;

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<a1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\n\nA2"<<endl;

    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<a2[i][j]<<" ";
        }
        cout<<endl;
    }

    int ans[r1][c2];

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            ans[i][j]=0;
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<r2;j++){
            for(int k=0;k<c1;k++){
                ans[i][j] += a1[i][k]*a2[k][j];
            }
        }
    }
    
    cout<<"\n\nAnswer"<<endl;

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}