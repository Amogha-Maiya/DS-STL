//SELECTION SORT ALGORITHM....
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selection_sort(int a[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int temp=a[i];
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
int main(){
    int n,a[10];
    cout<<"Enter number n : "<<endl;
    cin>>n;
    cout<<"Enter number of elements : "<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    selection_sort(a,n);
    cout<<"Sorted array : "<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}