#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *mid = NULL;
struct node *tail = NULL;
void list_print_karnewala();
void first_inser(int data);
struct node *first_delete()
{
    struct node *tempLink = head;
    head = head->next;
    return tempLink;
}
int length();

struct node *searching_wala(int key)
{
    struct node *mid = head;
    if (head == NULL)
    {
        return NULL;
    }
    while (mid->data != key) // whole list traverse karne wala
    {
        if (mid->next == NULL)
        {
            return NULL;
        }
        else
        {
            mid = mid->next; // next line jane wala
        }
    }
    return mid;
}

struct node *delete (int data)
{
    struct node *mid = head;
    struct node *previous = NULL;
    if (head == NULL)
    {
        return NULL;
    }
    while (mid->data != data)
    {
        if (mid->next == NULL) // if last hua to
        {
            return NULL;
        }
        else
        {
            previous = mid;
            mid = mid->next;
        }
    }
    if (mid == head)
    {
        head = head->next;
    }
    else
    {
        previous->next = mid->next;
    }
    return mid;
}

void sorting();
void middleNode();
int main()
{
    int i, n;
    int key;
    printf("\nenter the nodes u want to create \n");
    scanf("%d", &n);
    // srand(time(0));
    for (i = 0; i < n; i++)
    {
        first_inser(rand() % 100);
    }
    printf("\nbefore sorting the linked list is \n");
    list_print_karnewala();
    printf("\n");
    printf("\n");
    sorting();
    printf("\nafter sorting your linked list is  \n");
    list_print_karnewala();
    printf("\n");
    printf("\n");
    middleNode();
    printf("\n");
    printf("\n");
    printf("\nenter key which u want to search \n");
    scanf("%d", &key);
    struct node *temp = searching_wala(key);
    if (temp != NULL)
    {
        printf("key is found at node number %d\n", temp->data);
    }
    else
    {
        printf("not found sorry \n");
    }
    return 0;
}
void list_print_karnewala()
{
    struct node *ptr = head;
    printf(" %d ", ptr->data);
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
        printf(" %d ", ptr->data);
    }
}
void first_inser(int data)
{
    struct node *link = (struct node *)malloc(sizeof(struct node));
    link->data = data;
    link->next = head;
    head = link;
}
int length()
{
    int length = 0;
    struct node *mid;
    for (mid = head; mid != NULL; mid = mid->next)
    {
        length++;
    }
    return length;
}
void sorting()
{
    int i, j, k;
    int temp;
    struct node *mid;
    struct node *next;
    int size = length();
    k = size;
    for (i = 0; i < size - 1; i++, k--)
    {
        mid = head;
        next = head->next;
        for (j = 1; j < k; j++)
        {
            if (mid->data > next->data)
            {
                temp = mid->data;
                mid->data = next->data;
                next->data = temp;
            }
            mid = mid->next;
            next = next->next;
        }
    }
}
void middleNode()
{
    struct node *ptr = head;
    int count = 0;
    while(ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    ptr = head;
    for (int i = 0; i <count / 2; i++)
    {
        ptr= ptr->next;
        printc("Middle node is : %d ptr->data");
    }
}
