#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
   printf("%s(): Welecome to my test suite.\n", __func__);

   printf("%s(): As it continues to grow, I'll keep branching off of main for individual tests.\n\n", __func__); 

   return 1;
}
