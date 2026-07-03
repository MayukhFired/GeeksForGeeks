int getSecondLargest(int *arr, int n) {
    // code here
    int largest = -1;
    int second_largest = -1;
    
    for(int i = 0; i < n; i++){
        if(largest < arr[i]){
            second_largest = largest;
            largest = arr[i];
        }else if(largest > arr[i] && second_largest < arr[i]){
            second_largest = arr[i];
        }
    }
    
    return second_largest;
}
