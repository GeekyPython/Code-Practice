/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<stdio.h>
#include<string.h>

int addChars(char ch1,char ch2)
{
	int res;

	if(ch1+ch2<=122)
	{
		res = (int)ch1+(int)ch2;
	}

	else
	{
		res = 97 + (((int)ch1 + (int)ch2)%122);
	}
	return res;
}


int main()
{
	char res = (char)addChars('y','d');
	printf("%c",res);
	return 0;
}
