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
					i++;	/*while "trimming array"*/
				printf("%c", a[i+1]);
				i++;
				}
			}
		}/*for loop*/
	}/*printarray*/
