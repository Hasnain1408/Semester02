#include<stdio.h>
#include <stdlib.h>

void  Merge(int a[],int left,int mid,int right)
{
    int i,j,k;
    int la,ra;
    int t[8];

    la=mid-left+1;
    ra=right-mid;

    int L[la],R[ra];

    for(i=0; i<la; i++)
        L[i]=a[left+i];
    for(j=0; j<ra; j++)
        R[j]=a[mid+1+j];

    i=0,j=0,k=left;
    while(i<la && j<ra)
    {
        if(L[i]<R[j])
        {
            a[k]=L[i];
            i++;
            k++;
        }else{
           a[k]=R[j];
            j++;
            k++;
        }

    }

    while(i<la)
    {
        a[k]=L[i];
        i++;
        k++;
    }

     while(j<ra)
    {
        a[k]=R[j];
        j++;
        k++;
    }


}

void  Msort(int a[],int left,int right)
{
    if(left>=right)
        return;

    int mid;
    mid=left+(right-left)/2;
     Msort(a,left,mid);
     Msort(a,mid+1,right);
     Merge(a,left,mid,right);

}

void mergesort(int a[],int n)
{
    int left=0,right=n;
    Msort(a,left,right);

}

int main(void)
{
     int n=8,a[]={9,8,7,6,5,4,3,2};

     mergesort(a,n-1);

     int i=0;
     while(i<n)
     {
         printf("%d ",a[i]);
         i++;
     }
return 0;
}
