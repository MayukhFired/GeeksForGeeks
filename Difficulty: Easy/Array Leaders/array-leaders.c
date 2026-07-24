int* leaders(int* arr, int n, int* returnSize) {
    // code here
    int* result = (int*)malloc(n * sizeof(int));
    if(n == 0){
        *returnSize = 0;
        return result;
    }
    
    int count = 0;
    int max_right = arr[n - 1];
    result[count++] = max_right;
    for(int i = n - 2; i >= 0; i--){
        if(arr[i] >= max_right){
            max_right = arr[i];
            result[count++] = max_right;
        }
    }
    
    *returnSize = count;
    for(int i = 0; i < count / 2; i++){
        int temp = result[i];
        result[i] = result[count - i - 1];
        result[count - i - 1] = temp;
    }
    
    return result;
}