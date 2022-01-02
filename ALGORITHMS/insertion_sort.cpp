#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n){
   int key;
    for(int i=1;i<n;i++){
        key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
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