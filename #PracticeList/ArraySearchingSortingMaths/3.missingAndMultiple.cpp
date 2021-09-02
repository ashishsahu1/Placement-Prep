/*
Find the repeating and the missing

Given an unsorted array of size n. Array elements are in the range from 1 to n. One number from set {1, 2, …n} is missing and one number occurs twice in the array. Find these two numbers.
Examples: 
Input: arr[] = {3, 1, 3}
Output: Missing = 2, Repeating = 3
Explanation: In the array, 
2 is missing and 3 occurs twice 

*/

#include<bits/stdc++.h>
using namespace std;

void find(vector<int> arr,int &missing,int &repeating){
    int n = arr.size();
    vector<int> freq(n+1,0);
    for(int i:arr){
        freq[i]++;
    }
    for(int i=0;i<freq.size();i++){
        if(freq[i] == 0){
            missing = i;
        }
        if(freq[i]>0){
            repeating = i;
        }
    }
}

int main(){

    vector<int> arr = {3,1,3};
    int missing,repeating;
    find(arr,missing,repeating);
    cout<<"Missing : "<<missing<<endl;
    cout<<"Repeating : "<<repeating<<endl;
    return 0;
}