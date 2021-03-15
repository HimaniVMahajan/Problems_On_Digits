/* Write a program which accept number from user and check whether it contains 0 in it or not. */

#include<stdio.h>					//Header files

typedef int BOOL;
#define TRUE 1
#define FALSE 0
#define INVALID_INPUT -1

BOOL CheckZeros(int iNo)			//Helper file
{
	int iDigits = 0, iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	if(iNo == 0)
	{
		return INVALID_INPUT;
	}
	
	while(iNo > 0)
	{
		iDigits = iNo % 10;
		
		if(iDigits == 0)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	
	if(iCnt >0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()							//Entry point function
{
	int iValue = 0;
	int iRet = 0;
	
	printf("\n");
	printf("Enter the Number:-\n");
	scanf("%d",&iValue);
	
	iRet = CheckZeros(iValue);
	
	printf("\n");
	if(iRet == 1)
	{
		printf("Number contains zero");
	}
	else if(iRet == 0)
	{
		printf("Number not contains zero");
	}
	else
	{
		printf("INVALID_INPUT");
	}
	
	return 0;
}
	