#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char a;
scanf("%c",&a);
if((a>='A'&&a<='Z')||(a>='a'&&a<='z'))
printf("alphabet");
else 
printf("not alphabet");
return 0;
}
