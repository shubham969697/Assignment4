/*
	Write a program which accept number from user and return summation of all its 
non factors.
Input : 12
Output : 50
Input : 10
Output : 37

*/

#include<stdio.h>

int SumNonFact(int iValue)
{
	int iCnt=0;
	int iSum=0;
	
	if(iValue < 0)
	{
		iValue=-iValue;
	}
	
	for(iCnt=1;iCnt<iValue;iCnt++)
	{
		if(iValue % iCnt != 0)
		{
			iSum=iSum+iCnt;
		}
	}
	return iSum;
	
}
int main()
{
	int iNo=0;
	int iRet=0;
	
	printf("Enter No\n");
	scanf("%d",&iNo);
	
	iRet=SumNonFact(iNo);
	printf("Sum of Non Factor is : %d",iRet);
	
	return 0;
}