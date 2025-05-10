
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
#include <iostream>
#include <climits>
#include <vector>
using namespace std;
void reverse(vector<int> &arr, int start,int end){
    while(start < end){
        swap(arr[start], arr[end]);
        start ++;
        end --;
    }
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    int d = 2;
    int n = arr.size();
    d = d % n;
    
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0 , n-1);
    
    for(auto it: arr){
        cout<< it << " ";
    }
    return 0;
}
