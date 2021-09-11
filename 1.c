/*
	Write a program which accept number from user and display its multiplication of 
factors.
Input : 12
Output : 144 (1 * 2 * 3 * 4 * 6)
Input : 13
Output : 1 (1)
Input : 10
Output : 10 (1 * 2 * 5

*/

#include<stdio.h>

int MultFact(int iValue)
{
	int iCnt=0;
	int iMult=1;
	
	for(iCnt=1;iCnt<=iValue/2;iCnt++)
	{
		if(iValue % iCnt == 0)
		{
			iMult=iMult*iCnt;
		}
	}
	return iMult;
	
}
int main()
{
	int iNo=0;
	int iRet=0;
	
	printf("Enter NO\n");
	scanf("%d",&iNo);
	
	iRet=MultFact(iNo);
	printf("Mult is : %d",iRet);
	
	return 0;
}