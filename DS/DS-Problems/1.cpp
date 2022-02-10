/* IN SORTED ARRAY FIND THE FIRST AND THE LAST OCCURENCE or left most and right most occurence
 OF THE GIVEN NUMBER */
 
//input : 1 2 2 3 3 3 4 4 4 4 . Find left and right most occurence of key = 3 .

//output : left most occurence : 3rd index 
//         right most occurence : 5th index

#include<bits/stdc++.h>
using namespace std;
int left_most_occurence(int arr[],int key,int low,int high){
    int result=-1;
    int mid=low+(high-low)/2;
    while(low<=high){
        if(arr[mid]==key){
        result=mid;
        high=mid-1;
        }
        else if(arr[mid]>key)
        high=mid-1;
        else low=mid+1;
        mid=low+(high-low)/2;
    }
    return result;
}
int right_most_occurence(int arr[],int key,int low,int high){
    int result=-1;
    int mid=low+(high-low)/2;
    while(low<=high){
        if(arr[mid]==key){
        result=mid;
        low=mid+1;
        }
        else if(arr[mid]>key)
        high=mid-1;
        else low=mid+1;
        mid=low+(high-low)/2;
    }
    return result;
}
int main(){
    int key;
    int arr[10];
    cout<<"Enter array of 10 numbers : "<<endl;
    for(int i=0;i<10;i++)
    cin>>arr[i];
    cout<<"Enter key"<<endl;
    cin>>key;
    int index_first=left_most_occurence(arr,key,0,9);
    int index_last=right_most_occurence(arr,key,0,9);
    cout<<"First occurence is at index : "<<index_first<<endl;
    cout<<"Last occurence is at index : "<<index_last<<endl;
    if(index_first!=-1 && index_last!=-1){
        cout<<"TOTAL NUMBER OF OCCURENCES : "<<(index_last-index_first)+1<<endl;
    }
}