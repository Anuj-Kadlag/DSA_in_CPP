/*
Problem: Maximum Subarray Sum (Kadane's Algorithm)

Approach:
- Traverse the array once.
- Maintain current sum.
- Update maximum sum encountered.
- Reset current sum when it becomes negative.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <climits>
using namespace std;


int arrmax(int *arr,int n){

    int maxsum = INT_MIN;
    int curr_sum = 0;
    for(int i=0 ;i<n; i++){
        curr_sum += arr[i];
        maxsum = max(maxsum,curr_sum);
        if(curr_sum < 0){
            curr_sum = 0;
        };

    }
    return maxsum;
    
}

int main()
{
    int n;
    cout<<"Enter arr size :";
    cin>>n;
    int arr[n];
    int len = sizeof(arr)/sizeof(int);
    cout<<"Enter Elements :";
    for(int i=0; i<len; i++){
        cin>>arr[i];
    }
    cout<<"Max sum of subarray is : "<<arrmax(arr,len);

}


