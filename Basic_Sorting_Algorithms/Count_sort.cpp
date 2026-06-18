/*
Problem: Counting Sort

Approach:
- Count frequency of each element.
- Reconstruct the array using frequencies.

Time Complexity: O(n + k)
Space Complexity: O(k)

where:
n = number of elements
k = range of input values
*/

#include <iostream>
#include <climits>
using namespace std;

void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

void count_sort(int *arr, int n){

    int freq[10000] = {0};
    int minval = INT_MAX;
    int maxval = INT_MIN;
    for(int i=0 ; i<n ; i++){
        minval = min(minval,arr[i]);
        maxval = max(maxval,arr[i]);
        freq[arr[i]]++;
    }
    for(int i=minval, j=0; i<=maxval; i++){
        while(freq[i]>0){
            arr[j++] = i;
            freq[i]--;
        }
    }
    print(arr,n);

}

int main(){
    int arr[] = {1,2,3,4,55,3,21,23,3,3};
    int len = sizeof(arr)/sizeof(int);
    count_sort(arr,len);

}