//
//  main.c
//  lista_ligada2
//
//  Created by Henrique Pires on 19/11/2018.
//  Copyright © 2018 ATC. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cliente {
    char user[50];
    char pass[50];
};

struct node_s {
    struct cliente data;
    struct node_s *next;
};

struct list_s {
    struct node_s *head;
};

struct node_s* new_node() {
    struct node_s *node;
    node=(struct node_s*)malloc(sizeof(struct node_s));
    return node;
}

void free_node (struct node_s* node) {
    if(node != NULL)
        free(node);
}

void print_list (struct list_s *lst) {
    struct node_s *ptr = lst->head;
if (lst->head == NULL) printf("Lista Vazia");
else {
    ptr = lst->head;
    while (ptr!=NULL) {
        printf("%s\n", ptr->data.user);
        ptr = ptr->next;
    }
}
}

int main(int argc, const char * argv[]) {
    
    struct list_s *myList = NULL;
    struct node_s *n3,*n2,*n1;
    
    //criação estática da lista
    n1 = new_node();
    n2 = new_node();
    n3 = new_node();
    n1->next = n2;
    strcpy(n1->data.user, "Henrique");
    strcpy(n1->data.pass, "henrique14");
    
    strcpy(n2->data.user, "Tmendes");
    strcpy(n2->data.pass, "tmendes123");
    n2->next = n3;
    
    strcpy(n3->data.user, "Emanuel");
    strcpy(n3->data.pass, "eman");
    n3->next = NULL;
    
    myList->head = n1;
    //struct list_s *lst = myList->head;
    
    print_list(myList);
    
    return 0;
}
