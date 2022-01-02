#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n){
    int min_index;
    for(int i=0;i<n-1;i++){
    min_index=i;
    for(int j=i;j<n;j++){
        if(arr[min_index]>arr[j])
            min_index=j;
    }
    swap(arr[i],arr[min_index]);
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
}
int main(){
    int arr[10],n;
    cout<<"Enter n : "<<endl;
    cin>>n;
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Sorted Array is : "<<endl;
    selection_sort(arr,n);
    return 0;

}