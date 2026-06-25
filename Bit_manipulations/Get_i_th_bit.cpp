/*
Problem: Get i-th Bit

Approach:
- Create a bitmask by left shifting 1 by i positions.
- Perform bitwise AND between the number and the bitmask.
- If the result is 0, the i-th bit is 0.
- Otherwise, the i-th bit is 1.

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;


int get_ith_bit(int n,int i){
    int bitmask = 1 << i;
    if(!(n & bitmask)){
        return 0;
    }else{
        return 1;
    }

}

int main(){
    int n;
    int i;
    cout<<"Enter number : ";        
    cin>>n;
    cout<<"Position of bit? : ";
    cin>>i;
    cout<<get_ith_bit(n,i);


}

