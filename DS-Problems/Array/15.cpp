//PERFORM ARRAY ROTATION
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,k;
    cout<<"Enter n : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array elements : "<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter k (number of rotations) : "<<endl;
    cin>>k;
    int temp[n];
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=a[i];
    }
    cout<<"ROTATED ARRAY : "<<endl;
    for(int i=0;i<n;i++)
    cout<<temp[i]<<' ';
    return 0;
}