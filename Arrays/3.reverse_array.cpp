
// C++ Program to reverse an array using Recursion

#include <iostream>
#include <vector>
using namespace std;

//brute force   -- normal printing from back
void reverseArray(vector<int> arr){
    //print from reverse
    int n = arr.size();
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//optimal
void reverseArrayOptimal(vector<int> arr){
    int n = arr.size();
    int left = 0;
    int right = n -1;
    while(left <= right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    for(auto it: arr){
        cout<<it<<" ";
    }
}
//time Complexity: O(n);
//space complexity: O(1);
int main() {
    vector<int> arr = { 1, 4, 3, 2, 6, 5 };
    cout<<"Brute froce: ";
    reverseArray(arr);
    cout<<"Optimal : ";
    reverseArrayOptimal(arr);
    return 0;
}
