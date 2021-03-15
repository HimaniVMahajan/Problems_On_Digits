/* Write a program which accept number from user and return multiplication of all digits. */

#include<stdio.h>

int DigitsMultiplication(int iNo)		//Helper function
{
	int iDigits = 0 , iResult = 1;
	
	if(iNo < 0)						//updator
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigits = iNo % 10;
		if(iDigits == 0)
		{
			iDigits = 1;
		}
		iResult = iResult * iDigits;
		iNo = iNo / 10;
	}
	return iResult;
}

int main()					//	Entery point function
{
	int iValue = 0;
	int iRet = 0;
	
	printf("\n");
	
	printf("Enter the Number:-\n");
	scanf("%d",&iValue);
	
	printf("\n");
	
	iRet = DigitsMultiplication(iValue);
	
	printf("Multiplication of all Digits is:-\n %d",iRet);
	printf("\n");
	
	return 0;
}
	