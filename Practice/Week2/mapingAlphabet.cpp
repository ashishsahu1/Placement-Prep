#include<bits/stdc++.h>
using namespace std;

int countPos(int n){
    string n_st = to_string(n);
    // cout<<n_st<<endl;
    for(int i=0;i<n_st.length();i++){
        for(int j=i;j<n_st.length();j++){
            string temp;
            for(int k=i;k<=j;k++){
                temp+=n_st[k];
            }
            int temp_int = stoi(temp);
            if(temp_int<=26){
                cout<<temp_int<<endl;
            }
        }
        
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    cout<<countPos(n)<<endl;
    return 0;
}