/*
	Write a program which accept number from user and return difference between 
summation of all its factors and non factors

	Input : 12
Output : -34 (16 - 50)
Input : 10
Output : -29 (8 - 37

*/


#include<stdio.h>

int SumNonFact(int iValue)
{
	int iCnt=0;
	int iEven=0;
	int iOdd=0;
	int iDiff=0;
	
	if(iValue < 0)
	{
		iValue=-iValue;
	}
	
	for(iCnt=1;iCnt<iValue;iCnt++)
	{
		if(iValue % iCnt == 0)
		{
			iEven=iEven+iCnt;
		}
		else
		{
			iOdd=iOdd+iCnt;
		}
	}
	iDiff=iEven-iOdd;
	
	return iDiff;
	
}
int main()
{
	int iNo=0;
	int iRet=0;
	
	printf("Enter No\n");
	scanf("%d",&iNo);
	
	iRet=SumNonFact(iNo);
	printf("Diff of Factor and Non-Factor is : %d",iRet);
	
	return 0;
}