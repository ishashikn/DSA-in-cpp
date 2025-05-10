#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int main() {
    // Write C++ code here
    vector<int> arr = {1,5,6,8,2,3};
    int smallest = INT_MAX;
    int s_smallest = INT_MAX;
    for(int i = 0; i< arr.size() ;i ++){
        if(arr[i] < smallest){                // update smallest and second smallest
            s_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest and arr[i] < s_smallest){    // check second smallest and update second smallest
            s_smallest = arr[i];
        }
    }
    if(s_smallest != INT_MAX){
        cout<< "Second Smallest Number is : "<< s_smallest<< endl;
    }
    else{
        cout<< "Second Smallest Number doesnt Exit !!!";
    }
}
