//Reverse the array.....
//same for array and vector.....
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10],n;
    cout<<"enter number of elements : "<<endl;
    cin>>n;
    cout<<"enter elements : "<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    reverse(a,a+n);
    cout<<"reversed array : "<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<endl;
    return 0;
}