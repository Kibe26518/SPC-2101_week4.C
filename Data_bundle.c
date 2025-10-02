/*
Name:KIBE MESHACK MACHARIA 
Reg no:CT101/G/26518/25
Date:1st October 2025
Description:A program to show internet data bundle offer for a local service provider 
*/
//preprocessor directive 
#include <stdio.h>

int main(){ 
   int option;
   int bundle;
   int cost;
   printf("Available data bundle offers: \n");
   printf("1. 100MB @ 50 KES\n");
   printf("2. 500MB @ 200 KES\n");
   printf("3. 1GB @ 350 KES\n");
   printf("4.  2GB @ 600 KES\n");
   
   printf("\nEnter the option number: ");
   scanf("%d",&option);
   
   switch(option){
     case 1:
        bundle=100;
        cost=50;
        break;
     case 2:   
        bundle=500;
        cost=200;
        break;
     case 3:
        bundle=1000;
        cost=350;
        break;
     case 4:
        bundle=2000;
        cost=600;
        break;
     
     default:
        printf("Invalid option selected!\n");
        
        return 0;
        }
        
        printf("\n You have %d bundle costing %d KES.\n",bundle,cost);

  return 0;
  }