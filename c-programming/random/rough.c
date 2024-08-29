#include <stdio.h>


void printBinary(unsigned int num) {
    int bits = sizeof(num);  // Number of bits in the integer

    for (int i = bits - 1; i >= 0; i--) {
        // Print each bit, starting from the most significant bit
      
        printf("%d", (num >> i) & 1);
        
        // Add space for readability (optional)
        if (i % 4 == 0) printf(" ");
    }
    printf("\n");
}


int main() {
   unsigned int mask = 0x0A;
   unsigned int x = 0xDBA5;
   unsigned int y = 2;

//    for(int i=0;i<4;i++){
//        x |= mask;
//        mask<<=4;
//    }
    // unsigned int v = (mask<<5);
    printBinary(y);
    // printBinary(v);
//    printf("%d",mask);
}