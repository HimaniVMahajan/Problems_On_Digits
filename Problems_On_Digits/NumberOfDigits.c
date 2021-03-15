/* Accept the number from user and return the numbers of digits from that number. */

#include<stdio.h>

int CountDigits(int iNo)		//Helper function
{
	int iCnt = 0 , iDigits = 0;
	
	while(iNo > 0)
	{
		iDigits = iNo % 10;
		iNo = iNo / 10;
		iCnt++;
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
	
	iRet = CountDigits(iValue);
	
	printf("Numbers of Digits is:-\n %d",iRet);
	printf("\n");
	
	return 0;
}
	