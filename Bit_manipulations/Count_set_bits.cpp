/*
Problem: Count Set Bits

Approach:
- Check the least significant bit (LSB) using bitwise AND (&) with 1.
- If the LSB is 1, increment the count.
- Right shift the number by one position.
- Repeat until the number becomes 0.

Time Complexity: O(log n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void count_set(int n){
    int count = 0;
    while(n > 0){
       int lastdigi = n & 1;
       count += lastdigi;
       n = n >> 1;
    }
    cout<<count;
}

int main(){
    count_set(7);

}