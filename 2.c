/*
	.Write a program which accept number from user and display its factors in 
decreasing order.
Input : 12
Output : 6 4 3 2 1

*/

#include<stdio.h>

void FactRev(int iValue)
{
	int iCnt=0;
	
	
	for(iCnt=iValue/2;iCnt>0;iCnt--)
	{
		if(iValue % iCnt == 0)
		{
			printf("%d\t",iCnt);
		}
	}

	
}
int main()
{
	int iNo=0;
	int iRet=0;
	
	printf("Enter No\n");
	scanf("%d",&iNo);
	
	FactRev(iNo);
	//printf("Mult is : %d",iRet);
	
	return 0;
}