#define max(a , b) ((a) > (b) ? (a) : (b))
#define min(a , b) ((a) < (b) ? (a) : (b))

int maxIndexDiff(int* arr, int n) {
    // code here
    if(n <= 1){
        return 0;
    }
    
    int* minprefix = (int*)malloc(n * sizeof(int));
    int* maxsuffix = (int*)malloc(n * sizeof(int));
    
    minprefix[0] = arr[0];
    for(int i = 1; i < n; i++){
        minprefix[i] = min(minprefix[i - 1] , arr[i]);
    }
    
    maxsuffix[n - 1] = arr[n - 1];
    for(int j = n - 2; j >= 0; j--){
        maxsuffix[j] = max(maxsuffix[j + 1] , arr[j]);
    }
    
    int i = 0;
    int j = 0;
    int maxdiff = -1;
    while(i < n && j < n){
        if(minprefix[i] <= maxsuffix[j]){
            maxdiff = max(maxdiff , j - i);
            j++;
        }else{
            i++;
        }
    }
    
    free(minprefix);
    free(maxsuffix);
    return (maxdiff == -1) ? 0 : maxdiff;
} 