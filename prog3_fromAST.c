#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int aAAAAAAAA;
   int aAAAAAAA2;
   int bBBBBBBBB;
   int xXXXXXXXX;
   int cCCCCCCC1;
   int cCCCCCCC2;
   printf("Enter aAAAAAAAA:");
   scanf("%d", &aAAAAAAAA);
   printf("Enter bBBBBBBBB:");
   scanf("%d", &bBBBBBBBB);
   for (int aAAAAAAA2 = aAAAAAAAA; aAAAAAAA2 <= bBBBBBBBB; aAAAAAAA2++)
   printf("%d\n", (aAAAAAAA2 * aAAAAAAA2));
   for (int aAAAAAAA2 = bBBBBBBBB; aAAAAAAA2 <= aAAAAAAAA; aAAAAAAA2++)
   printf("%d\n", (aAAAAAAA2 * aAAAAAAA2));
   xXXXXXXXX = 0;
   cCCCCCCC1 = 0;
   while (cCCCCCCC1 < aAAAAAAAA)
   {
   {
   cCCCCCCC2 = 0;
   while (cCCCCCCC2 < bBBBBBBBB)
   {
   {
   xXXXXXXXX = (xXXXXXXXX + 1);
   cCCCCCCC2 = (cCCCCCCC2 + 1);
   }
   }
   cCCCCCCC1 = (cCCCCCCC1 + 1);
   }
   }
   printf("%d\n", xXXXXXXXX);
   xXXXXXXXX = 0;
   cCCCCCCC1 = 1;
   do
   {
   cCCCCCCC2 = 1;
   do
   {
   xXXXXXXXX = (xXXXXXXXX + 1);
   cCCCCCCC2 = (cCCCCCCC2 + 1);
   }
   while (!(cCCCCCCC2 > bBBBBBBBB));
   cCCCCCCC1 = (cCCCCCCC1 + 1);
   }
   while (!(cCCCCCCC1 > aAAAAAAAA));
   printf("%d\n", xXXXXXXXX);
   system("pause");
    return 0;
}
