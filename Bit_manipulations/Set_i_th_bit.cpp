/*
Problem: Set i-th Bit

Approach:
- Create a bitmask by left shifting 1 by i positions.
- Perform bitwise OR between the number and the bitmask.
- The i-th bit becomes 1, while all other bits remain unchanged.

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;


int set_ith_bit(int n,int i){
    int bitmask = 1 << i;
    return n | bitmask;
}

int main(){
    int n;
    int i;
    cout<<"Enter number : ";
    cin>>n;
    cout<<"Position of bit? : ";
    cin>>i;
    cout<<set_ith_bit(n,i);


}
