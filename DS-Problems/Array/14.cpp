//MERGE TWO SORTED ARRAYS
//MERGE TWO SORTED or UNSORTED ARRAYS CAN BE DONE USING THIS SIMPLE TRICK!!!
#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[],int m,int arr2[],int n){
    for(int i=0;i<n;i++)
        arr1[i+m]=arr2[i];
    sort(arr1,arr1+n+m);
    for(int i=0;i<n+m;i++)
    cout<<arr1[i]<<" ";
}
int main(){
    int arr1[40],n,m,arr2[20];
    cout<<"Enter m :"<<endl;
    cin>>m;
    cout<<"Enter array elements : "<<endl;
    for(int i=0;i<m;i++)
    cin>>arr1[i];
    cout<<"Enter n :"<<endl;
    cin>>n;
    cout<<"Enter array elements : "<<endl;
    for(int j=0;j<n;j++)
    cin>>arr2[j];
    merge(arr1,m,arr2,n);
    return 0;
}