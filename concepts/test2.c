#include <stdio.h>
#include<string.h>
int main() {
	char s[100];
  scanf("%s",s);
  char temp[10];
    strcpy(temp,strrev(s));
  printf("%s",temp);
}