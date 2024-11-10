#include<stdio.h>
 
 void main()
 {
     int num;
     printf("\n enter num to find factorial=");
     scanf("%d",&num);
     printf("\n factorial=%d",fact(num));
 }
 
 int fact(int no)
 {
     int ans;
     if(no==1)
         return 1;
     else
     {
         ans=no*fact(no-1);
         return ans;   
     }    
 }