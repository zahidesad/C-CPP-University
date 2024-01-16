#include <stdio.h>
#include <stdlib.h>

void allocater(int *ptrTempAllctr){
    ptrTempAllctr = malloc(sizeof(int));
    if (ptrTempAllctr == NULL)
    {
        printf("in allocater() memory allocation error\n");
        exit(EXIT_FAILURE);
    }else{   
        printf("memory allocation\n");
    }
    
}

void allocaterImproved(int **ptrTempAllctr){
    *ptrTempAllctr = malloc(sizeof(int));
    if (*ptrTempAllctr == NULL) {
        printf("in allocater() memory allocation error\n");
        exit(EXIT_FAILURE);
    } else{   
        printf("memory allocation\n");
    }

}



int main() {
    int *pointer = NULL;
    allocaterImproved(&pointer);  

    if (pointer==NULL)
    {
        printf("p contain null\n");        
    }else{
        printf("p allocated correctly\n");
    }
              
    return 0;
}