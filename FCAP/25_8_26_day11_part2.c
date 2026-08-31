//** Arranging an array in ascending or desencing order is called sorting
//** Types: Bubble, selection, insertion, merge, quick
//*! [Bubble sort] Compare adjecent and swap when required; end of very operation, smallest element start bubbling towards top
#include<stdio.h>
int main(){
    int n,i,j,temp, a[10], min;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter array elements\n");
    for (int i = 0; i < n; i++)
    {
        // printf("Enter %dth element: ",i+1);
        scanf("%d", &a[i]);
    }
    // for(i=0;i<n-1;i++)
    // {
    //     for(j=0;j<n-i-1;j++)
    //     {
    //         if(a[j]>a[j+1])
    //         {
    //             temp=a[j];
    //             a[j]=a[j+1];
    //             a[j+1]=temp;
    //         }
    //     }
    // }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    
}
// ! [Selection sort] Repeatedly finds the smallest element from the unsoreted part of the array and places it at the beginning