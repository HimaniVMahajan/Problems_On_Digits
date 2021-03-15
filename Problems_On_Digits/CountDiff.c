/* Write a program which accept number from user and return difference between summation of even digits and summation of 
	odd digits. */
	
#include<stdio.h>

int CountDifference(int iNo)		//Helper function
{
	int iDigits = 0 ;
	int iEsum = 0 ; int iOsum = 0 ;
	int iDiff = 0 , iTemp = 0;
	
	if(iNo < 0)						//updator
	{
		iNo = -iNo;
	}
	
	iTemp = iNo;
	
	while(iNo > 0)
	{
		iDigits = iNo % 10;
		
		if((iDigits %2) == 0)
		{
			iEsum = iEsum + iDigits;
		}
		iNo = iNo / 10;
	}
	
	while(iTemp > 0)
	{
		iDigits = iTemp % 10;
		
		if((iDigits %2) == 1)
		{
			iOsum = iOsum + iDigits;
		}
		iTemp = iTemp / 10;
	}
	
	iDiff = iEsum - iOsum;
	return iDiff;
}

int main()					//	Entery point function
{
	int iValue = 0;
	int iRet = 0;
	
	printf("\n");
	
	printf("Enter the Number:-\n");
	scanf("%d",&iValue);
	
	printf("\n");
	
	iRet = CountDifference(iValue);
	
	printf("Difference between summation of even digits and summation of odd digits is:-\n %d",iRet);
	printf("\n");
	
	return 0;
}
	