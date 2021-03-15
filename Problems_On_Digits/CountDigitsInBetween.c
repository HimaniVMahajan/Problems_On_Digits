/* Write a program which accept number from user and return the count of digits in between 3 and 7. */

#include<stdio.h>

int CountRange(int iNo)		//Helper function
{
	int iCnt = 0 , iDigits = 0;
	
	if(iNo < 0)						//updator
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigits = iNo % 10;
		
		if(iDigits >= 3 && iDigits <= 7)
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
	
	iRet = CountRange(iValue);
	
	printf("Numbers of Digits in between 3 and 7 is:-\n %d",iRet);
	printf("\n");
	
	return 0;
}
	