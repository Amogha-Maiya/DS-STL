//MERGE TWO ARRAYS FROM ARRAY1 AND ARRAY2
//easier method is in next program.....
#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[],int m,int arr2[],int n){
    int i=0;
    int j=0;
    int k=0;
    int res[40];
    while(i<m){
        res[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n){
        res[k]=arr2[j];
        j++;
        k++;
    }
    sort(res,res+n+m);
    for(int i=0;i<n+m;i++)
    cout<<res[i]<<" ";
}
int main(){
    int arr1[20],n,m,arr2[20];
    cout<<"Enter m :"<<endl;
    cin>>m;
    cout<<"Enter array elements : "<<endl;
    for(int i=0;i<m;i++)
    cin>>arr1[i];
    cout<<"Enter n :"<<endl;
    cin>>n;
    cout<<"Enter array elements : "<<endl;
    for(int j=0;j<n;j++)
    cin>>arr2[j];
    merge(arr1,m,arr2,n);
    return 0;
    }