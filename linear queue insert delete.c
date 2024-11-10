#include<stdio.h>
 int Q[100],MAX=5, ITEM, R=-1, F=1;
  
  int isfull()
  {
      if(R==MAX-1) 
      {
       return 1;
      } 
      else
       return 0;
  }
  
  int isempty()
  {
     if(F==-1)
     {
         return 1;
     }
     else
      return 0;
  }
  
  int insert()
  {
     if(isfull())
     {
        printf("queue is full");
     }
     else
     {
        printf("\n enter no to insert=");
        scanf("%d",&ITEM);
        if(R==-1)
           F=R=0;
        else
          R=R+1;
          printf("\n %d inserted",ITEM);
        Q[R]=ITEM;
     }
  }
  
  int delete()
  {
      if(isempty())
         printf("queue is empty");
      else
      {
         ITEM=Q[F];
         if(F==R)
           F=R=-1;
         else
           F=F+1;
         printf("\n %d deleted",ITEM);    
      }   
  }
  
  int main()
  {
  insert();
  insert();
  insert();
  insert();
  delete();
  delete();
  
  }