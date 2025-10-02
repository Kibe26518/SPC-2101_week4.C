/*
Name:KIBE MESHACK MACHARIA 
Reg no:CT101/G/26518/25
DATE:1st October 2025
Description:A program to show how a company charges units to consumers
*/
//preprocessor directive 
#include <stdio.h>

int main(){

  int water_units,charge_per_unit,total_bill;
  printf("Enter the amount of water units: \n");
  scanf("%d",&water_units);
  
  if(water_units >=0 && water_units<=30){
  printf("Charge Ksh.20 per unit\n");
  }
  else if(water_units >=31 && water_units <=60){
  printf("Charge Ksh.25 per unit\n");
  }
  else if(water_units >60){
  printf("Charge Ksh.30 per unit\n");
  }
  else{
  printf("No charge\n");
  }
  
  total_bill=water_units*charge_per_unit;
  printf("Total bill:Ksh.%d\n",total_bill);
  
  


  return 0;
  }