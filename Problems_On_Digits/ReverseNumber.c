/* Write a program which accept number from user and display its digits in reverse order. */

#include<stdio.h>

int DisplayReverseNumber(int iNum)		//Helper function
{
	int iDigits = 0, iRev = 0;
	
	while(iNum > 0)
	{
		iDigits = iNum % 10;
		iRev = iRev * 10 + iDigits;
		iNum = iNum / 10;
	}
	return iRev;
}

int main()                       		//Entry Point function
{
	int iNo = 0 , iRet = 0;
	
	printf("\n");
	
	printf("Enter the Number:-\n");
	scanf("%d",&iNo);
	
	iRet = DisplayReverseNumber(iNo);
	
	printf("\n");
	
	printf("Reverse of a Number is:-\n %d",iRet);
	printf("\n");
	
	return 0;
}
	
	