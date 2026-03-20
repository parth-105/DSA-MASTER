int removeDuplicates(vector<int> &arr)
{
    int slow = 0;

    for (int fast = 1; fast < arr.size(); fast++)
    {

        if (arr[slow] != arr[fast])
        {
            slow++;
            arr[slow] = arr[fast];
        }
    }

    return slow + 1; // count of unique elements
}