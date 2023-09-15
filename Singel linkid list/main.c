#include "linkid_list.h"

void Program_menu ()
{
    printf("=======================================\n") ;
    printf("1- Insert Node At Begging   \n") ;
    printf("2- Insert Node At End \n") ;
    printf("3- Insert Node After \n") ;
    printf("4- Delete At Begging  \n") ;
    printf("5- delete Note  \n") ;
    printf("6- Get Length \n") ;
    printf("7- Display all Nodes \n") ;
    printf("8- Exit \n");
    printf("=======================================\n") ;
}
int main() {
printf("\t Welcome To Linked list Program \n") ;
   Node *List_Head = NULL ;
   unsigned int User_Choice ;
    Program_menu() ;
    while (1)
    {
        printf("Enter Ur Choice : ") ;
        scanf("%u" , &User_Choice) ;

        if (User_Choice== 8 )
        {
            free(List_Head) ;
            printf("******************\n");
            printf("*      Thanks    *\n") ;
            printf("******************\n") ;

            break ;
        }else if (User_Choice== 1 )
        {
            insert_Node_Beggin(&List_Head);
        }
        else if (User_Choice== 2 )
        {
            insert_Node_End(&List_Head) ;
        }
        else if (User_Choice== 3)
        {
            printf("Enter the Position : ") ;
            unsigned  int  pos ; scanf("%u" ,&pos) ;
            insert_Node_After(&List_Head ,pos ) ;
            printf("\n") ;
        }
        else if (User_Choice== 4)
        {
            Delete_Node_At_Begging(&List_Head) ;
        }
        else if (User_Choice== 5)
        {

        }
        else if (User_Choice== 6)
        {
            printf("%u" , get_Length(&List_Head)) ;
        }
        else if (User_Choice== 7)
        {
            Print_all(&List_Head) ;
        }
        else {
            printf("Choose Numbers From 1 -> 8 \n") ;
        }

    }





    return 0;
}
