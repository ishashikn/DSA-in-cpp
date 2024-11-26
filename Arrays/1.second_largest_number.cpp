// C++ program to find the second largest element in the array

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

// function to find the second largest element in the array
//brute force Approach
int getSecondLargest(vector<int> &arr) {
    int largest = INT_MIN;
    int slargest = INT_MIN;
    //sort the array                        O(nlogn)
    sort(arr.begin(), arr.end());
    //find the largest                      O(n)
    for(int i=0;i<arr.size();i++){
        if(arr[i] > largest){
            largest = arr[i];  // 35
        }
    }
    //find second largest                   O(n)
    for(int i=0;i<arr.size();i++){
        if(arr[i] > slargest && arr[i] != largest){
            slargest = arr[i];
        }
    }
    return slargest; // 34
    //time complexity : O(nlogn) + O(n) +O(n)
    //space complexity : O(1)
}

//2 Approach optiomize the time
int getSecondLargest(vector<int> &arr) {
    int largest = INT_MIN;
    int slargest = INT_MIN;
    //find the largest                      O(n)
    for(int i=0;i<arr.size();i++){
        if(arr[i] > largest){
            largest = arr[i];  // 35
        }
    }
    //find second largest                   O(n)
    for(int i=0;i<arr.size();i++){
        if(arr[i] > slargest && arr[i] != largest){
            slargest = arr[i];
        }
    }
    return slargest;
    //time complexity :  O(n) +O(n) 
    //space complexity : O(1)
}

//3 Approach optiomize the time better
int getSecondLargest(vector<int> &arr) {
    int largest = INT_MIN;
    int slargest = INT_MIN;
                                                    //O(n)
    for(int i=0;i<arr.size();i++){
        slargest = largest;  // keep tarck on slargest
        largest = arr[i];   // first update to largest 
        //check second largest number an which is not equal to largest
        if(arr[i] > slargest && arr[i] != largest){
            slargest = arr[i];
        }
    }
    return slargest;
    //time complexity :  O(n) 
    //space complexity : O(1)
}

int main() {
    vector<int> arr = {12,35, 1, 10, 34, 1};
    cout<<"Second Largest number is: " ;
    cout << getSecondLargest(arr);

    return 0;
}

