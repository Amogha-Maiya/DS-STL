//GIVEN AN ARRAY HAVE A MOUNTAIN LIKE STRUCTURE THAT IS TILL INCREASING TILL i (which is maximum of mountain)
//then decreasing till the end..
//find i which is the peak of the mountain using binary search
//eg:- 1,2,4,8,10(i),9,8,7,6,5 -->find i in this case
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