/*
 This program takes a String as input and outputs a "trimmed" version
 of the string. If the string contains three or more lexicographically adjacent
 characters the 'printArray' function will trim the string and return a shorter version
 of the string. For example, if the given string is "abcfjmnopx" this program will return
 "a-cfjm-px".
 */

#include <stdio.h>
#define MAX 1000

/*function prototype*/
void printArray(char a[]);

int main()
{
	printf("\nEnter A String:\n");
	char a [MAX];
	while(fgets(a, MAX, stdin))
		printArray(a);
	return 0;
}/*main*/

/*
 The 'printArray' function iterates through the given string until
 the character is '\0'. It first checks whether to characters are
 lexicographically adjacent, and if so it will check the character
 after them, while they are adjacent, an inner loop "trims" the characters
 by running a pointer to the next character, once the sequence is not in order,
 the function will stop trimming, add a '-' and the last character in sequence
 and move on to search the rest of the string.
*/
void printArray(char a[])
	{
	int i;
		for(i=0; a[i]!='\0'; i++)
		{
			printf("%c", a[i]);
			if(a[i+1]-a[i]==1)
			{
				if(a[i+2]-a[i+1]==1)
				{
				printf("-");
				while((a[i+2]-a[i+1])==1)
					i++;	/*while "trimming string"*/
				printf("%c", a[i+1]);
				i++;
				}
			}
		}/*for loop*/
	}/*printarray*/
