0x12_singly_linked_lists

When and why linked lists or arrays are used. How to build linked lists. And why to use linked lists. Using this data structure : /**

struct list_s - singly linked list
@str: string - (malloc'ed string)
@len: length of the string
@next: points to the next node
Description: singly linked list node structure */ typedef struct list_s { char *str; unsigned int len; struct list_s *next; } list_t;
