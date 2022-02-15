//FIND DUPLICATE
/* eg:- n is given = 6 
array = 1 2 3 4 5 1 ( contains 1 to n-1 elements for sure that is 1 to 5 + 1 duplicate element )
find the duplicate element */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[20];
    cout<<"Enter n :"<<endl;
    cin>>n;
    cout<<"Enter array elements : "<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    int ans=0;
    for(int i=0;i<n;i++){
        ans=a[i]^ans;
    }
    for(int i=1;i<n;i++){
        ans=ans^i;
    }
    cout<<"DUPLICATE Elemnt : "<<ans<<endl;
    return 0;
}
//EXPLAINATION : - 
/* WE MULTIPLIED ARRAY ELEMENTS TWICE BUT ONE EXTRA DUPLICATE ELEMENTS IS RETURNED 
WHEN 0^X(duplicate)=X;
*/