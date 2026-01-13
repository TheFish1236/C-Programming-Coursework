#include <stdio.h>
#include <stdlib.h>
double GetAverage(int* houseArray, int numHouses);
void FillArray(int* array, int numHouses);
int* AllocateMemory(int numberOfHouses);

int main()
{
   ///////////////////////////////////////////////////////////
   //Do not touch the Main function!  Everything is fine here!
   int numberOfHouses;
   printf("How many houses are there?\n");
   scanf("%d", &numberOfHouses);

   int* houseArray = AllocateMemory(numberOfHouses);

   FillArray(houseArray, numberOfHouses);
   double avgCarCount = GetAverage(houseArray, numberOfHouses);
   
   printf("The average car count is: %.2f", avgCarCount);
   ///////////////////////////////////////////////////////////
}

double GetAverage(int* houseArray, int numHouses)
{
   int total = 0;
   for (int i=0;i<numHouses; i++){
      total+=houseArray[i];
   }
   return (double) total/numHouses;
}

void FillArray(int* array, int numHouses)
{
   for (int i=0;i<numHouses; i++){
      int current;
      printf("House num %d: ", i+1);
      scanf("%d", &current);
      array[i] = current;
   }
}

int* AllocateMemory(int numberOfHouses)
{
   int* houses = (int *) malloc(sizeof(int) * numberOfHouses);
   return houses;
}