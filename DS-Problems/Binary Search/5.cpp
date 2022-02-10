//Find Square Root of a Number with the hekp of BINARY SEARCH....
#include<iostream>
#include<bits/stdc++.h>
using namespace std;\
int square_root(int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans;
    while(s<=e){
        int square=mid*mid;
        if(n==square)
            return mid;
        else if(n>square)
            {
            ans=mid;
            s=mid+1;
            }
        else e=mid-1;
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter n to find out square root : "<<endl;
    cin>>n;
    int result=square_root(n);
    cout<<result<<" ";
    return 0;
}