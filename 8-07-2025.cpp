long candies(int n, vector<int> arr) {
    vector<long> candy(n, 1);

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            candy[i] = candy[i - 1] + 1;
        }
    }

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > arr[i + 1]) {
            candy[i] = max(candy[i], candy[i + 1] + 1);
        }
    }

    long total = 0;
    for (int i = 0; i < n; i++) {
        total += candy[i];
    }

    return total;
}
