#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct library{
   char bookname[50];
   char author[50];
   int noofpages;
   float price;
};
int main(){
   struct library lib[100];
   char bookname[30];
   int i,j, keepcount;
   i=j=keepcount = 0;
   while(j!=6){
      printf("1. Add book information \n");
      printf("2.Display book information\n");
      printf("3. no of books in the library\n");
      printf("4. Exit\n");
      printf ("Enter one of the above : ");
      scanf("%d",&j);
      switch (j){
         /* Add book */
         case 1:
            printf ("Enter book name = ");
            scanf ("%s",lib[i].bookname);
            printf ("Enter author name = ");
            scanf ("%s",lib[i].author);
            printf ("Enter pages = ");
            scanf ("%d",&lib[i].noofpages);
            printf ("Enter price = ");
            scanf ("%f",&lib[i].price);
            keepcount++;
            i++;
            break;
         case 2:
            printf("you have entered the following information");
            for(i=0; i<keepcount; i++){
               printf ("book name = %s",lib[i].bookname);
               printf ("\t author name = %s",lib[i].author);
               printf ("\t pages = %d",lib[i].noofpages);
               printf ("\t price = %f",lib[i].price);
            }
            break;
         case 3:
            printf("No of books in library : %d", keepcount);
            break;
         case 4:
            exit (0);
      }
   }
   return 0;
}
