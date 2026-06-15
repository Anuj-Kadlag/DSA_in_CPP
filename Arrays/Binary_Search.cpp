/*
Problem: Binary Search

Approach:
- Search in a sorted array.
- Compare key with middle element.
- If key is smaller, search left half.
- If key is larger, search right half.

Time Complexity: O(log n)
Space Complexity: O(1)
*/


#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of arr : ";
    cin>>n;
    int arr[n];;
    cout<<"Enter elements : ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key : ";
    cin>>key;
    int start=0;
    int end=n-1;
    bool found = false;
    
    while(start<=end){
        int mid = (start + end)/2;
        if(arr[mid] == key){
            cout<<key<<" Key is at index:"<<mid;
            found = true;
            break;
        }

        if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }

    }
    if(!found){
        cout<<"Key not found ";
    }

}