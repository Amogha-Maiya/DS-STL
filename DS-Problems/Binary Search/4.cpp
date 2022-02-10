//Find KEY element in a ROTATED-SORTED ARRAY
//KEY IS GIVEN
//FIND the solution in log n time!!
#include<iostream>
#include<bits/stdc++.h>
int get_pivot(int a[],int n)
{
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;
    while(low<high){
    if(a[mid]>=a[0])
        low=mid+1;
    else{
        high=mid;
    }
    mid=low+(high-low)/2;
}  
return low;
}
int binary_search(int a[],int n,int pivot,int key,int low,int high){
    int result;
    int mid=low+(high-low)/2;
        while(low<=high){
            if(a[mid]==key)
                return mid;
            if(a[mid]>key)
                high=mid-1;
            else low=mid+1;
        mid=low+(high-low)/2;
        }
        return -1;
}
using namespace std;
int main(){
    int a[10],n,key;
    cout<<"Enter number n : "<<endl;
    cin>>n;
    cout<<"Enter number key : "<<endl;
    cin>>key;
    cout<<"Enter elements : "<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    int pivot=get_pivot(a,n);
    cout<<"PIVOT is at : "<<pivot+1<<endl;
    
    int result;
    if(a[pivot]<=key<=a[n-1])
    result=binary_search(a,n,pivot,key,pivot,n-1);
    else 
    result=binary_search(a,n,pivot,key,0,pivot-1);
    
    if(result==-1)
    cout<<"Absent : ";
    else cout<<"Present : ";
    return 0;
}