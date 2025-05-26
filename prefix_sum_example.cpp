vector<int> findPrefixSum(vector<int> &arr) {
    int n = arr.size();
    
    // to store the prefix sum
    vector<int> prefixSum(n);

    // initialize the first element
    prefixSum[0] = arr[0];

    // Adding present element with previous element
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    
    return prefixSum;
}
