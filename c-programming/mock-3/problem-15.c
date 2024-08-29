#include <stdio.h>
  
 enum Level  
 {
    A,          // enumerations (enum) are designed to represent a set of named integral
    B = 5,      // constants, so the values assigned to the enumerators are always
    C,          // integers (numeric values). By default, these numeric values are of type int.
    D           // This is inherent to the design of enum, and you cannot assign non-integer
 };             // values (like floating-point numbers or strings) to enumerators.
  
 int main() 
 {
   enum Level var = D;
   printf("%d", var);  // value will be incremented according to value provided to last variable
   return 0;
 }
 