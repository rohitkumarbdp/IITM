// MACROS

#include <stdio.h>
#define MUL(a, b) (a * b)
int main()
{
    int answer = MUL(3 + 3, 5 + 4);  // output will 22 which is ( 3+3*5+4)
    printf("%d\n", answer);
    
    return 0;
}


/*
    In the expanded form, 3 + 3 * 5 + 4 evaluates to 3 + 15 + 4 = 22, not 54
    as might be expected. To avoid such issues, always be careful when using 
    macros with complex expressions or side effects.
*/