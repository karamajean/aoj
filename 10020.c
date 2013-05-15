#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char ch;
	int letter[26]={0};

	while(scanf("%c",&ch)!=EOF)
	{
		if(ch >='a'&&ch<='z')
			letter[ch-'a']++;
		else if(ch >='A' && ch<='Z')			
			letter[ch-'A']++;	
	}
	for(i=0;i<26;i++)
		printf("%c :  %d\n",97+i,letter[i]);
	return 0;
}
