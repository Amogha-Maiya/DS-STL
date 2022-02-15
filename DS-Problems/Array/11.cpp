//REVERSE ARRAY AFTER A PARTICULAR INDEX GIVEN BY USER!!!
//eg:- 1 2 3 4 5 as input......given m=2(2nd index)
//output :- 1 2 3 5 4
#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n,int index){
    int start=index+1;
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
    int arr[20],n,index;
    cout<<"Enter n :"<<endl;
    cin>>n;
    cout<<"Enter index after which u want to reverse :"<<endl;
    cin>>index;
    cout<<"Enter array elements : "<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    reverse(arr,n,index);
    return 0;
    }