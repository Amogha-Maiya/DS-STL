#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
    cout<<"Sorted array elements are : "<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
}
int main(){
    int n,arr[10];
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    bubble_sort(arr,n);
    return 0;
}