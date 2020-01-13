// Aastha Chawla 
// Jan 1st 2020 

#include <stdio.h>
#include <string.h>
#include <assert.h>

/*
Practice #1: Standard I/O
Write a function that inputs the hours and minutes, and outputs the total number of minutes. 
*/

void prac_1(){
	int hours;
	int minutes; 
	printf("How many hours and minutes?\n");
	scanf("%d", &hours);//assume user inputs proper data
	scanf("%d", &minutes);
	int total;
	
	if(hours > 0) 
		total = hours*60 + minutes;
	else
		total = minutes;

	printf("Total time in minutes: %d\n", total);
}

/* 
Practice #2: Conditions, Characters, I/O
Write a function that takes in a character, and determines if the character is a vowel. 
*/

void prac_2(){
	char c; 
	printf("Please enter a lowercase character.\n");
	scanf("%c", &c);
	assert(c != '\0');

	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
		printf("yes it is indeed a vowel\n");
		return;
	}
	printf("No it is not a vowel.\n");
}

/* 
Practice #3: Loops, I/O
Write a function that calculates the factorial of a given number. 
*/

void prac_3(){
	int num; 
	printf("Give a number\n");
	scanf("%d", &num);
	int factorial = num;
	assert(num > 0);
	for(int i = num-1; i>0; i--){
		factorial *= i;
	}
	//alternatively, using a while loop:
	// int i = num-1;
	// while(i > 0){
	// 	factorial *= i;
	// 	i--;
	// }

	printf("Factorial: %d\n", factorial);
}

/* 
Practice #4: Character Arrays
Count the number of alphanumeric characters 
*/

void prac_4(char str[]){
	//find the length of the string
	int i = 0; 
	while(str[i] != '\0')
		i++; 
	
	//count the number of nonspace characters in the character array
	int charCount = 0; 
	int j = 0;
	
	while(str[j] != '\0'){
		if(str[j] != ' ' && str[j] != '\n' && str[j] != '\t')
			charCount++;
		j++;
	}
	printf("Total number of words is %d\n", charCount); 

}

/* 
Practice #5: Character Arrays using Pointers
Count the number of given characters using pointers.
*/

void prac_5(char str[], char c){
	char *p = str;
	int counter = 0; 
	while(*p != '\0'){
		if(*p == c){
			counter++;
		}
		p++;
	} 
	printf("The total number of '%c' characters in the string are %d\n", c, counter);

}



int main(void){
	prac_1();
	prac_2();
	prac_3();
	char s[] = "hey how are you doing today?";
	char c = 'h';
	prac_4(s);
	prac_5(s, c);
	return 0;

}
