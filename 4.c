//4) Write a C program to find the length of a string using pointers.

#include<stdio.h>
#include<stdlib.h>


int length(char *arr)
{
    int count=0,i;
    for(i=0;i<100;i++){
	if(arr[i]=='\0'){
	   return count;
	}
	else{
	   count++;
	}
    }
    return 0;
}

void  main()  
{  
    char *arr;
    int ret;

    arr=(char *)malloc(sizeof(char)*100);  

    printf("enter a string: ");
    scanf("%[^\n]",arr);

    ret=length(arr);
    if(ret==0)
    	printf("fail\n");
    else
	printf("length = %d\n",ret);

}

