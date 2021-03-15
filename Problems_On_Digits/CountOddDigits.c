/* Write a program which accept number from user and return the count of odd digits. */

#include<stdio.h>

int CountOddDigits(int iNo)		//Helper function
{
	int iCnt = 0 , iDigits = 0;
	
	if(iNo < 0)						//updator
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigits = iNo % 10;
		
		if((iDigits %2) == 1)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	return iCnt;
}

int main()					//	Entery point function
{
	int iValue = 0;
	int iRet = 0;
	
	printf("\n");
	
	printf("Enter the Number:-\n");
	scanf("%d",&iValue);
	
	printf("\n");
	
	iRet = CountOddDigits(iValue);
	
	printf("Numbers of Odd Digits is:-\n %d",iRet);
	printf("\n");
	
	return 0;
}
	