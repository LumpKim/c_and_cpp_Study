//
// Created by 김재훈 on 10/10/2018.
//

#include <stdio.h>
#include "BinaryTree.h"

int main(void)
{

    BTreeNode * bt1 = MakeBTreeNode();
    BTreeNode * bt2 = MakeBTreeNode();
    BTreeNode * bt3 = MakeBTreeNode();
    BTreeNode * bt4 = MakeBTreeNode();

    SetData(bt1, 1);
    SetData(bt2, 2);
    SetData(bt3, 3);
    SetData(bt4, 4);

    MakeLeftSubTree(bt1, bt2);
    MakeRightSubTree(bt1, bt3);
    MakeLeftSubTree(bt2, bt4);

    // bt1의 왼쪽 자식 노드의 데이터 출력
    printf("%d  \n", GetData(GetLeftSubTree(bt1)));

    // bt1의 왼쪽 자식 노드의 왼쪽 자식 노드의 데이터 출력
    printf("%d  \n", GetData(GetLeftSubTree(GetLeftSubTree(bt1))));
}