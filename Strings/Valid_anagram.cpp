/*
Problem: Valid Anagram

Approach:
- Count frequency of each character in the first string.
- Decrease frequency using the second string.
- If any character count becomes invalid, strings are not anagrams.

Time Complexity: O(n)
Space Complexity: O(1)
*/


#include <iostream>
#include <string>
using namespace std;


bool is_anagram(string str1, string str2){
    if(str1.length() != str2.length() ){
        cout<<"Not a valid anagram";
        return false;
    }

    int count[26] = {0};
    for(int i=0 ; i<str1.length(); i++){
        int idx = str1[i] - 'a';
        count[idx]++;
    }

    for(int i=0; i<str2.length(); i++){
        int idx = str2[i] - 'a';
        if(count[idx] == 0){
            cout<<"Not Valid Anagrams";
            return false;
        }
        count[idx]--;
    }

    cout<<"Valid Anagrams";
    return true;

}

int main(){
    string str1 = "anagram";
    string str2 = "nagaram";
    is_anagram(str1,str2);

}