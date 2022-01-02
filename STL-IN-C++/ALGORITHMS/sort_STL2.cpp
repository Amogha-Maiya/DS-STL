//SORTING ARRAY OF PAIRS OF VECTOR OF PAIRS.......
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    pair<int,int>p[5]={{0,1},{1,2},{0,3},{1,5},{2,5}};
    sort(p,p+5);
    for(int i=0;i<5;i++){
    cout<<"{"<<p[i].first<<",";
    cout<<p[i].second<<"}";
    }
    return 0;
}