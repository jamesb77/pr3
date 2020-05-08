/*
  file: main.c
*/
#include "list.h"
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char * argv[])
{
  Node * head = NULL; /* must initialize it to NULL */

int again = 1;
int choice;
int num;
char error;

do { 
   printf("1: insert\n");
   printf("2: insert last\n");
   printf("3: search\n");
   printf("4: delete\n");
   printf("5: destroy\n");
   printf("6: print\n");
   printf("7: exit\n"); 
   printf("Enter a number for the operation you want to perform:\n");
   scanf("%d", &choice);
   
  switch(choice){
  	// insert
	case 1: 
	  printf("Enter the number you would like to insert: ");
	  scanf("%d", &num);
	  head = List_insert(head, num);
	break;
  	// insert last
  	case 2:
	  printf("Enter the number you would like to insert: ");
	  scanf("%d", &num);
	  head = List_insert_last(head, num);
	break;
	// search
	case 3:
	  printf("Enter the number you would like to search: ");
	  scanf("%d", &num);
	  if (List_search(head, num) != NULL)
	  {
	    printf("%d is in the list\n", num);
	  }
	  else
	  {
	    printf("%d is not in the list\n", num);
	  }
	break;
	// delete
	case 4:
	  printf("Enter the number you would like to delete: ");
	  scanf("%d", &num);
	  List_delete(head, num);
	break;
	// destroy
	case 5:
	  List_destroy(head);
	break;
	// print
	case 6:
	  List_print(head);
	break;
	// exit
	case 7:
	  printf("Exiting");
	  again = 0;
	break;
	default:  printf("Invalid entry. Please try again. \n");
	break;        
       }
   } while (again == 1);
  
   return 0;
}
