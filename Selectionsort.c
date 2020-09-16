#include<stdio.h>
void selectionsort(int a[] , int n);
int main()
{
    int a[100];
    int i,j,n;
    printf("Enter the number of values in array:");
    scanf("%d",&n);
    printf("Enter %d numbers\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array before sorted is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    selectionsort(a,n);
    printf("Array after sorting is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
void selectionsort(int a[],int n)
{
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            min=j;
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
}
