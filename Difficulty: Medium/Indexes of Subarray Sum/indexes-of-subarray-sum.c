// Return 1 if found, else 0. Update res in-place.
int subarraySum(int* arr, int n, int target, int* res) {
    // code here
    int start = 0;
    long long cur_sum = 0;
    if(res == NULL){
        return NULL;
    }
    
    for(int end = 0; end < n; end++){
        cur_sum += arr[end];
        
        while(cur_sum > target && start < end){
            cur_sum -= arr[start];
            start++;
        }
        
        if(cur_sum == target){
            res[0] = start + 1;
            res[1] = end + 1;
            return 1;
        }
        
       
    }
    return 0;
    free(res);
}