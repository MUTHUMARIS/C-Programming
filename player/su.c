#include <stdio.h>
int main()
{
int a,b,i,c;
printf("enter the value");
scanf("%d %d",&a,&b);
i=a;
while((a-b)>=0)
{
  a-=b;
  c++;
}
  printf("division %d of%dis %d",i,b,c);
  printf("modulu %d of %dis 5d",a,b,c);
  return 0;
}
