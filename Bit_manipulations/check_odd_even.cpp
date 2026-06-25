/*
Problem: Check Odd or Even using Bit Manipulation

Approach:
- Check the Least Significant Bit (LSB) using the bitwise AND (&) operator.
- If (n & 1) == 0, the number is even.
- Otherwise, the number is odd.

Time Complexity: O(1)
Space Complexity: O(1)
*/


#include <iostream>
using namespace std;


void odd_even(int n){
    if(!(n & 1)){
        cout<<"Even number";
    }
    else{
        cout<<"Odd number";
    }
}


int main(){
    int n;
    cout<<"Enter num";
    cin>>n;
    odd_even(n);
}