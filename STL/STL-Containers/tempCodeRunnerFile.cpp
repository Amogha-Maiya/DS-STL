//VECTOR :- DYNAMIC ARRAY WHICH DOUBLES THE SIZE AUTOMATICALLY WHEN ARRAY GETS FILLED........
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<"VECTOR TRAVERSAL AFTER PUSH BACK : "<<endl;
    for(int i:v)
    cout<<i<<endl;
    cout<<"SIZE of vector : "<<v.size()<<endl;
    cout<<"CAPACITY of vector : "<<v.capacity()<<endl;
    cout<<"ELEMENT AT 2 : "<<v.at(2)<<endl;
    cout<<"ELEMENT AT 2 : "<<v[2]<<endl;
    cout<<"FRONT OF ARRAY : "<<v.front()<<endl;
    cout<<"BACK OF ARRAY: "<<v.back()<<endl;
    //COPY CONTENTS TO ANOTHER VECTOR
    cout<<"VECTOR TRAVERSAL AFTER COPY CONTENTS : "<<endl;
    vector<int>a(v);
    for(int j:a)
    cout<<j<<endl;
    v.pop_back();
    v.pop_back();
    cout<<"VECTOR TRAVERSAL AFTER POP BACK"<<endl;
    cout<<"SIZE OF vector : "<<v.size()<<endl;
    cout<<"CAPACITY OF vector : "<<v.capacity()<<endl;
    v.clear();
    cout<<"AFTER CLEARING VECTOR : "<<endl<<endl;
    cout<<"AFTER CLEAR size : "<<v.size()<<endl;
    cout<<"AFTER CLEAR capacity"<<v.capacity()<<endl;

    return 0;
}