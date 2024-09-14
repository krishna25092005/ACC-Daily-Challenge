class Solution
{
private:
    // Time Complexity : O(n)
    // Space Complexity : O(1)
    int bruteForce(int arr[], int n)
    {
        int ans = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > ans)
            {
                ans = arr[i];
                return i;
            }
            return -1;
        }
    }

    // Time Complexity : O(logn)
    // Space Complexity : O(1)
    int optimalApproach(int arr[], int n)
    {

        int low = 0;
        int high = n - 1;

        while (low <= high)
        {

            int mid = low + (high - low) / 2;

            if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
            {

                return mid;
            }
            else if (mid > 0 && arr[mid - 1] > arr[mid])
            {

                high = mid - 1;
            }
            else
            {

                low = mid + 1;
            }

            return -1;
        }
    }

public:
    int peakElement(int arr[], int n)
    {
        // return bruteForce(arr, n);
        return optimalApproach(arr, n);
    }
};