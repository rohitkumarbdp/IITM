#include <stdio.h>
void demo() 
{
    static int x;
    x++;
    printf("%d\n", x);

}
int main()
{   
    demo();
    demo();
    demo();
    demo();
    
    return 0;
}