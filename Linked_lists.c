// https://www.learn-c.org/en/Linked_lists
// You must implement the function remove_by_value which receives a double pointer to the head and removes the first item in the list which has the value val.

#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int val;
    struct node * next;
}   node_t;

void print_list(node_t * head) 
{
    node_t * current = head;

    while (current != NULL) 
    {
        printf("%d\n", current->val);
        current = current->next;
    }
}

int pop(node_t ** head) 
{
    int retval = -1;
    node_t * next_node = NULL;

    if (*head == NULL) 
    {
        return -1;
    }

    next_node = (*head)->next;
    retval = (*head)->val;
    free(*head);
    *head = next_node;

    return retval;
}

/* this actually was hard */
int remove_by_value(node_t ** head, int val) 
{
    node_t * current = (*head); // create and set current position in node tree
    node_t * next_node = NULL; // create next node in node tree
    node_t * prev_node = NULL; // create previous node in node tree
    int ret = -1; // create and set return value
    while (ret == -1) // while return value is error / not found
    {
        if (current->val == val) // if current pointer's value is the desired value
        {
            next_node = current->next; // set next_node to the next node in the node tree
            free(current); // deallocate the current node in node tree
            current = prev_node; // set current node in node tree to previous node in node tree
            current->next = next_node; // set next node in node tree to next node in node tree 
            ret = 0; // return 0, it worked!
        }
        else // if current pointer's value is not the desired value
        {
            prev_node = current; // set prev_node to the current node in node tree that will then be the previous node in the next iteration
            current = current->next; // set current node in node tree to the next node in node tree, basically iterating thorugh the tree
            if (current == NULL){ break; } // if the now current node in node tree is NULL, we hit the end of the node tree and return return value
            ret = -1; // not necessary, but makes sure that the return is still -1
        }
    }
    return ret;
}

int main() {

    node_t * test_list = (node_t *) malloc(sizeof(node_t));
    test_list->val = 1;
    test_list->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->val = 2;
    test_list->next->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->next->val = 3;
    test_list->next->next->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->next->next->val = 4;
    test_list->next->next->next->next = NULL;

    remove_by_value(&test_list, 3);

    print_list(test_list);
}