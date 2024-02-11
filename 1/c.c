#include <stdio.h>
#include <math.h>


int main()
{
    int i ;
    double a,b,c,d,x1,x2;
    
    do
    {
    
    printf("vvedite A: ");
    scanf("%lf", &a);
        
    printf("vvedite B: ");
    scanf("%lf", &b);
        
    printf("vvedite C: ");
    scanf("%lf", &c);

    printf("a= %lf b= %lf c= %lf \n", a, b, c);

    
    

    d=b*b-4*a*c;
    printf("d= %lf \n", d);
    

    if (d>0) 
        {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("x1= %lf x2= %lf \n", x1, x2);
        }        
    
        if(d==0) 
        {
            x1=(-b/(2*a));
            printf("x1= %lf \n");
        }
        
        if (d<0)
        {
        printf("net korney\n");
        }
   
    printf("prodolzhit?' 1- da, 2 - net: ");
    scanf("%d",&i);
    }
        
    while(i==1);
return 0;
}





























