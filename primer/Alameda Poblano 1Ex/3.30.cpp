#include<stdio.h>
main()
{
	int row=10,column;
	for (;row>=1;){
		column=1;
		while(column<=10){
			printf("%s",row % 2 ? "<":">");
			++column;
		}
		--row;
		printf("\n");
	}
	return 0;
}
