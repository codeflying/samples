#include <stdio.h>
#include <stdlib.h>

struct node
{
	struct node *next;
	int data;
};

struct node * reverse_help(struct node *l, struct node *r)
{
	if (r == NULL)
		return l;

	struct node *nl = r;
	r = r->next;
	nl->next = l;

	return reverse_help(nl, r);
}

struct node * reverse(struct node *n)
{
	return reverse_help(NULL, n);
}

struct node *createNode(int num)
{
	struct node *p = malloc(sizeof(struct node));
	p->next = NULL;
	p->data = num;
	return p;
}

void printfNode(struct node *l)
{
	struct node *p = l;
	while (p != NULL) {
		printf("%d\n", p->data);
		p = p->next;
	}
}

int main(int argc, char const *argv[])
{
	struct node *p = createNode(2);
	struct node *q = createNode(3);
	struct node *r = createNode(5);
	struct node *s = createNode(7);
	struct node *t = createNode(11);
	struct node *o = createNode(13);

	p->next = q;
	q->next = r;
	r->next = s;
	s->next = t;
	t->next = o;

	printfNode(p);

	printf("-----------------------------------\n");

	struct node *rev = reverse(p);

	printfNode(rev);

	return 0;
}
