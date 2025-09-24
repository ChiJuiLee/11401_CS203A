#include<stdio.h>
#include<stdlib.h>

int main()
{
    // create dynamic array
    int *array;             
    int n = 10;
    // allocate memory for n element 
    array= (int *)malloc(sizeof(int)*n);        
    // check if memory has been allocated    
    if(array == NULL)               
    {
        printf("memory allocation failed\n");
        return 1;
    }
    // print memory address
    printf("initial memory address: %p\n",(void*)array);                                    
    printf("initial memory end address: %p\n",(void*)(array + n * sizeof(int) - 1));
    for(int i = 0; i < n; i++)
    {
        array[i]= i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    n = n * 2;
    // reallocate memory for n element;
    array= (int *)realloc(array, sizeof(int)*n);
    if(array == NULL)
    {
        printf("memory reallocation failed\n");
        return 1;
    }
    // print memory address
    printf("after realloct memory address: %p\n",(void*)array);
    printf("after realloct memory address: %p\n",(void*)(array + n * sizeof(int) - 1));
    for (int i = n/2; i < n; i++)
    {
        array[i]= i + 1;        
    }
    for (int i = n/2; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    // free memory
    free(array);
    return 0;

    

    


    

}
