#include <stdio.h>
#include <string.h>
#define MAX_LEN 100
void reverse(char* string)
{
 // Write code here
	for(int i=strlen(string);i>=0; i--){
		printf("%c", string[i]);
	}


}

int main() 
{
    char input_str[MAX_LEN]="";

    // Input
    fgets(input_str, sizeof(input_str), stdin);
    // Remove the newline character from the input string
    if (input_str[strlen(input_str) - 1] == '\n') {
        input_str[strlen(input_str) - 1] = '\0';
    }    
    // Output
    reverse(input_str);
    return 0;
}