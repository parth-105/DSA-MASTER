#include <iostream>
#include <vector>
using namespace std;

int maxWater(vector<int> &height)
{
    int l = 0, r = height.size() - 1;
    int maxWater = 0;
    int sum = 0;

    while (l < r)
    {
        int water = min(height[l], height[r]) * (r - l); 
        maxWater = max(water, maxWater);

        if (height[l] < height[r])
        { 
            l++;
        }
        else
        {
            r--;
        }
    }
    return maxWater;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxWater(height) << endl; // Expected: 49
    return 0;
}