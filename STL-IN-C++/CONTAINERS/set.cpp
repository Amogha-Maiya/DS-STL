#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    set<int>s;
    s.insert(1);
    s.insert(3);
    s.insert(7);
    s.insert(7);
    s.insert(7);
    s.insert(9);
    s.insert(2);
    s.insert(2);
    for(auto i:s)
    cout<<i<<endl;
    cout<<"ELEMENT PRESENT OR NOT  :  "<<s.count(7)<<endl;
    s.erase(7);
    s.erase(2);
    cout<<"ELEMENTS AFTER ERASE FUNCTION : "<<endl;
    for(auto j:s)
    cout<<j<<endl;
    auto itr=s.find(11);
    cout<<"iterator  : "<<*itr<<endl;
    auto itr1=s.lower_bound(3);
    auto itr2=s.upper_bound(4);
    cout<<"lower bound of 3 : "<<*itr1<<endl;
    cout<<"upper bound of 4 : "<<*itr2<<endl;
    return 0;
}