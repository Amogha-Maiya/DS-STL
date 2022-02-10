#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[15];
    cout<<"Enter n : "<<endl;
    cin>>n;
    cout<<"Enter elements : "<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    rotate(a,a+3,a+n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}