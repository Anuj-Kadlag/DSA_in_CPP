/*
Problem: Insertion Sort

Approach:
- Treat the left portion as sorted.
- Pick the next element.
- Shift larger elements one position right.
- Insert the current element at its correct position.

Time Complexity:
Best Case: O(n)
Average Case: O(n²)
Worst Case: O(n²)

Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

void insertion_sort(int *arr, int n){
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev]> curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }

    print(arr,n);
}


int main(){
    int arr[] = {5,4,2,1,3};
    int len = sizeof(arr)/sizeof(int);
    insertion_sort(arr,len);
}