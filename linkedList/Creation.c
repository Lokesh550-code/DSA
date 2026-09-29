#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *nextptr;
};

struct Node *createNode(int value)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = value;
    node->nextptr = NULL;

    return node;
}

struct Node *createList(int n)
{
    int data;
    struct Node *temp;

    struct Node *HeadNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data for head node: ");
    scanf("%d", &data);
    HeadNode->data = data;
    HeadNode->nextptr = NULL;
    temp = HeadNode;

    for (int i = 1; i < n; i++)
    {
        struct Node *node = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data for %d node: ", i + 1);
        scanf("%d", &data);
        node->data = data;
        node->nextptr = NULL;
        temp->nextptr = node;
        temp = node;
    }

    return HeadNode;
}

int main()
{
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    struct Node *headNode = createList(n);
    struct Node *temp = headNode;

    while (temp != NULL)
    {
        printf("Data: %d\n", temp->data);
        temp = temp->nextptr;
    }

    return 0;
}
