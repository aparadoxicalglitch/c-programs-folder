#include<Stdio.h>
void main()
{
	int n;
	printf("Enter age:\n",n);
	scanf("%d",&n);
	
	if(n>60&&n<70)
	printf("Rather dont drive.you might die Xd");
	else if(n<70&&n>17)
	printf("You can drive\n");
	else if(n>70)
	printf("Dont drive but drink\n");
	else
	printf("This question is not for you\n");
}