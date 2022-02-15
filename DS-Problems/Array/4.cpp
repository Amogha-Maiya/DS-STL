//UNION & INTERSECTION OF TWO ARRAYS USING STL(SETS)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,input,input2;
    set<int>s;
    set<int>s2;
    cout<<"Enter m :"<<endl;
    cin>>m;
    cout<<"Enter array elements of m : "<<endl;
    for(int i=0;i<m;i++){
    cin>>input;
    s.insert(input);
    }
    cout<<"Enter n :"<<endl;
    cin>>n;
    cout<<"Enter array elements of n : "<<endl;
    for(int i=0;i<n;i++){
    cin>>input2;
    s2.insert(input2);
    }
    cout<<"UNION OF TWO ARRAY's"<<endl;
    set<int>s3(s);
    for(int i:s2)
    s3.insert(i);
    for(int i:s3)
    cout<<i<<" ";
    cout<<endl;
    cout<<"INTERSECTION OF TWO ARRAY'S"<<endl;
    for(int i:s)
    if(s2.find(i)!=s2.end())
    cout<<i<<" ";
    return 0;
}
