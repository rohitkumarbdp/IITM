/*
Union Definition: A union in C is a user-defined data type that allows different data types to share the same memory location. It can hold only one member’s value at a time.
	•	Memory Allocation:
	    •	All members of a union share the same memory space.
	    •	The size of the union is determined by its largest member.
	•	Access:
	    •	Only one member can be accessed at a time; writing to one member overwrites the others.
	    •	Members are accessed using the dot (.) operator.
	•	Use Cases:
	    •	Memory Optimization: Unions save memory when different data types are used interchangeably.
	    •	Type Punning: Low-level technique to interpret the same memory as different types.
	    •	Variant Data Types: Unions can be used to create structures that hold different data types depending on the context.
	•	Difference from Struct:
	    •	struct: Each member has its own memory, allowing all members to be accessed simultaneously.
	    •	union: All members share the same memory, so only one member can hold a value at any given time.
*/

#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

void printData(union Data *data, int type) {
    switch (type) {
        case 0:
            printf("Integer: %d\n", data->i);
            break;
        case 1:
            printf("Float: %f\n", data->f);
            break;
        case 2:
            printf("String: %s\n", data->str);
            break;
    }
}

int main() {
    union Data data;

    data.i = 10;
    printData(&data, 0);

    data.f = 220.5;
    printData(&data, 1);

    strcpy(data.str, "Hello, World!");
    printData(&data, 2);

    return 0;
}