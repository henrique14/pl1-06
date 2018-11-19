//
//  list.h
//  lista_ligada
//
//  Created by Henrique Pires on 19/11/2018.
//  Copyright © 2018 ATC. All rights reserved.
//

#ifndef list_h
#define list_h

#include <stdio.h>
#include <stdlib.h>

typedef struct user_s {
    unsigned int id;
    char nome[50];
    char username[50];
    char password[50];
} user_t;

typedef struct node_s {
    int data;
    struct node *next;
} node_t;

typedef struct list_s {
    node_t *head;
} list_t;

#endif /* list_h */
