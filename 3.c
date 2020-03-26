//3) Write a C program to search an element in integer array using pointers.

#include<stdio.h>
#include<stdlib.h>

int ele,n;

int search(int *arr)
{
    int i;
    for(i=0;i<n;i++){
	if(arr[i]==ele)
	   return i;	
	}
   return 0;
    
}

void  main()  
{  
    int *arr;
    int i,j,ret;

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

    printf("which element you want to search:");
    scanf("%d",&ele);

    ret= search(arr);
    if(ret==0)
    	printf("element is not found\n");
    else
	printf("%d is present in %d index\n",ele,ret);

}

