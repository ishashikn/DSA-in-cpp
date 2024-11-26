// C++ Program to move all zeros to End

#include <bits/stdc++.h>
using namespace std;

//brute force Approach
void moveszerostoend(vector<int> &arr) {
    //take temp
    //push all non negative values to temp
    //fill up the temp of remaining space with 0
   vector<int> temp;
    //push all non negative values to temp           O(n)
   for(int i=0;i<arr.size();i++){ 
       if(arr[i]!= 0){
           temp.push_back(arr[i]);
       }
   }
   //fill up the temp of remaining space with 0         O(n)
   for(int i=0;i<arr.size();i++){
       if(arr[i] == 0){
           temp.push_back(0);
       }
   }
   //convert temp to arr                          O(n)
   for(int i=0;i<arr.size();i++){
       arr[i] = temp[i];
   }
}
//Time complexity : O(n)+O(n)+O(n) = O(n)
//space complexity : O(n)


//2 Approach --> Optimize the space

//take pointer at i=0 swap(arr[pointer],arr[i]) --> self swap until find zero
//Non-zero --> move pointer at every step
//zero --> wont incresment pointer
void moveszerostoend(vector<int>& arr) {    // O(n)
    int pointer = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] != 0){
            swap(arr[pointer],arr[i]);
            pointer++;
        }
    }
}

//Time complexity :   O(n)
//space complexity : O(1)
int main() {
    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    pushZerosToEnd(arr);
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}

