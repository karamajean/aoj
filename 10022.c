/* strtok.c */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void tolow(char *ptr)
{
    int i;
    for (i=0; i<strlen(ptr); i++)
    {
        if (isupper(ptr[i]))
        {
            ptr[i]=tolower(ptr[i]);
		}
    }
}

int main()
{
    char t[1000], *s2=" ", *ptr;
    char w[10];
    int count=0;
    int i;

	gets(w);
	tolow(w);
  
    while (1)
    {
        gets(t);
       	if ( strcmp (t,"END_OF_TEXT") ==0)	
			break;
        ptr=strtok(t, s2);
        while (ptr!=NULL)
        {
			tolow(ptr);			
            if (strcmp(ptr,w)==0)
                count++;			
            ptr=strtok(NULL,s2);
        }
    }
    printf("%d\n",count);
    return 0;
}



