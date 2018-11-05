//
// Created by 김재훈 on 29/10/2018.
//

#include<stdio.h>
#include<stdlib.h>

typedef int DATATYPE;
typedef struct DATA Node;
struct DATA{
    DATATYPE item;
    Node* next;
};

Node* InsertSort(Node* ptr, int dat)
{
    Node* New = (Node*)malloc(sizeof(Node));
    New->item = dat;
    New->next = NULL;
    if(ptr == NULL)
    {
        return New;
    }
    Node* curr = ptr;
    while(curr->item < dat && curr->next != NULL)
    {
        curr = curr->next;
    }
    if(curr == ptr && curr->item < dat)
    {
        ptr->next = New;
        return ptr;
    }
    else
    {
        Node* back = ptr;
        while(back->next != curr)
        {
            back = back->next;
        }
        New->next = curr;
        back->next = New;
        return ptr;
    }
}

void PrintList(Node* ptr)
{
    Node* curr = ptr;
    while(curr != NULL)
    {
        printf("%d -> ", curr->item);
        curr = curr->next;
    }
    printf("\n\n");
}

Node* Head;

int main(void)
{
    int array[5] = {32, 98, 56, 73, 85};
    int a;
    for(a=0; a<5; a++)
    {
        Head = InsertSort(Head, array[a]);
        PrintList(Head);
    }

}