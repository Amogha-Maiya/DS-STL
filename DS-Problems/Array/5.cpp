//INTERSECTION OF TWO ARRAYS
#include<bits/stdc++.h>
using namespace std;
void intersection(int a[],int n,int b[],int m)
{
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i]==b[j]){
            cout<<a[i]<<' ';
            a[i]=-122234;
            break;
            }
        }
    }
}
int main(){
    int n,a[20],m,b[20];
    cout<<"Enter m :"<<endl;
    cin>>m;
    cout<<"Enter array elements of m : "<<endl;
    for(int i=0;i<m;i++)
    cin>>a[i];
    cout<<"Enter n :"<<endl;
    cin>>n;
    cout<<"Enter array elements of n : "<<endl;
    for(int i=0;i<n;i++)
    cin>>b[i];
    intersection(a,n,b,m);
    return 0;
}