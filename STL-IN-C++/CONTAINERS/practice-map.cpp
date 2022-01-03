//GIVEN A STRING .....CALCULATE NUMBER OF TIMES A PARTICULAR CHARACTER HAS OCCURED IN THAT PARTICULAR STRING....
//'a' has occured three times in the given string "Amogha Mayya"
#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    map<char,int>m;
    string x="Amogha Mayya";
    for(char c:x)
    m[c]++;
    cout<<"No. of times 'a' has occured : "<<m['a']<<endl;
    cout<<"No. of times 'A' has occured : "<<m['A']<<endl;
    cout<<"No. of times 'B' has occured : "<<m['B']<<endl;
}