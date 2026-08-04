#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // code here
    int sum = 0;
    
    
    for(int i = 0; i <= n; i++){
        sum += i;
    }
    printf("%d" , sum);

    return 0;
}