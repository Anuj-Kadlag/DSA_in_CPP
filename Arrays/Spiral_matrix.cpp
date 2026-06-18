/*
Problem: Spiral Matrix

Approach:
Maintain four boundaries:
- start row
- end row
- start column
- end column

Traverse:
1. Top row
2. Right column
3. Bottom row
4. Left column

After completing a layer,
shrink all boundaries and repeat.

Time Complexity: O(n*m)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void Spiral_Matrix(int matrix[][4],int n,int m){
    int srow=0 , scol=0;
    int erow=n-1, ecol=m-1;
    
    while(srow<=erow && scol<=ecol){
    
        //top
        for(int i=scol; i<=ecol; i++){
            cout<<matrix[srow][i]<<" ";
        }
        //right
        for(int j=srow+1; j<=erow; j++){
            cout<<matrix[j][ecol]<<" ";
        }
        // bottom

        for(int k=ecol-1; k>=scol; k--){
            if(srow == erow){
                break;
            }
            cout<<matrix[erow][k]<<" ";
        }
        // left
        for(int l=erow-1; l>srow; l--){
            if(scol == ecol){
                break;
            }
            cout<<matrix[l][scol]<<" ";
        }

        srow++,scol++;
        erow--,ecol--;
    }

}


int main(){
    int matrix[4][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};

    Spiral_Matrix(matrix,4,4);

}