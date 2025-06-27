#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int lsearch(int a[],int n, int target)
{
    int i=0;
    while(i<n)
    {
        if(a[i] == target)
        {
           printf("%d : Found\n",target);
           break;
        }

      i++;
    }
    if(i == n)
        printf("%d : Not Found\n",target);
}

int main()
{
    int n,i,target;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        a[i]=rand()%5000;
   // scanf("%d",&target);

    clock_t st,endt;
    double total;
    st=clock();
    //printf("%ld\n",st);
    lsearch(a,n,a[n-1]);
    endt=clock();
    total=(double)(endt-st)/CLOCKS_PER_SEC;
     printf("%lf\n",total);
}
