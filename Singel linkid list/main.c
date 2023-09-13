#include "linkid_list.h"


int main() {
  // Node My_linkid_list  = {55 , NULL} ;
   Node *mylist = NULL ;
    insert_Node_End(&mylist) ;
    insert_Node_End(&mylist) ;
    insert_Node_End(&mylist) ;
    insert_Node_Beggin((&mylist)) ;
    insert_Node_After(&mylist , 2) ;

    Print_all(&mylist) ;
    printf("\n%u" , get_Length(&mylist)) ;




    return 0;
}
