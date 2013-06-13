#include <stdio.h>
#include <string.h>
#include "../include/debug.h"

int main()
{
	char input[20],shuffle[20];
	int n,h;
	int i,j,len;

	while(1)
	{
	    scanf("%s",input);	   
		if(input[0]=='-'&&strlen(input)==1) 
			break;
		len = strlen(input);

	    scanf("%d",&n);
		//times
	    for (i=0; i< n;i++)
    	{
        	//shuffle  1 -> 2 -> 1
	        scanf("%d",&h);
			for(j=0;j<h;j++)
			{		
	        	strncpy(shuffle,&input[1],len-1);			
		        //input[last] copy to shuffle[first]
    		    shuffle[len-1]=input[0];
        		//input[other] strncry to shuffle[other]
				shuffle[len]='\0';
				strcpy(input,shuffle);			
				//dbg_printf("j=%d,shuffle=%s\n",j,shuffle);
			}
		}	
	    printf("%s\n",shuffle);
	}
    
}
