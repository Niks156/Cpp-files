//Comparing four numbers to find the maximum among them
#include<stdio.h>
int main()
{
	int s,p,c,d,max1,max2;
	printf("Enter the numbers:");
	scanf("%d %d %d %d",&s,&p,&c,&d);
	//comparing p & s
	max1=s>=p?s:p;
	//comparing c & d
	max2=c>=d?c:d;
	//comparing the max values between (s and p) & (c and d)
	max1>=max2?printf("Maximum=%d",max1):printf("Maximum:%d",max2);
    return 0;
}
