#include <stdio.h>
#include <string.h>
void swap_name(char* name)
{
//Hint:- You can use strtok() function
// Write code here


    int len = strlen(name);
    char* token = strtok(name, " ");
    char first_name[strlen(token)];
    strcpy(first_name, token);

    char* last_name = strtok(NULL, " ");
    strcpy(name, last_name);
    strcat(name, " ");
    strcat(name, first_name);
}
int main(){
    char name[100];
    fscanf(stdin,"%[^\n]",name);
    swap_name(name);
    printf("%s",name);
}