//Vishnu Kumar
//ME20B2001
// Question 16


#include <stdio.h>
#include <string.h>
int main()
{
  char x[1000], y[1000];

  printf("Enter first string:\n");
  scanf("%[^\n]%*c",x);        //Here, [] is the scanset character. ^\n tells to take input until newline doesn’t get encountered. 

  printf("Enter second string:\n");
  scanf("%[^\n]%*c",y);
  
  strcat(x, y);  // Concating strings

  printf("String obtained after concatenation: %s\n", x);

  return 0;
}
