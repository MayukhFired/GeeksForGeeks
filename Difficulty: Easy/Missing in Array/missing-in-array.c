int missingNum(int *arr, int size) {
    // code here
    long long n = size + 1;
    long long expected_sum = (n*(n + 1)) / 2;
    long long exact_sum = 0;
    
    
    for(int i = 0; i < n - 1; i++){
        exact_sum += arr[i];
    }
    
    return (expected_sum - exact_sum);
}
