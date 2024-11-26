
#include <iostream>
#include <vector>
using namespace std;
//Brute Force approach
void rotateArray(vector<int> arr,int d){
    int n = arr.size();
    vector<int> temp;
    // Store the first d elements in a temporary array
    for (int i = 0; i < d; i++) {           //O(d)
        temp.push_back(arr[i]);
    }
    // Shift the remaining elements to the left
    for (int i = d; i < n; i++) {            //O(n-d)
        arr[i - d] = arr[i];
    }
    // Copy the elements from temp to the end of the array
    for (int i = 0; i < d; i++) {       //O(d)
        arr[n - d + i] = temp[i];
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
}
//time complexity: O(d)+O(n−d)+O(d)=O(n)
//space complexity: O(d)

//Optimal
void reverse(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Function to rotate the array optimally
void rotateArrayOptimal(vector<int>& arr, int d) {
    int n = arr.size();
    d = d % n; // In case d > n, adjust the number of rotations
    // Reverse the first 'd' elements
    reverse(arr, 0, d - 1);
    // Reverse the remaining 'n - d' elements
    reverse(arr, d, n - 1);
    // Reverse the entire array
    reverse(arr, 0, n - 1);
}
// Function to print the array
void printArray(const vector<int>& arr) {
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
}
int main() {
    vector<int> arr = {1, 4, 3, 2, 6, 5};
    int d = 2;
    
    cout << "Original Array: ";
    printArray(arr);
    
    rotateArrayOptimal(arr, d);
    
    cout << "Rotated Array: ";
    printArray(arr);
    
    return 0;
}
