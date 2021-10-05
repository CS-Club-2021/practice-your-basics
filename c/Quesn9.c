#include<stdio.h>
#include<math.h>

int main()
{
    int n,x,a,b,c,d;
    printf("Displaying the numbers between 1000 and 3000 whose every digit is even\n");
    
    
    for(n=2000; n<=3000; n=n+1) // 2002 is the first number in the given range which is divisible by 7 and not a multiple of 5
    {  
       x=n;
       a=(n%10)%2;            
       n=n/10;         
       b=(n%10)%2;        
       n=n/10;              
       c=(n%10)%2;          
       d=(n/10)%2;
       n=x;
       
       if(a==0 && b==0 && c==0 && d==0)
         printf("%d,",x);
    }
    
    
return 0;

}
