#include<stdio.h>


main()

{
	int *p;
	char data[800];
	p = fopen("filehandling.txt" ,"r");
	
	if(p==0)
	{
		printf("file not open " );
	}
	else 
	{
		while(fgets(data,5,p)!=NULL)
		{
			printf("%s" ,data);
		}
	}
	fclose(p);
}
