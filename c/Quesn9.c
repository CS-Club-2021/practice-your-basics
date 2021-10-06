// Vishnu Kumar
// ME20B2001
// Question -9

#include<stdio.h>
#include<math.h>

int main()
{
    int n,r,x,p,q;
    
    printf("Enter the range to find numbers whose every digit is even:\n");
    printf("Starting number:");
    scanf("%d",&p);
    printf("Ending number:");
    scanf("%d",&q);
    
    
    for(n=p; n<=q; n=n+1) 
    { 

       x=n;
   
       while(n>0)
       {
           r=(n%10)%2;
          
           if(r==0)
           {
              n=n/10;
              if(n==0)
                 break;
           }
           
           else if(r==1)
           {
              break;
           }
           
       }
       
       if(n==0)
       {
           printf("%d,",x);
           n=x;
           continue;
       }
       
       n=x;
    }
    
    
return 0;
}
