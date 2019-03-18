#include<stdio.h>
void swap(int *x,int *y)
{
  int temp=*x;
  *x=*y;
  *y=temp;
}
void display(int a[],int n)
{
  for(int i=0;i<n;i++)
  printf("%d ",a[i]);
}
void heapify(int a[],int n,int i) //max heapify
{
  // printf("n is: %d, i is: %d\n",n,i);
  int largest=i;
  int left=2*i+1;
  int right=2*i+2;
  if(left<n && a[left]>a[largest])
  largest=left;
  if(right<n && a[right]>a[left])
  largest=right;
  if(largest!=i){
    swap(&a[i],&a[largest]);
    heapify(a,n,largest);
  }
}
void heapsort(int a[],int n)
{
  for(int i=(n/2)-1;i>=0;i--){ //build max heap
    printf("\nHeapifying:\t");
    heapify(a,n,i);
    display(a,n);
  }
  printf("\n");
  // printf("\nHeapifying:\t");
  // display(a,n);
  for(int i=n-1;i>=0;i--){ //heapsort
    swap(&a[0],&a[i]);
    printf("i is: %d",i);
    printf("\nHeapifying:\t");
    heapify(a,i,0);
    display(a,n);
  }
}
void main()
{
  // int a[]={1,4,3,7,8,10};
  int a[]={10,9,8,7,6,5,4,3,2,1};
  int n=sizeof(a)/sizeof(a[0]);
  printf("The size of n is: %d",n);
  printf("\nUnorted Order:\t");
  display(a,n);
  printf("\n----------------");
  heapsort(a,n);
  printf("\n----------------\nSorted Order:\t");
  display(a,n);
}
