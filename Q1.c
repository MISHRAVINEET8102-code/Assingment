// 1. Write a C program to traverse and display all the elements of an array.
#include<stdio.h>
int main (){
    int arr[5] = {1,2,3,4,5};
    printf("The element of array is : \n");
    for(int i=0 ; i<5 ; i++){
        printf("\n%d ",arr[i]);
    }
return 0;
}