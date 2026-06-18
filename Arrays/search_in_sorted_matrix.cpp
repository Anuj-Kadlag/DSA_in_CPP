/*
Problem: Search in a Row-wise and Column-wise Sorted Matrix

Approaches:

1. Brute Force
   Time Complexity: O(n*m)

2. Binary Search on Each Row
   Time Complexity: O(n*log m)

3. Staircase Search
   Time Complexity: O(n + m)

Approach Used:
Start from the top-right corner.
- Move left if current element is greater than key.
- Move down if current element is smaller than key.

Space Complexity: O(1)
*/


// Learned:
// Matrix is sorted both row-wise and column-wise.
// Staircase search eliminates one row or one column
// in every step.


#include <iostream>
using namespace std;

// //The BruteForce.......................

// void search_1(int matrix[][4],int n ,int m, int key){
//     int a = 1; 
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(matrix[i][j] == key){
//                 cout<<"Key found at :"<<i<<","<<j;
//                 a=0;
//             }

//         }
//     }
//     if(a==1){
//         cout<<"Key not found";
//     }
// }

//The Binary Search Method..............................

// void search_2(int matrix[][4],int n,int m,int key){
//     int a = 0;
//     for(int i=0; i<n; i++){
//             int start = 0; 
//             int end = m-1;
//         while(start <= end){
//             int mid = (start + end)/2;

//             if(matrix[i][mid] == key){
//                 cout<<"Key found at : "<<i<<","<<mid;
//                 a = 1;
//                 break;
//             }
//             else{
//                 if(matrix[i][mid] > key){
//                     end = mid-1;
//                 }
//                 else{
//                     start = mid+1;
//                 }
//             }
//         }
//     }
//     if(a == 0){
//         cout<<"Key not found";
//     }
// }



//The Staircase Method......................................

void search_3(int matrix[][4], int n, int m,int key){
    int col = m-1;
    int row = 0;
    while(row < n && col >= 0){
        if(matrix[row][col] == key){
            cout<<"Key found at : "<<row<<","<<col;
            return;
        }
        else if(matrix[row][col] > key){
            col--;
        }
        else{
            row++;
        }
    }
    cout<<"Key not found";
}

int main(){

    int matrix[4][4] = {
                        {10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,48},
                        {32,33,39,50}};
    int key;
    cout<<"Enter key :";
    cin>>key;

    search_3(matrix,4,4,key);

}