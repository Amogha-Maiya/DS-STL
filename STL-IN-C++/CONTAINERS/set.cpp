#include<iostream>
#include<set>
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

    set<int>::iterator itr=s.find(9);
    cout<<"reference iterator  : "<<*itr<<endl;


    

}