#include<stdio.h>


main()

{
	int *p;
	char data[1000];
	p = fopen("filehandling.txt" ,"w");
	if(p==0)
	{
		printf("file not open " );
	}
	else
	{
		printf("Enter your string = " );
		gets(data);
		fputs(data,p);
		printf("data added successfully " );
	}
	fclose(p);
}

