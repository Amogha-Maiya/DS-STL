//given n elements .....display even and odd separately with sorted order both...
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,input;
    vector<int>vodd;
    vector<int>veven;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Enter elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>input;
        if(input%2==0)
            veven.push_back(input);
        else
            vodd.push_back(input);
    }
    sort(veven.begin(),veven.end());
    sort(vodd.begin(),vodd.end());
    cout<<"Even elements in sorted order"<<endl;
    for(int i:veven)
        cout<<i<<endl;
        cout<<"odd elements in sorted order"<<endl;
    for(int j:vodd)
        cout<<j<<endl;
    return 0;
}