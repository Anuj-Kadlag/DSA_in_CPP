/*
Problem: Check if a Number is a Power of Two

Approach:
- A power of two has exactly one set bit in its binary representation.
- Performing (n & (n - 1)) removes the lowest set bit.
- If the result is 0 and n > 0, then n is a power of two.

Time Complexity: O(1)
Space Complexity: O(1)
*/


#include <iostream>
using namespace std;

bool pow_2(int n){
    if(n > 0 && !(n & (n-1))){
        return true;
    }else{
        return false;
    }
}


int main(){
    cout<<pow_2(4)<<endl;
    cout<<pow_2(32)<<endl;
    cout<<pow_2(17)<<endl;
    cout<<pow_2(0)<<endl;

}