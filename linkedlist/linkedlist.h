#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

typedef struct node {
    int value;
    struct node *next;
} node_t;

typedef struct {
    int size;
    node_t *head;
} linkedlist_t;

// Initializes a new linked list struct.
linkedlist_t *linkedlist_init();

// Returns the number of elements in the list.
int linkedlist_size(linkedlist_t *list);

// Returns whether the list contains any elements or not.
int linkedlist_is_empty(linkedlist_t *list);

// Returns the element at the given index.
int linkedlist_value_at(linkedlist_t *list, int index);

// Inserts an element at the start of the list.
void linkedlist_push_front(linkedlist_t *list, int value);

// Removes and returns an element from the start of the list.
int linkedlist_pop_front(linkedlist_t *list);

// Inserts an element at the end of the list.
void linkedlist_push_back(linkedlist_t *list, int value);

// Removes and returns an element from the end of the list.
int linkedlist_pop_back(linkedlist_t *list);

// Returns the first element on the list.
int linkedlist_front(linkedlist_t *list);

// Returns the last element on the list.
int linkedlist_back(linkedlist_t *list);

// Inserts an element at the given index of the list.
void linkedlist_insert(linkedlist_t *list, int index, int value);

// Removes an element at the given index.
void linkedlist_erase(linkedlist_t *list, int index);

// Returns the value at the nth position from the end of the list (1-based).
int linkedlist_value_n_from_end(linkedlist_t *list, int n);

// Removes the first occurrence of the given value from the list.
void linkedlist_remove_value(linkedlist_t *list, int value);

// Reverses all the elements in the list.
void linkedlist_reverse(linkedlist_t *list);

// Free all the resources held by the list. After this function is called, the list is no longer usable.
void linkedlist_free(linkedlist_t *list);

#endif
