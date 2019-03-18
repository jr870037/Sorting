#include<stdio.h>
void display(int x[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d  ",x[i]);
	}
}
void main()
{
	int x[]={25,57,48,37,12,92,86,33};
	int n=sizeof(x)/sizeof(int);//taking out the size of array;
	int s,f,ele;
	for(int i=1;i<n;i++)
	{
		ele=x[i];
		s=i;
		f=(s-1)/2;
		while(s>0&&x[f]<ele)
		{
			x[s]=x[f];
			s=f;
			f=(s-1)/2;
		}
		x[s]=ele;
	}
	display(x,n);
}

