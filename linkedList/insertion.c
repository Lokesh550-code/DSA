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

    printf("Enter the data for head node: ");
    scanf("%d", &data);
    struct Node *HeadNode = createNode(data);
    temp = HeadNode;

    for (int i = 1; i < n; i++)
    {
        printf("Enter the data for %d node: ", i + 1);
        scanf("%d", &data);
        struct Node *node = createNode(data);
        temp->nextptr = node;
        temp = node;
    }

    return HeadNode;
}

struct Node *insertNodeAtStart(struct Node *head, int value)
{
    struct Node *node = createNode(value);
    struct Node *temp = head;
    node->nextptr = temp;

    return node;
}

struct Node *insertNodeAtEnd(struct Node *head, int value)
{
    struct Node *node = createNode(value);
    struct Node *temp = head;

    while (temp != NULL)
    {
        if (temp->nextptr == NULL)
        {
            break;
        }
        temp = temp->nextptr;
    }

    temp->nextptr = node;
    return head;
}

struct Node *insertNodeAtK(struct Node *head, int value, int pos)
{
    struct Node *temp, *node;
    node = createNode(value);
    temp = head;

    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->nextptr;
    }
    node->nextptr = temp->nextptr;
    temp->nextptr = node;

    return head;
}

int main()
{
    int n, value, pos;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    struct Node *headNode = createList(n);
    struct Node *temp = headNode;

    printf("Enter the Value of new node: ");
    scanf("%d", &value);

    printf("Enter the position of new node: ");
    scanf("%d", &pos);

    headNode = insertNodeAtK(headNode, value, pos);
    temp = headNode;

    printf("After insertion \n");
    while (temp != NULL)
    {
        printf("Data: %d\n", temp->data);
        temp = temp->nextptr;
    }

    return 0;
}
