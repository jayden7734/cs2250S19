#include<stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct DataNode
{
   char name[50];
   char num[50];
   struct DataNode* nextNodePtr;
   
}DataNode;

void InsertDataAfter(DataNode* thisData, DataNode* newData);
void CreateDataNode(DataNode* thisData, char names[], char nums[], DataNode* newData);
void PrintTable(const DataNode* in);
void PrintHisto(const DataNode* in);

int main(void) {

   DataNode *headData = NULL;
   DataNode *currentData = NULL;
   DataNode *nextData = NULL;
   
   char title[50];
   char col1[50];
   char col2[50];
   char dataIn[50];
   int quit = 0;
   int commaCt = 0;
   char names[50];
   char nums[20];
   int validInt = 0;
   int i;
   
   
   printf("Enter a title for the data:\n");
   fgets(title, 49, stdin);
   title[strlen(title)-1] = '\0';
   printf("You entered: %s\n\n", title);
   printf("Enter the column 1 header:\n");
   fgets(col1, 49, stdin);
   col1[strlen(col1)-1] = '\0';
   printf("You entered: %s\n\n", col1);
   printf("Enter the column 2 header:\n");
   fgets(col2, 49, stdin);
   col2[strlen(col2)-1] = '\0';
   printf("You entered: %s\n\n", col2);/* Type your code here. */
   
   while(quit == 0)
   {
      printf("Enter a data point (-1 to stop input):\n");
      fgets(dataIn, 49, stdin);
      if(strcmp(dataIn, "-1") == 0)
      {
        quit = 1;
      }
      else
      {
         for(i = 0; i < strlen(dataIn); i++)
         {
            if(dataIn[i] == ',')
            {
               commaCt++;
            }
         }
         if(commaCt == 0)
         {
            printf("Error: No comma in string.\n\n");
         }
         else if(commaCt > 1)
         {
            printf("Error: Too many commas in input.\n\n");
         }
         else
         {
            sscanf(dataIn, " %20[^,],%s", names, nums);
            for(i = 0; i < strlen(nums); i++)
            {
               if(!isdigit(nums[i]) && !isspace(nums[i]))
               {
                  validInt++;
               }
            }
            if(validInt > 0)
            {
               printf("Error: Comma not followed by an integer.\n\n");
            }
            else
            {    
               nextData = (DataNode*) malloc(sizeof(DataNode));
               if(currentData == NULL)
               {
                  headData = nextData;
               }
               else
               {
                  InsertDataAfter(currentData, nextData);
               }
               printf("Data string: %s\n", names);
               printf("Data integer: %s\n\n", nums);
               
               CreateDataNode(nextData, names, nums, NULL);
               
               currentData = nextData;
            }
         }
      }   
      commaCt = 0;
      validInt = 0;
   } //end of while loop
   //Print Table
   printf("\n");
   for(i = 0; i < (42 - strlen(title))/2; i++)
   {
      printf(" ");
   }
   printf("%s\n", title);
   printf("%s", col1);
   for(i = 0; i < (20 - strlen(col1)); i++)
   {
      printf(" ");
   }
   printf("|");
   for(i = 0; i < (23 - strlen(col2)); i++)
   {
      printf(" ");
   }
   printf("%s\n", col2);
   printf("--------------------------------------------\n");
   currentData = headData;
   while(currentData != NULL)
   {
      PrintTable(currentData); 
      currentData = currentData->nextNodePtr;
   }
   printf("\n");
   currentData = headData;
   while(currentData != NULL)
   {
      PrintHisto(currentData);
      currentData = currentData->nextNodePtr;
   }

   return 0;
}

void InsertDataAfter(DataNode* thisData, DataNode* newData)
{
   thisData->nextNodePtr = newData;
}

void CreateDataNode(DataNode* thisData, char names[], char nums[], DataNode* newData)
{
   strcpy(thisData->name,names);
   strcpy(thisData->num,nums);
   InsertDataAfter(thisData, newData);
   return;
}

void PrintTable(const DataNode* in)
{
   int i;
   printf("%s", in->name);
   for(i = 0; i < (20 - strlen(in->name)); i++)
   {
      printf(" ");
   }
   printf("|");
   for(i = 0; i < (23 - strlen(in->num)); i++)
   {
      printf(" ");
   }
   printf("%s\n", in->num);
}
void PrintHisto(const DataNode* in)
{
   int i;
   int number = atoi(in->num);
   
   for(i = 0; i < (20 - strlen(in->name)); i++)
   {
      printf(" ");
   }
   printf("%s ", in->name);
   for(i = 0; i < number; i++)
   {
      printf("*");
   }
   printf("\n");
}
