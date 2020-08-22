//Please add a comment to each lines that has changes and Indicate the changes
#include<stdio.h> //stdio

int max(int a, int b, int c) {
    return (a > b && a > c)? a : (b > a && b > c)? b : c;
}
int min(int a, int b, int c) {
    return (a < b && a < c)? a : (b < a && b < c)? b : c;
}

char main()
{	int a,b,c,mx,mi;
	scanf(" %d %d %d",&a, &b, &c);
	printf("\t%d\t%d\t%d",a,b,c);

	mx = max(a, b, c);
	mi = min(a, b, c);
	printf("Largest is %d and smallest is %d",mx,mi);
}
//Please add a comment to each lines that has changes and Indicate the changes
/*
Test Cases

Input 1
3 5 7
Output 1
3 5 7
Largest is 7 and smallest is 3

Input 2
7 4 2
Output 2
7 4 2
Largest is 7 and smallest is 2
*/
