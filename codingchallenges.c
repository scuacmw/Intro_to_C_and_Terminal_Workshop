// Aastha Chawla 
// Jan 1st 2020 

#include <stdio.h>
#include <string.h>
#include <assert.h>

/*
 NOTE: there are many different ways to accomplish these coding challenges - if you did yours differently from the 
 solutions below, be sure you can trace your logic and recognize that it answers the problem statement. 
 Good luck to you all in your future coding classes!!   
*/

//count the number of words in a character string 
void prob_1(char str[]){
		
	int flag = 0;
	int k = 0;
	int counter = 0;

	while(str[k] != '\0'){
		if(str[k] != ' ' && str[k] != '\t' && str[k] != '\n'){
			if(flag == 0){
				flag = 1;
				counter++;
			}
		}
			else{
				flag = 0; 
			}
		k++;
	}
	printf("Total number of words: %d\n", counter);

}
//use pointers to traverse a character array that is inputted from the user and print the first instance of two consecutive same letters. assume the string is > 2 characters.
void prob_2(char str[]){
	char *p = str;
	int index = 0; 
	while(*p != '\0' && *(p+1) != '\0'){
		
		if(*p == *(p+1)){
			printf("The index of the first 2 consecutive characters are %d\n", index);
			return;
		}
		index++;
		p++;
	} 
	printf("Could not find any consecutive characters.\n");
}



int main(void){
	//PART 1 
	char s[1000];
	printf("Please enter a phrase or sentence.\n");
	fgets(s, 1000, stdin);
	prob_1(s);

	//PART 2 
	prob_2(s);

	return 0;

}