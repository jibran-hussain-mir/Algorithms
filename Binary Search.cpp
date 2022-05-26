#include<stdio.h>
#include<stdlib.h>

int binarySearch(int A[],int l,int h,int target)
	{
		int mid;
		while(l <= h)
			{
				mid=(l+h)/2;
				if(A[mid] == target) return mid;
				else if(A[mid] > target) return binarySearch(A,l,mid-1,target);
				else if(A[mid] < target) return binarySearch(A,mid+1,h,target);
			}
			return -1;
	}

int main()
	{
		int A[5]={1,2,3,4,5};
		int n=5;
		int l=0;
		int h=4;
		printf("%d",binarySearch(A,l,h,4));
	}
