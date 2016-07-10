# br
#include<stdio.h>
void towerofHanoi(int n,char fromrod,chartorod,char auxrod)
{
if(n==1)
{
printf("\n move disk1 from rod %c to rod %c",fromrod,torod);
return;
}
towerofHanoi(n-1,fromrod,auxrod,torod);
printf(" \n move disk %d from rod %c to rod %c",n,fromrod,torod);
towerofHanoi(n-1,auxrod,torod,fromrod);
}
int main()
{
int n=3;
towerofHanoi(n,'A','C','B');
return 0;
}
