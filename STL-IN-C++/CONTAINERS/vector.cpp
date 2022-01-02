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
    cout<<"VECTOR TRAVERSAL : "<<endl;
    for(int i:v)
    cout<<i<<endl;
    cout<<"VECTOR SIZE : "<<v.size()<<endl;
    cout<<"VECTOR CAPACITY : "<<v.capacity()<<endl;
    cout<<"VECTOR FRONT : "<<v.front()<<endl;
    cout<<"VECTOR BACK : "<<v.back()<<endl;
    cout<<"VECTOR EMPTY OR NOT : "<<v.empty()<<endl<<endl;

    v.pop_back();
    v.pop_back();
    cout<<"VECTOR TRAVERSAL AFTER POPPING : "<<endl;
    for(int j:v)
    cout<<j<<endl;
    cout<<"VECTOR SIZE : "<<v.size()<<endl;
    cout<<"VECTOR CAPACITY : "<<v.capacity()<<endl<<endl;
    cout<<"COPY VECTOR FROM 1 TO ANOTHER : "<<endl;
    vector<int>a(v);
    cout<<"VECTOR SIZE : "<<v.size()<<endl;
    cout<<"VECTOR CAPACITY : "<<v.capacity()<<endl<<endl;
    cout<<"VECTOR FRONT : "<<v.front()<<endl;
    cout<<"VECTOR BACK : "<<v.back()<<endl;
    cout<<"CLEARING THE VECTOR  : "<<endl;
    v.clear();
    cout<<"vector after clear size : "<<v.size()<<endl;
    cout<<"vector after clear capacity : "<<v.capacity()<<endl;

    


    
    return 0;

}