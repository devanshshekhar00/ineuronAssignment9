#include <stdio.h>

int main()
{
   int n1,n2;char ch;
   printf("Choose operator - , + , - \t");
   scanf("%c",&ch);
   printf("Enter n1\t");scanf("%d",&n1);
   printf("Enter 2nd num\t");scanf("%d",&n2);
//   printf("%d",n1+n2);
  // printf("type e to exit");
   switch(ch)
   {
    
       default:
        printf("type e to exit");
        
       case '+':
        printf("%d",n1+n2);
        break;
       case '-':
         printf("%d",n1-n2);
         break;
        case '*':
        printf("%d",n1*n2);
        break;
        case '/':
        printf("%d",n1/n2);
        break;
        case 'e':
         exit(1);
        
   }
