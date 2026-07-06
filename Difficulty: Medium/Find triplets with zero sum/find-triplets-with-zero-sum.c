// Function to find triplets with zero sum
bool findTriplets(int arr[], int n) {
    // code here
    if(n < 3){
        return false;
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    for(int i = 0;i < n - 2; i++){
        int left = i + 1;
        int right = n - 1;
        
        while(left < right){
        int current_sum = arr[i] + arr[left] + arr[right];
            if(current_sum == 0){
                return true;
            }else if(current_sum < 0){
                left++;
            }else{
                right--;
            }
        }
        
    }
    
    return false;
}