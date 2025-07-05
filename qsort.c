#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZEOFARRAY 100

// Create a linked list
typedef struct Node {
   int number;
   struct Node* next;
} Node;

int main()
{
   int array[SIZEOFARRAY] = {0};
   int num = 0;
   int loop = 0;
   int currentNum = 0;
   int shiftNum = 0;
   int innerLoop = 0;
   int printLoop = 0;

   struct Node* arrayOfLists[100];

   for (loop = 0; loop < 100; loop++)
   {
      arrayOfLists[loop] = NULL;
   }

   printf("Input Num: ");
   scanf("%d", &array[currentNum++]);
   printf("%s(): First number<%d>.\n", __func__, array[0]);

   while( scanf("%d", &num ) == 1 )
   {
      printf("%s(): Next num<%d>.\n", __func__, num);
      array[currentNum++] = num;
      
      for ( loop = 0; loop < SIZEOFARRAY; loop++)
      {
         if ( num > array[loop] )
         {
	    shiftNum = array[loop];
	    array[loop] = num;
	  

	    if ( 1 )// 0 != (array[loop +1]) )
	    {
	       /* This will handle if loop is greater than SIZEOFARRAY */
	       for ( innerLoop = (loop + 1); innerLoop < SIZEOFARRAY; innerLoop++ )
	       {
	          array[innerLoop] = shiftNum;

	          if ( (SIZEOFARRAY > (innerLoop + 1)) && (0 != array[innerLoop +1]) )
	          {
	             //shiftNum = array[innerLoop + 1];
	             shiftNum = array[innerLoop];
		     printf("loop<%d> innerLoop<%d> shiftNum<%d>\n", loop, innerLoop, shiftNum);
	          }
	          else
	          {
		     /* Get out of here. */
	             break;
	          }
	       }  
	    
	    printf("\n");
	    printf("Current Iteration ");
	    for (printLoop = 0; printLoop < SIZEOFARRAY; printLoop++)
	    {
               if ( 0 != array[printLoop] )
               {      
                  printf("%d ", array[printLoop]);
	       }
	    }
	    printf("\n");

	    
	    }
	 }
	 break;
      }
   }
     
   printf("\n\n\n"); 
   printf("%s(): Final Array:\n", __func__);
   for ( loop = 0; loop < SIZEOFARRAY; loop++ )
   {
      if ( 0 != array[loop] )
      {   
         printf("%d ", array[loop]);
      }
   }
   printf("\n");

#if 0
   printf("New arraryOfLists, Input Num: ");
   arrayOfLists[0]->number = 5;
   //scanf("%d" arrayOfLists[0]->number);
   printf("%s(): first num<%d>.\n", __func__, arrayOfLists[0]->number); 
#endif


   return 1;
}
