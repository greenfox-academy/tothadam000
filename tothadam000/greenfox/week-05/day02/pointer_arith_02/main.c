#include <stdio.h>
#include <stdlib.h>
/*
 * Create an array of integers. Make it 16 long. Fill it up with numbers as You wish. Print them out.
 *     * Iterate over it with a pointer so, that You only get to each _second_ element. Print out only these.
 *     * Iterate over it only touching each _fourth_ element. Print out only these.
 *     * Iterate over it only touching each _eighth_ element. Print out only these.
 */

int main(){
    int integers[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int *apointer = integers;
    int size_array = sizeof (integers) / sizeof (integers[0]);

    for(int i = *apointer; i <= size_array; i++){
        printf("%d\n", i);
    }
    printf("------------\n\n");
    for(int i = *apointer + 1; i <= size_array; i+=2){
          printf(" %d\n", i);
    }
    printf("------------\n\n");
    for(int i = *apointer + 3; i <= size_array; i+=4){
          printf(" %d\n", i);
    }
    printf("------------\n\n");
    for(int i = *apointer + 7; i <= size_array; i+=8){
          printf(" %d\n", i);
    }
    return 0;
}
