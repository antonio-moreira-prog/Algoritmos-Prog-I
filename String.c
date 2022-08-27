#include <stdio.h>

void concat_string(char str1[], int n1, char str2[],int n2, char str3[])
{
	int a, b;
	
	for (a=0;a<7;a++){
		str3[n1 + a] = str2[a];
	}
	for (b=0;b<n1;b++)
	
	{	str3[b] = str1[b];

	}
	
}
int main()
{
	char string1[] = {'n','e','t', 'o'};
	char string2[] = {'m', 'o', 'r', 'e', 'i', 'r', 'a'};
	char string3[13];
	int a;

	concat_string(string1, 4, string2, 7, string3);
	printf("%s", string3);
	return 0;

}