//Please add a comment to each lines that has changes and Indicate the changes
#include<stdio.h>
int main()
{
    int a, b;
 	scanf("%d",&a);

 	int n = 0;
 	while(a)
 	{
 	    n = n * 10 + a % 10;
        a=a/10;
 	}//Please add a comment to each lines that has changes and Indicate the changes
 	printf("%d",n);
 	return 0;
}

//Please add a comment to each lines that has changes and Indicate the changes
/*
Input 1
1234
Output 1
4321

Input 2
5667
Output 2
7665
*/



