/* Write a program which accept number from user and count frequency of such a digits which are less than 6. */

#include<stdio.h>					    //Header files

typedef int BOOL;

#define INVALID_INPUT -1

BOOL CountFreqLessThanSix(int iNo)			//Helper file
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
		
		if(iDigits < 6)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	return iCnt++;
}

int main()							//Entry point function
{
	int iValue = 0;
	int iRet = 0;
	
	printf("\n");
	printf("Enter the Number:-\n");
	scanf("%d",&iValue);
	
	iRet = CountFreqLessThanSix(iValue);
	
	printf("\n");
	
	if(iRet == -1)
	{
		printf("INVALID_INPUT");
	}
	else
	{
		printf("Frequency of digits which are less than Six :-\n %d",iRet);
	}
	
	return 0;
}
	