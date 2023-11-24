#include<stdio.h>


void partition(int array[],int mid,int low ,int high)
{
    int i,j,k,B[100];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high)
    {
        if(array[i] < array[j])
        {

            B[k]=array[i];
            i++;
            k++;
        }
        else
        {
            B[k]=array[j];
           j++;
            k++;

        }
    }
    while(i<=mid)
    {

        B[k]=array[i];

        k++;
           i++;
    }
    while(j<=high)
    {
        B[k]=array[j];
        j++;
        k++;
    }
    for(int i=low; i<high; i++)
    {

        array[i]=B[i];
    }

}
void display(int array[],int n)
{
    for(int i=0; i<n; i++)
    {

        printf("%d ",array[i]);

    }
    printf("\n");

}
void margeSorts(int array[],int low,int high)
{

    int mid;
    if(low<high)
    {

        mid=(low+high)/2;
        margeSorts(array,low,mid);
        margeSorts(array,mid+1,high);
        partition(array,mid,low,high);
    }
}

int main()
{

    int array[]= {1,5,3,6,2,7};
    int n=6;
    printf("Before the Array :");
    display(array,n);
    printf("After the Array :");
    margeSorts(array,0,n);
    display(array,n);

}
//Base case and average case Time Complexity O(n long n),
//worst  case Time Complexity O(n log n),
