//
//  list.c
//  lista_ligada
//
//  Created by Henrique Pires on 19/11/2018.
//  Copyright © 2018 ATC. All rights reserved.
//

#include "list.h"

//  list_t* new_list(list_t* new_list) {
//        list_t = ((*list_t)(malloc(sizeof(*node_t)));
//  }
list_t* list_new()
{
    list_t *list;
    list = (list_t*)malloc(sizeof(list_t));
    list->head = NULL;
    return list;
}

