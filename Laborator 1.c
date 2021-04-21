#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 float x1,x2,px,a,b,c;
 float x,F;
 int n;
 printf("Introduceti x1:  ");
 scanf("%f", &x1);
 printf("Introduceti x2:  ");
 scanf("%f", &x2);
 printf("Introduceti px:  ");
 scanf("%f", &px);
 printf("Introduceti a:  ");
 scanf("%f", &b);
 printf("Introduceti b:  ");
 scanf("%f", &b);
 printf("Introduceti c:  ");
 scanf("%f", &c);
 x=x1;
 n=0;
 printf("\n\t Results: \n");

  while(x<x2)
  {
      n=n+1;
      if((a+x<0)||(b!=0))
      {
          F=a*log(x)-(cos(x)/c);

      }
      else if((a+x>0) && (b==0))
      {
          F=sin((x-a)/(x-b));
      }
      else
      {
          F=exp(x)+((a+x*x)/c);
      }
      printf("%i: x=%.3f \t F= %.3f \n", n,x,F);
      x=x+px;
      }
      getch();
      return(0);

      }










