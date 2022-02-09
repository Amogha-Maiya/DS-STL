//LINEAR SEARCH ALGORITHM.....
#include<iostream>
using namespace std;
int linear_search(int arr[],int n,int x)
{
    int count=0;
    for(int i=0;i<n;i++)
        if(arr[i]==x){
            cout<<"element found at : "<<i<<endl;
            count ++;
        }
        return count;
}
int main(){
    int arr[10],n,x;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter element to be searched "<<endl;
    cin>>x;
    cout<<"enter elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=linear_search(arr,n,x);
    cout<<" Number of Count : "<<result<<endl;
    return 0; 
}