//GIVEN AN ARRAY HAVE A MOUNTAIN LIKE STRUCTURE THAT IS TILL INCREASING TILL i (which is maximum of mountain)
//then decreasing till the end......FIND PEAK INDEX IN A MOUNTAIN ARRAY
//eg:- 1 2 3 4 5 6 5 4 3 2 1
#include<bits/stdc++.h>
int find_peak(int a[],int n)
{
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;
    while(low<high){
    if(a[mid]<a[mid+1])
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
    int peak=find_peak(a,n);
    cout<<"PEAK is at : "<<peak+1<<endl;
    return 0;
}