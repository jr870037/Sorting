#include<stdio.h>
#define True 1
#define False 0
void main()
{
	int x[]={25,57,48,37,12,92,86,33},hold,switched=True,pass,n=8,j;
	for(pass=0;pass<n-1&&switched==True;pass++)
	{
		switched=False;
		for(j=0;j<n-pass-1;j++)
		{
			if(x[j]>x[j+1])
			{
				switched=True;
				hold=x[j];
				x[j]=x[j+1];
				x[j+1]=hold;
			}
		}
	}
	for(pass=0;pass<n;pass++)
	{
		printf("%d ",x[pass]);
	}
}
