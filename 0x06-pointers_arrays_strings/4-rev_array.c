#include"main.h"
/**
*reverse_array-reversearrayofintegers
*@a:array
*@n:numberofelementsofarray
*
*Return:void
*/
voidreverse_array(int*a,intn)
{
inti;
intt;

for(i=0;i<n--;i++)
{
t=a[i];
a[i]=a[n];
a[n]=t;
}
}

