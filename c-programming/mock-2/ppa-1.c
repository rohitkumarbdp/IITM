//Prefix fixed code 
#include <stdio.h>
#include <string.h>
// Template Code
int countVowels(char str[], int n) 
{
    // Write function Body
    
    char str3[5] ="aeiou";
    int count = 0;
    for(int i= 0; i<n; i++){
        if(strchr(str3, str[i])){
            count+=1;  
        }
    }
    return count;



}
// Suffix fixed code
int main() 
{
    char inputString[100];
    fgets(inputString, sizeof(inputString), stdin);
    int length = strlen(inputString);
    printf("%d",countVowels(inputString, length));
    return 0;
}