//Standard Template Library(STL)
//STATIC ARRAY
#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,6>a={1,2,3,4};
    cout<<"ARRAY TRAVERSAL"<<endl;
    for(int i=0;i<a.size();i++)
    cout<<a.at(i)<<endl;
    cout<<"ARRAY SIZE : "<<a.size()<<endl;
    cout<<"FIRST ELEMENT OF ARRAY : "<<a.front()<<endl;
    cout<<"LAST ELEMENT OF ARRAY : "<<a.back()<<endl;
    cout<<"ARRAY EMPTY OR NOT : "<<a.empty()<<endl;
    cout<<"ELEMENT AT 3rd INDEX : "<<a.at(3)<<endl;

    return 0;
}