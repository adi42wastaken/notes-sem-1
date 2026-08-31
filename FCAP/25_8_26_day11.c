// Searching and sorting(Searching is finding a perticular element in an array. It aanswers weather a n element eists and where it exists.)
// ** 1. Linear Search
//*! Start with a first element and compare with every element, and compare the "key" with every element until the key is found.
//*! Best case = number of comaprision =1. O(1), Average = O(n) 
//*! Advantage: Simple, works on unsorted data, easy to impliment Disadvantage: Very slow for large dataset
//*! Time complexity: Running time of algo increases as n increases 
#include<stdio.h>
int main(){
    int key, n, a[10], found=0, index;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    int low = 0, high = n - 1, mid;
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)
    {
        // printf("Enter %dth element: ",i+1);
        scanf("%d",&a[i]);}
    printf("Enter your key: ");
    scanf("%d", &key);
    // for (int i = 0; i < n; i++)
    // {
    //     if(a[i]==key)
    //     {
    //         found=1;
    //         index=i;
    //         break;
    //     }
    // }
    
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            found=1;
            index=mid;
            break;
        }
        else if (key>a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        
    }
    if(found == 1)
    {printf("element found at %d",index);} //** {printf("element found at %d",index+1);} in linear search
    else
    {printf("element not found");}
    return 0;
}
// ** 2. Binary search: Searches the data by dividing the data into half.
// ** eg) Array is [5   8   12  15  19  30] key=19 
// *! Best case: middle element is key O(1); Worst case O(log_2(n))
