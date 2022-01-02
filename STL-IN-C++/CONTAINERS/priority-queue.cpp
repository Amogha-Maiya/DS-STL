/*priority queue 
There are two types of priority queue MAX-HEAP AND MIN-HEAP
priority queue is same like normal queue when u push elements to it
--->but when u pop elements in MAX-HEAP PRIORITY QUEUE
largest one will be popped first!!
--->in MIN-HEAP PRIORITY QUEUE when u pop elements 
smallest one will be popped first !!
*/
#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int>p;
    p.push(1);
    p.push(4);
    p.push(0);
    p.push(9);
    cout<<"MAX HEAP PRIORITY-QUEUE :  "<<endl;
    cout<<"Its time to POP : "<<endl;
    int n=p.size();
    for(int i=0;i<n;i++){
        cout<<p.top()<<endl;
        p.pop();
    }
    cout<<"MIN HEAP PRIORITY-QUEUE :  "<<endl;
    priority_queue<int,vector<int>,greater<int>>min;
    min.push(1);
    min.push(4);
    min.push(0);
    min.push(9);
    cout<<"Its time to POP : "<<endl;
    int m= min.size();
    for(int i=0;i<m;i++){
        cout<<min.top()<<endl;
        min.pop();
    }

}