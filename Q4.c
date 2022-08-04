#include <stdio.h>

int main()
{
   int n1,n2,n3,k;
   printf("Side1 \t");
   scanf("%d",&n1);
   printf("Side2 \t");
   scanf("%d",&n2);
   printf("Side3 \t");
   scanf("%d",&n3);
   if(n3*n3 == n1*n1 + n2*n2 || n2*n2 == n1*n1 + n3*n3 || n1*n1 == n2*n2 + n3*n3){ k =1;}
   else if(n1 == n2 && n1 == n3) { k =2;}
   else if(n3==n2 || n1 == n2 || n1 == n3){ k =3;}
   else { k =4;}
   //printf("%d",k);
   
   switch(k)
   {
        
       case 1:
        printf("Right angles triangle");
        break;
       case 2:
         printf("Equilateral triangle");
         break;
        case 3:
         printf("isoceles triangle");
         break;
        default:
         break;
        
        
        
   }

    return 0;
}
