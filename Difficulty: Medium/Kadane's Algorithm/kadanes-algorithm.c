int maxSubarraySum(int arr[], int n) {
    // Code here
    long long max_so_far = arr[0];
    long long max_ending_here = arr[0];
    
    for(int i = 1; i < n ; i++){
        
        if(arr[i] > max_ending_here + arr[i]){
            max_ending_here = arr[i];
        }else{
            max_ending_here = max_ending_here + arr[i];
        }
        
        if(max_so_far < max_ending_here){
            max_so_far = max_ending_here;
        }
    }
    
    return max_so_far;
}