#include<iostream>
#include <queue>
using namespace std;
int main(){
 queue<string>q;
    q.push("kumar");
    q.push("ankush");
    q.push("love");
    q.push("babbar");
    cout<<"Front of queue : "<<q.front()<<endl;
    cout<<"back of queue : "<<q.back()<<endl;
    q.pop();
    cout<<"AFTER POP : "<<endl;
    cout<<"front of queue : "<<q.front()<<endl;
    cout<<"back of queue : "<<q.back()<<endl;
    return 0;
}