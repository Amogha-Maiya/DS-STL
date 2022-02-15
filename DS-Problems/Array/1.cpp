//SWAP ALTERNATE ELEMENTS IN AN ARRAY
//eg:- 1 2 3 4 5
//out:-2 1 4 3 5
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[20];
    cout<<"Enter n :"<<endl;
    cin>>n;
    cout<<"Enter array elements : "<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    if(n%2==0){
        for(int i=0;i<n;i=i+2)
        swap(a[i],a[i+1]);
    }
    else{
        for(int i=0;i<n-1;i=i+2)
        swap(a[i],a[i+1]);
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}