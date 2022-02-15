//FIND UNIQUE ELEMENT IN AN ARRAY
/* input : - n(size of arrays is always odd )=2m+1
//           conatins m pair of numbers(pair of same numbers) + 1 (unique element).
// eg:-  n=7         1 2 3 3 2 1 99.
//out:- 99(UNIQUE)*/

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
    cout<<"Unique Element : "<<ans<<endl;
    return 0;
}

//EXPLAINATION : -
/*
we make use of XOR FUNCTION( ^ )
1^1=0   any number XOR of itself = 0.
2^2=0
0^2=2   any number XOR of 0 is the number itself.
duplicates get cancelled and UNIQUE element remains.*/