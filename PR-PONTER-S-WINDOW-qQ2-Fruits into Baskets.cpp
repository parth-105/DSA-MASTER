#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int fruitsIntoBaskets(vector<int>& arr) {
    int left = 0, maxLen = 0;
    unordered_map<int, int> mpp;

// these approach cause O(2n)

    for(int right = 0; right < arr.size(); right++) {
        mpp[arr[rigth]]++;

        while(mpp.size()>2){
            mpp[arr[left]]--;
            left++;
        }

        maxLen = max(maxLen , r-l+1);
    }

    return maxLen;
}


//  2ns approach with O(n)  optimize 

        for(int right = 0; right < fruits.size(); right++) {
            mpp[fruits[right]]++;

            if(mpp.size() > 2) {
                mpp[fruits[left]]--;
                if(mpp[fruits[left]] == 0) mpp.erase(fruits[left]);
                left++;
            }

            maxLen = max(maxLen, right - left + 1);
        }

int main() {
    vector<int> arr1 = {1, 2, 1, 2, 3};
    cout << fruitsIntoBaskets(arr1) << endl; // Expected: 4

    vector<int> arr2 = {3, 3, 3, 1, 2, 1, 1, 2, 3, 3, 4};
    cout << fruitsIntoBaskets(arr2) << endl; // Expected: 5

    return 0;
}