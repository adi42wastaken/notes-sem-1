// ** Maximum and minimum in array
#include <stdio.h>

int main() {
    int a[30], n, i, max, min;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Elements are: ");
    for(i = 0; i < n; i++) {
        printf("\t%d", a[i]);
    }
    printf("\n"); // Add a newline for clean formatting
    
    // Logic to find the minimum element
    max = a[0]; min = a[0];
    
    for(i = 1; i < n; i++) {
        // If the current element is smaller than our min, update min
        max = (a[i] > max) ? a[i] : max; 
        min = (a[i] < min) ? a[i] : min;
    }
    
    printf("The maximum element is: %d while the minimum is: %d\n", max,min);
    
    return 0;
}