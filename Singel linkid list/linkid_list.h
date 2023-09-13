/**
 * @author : Created by engmu on 9/10/2023.
 *
 * */

#ifndef LINKID_LIST_LINKID_LIST_H
#define LINKID_LIST_LINKID_LIST_H

#include <stdlib.h>
#include <stdio.h>

typedef  struct l {
   unsigned int Node_data ;
   struct Node * Node_link ;

}Node ;
/* Function Declaration */
void insert_Node_Beggin ( Node ** list );
void insert_Node_End ( Node ** list );
void Print_all (Node **list) ;
void insert_Node_After (Node ** list , unsigned int position ) ;
unsigned int get_Length (Node ** list );

#endif //LINKID_LIST_LINKID_LIST_H
