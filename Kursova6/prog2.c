#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int aAAAAAAAA, bBBBBBBBB, cCCCCCCCC;
   printf("Enter aAAAAAAAA:");
   scanf("%d", &aAAAAAAAA);
   printf("Enter bBBBBBBBB:");
   scanf("%d", &bBBBBBBBB);
   printf("Enter cCCCCCCCC:");
   scanf("%d", &cCCCCCCCC);
   if ((aAAAAAAAA > bBBBBBBBB))
   {
   if ((aAAAAAAAA > cCCCCCCCC))
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", cCCCCCCCC);
   goto Outofif;
Abigger:
   printf("%d\n", aAAAAAAAA);
   goto Outofif;
   }
   }
   if ((bBBBBBBBB < cCCCCCCCC))
   {
   printf("%d\n", cCCCCCCCC);
   }
   else
   {
   printf("%d\n", bBBBBBBBB);
   }
Outofif:
   if (((aAAAAAAAA == bBBBBBBBB) && (aAAAAAAAA == cCCCCCCCC) && (bBBBBBBBB == cCCCCCCCC)))
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((aAAAAAAAA < 0) || (bBBBBBBBB < 0) || (cCCCCCCCC < 0)))
   {
   printf("%d\n", -1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if ((!(aAAAAAAAA < (bBBBBBBBB + cCCCCCCCC))))
   {
   printf("%d\n", (10));
   }
   else
   {
   printf("%d\n", (0));
   }
   system("pause");
    return 0;
}
