#include <stdio.h>

/*function prototype*/
unsigned int my_add(unsigned int a, unsigned int b);
void binaryCount(unsigned int n);

int main()
{
    unsigned int a, b;
    printf("Please enter two numbers to sum:");
    while (scanf("%u%u",&a, &b)!=EOF)
    {
    int result = my_add(a, b);
    printf("%d + %d (base 10) = %d\n", a, b, result);
    printf("%d + %d (base 2) = ", a, b);
    binaryCount(result);
    printf("\n");
    }/*while*/
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

void binaryCount(unsigned int n){
    
    if (n<2 && n%2==0) {
        ;
        
    }/*base*/
    
    else{
        
        binaryCount(n/2);
        
        printf("%d",n%2);
        
    }/*else*/
    
}/*binaryCount*/
