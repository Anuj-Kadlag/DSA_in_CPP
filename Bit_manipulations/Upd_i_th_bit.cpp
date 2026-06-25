/*
Problem: Update i-th Bit

Approach:
- First clear the i-th bit using a bitmask.
- Then set the i-th bit to the desired value (0 or 1)
  by left shifting the value and applying bitwise OR.

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void upd_i_bit(int num,int i,int val){
    num = num & ~(1 << i);

    num = num | (val << i);
    cout<<num<<endl; 
}

int main(){
    upd_i_bit(7,2,0);

}