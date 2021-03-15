/* Accept the number from user and check whether  palindrome number or not?. */

#include<stdio.h>

typedef int BOOLEAN;

#define TRUE 1
#define FALSE 0

BOOLEAN CheckPalindromeNumber(int iNum)		//Helper function
{
	int iDigits = 0, iRev = 0;
	int iTemp = iNum;
	
	while(iNum > 0)
	{
		iDigits = iNum % 10;
		iRev = iRev * 10 + iDigits;
		iNum = iNum / 10;
	}
	
	if(iTemp == iRev)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()                       		//Entry Point function
{
	int iNo = 0 , iRet = 0;
	
	printf("\n");
	
	printf("Enter the Number:-\n");
	scanf("%d",&iNo);
	
	iRet = CheckPalindromeNumber(iNo);
	
	printf("\n");
	
	if(iRet == 1)
	{
		printf("Number is Palindrome");
	}
	else
	{
		printf("Number is not a Palindrome number");
	}
	
	printf("\n");
	
	return 0;
}
	
	