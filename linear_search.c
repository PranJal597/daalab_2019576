#include<stdio.h>
int main()
{
    int n,i,num,c=0;;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the search element: ");
    scanf("%d", &num);
    for(i=0;i<n;i++)
    {
        if(num==arr[i])
        {
            printf("Element found at position: %d", i+1);
            c++;
            break;
        }
    }dw
    if(c==0)
    {
        printf("Number not found");
    }
    return 0;
}
  
