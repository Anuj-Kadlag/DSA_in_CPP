/*
Problem: Selection Sort

Approach:
- Find the minimum element in the unsorted portion.
- Swap it with the current position.
- Repeat until the array is sorted.

Time Complexity:
Best Case: O(n²)
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

void selc_sort(int *arr, int n){
    for(int i=0; i<n-1 ;i++){
        int minIdx = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }

        }
        swap(arr[i],arr[minIdx]);
    }
    print(arr,n);
}


int main(){
    int arr[] = {3,7,4,56,54,2};
    int len = sizeof(arr)/sizeof(int);
    selc_sort(arr,len);

}