//REVERSE THE GIVEN ARRAY 
#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"Reversed array is : "<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int main(){
    int arr[20],n;
    cout<<"Enter n :"<<endl;
    cin>>n;
    cout<<"Enter array elements : "<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    reverse(arr,n);
    return 0;
    }