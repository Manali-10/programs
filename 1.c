//C program to swap two arrays using pointers.
#include<stdio.h>
#include<stdlib.h>

int n;

void swap(int *arr,int *arr1)
{
    int *temp;
    int i;
    temp=(int *)malloc(sizeof(int)*n);  
    for(i=0;i<n;i++){
	temp[i]=arr[i];
	arr[i]=arr1[i];
	arr1[i]=temp[i];
	}
}

void  main()  
{  
    int *arr,*arr1;
    int i;

    printf("enter the size of array:");
    scanf("%d",&n);

    arr=(int *)malloc(sizeof(int)*n);  
    arr1=(int *)malloc(sizeof(int)*n);  

 
    printf("Input %d elements in the 1st array :\n",n);  
    for(i=0; i<n; i++)  
    {  
	 scanf("%d", &arr[i]);  
    }  
    printf("Input %d elements in the 2nd array :\n",n);  
    for(i=0; i<n; i++)  
    {   
         scanf("%d", &arr1[i]);
    }  

  
    printf("\nElements in 1st array are: ");  
    for(i=0; i<n; i++)  
    {  
        printf("%d  ", arr[i]);  
    } 
    printf("\nElements in 2nd array are: ");  
    for(i=0; i<n; i++)  
    {  
        printf("%d  ", arr1[i]);  
    } 

    printf("\n");	

    swap(arr,arr1);

    printf("After swaping array:");

    printf("\nElements in 1st array are: ");  
    for(i=0; i<n; i++)  
    {  
        printf("%d  ", arr[i]);  
    } 
    printf("\nElements in 2nd array are: ");  
    for(i=0; i<n; i++)  
    {  
        printf("%d  ", arr1[i]);  
    } 

    printf("\n");

}

// looks good
