/*
Problem: Fast Exponentiation (Binary Exponentiation)

Approach:
- Traverse the bits of the exponent from right to left.
- If the current bit is 1, multiply the answer by the current base.
- Square the base after each iteration.
- Right shift the exponent by one bit.

Time Complexity: O(log n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int fastexpo(int base,int exponent){
    int ans = 1;
    while(exponent > 0){
        int lastdigi = exponent & 1;
        if(lastdigi){
            ans = ans * base;
        }
        
        base = base*base;
        exponent = exponent >> 1;
    }
    return ans;
}

int main(){
    cout<<fastexpo(3,5);

}