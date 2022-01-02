#include<iostream>
using namespace std;
int binary_search(int a[], int low, int high, int x)    
{    
    int mid;    
    if(low <= high)     
    {  
        mid = (low + high)/2;      
        if(a[mid] == x)    
        {                 
            return mid;    
        }    
        else if(a[mid] < x)     
        {  
            return binary_search(a, mid+1, high, x);    
        }         
    else     
        {  
            return binary_search(a, low, mid-1, x);    
        }         
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
    cout<<result<<endl;
    return 0;
}