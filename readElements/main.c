// This 'C' program to declare, initialize input and print array elements.

/*
 Example output
    Enter the size : 5
    Input elements:
    1
    2
    3
    4
    5
 --------------
 Output: 1,2,3,4,5
 */
// Created by Mehmet Akif Duran, 11 January 2024.

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 1000

int main(void){ //beginning of the main function.
    
    //variable decleration(s).
    
    int userArray[ARRAY_SIZE];
    int counter,userSize;

    //executable statement(s).
    
    //getting array size from the user and the elements.
    
    printf("Enter the size: \n");
        scanf("%d",&userSize);
    

    printf("Input the elemetns: \n");
    
    for(counter=0; counter<userSize;counter++){
        scanf("%d", &userArray[counter]);
    }
    
    //printing users array
    
    for(counter=0;counter<userSize;counter++)
    {
        printf("%d, ",userArray[counter]);
    }
    
    return 0;
}//end of the main funciton

