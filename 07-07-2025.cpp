// HackerRank Problem: Max Subarray and Max Subsequence

vector<int> maxSubarray(vector<int> arr) {
    int maxSubArr = INT_MIN; // max sum of subarray
    int currentSum = 0;
    int maxSubSeq = 0;       // max sum of subsequence
    bool allNegative = true;

    for (int i = 0; i < arr.size(); i++) {
        // Kadane's algorithm for max subarray
        currentSum += arr[i];
        maxSubArr = max(maxSubArr, currentSum);
        if (currentSum < 0) currentSum = 0;

        // Add only positive for subsequence
        if (arr[i] > 0) {
            maxSubSeq += arr[i];
            allNegative = false;
        }
    }

    // If all elements are negative
    if (allNegative) {
        maxSubSeq = *max_element(arr.begin(), arr.end());
        maxSubArr = maxSubSeq;
    }

    return {maxSubArr, maxSubSeq};
}
