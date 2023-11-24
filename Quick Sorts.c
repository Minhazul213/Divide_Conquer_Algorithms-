#include<stdio.h>

int j;
int  partition(int A[],int low ,int high)
{
    int i=low;
    int j=high;
    int pivot=A[low];
    while(i<j)
    {
        while(A[i] <= pivot)
        {
            i++;

        }
        while(A[j]>pivot)
        {
          j--;

        }
        if(i<j)
        {
            int temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }
    int temp=A[low];
            A[low]=A[j];
            A[j]=temp;
    return j;


}

void display(int A[],int n)
{
    for(int i=0; i<n; i++)
    {

        printf("%d ",A[i]);

    }
    printf("\n");

}
int quickSorts(int A[],int low,int high)
{
      int partitionIndex;
      if(low<high){
        partitionIndex=partition(A,low,high);

        quickSorts(A,low,partitionIndex-1);
        quickSorts(A,partitionIndex+1,high);
      }


}

int main()
{

    int A[]= {10,3,6,5,7,8,4,2};
    int n=8;
    printf("Before the Array :");
    display(A,n);
    printf("After the Quick Sorts Array :");
    quickSorts(A,0,n);
    display(A,n);

}
//Base case Time Complexity O(n long n),
//worst  case Time Complexity O(n^2),

