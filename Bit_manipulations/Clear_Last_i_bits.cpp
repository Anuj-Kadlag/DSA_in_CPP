/*
Problem: Clear Last i Bits

Approach:
- Create a bitmask by left shifting all 1's (~0) by i positions.
- Perform bitwise AND between the number and the bitmask.
- The last i bits become 0, while the remaining bits stay unchanged.

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void clr_bits(int n,int i){
    n = n & ((~0) << i);
    cout<<n;
}

int main(){
    clr_bits(15,2);

}