/*
Problem: Bubble Sort

Approach:
- Compare adjacent elements.
- Swap if they are in the wrong order.
- Use a flag to detect whether any swap occurred.
- If no swap occurs in a pass, the array is already sorted.

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

void bubble_sort(int *arr,int n){
    for(int i=0; i<n-1; i++){
        bool isswap = false;
        for(int j=0; j<n-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswap = true;
            }
        }

        if(!isswap){
            break;
        }
    }
    print(arr,n);
}


int main(){
    int arr[] = {5,4,1,3,2};
    int len = sizeof(arr)/sizeof(int);
    bubble_sort(arr,len);

}