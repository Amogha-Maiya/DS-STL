//SORTING ARRAYS AND VECTORS
#include <iostream>  
#include <vector>  
#include <algorithm>  
using namespace std;  
int main()  
{
  //SORTING ARRAY IN C++ STL
  //ASCENDING-ORDER.....
  int a[5]={5,4,3,2,1};
  sort(a,a+5);
  cout<<"ARRAY ASCENDING & DESCENDIG : "<<endl;
  for(int i:a)
  cout<<i<<" ";
  cout<<endl;
  //DESCENDING-ORDER....
  sort(a,a+5,greater<int>());
  for(int k:a)
  cout<<k<<" ";
  cout<<endl;

  //SORTING VECTOR IN C++ STL
  //ASCENDING-ORDER.....
  vector<int>v={5,4,3,2,1};
  cout<<"VECTOR ASCENDING & DESCENDIG : "<<endl;
  sort(v.begin(),v.end());
  for(int j:v)
  cout<<j<<" ";
  cout<<endl;
  //DESCENDING-ORDER....
  sort(v.begin(),v.end(),greater<int>());
  for(int z:v)
  cout<<z<<" ";
  cout<<endl;
  return 0;  
}  