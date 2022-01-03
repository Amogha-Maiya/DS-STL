#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>s;
    s.push("ankush");
    s.push("kumar");
    s.push("babbar");
    cout<<"Top element of stack : "<<s.top()<<endl;
    s.pop();
    cout<<"Top element of stack AFTER POP : "<<s.top()<<endl;
    cout<<"SIZE OF STACK : "<<s.size()<<endl;
    cout<<"STACK EMPTY OR NOT : "<<s.empty()<<endl;
    return 0;
}