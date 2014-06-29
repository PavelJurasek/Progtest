#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int sort(const void *a, const void *b)
{
    return *(int*) a - *(int*) b;
}


int main (const int argc, const char *argv[])
{
    int * numbers, newnum = 0, stopnum, ind;
    ssize_t size, cnt = 0, j=0;
    
    if ((scanf("%ld%d", &size, &stopnum) != 2) || (size <= 0)) {
        printf("Invalid input.\n");
        return EXIT_FAILURE;
    }
    numbers = (int *)malloc(size*sizeof(int));
    printf("Array size is: %ld\n", size);
    
    do{
        if((ind = scanf("%d", &newnum)) == 0){
            printf("Invalid input.\n");
            free(numbers);
            return EXIT_FAILURE;
        }
        if(ind == EOF){
            newnum = stopnum;
        }
        else{
            cnt++;
            if(cnt > size){
                size += size;
                numbers = (int *)realloc(numbers, size*sizeof(int));
                printf("New array size is: %ld\n", size);
            }
            numbers[cnt-1]=newnum;
        }
    }while(newnum != stopnum);
    
    qsort (numbers, cnt, sizeof(int), sort);
    
    for (ssize_t i = cnt; i>0; i--){
        printf("[%ld]: %d\n", j, numbers[i-1]);
        j++;
    }
    
    free(numbers);
    return EXIT_SUCCESS;
}
