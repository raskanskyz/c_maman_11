#include <stdio.h>

/*function prototype*/
unsigned int my_add(unsigned int a, unsigned int b);
unsigned int binaryCount(unsigned int n);


int main()
{
    unsigned int a=0;
    unsigned int b=0;
    printf("Please enter two numbers to sum:");
    scanf("%u%u",&a, &b);
   int result = my_add(a, b);
    printf("%d + %d (base 10) = %d\n", a, b, result);
    printf("%d + %d (base 2) = ", a, b);
    binaryCount(result);
    printf("\n");

    return 0;
}/*main*/

unsigned int my_add(unsigned int a, unsigned int b)
{
    int mask = 0, result = 0;
    result = a ^ b;
    mask = a & b;
    
    while (mask!=0) {
        
        int shifted = mask << 1;
        
        mask = result & shifted;
        
        result ^= shifted;
        
    }/*while*/
    
    return result;
}/*my_add*/

unsigned int binaryCount(unsigned int n){
    
    if (n<2 && n%2==0) {
        
        return;
        
    }/*base*/
    
    else{
        
        binaryCount(n/2);
        
        printf("%d",n%2);
        
    }/*else*/
    
}/*binaryCount*/
