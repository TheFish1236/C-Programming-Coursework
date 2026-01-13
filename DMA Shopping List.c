#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char** AllocateShoppingList(int numFoods);
char* AllocateItem();
int DetermineNumberOfCandy(char** list, int numFoods);

int main()
{
   int numfood = 0;
   char** shoplist;

   printf("How many foods on your list?\n");
   scanf("%d", &numfood);

   shoplist = AllocateShoppingList(numfood);

   for(int i=0;i<numfood;i++){
      shoplist[i] = AllocateItem();
   }
   
   printf("%d", DetermineNumberOfCandy(shoplist, numfood));
   
   for(int i=0;i<numfood;i++){
      free(shoplist[i]);
   }
   free(shoplist);

   return 0;
}

int DetermineNumberOfCandy(char** list, int numFoods)
{
   int count = 0;
   
   for(int j=0;j<numFoods;j++){
      if (strcmp(list[j], "candy") == 0){
         count++;
      }
   }
   
   return count;
}

char** AllocateShoppingList(int numFoods)
{
   char** list = (char**)malloc(numFoods * sizeof(char*));
   return list;
}

char* AllocateItem()
{
   char input[100];
   printf("Input item: ");
   scanf("%s", input);

   char* item = (char*)malloc((strlen(input)+1)*sizeof(char));
   strcpy(item, input);

   return item;
}