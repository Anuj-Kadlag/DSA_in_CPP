/*
Problem: Trapping Rain Water

Approach:
1. Compute left maximum boundary for each index.
2. Compute right maximum boundary for each index.
3. Water stored at index i:
   min(leftMax[i], rightMax[i]) - height[i]

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
#include <climits>
using namespace std;

int trap(int *heights,int n){
    int leftmax[20000];
    int rightmax[20000];
    leftmax[0] = heights[0];
    rightmax[n-1] = heights[n-1];
    for(int i=1; i<n ; i++){
        leftmax[i] =  max(leftmax[i-1],heights[i]);
    }

    for(int i=n-2; i>=0 ; i--){
        rightmax[i] = max(rightmax[i+1],heights[i]);   
    }

    int wat_trap = 0;
    for(int i=0; i<n ;i++){
        int curr_water = min(leftmax[i],rightmax[i]) - heights[i];
        if(curr_water > 0){
            wat_trap += curr_water;
        }
    }

    return wat_trap;

}
int main(){
    int heights[7] = {4,2,0,6,3,2,5};
    int n = sizeof(heights)/sizeof(int); 

    cout<<"Water Trapped = "<<trap(heights,n);

}