#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr;
    int n;
    cin>>n;
    int input=0;
    for(int i=0;i<n;i++){
        cin>>input;
        arr.push_back(input);
    }
    if(binary_search(arr.begin(),arr.end(),10))
        cout<<"FOunD aT lAsT"<<endl;
    return 0;
}