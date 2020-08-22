//Please add a comment to each line with changes and indicate the changes
#include<stdio.h>
#include<string.h>
int main()
//Please add a comment to each line with changes and indicate the changes
{
	char a[100], b;
	int i;
	int c = 0;
	printf("Enter a string ");
	scanf("%s", a);
	printf("Enter a character to count ");
    scanf("%c", &b);
	printf("%c\n",b);
	for(i=0;i<strlen(a);i++)
		if(a[i]==b)
			c++;
	printf("\nThe number of occurrences of %c is %d", b, c);
}
//Please add a comment to each line with changes and indicate the changes
/*
Input 1
Enter a string hello
Enter a character to count l
Output 1
l

The number of occurrences of l is 2

Input 2
Enter a string Mississippi
Enter a character to count s
Output 2
s

The number of occurrences of s is
*/
//Please add a comment to each line with changes and indicate the changes
