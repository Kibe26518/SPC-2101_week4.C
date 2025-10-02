/*
Attendance:
Attendance>= 0.75,Eligible 
Attendance<0.75,Not eligible
Average mark:
Average mark>=40, Eligible
Average mark<40,Not eligible
Date:1st of October 2025
Description: Program to check student eligibility for final exams
*/
//preprocessor directive
#include<stdio.h>

int main() {
   //variable declaration 
   float attendance;
   int average_mark;
   printf("Enter the attendance(in fraction,e.g.,0.75 for 75%%: \n");
   scanf("%f",& attendance);
   
   printf("Enter the average_mark: \n");
   scanf("%d",& average_mark);
   
   if(attendance>=0.75 && average_mark>=40) {
     printf("Eligible for final exam\n");
   }
   else{
     printf("Not eligible for final exam\n");
   }
   return 0;
   }