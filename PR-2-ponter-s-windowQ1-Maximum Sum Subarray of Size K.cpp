#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Logic goes here
int findMaxSum(int k, const vector<int>& arr) {
    int max_sum = 0; 
    int sum=0;
    
   for(int i=0;i<k;i++){
    sum += arr[i];
   }

   for(int i = k ; i <arr.size(); i++){
    max_sum = max(sum , max_sum);
    sum+=arr[i];
    sum-=arr[i-k];

   }
    
    return max_sum;
}

int main() {
    // Example Input
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;

    int result = findMaxSum(k, arr);
    
    cout << "Result: " << result << endl; // Should be 9
    return 0;
}
