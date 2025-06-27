#include<stdio.h>

int bsearch(int a[], int min, int max, int target)
{
  if(min<=max)
  {
    int mid;
    mid=(min+max)/2;

    if(a[mid] == target)
    {   printf("found\n");
        //return mid;
    }else if(target > a[mid])
    {
        bsearch(a,mid+1,max,target);
    }else{
         bsearch(a,min,mid-1,target);
    }
  }else{
      printf("Not found\n");
  }


}

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    bsearch(a,0,9,7);


}
