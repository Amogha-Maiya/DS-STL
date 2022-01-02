#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int n,int key,int high,int low){
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int main(){
    int n,arr[10],key;
    cout<<"Enter n : "<<endl;
    cin>>n;
    cout<<"Enter key : "<<endl;
    cin>>key;
    cout<<"Enter array elements : "<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int high,low;
    int result = binary_search(arr,n,key,n-1,0);
    cout<<"found at"<<result<<endl;
    return 0;
}