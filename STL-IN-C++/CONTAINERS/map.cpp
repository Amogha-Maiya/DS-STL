#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="Hello";
    m[2]="World";
    m[5]="Hi";
    m[9]="There";
    m.insert({3,"heyya"});
    for(auto i:m)
    cout<<i.first<<" --> "<<i.second<<endl;
    cout<<"ITS TIME TO ERASE : "<<endl;
    m.erase(9);
    m.erase(1);
    cout<<"AFTER ERASE : "<<endl;
    for(auto j:m)
    cout<<j.first<<" --> "<<j.second<<endl;
    return 0;
}