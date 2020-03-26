//2) Write a C program to reverse an array using pointers.


#include<stdio.h>
#include<stdlib.h>

int n;

void reverse(int *arr)
{
    int *temp;
    int i,j;
    temp=(int *)malloc(sizeof(int)*n);  
    for(i=0;i<n;i++){
	temp[i]=arr[i];
	}
    for(i=0,j=n-1;i<n;i++,j--){
	arr[i]=temp[j];
	}
}

void  main()  
{  
    int *arr;
    int i,j;

    printf("enter the size of array:");
    scanf("%d",&n);

    arr=(int *)malloc(sizeof(int)*n);  
 
    printf("Input %d elements in the array :\n",n);  
    for(i=0; i<n; i++)  
    {  
	 scanf("%d", &arr[i]);  
    }  

  
    printf("\nElements in array are: ");  
    for(i=0; i<n; i++)  
    {  
        printf("%d  ", arr[i]);  
    } 

    printf("\n");	

    reverse(arr);

    printf("After reverse array:");

    printf("\nElements in array are: ");  
    for(i=0; i<n; i++)  
    {  
        printf("%d  ", arr[i]);  
    } 
    printf("\n");

}

