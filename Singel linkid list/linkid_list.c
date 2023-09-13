/**
 * @author :  Created by Muhammad Osama EL-araby  on 9/10/2023.
 * @brief  :  Linkid list Data structure in C Programming
 */


#include "linkid_list.h"

void insert_Node_Beggin ( Node ** list ){
    /*Creating Temp Node  */
 Node *TempNode  = (Node * ) malloc(sizeof(Node));

 /* Checking if Node Created Successfully  Temp_Node contain address of the Node */
 if (TempNode != NULL )
 {
     /*Enter the Node Data */
     printf("Enter Ur Data : " ) ;
     scanf("%u" , &TempNode->Node_data) ;


     /*Checking if Linkid list  is Empty */
     if (*list == NULL)
     {
         /* list is Empty */
         TempNode -> Node_link = NULL ;
         *list  =  TempNode;


     }
     else
     {
         /* linkid list Node is not Empty */

            TempNode -> Node_link = (struct Node *) *list;
            *list = TempNode ;

     }


 }
 else {/*Do Nothing */}

}
void insert_Node_End ( Node ** list ){

        /*Creating Temp-Node */
    Node *TempNode = (Node *)  malloc(sizeof(Node)) ;
    Node * LastNode = NULL ;
    /* Checking if Node Created Successfully  Temp_Node contain address of the Node */
    if (TempNode!=NULL)
    {
        printf("Enter ur Data : ") ;
        scanf("%u" ,&(TempNode->Node_data) );

        /* Node_link = NULL   bec : last Node in all linkid list */
        TempNode -> Node_link = NULL ;

        /*Checking if Linkid list  is Empty */
        if(*list == NULL ){

            *list = TempNode ;

        }
        else{
            LastNode = *list ;

            /*Move through all Nodes to the last One */
            while (LastNode->Node_link!=NULL ){
                LastNode =  LastNode->Node_link ;
            }
            LastNode->Node_link = TempNode ;
        }

    }
    else {/*Do Nothing */}

}
void Print_all (Node **list) {

    Node *mylist = NULL  ;

    /*Checking if Linkid list  is Empty */
    if ( *list !=NULL){
        mylist  = *list ;
        
        while ( mylist->Node_link != NULL ) {

        printf("%u ", mylist->Node_data);

        /* Move through all the Nodes */
           mylist = mylist->Node_link;
        }

        /*Print the data in Final Node */
       printf( "%u",mylist->Node_data) ;

    }
    else{/*Do Nothing*/}
}



void insert_Node_After (Node ** list , unsigned int position ) {

    Node * mylist = *list ;
      /*Get the length of all list  */
    unsigned int list_Length  = get_Length (list)  , list_counter = 1 ;

    /*Check if the Position of node larger than list length */
    if (position > list_Length )
    {
        printf("Invalid ! \nlist length = %i ", list_Length);
    }
    else {
        /*Creating TempNode */
        Node *TempNode = (Node *) malloc(sizeof(Node)) ;
        /*Check the malloc get the memory location Successfully */
        if(TempNode!=NULL)
        {
            /*Taking the data of Node*/
            printf("Enter ur Data in special position  : ") ;
            scanf("%u" , & (TempNode->Node_data)) ;

            /*Move through the Node to the needed Position */
            while (list_counter<position)
            {
               mylist =  mylist->Node_link ;
                list_counter++ ;
            }
            /*Connect right side of the Node*/
            TempNode->Node_link = mylist->Node_link ;

            /*Connect left  Side of the Node  */
            mylist->Node_link = TempNode ;

        }

        else {/* Do Nothing */}
    }

}


unsigned int get_Length (Node ** list )
{
    unsigned int list_Counter = 0 ;
    /*Checking if Linkid list  is Empty */
    if(*list !=NULL)
    {
        /*Make Copy of List Head Address */
         Node *mylist = *list ;
          list_Counter = 1 ;
         while (mylist->Node_link!= NULL)
         {
             mylist = mylist->Node_link ;
             list_Counter ++ ;
         }

    }
    else {/*Do Nothing*/}

    /*if the function return  0  that means no list  */
    return list_Counter ;

}