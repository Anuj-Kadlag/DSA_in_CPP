/*
Problem: Clear i-th Bit

Approach:
- Create a bitmask by left shifting 1 by i positions.
- Take the bitwise NOT (~) of the bitmask.
- Perform bitwise AND between the number and the inverted bitmask.
- The i-th bit becomes 0, while all other bits remain unchanged.

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;


int ClrIthBit(int n,int i){
    int bitmask = ~(1 << i);
    return n & bitmask;
}

int main(){
    int n;
    int i;
    cout<<"Enter number : ";
    cin>>n;
    cout<<"Position of bit? : ";
    cin>>i;
    cout<<ClrIthBit(n,i);


}
