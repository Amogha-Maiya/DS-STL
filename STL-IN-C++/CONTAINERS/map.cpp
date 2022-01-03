#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m={{1,"Hello"},{2,"hmmm"},{3,"hmmm"}};
    m.insert({4,"heyya"});
    for(auto i:m)
    cout<<i.first<<" --> "<<i.second<<endl;
    cout<<"ITS TIME TO ERASE : "<<endl;
    m.erase(1);
    cout<<"AFTER ERASE : "<<endl;
    for(auto j:m)
    cout<<j.first<<" --> "<<j.second<<endl;
    return 0;
}