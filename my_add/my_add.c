#include <stdio.h>

/*function prototype*/
unsigned int my_add(unsigned int a, unsigned int b);

int main()
{
    my_add(500,12);
    return 0;
}/*main*/
unsigned int my_add(unsigned int a, unsigned int b)
{
    int mask = 0, result =0;
    result = a ^ b;
    mask = a & b;
    
    while (mask!=0) {
        
        int shifted=mask<<1;
        
        mask = result &shifted;
        
        result ^= shifted;
        
    }/*while*/
    
    printf("result is: %d\n", result);
    return 0;
}/*my_add*/
