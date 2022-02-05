//FIND PIVOT IN AN ARRAY
//PIVOT IN THIS CASE IS THE SMALLEST ELEMENT IN AN ARRAY WITH RESPECT TO (LOGN) TIME..
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
using namespace std;
int main(){
    int a[10],n;
    cout<<"Enter number n : "<<endl;
    cin>>n;
    cout<<"Enter number of elements : "<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    int peak=get_pivot(a,n);
    cout<<"PIVOT is at : "<<peak+1<<endl;
    return 0;
}