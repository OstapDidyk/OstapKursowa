#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int aAAAAAAAA;
   int bBBBBBBBB;
   int xXXXXXXXX;
   int yYYYYYYYY;
   printf("Enter aAAAAAAAA:");
   scanf("%d", &aAAAAAAAA);
   printf("Enter bBBBBBBBB:");
   scanf("%d", &bBBBBBBBB);
   printf("%d\n", (aAAAAAAAA + bBBBBBBBB));
   printf("%d\n", (aAAAAAAAA - bBBBBBBBB));
   printf("%d\n", (aAAAAAAAA * bBBBBBBBB));
   printf("%d\n", (aAAAAAAAA / bBBBBBBBB));
   printf("%d\n", (aAAAAAAAA % bBBBBBBBB));
   xXXXXXXXX = (((aAAAAAAAA - bBBBBBBBB) * 10) + ((aAAAAAAAA + bBBBBBBBB) / 10));
   yYYYYYYYY = (xXXXXXXXX + (xXXXXXXXX % 10));
   printf("%d\n", xXXXXXXXX);
   printf("%d\n", yYYYYYYYY);
   system("pause");
    return 0;
}
