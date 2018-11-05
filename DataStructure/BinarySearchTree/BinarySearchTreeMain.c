//
// Created by 김재훈 on 31/10/2018.
//

#include <stdio.h>
#include "BinarySearchTree.h"

int main(void) {
    int i;
    int insert_number[7] = {9, 1, 6, 2, 8, 3, 5};
    int secInsNum[4] = {1, 4, 6, 7};

    printf("asdf");

    BTreeNode *bstRoot;
    BTreeNode *sNode;      // search node

    BSTMakeAndInit(&bstRoot);

    for (i = 0; i < 7; i++) {
        BSTInsert(&bstRoot, insert_number[i]);
        printf("%d 삽입 완료", insert_number[i]);
    }

    for (i = 0; i < 4; i++) {
        sNode = BSTSearch(bstRoot, secInsNum[i]);
        if (sNode == NULL)
            printf("탐색 실패\n");
        else
            printf("탐색에 성공한 키의 값: %d \n", BSTGetNodeData(sNode));
    }

    return 0;
}