#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <malloc.h>
typedef struct
{
	int value;
	void* previous_node;
}node_t;

typedef struct
{
	node_t* last_node;
	int len;
}linked_list_t;


void Add(linked_list_t* ll, int val)
{
	node_t* new_node = malloc(sizeof(node_t));
	new_node->value = val;

	new_node->previous_node = ll->last_node;
	ll->last_node = new_node;
	ll->len++;
}

linked_list_t ll;
void main()
{
	Add(&ll, 1);
	Add(&ll, 2);
	Add(&ll, 3);
	Add(&ll, 4);


}
