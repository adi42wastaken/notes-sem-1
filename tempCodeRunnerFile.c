// arrray
// ** sum of elements of array
// ** average of elements of array
#include <stdio.h>
void main(){
    int a[5],n,i,s=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements are: ");
    for(i=0;i<n;i++)
    {printf("\t%d",a[i]);}

    for(i=0;i<n;i++)
    {s=s+a[i];}
    printf("\n Sum is %d \n",s);
    float avg=s/n;
    printf("Average is %f",avg);
}