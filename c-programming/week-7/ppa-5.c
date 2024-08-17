#include<stdio.h>
#include<string.h>
#include<ctype.h>



// Write function below
void title_case(char* sentence){
	int i=0;
	int nextCapital = 1;
	while(sentence[i]!='\0'){
		
		if(isspace(sentence[i])){
			nextCapital = 1;
		}else if(nextCapital && isalpha(sentence[i])){
			sentence[i] = toupper(sentence[i]);
			nextCapital= 0;
		}
		else{
			sentence[i]=tolower(sentence[i]);
			nextCapital= 0;
		}
		
		// printf("%c", sentence[i]);
		i++;
		
	}
	printf("%s", sentence);

	
}




int main() {
    char sentence[1000];

    // It is safe to use fgets if your input is a string of spaces.
    fgets(sentence,1000,stdin);
    title_case(sentence);
    printf("%lu", strlen(sentence));  // number of characters in the string 
    return 0;
}