/*Write a Program that takes n element from user and displays the largest 
element of an array*/

#include <stdio.h>
int main() 
{
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    
    int arr[n];
    
    printf("Enter all %d elements:\n",n); 
    for(i=0;i<n;i++) 
    {
        scanf("%d",&arr[i]);
    }
    
    int largest=arr[0];

    for(i=1;i<n;i++) 
    {
        if(arr[i]>largest) 
        {
            largest=arr[i];
        }
    }

    printf("The largest element in the array is:%d\n",largest);
    
    return 0;
}
