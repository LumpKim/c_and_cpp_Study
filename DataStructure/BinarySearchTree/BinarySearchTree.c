//
// Created by 김재훈 on 31/10/2018.
//

#include <stdio.h>
#include "../BinaryTree/BinaryTree2.h"
#include "BinarySearchTree.h"

void BSTMakeAndInit(BTreeNode **pRoot) {
    *pRoot = NULL;
}

BSTData BSTGetNodeData(BTreeNode *bst) {
    return GetData(bst);
}

void BSTInsert(BTreeNode **pRoot, BSTData data) {
    BTreeNode *pNode = NULL;
    BTreeNode *cNode = *pRoot;
    BTreeNode *nNode = NULL;

    while (cNode != NULL) {
        if (data == GetData(cNode))
            return;

        pNode = cNode;

        if (GetData(cNode) > data)
            cNode = GetLeftSubTree(cNode);
        else
            cNode = GetRightSubTree(cNode);
    }

    // pNode의 자식 노드로 추가할 새 노드의 생성
    pNode = MakeBTreeNode();    // 새 노드의 생성
    SetData(nNode, data);       // 새 노드에 데이터 저장

    // pNode의 자식 노드로 새 노드를 추가
    if (pNode != NULL) {
        if (data < GetData(pNode))
            MakeLeftSubTree(pNode, nNode);
        else
            MakeRightSubTree(pNode, nNode);
    } else {
        *pRoot = nNode;
    }
}

BTreeNode * BSTSearch(BTreeNode * bst, BSTData target){
    BTreeNode * cNode = bst;
    BSTData cd;

    while(cNode != NULL) {
        cd = GetData(cNode);

        if(target == cd)
            return cNode;
        else if(target < cd)
            cNode = GetLeftSubTree(cNode);
        else
            cNode = GetRightSubTree(cNode);
    }

    return NULL;
}