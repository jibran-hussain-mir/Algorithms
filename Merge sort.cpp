#include<stdio.h>
#include<stdlib.h>

void merge(int A,int l,int mid, int h)
	{
		int i,j,k;
		i=l,j=mid+1,k=l;
		int B[100];
		while(i<=mid && j<=h)
			{
				if(A[i] < A[j])
					{
						B[k++]=A[i++];
					}
				else if(A[j] < A[i])
					{
						B[k++]=A[j++];
					}
			}
			for(;i<=mid;i++)
				{
					B[k++]=A[i];
				}
			for(;j<=h;j++)
				{
					B[k++]=A[j];
				}
			 
	}

void Imergesort(int A[],int n)
	{
		int p,i,l,h,mid;
		for(p=2;p<=n;p+2)
			{
				for(i=0;i<i+p-1<n;i+p)
					{
						l=i;
						h=i+p-1;
						mid=(l+h)/2;
						merge(A,l,mid,h);	
					}
			}
	}


int main()
	{
		int A[10]={38,27,43,3,9,82,10};
		Imergesort(A,7);
	}
