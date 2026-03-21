int longestSubarray(vector<int>& arr, int k) {
    int left = 0, maxLen = 0;
    int sum = 0;

    for(int right = 0; right < arr.size(); right++) {
        sum += arr[right];                          
        if(sum > k) {                                
            sum -= arr[left];
            left++;
        }

        maxLen = max(maxLen, right - left + 1);      
    }

    return maxLen;
}

int main() {
    vector<int> arr = {3, 1, 2, 1, 4, 5};
    int k = 6;
    cout << longestSubarray(arr, k) << endl; // Expected: 3
    return 0;
}