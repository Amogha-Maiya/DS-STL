//BINARY SEARCH ALGORITHM.....
#include<iostream>
using namespace std;
int binary_search(int a[], int low, int high, int x)    
{    
    int mid=low+(high-low)/2;
    while(low<=high){
        if(a[mid]==x)
            return mid;
        if(a[mid]>x)
            high=mid-1;
        else
            low=mid+1;
        mid=low+(high-low)/2;
    }
    return -1;
}
int main(){
    int arr[10],x,n;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"Enter element to be searched"<<endl;
    cin>>x;
    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int high;
    int low;
    int result =binary_search(arr,0,n-1,x);
    cout<<"Found at : "<<result<<endl;
    return 0;
}