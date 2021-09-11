/*
	Write a program which accept number from user and display all its non factors.
Input : 12
Output : 5 7 8 9 10 11
Input : 13
Output : 2 3 4 5 6 7 8 9 10 11 12
Input : 10
Output : 3 4 6 7 8 9

*/

#include<stdio.h>

void FactRev(int iValue)
{
	int iCnt=0;
	
	for(iCnt=1;iCnt<iValue;iCnt++)
	{
		if(iValue % iCnt != 0)
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
	
	
	return 0;
}