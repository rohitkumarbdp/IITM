#include <stdio.h>



int main() {
   unsigned int mask = 0x0A;
   unsigned int x = 0xDBA5;


   for(int i=0;i<4;i++){
       x |= mask;
       mask<<=4;
   }
    
   printf("%X",x);
}