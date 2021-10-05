#include<stdio.h>
#include<math.h>

int main()
{
    int n,i;
    printf("Displaying the number divisible by 7 and not multiple of 5 between 2000 and 3200\n");
    
    for(n=2002; n<=3200; n=n+7) // 2002 is the first number in the given range which is divisible by 7 and not a multiple of 5
    {
        i=n%5;
        if(i!=0)
        {
          printf("%d,",n);
        }
    }
    
return 0;
}
