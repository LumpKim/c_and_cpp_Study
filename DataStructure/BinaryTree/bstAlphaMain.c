#include <stdio.h>
#include "BinaryTree2.h"

int main()
{
	treeNode* root = NULL;
	treeNode* foundedNode = NULL;
	char choice, key;


	root = insertNode(root, 'G');
	insertNode(root, 'I');
	insertNode(root, 'H');
	insertNode(root, 'D');
	insertNode(root, 'B');
	insertNode(root, 'M');
	insertNode(root, 'N');
	insertNode(root, 'A');
	insertNode(root, 'J');
	insertNode(root, 'E');
	insertNode(root, 'Q');

	while (1) {
		menu();
		scanf(" %c", &choice);

		switch (choice - '0') {
		case 1:	printf("\t[���� Ʈ�� ���]  ");
			displayInorder(root);  printf("\n");
			break;

		case 2:	printf("������ ���ڸ� �Է��ϼ��� : ");
			scanf(" %c", &key);
			insertNode(root, key);
			break;

		case 3:	printf("������ ���ڸ� �Է��ϼ��� : ");
			scanf(" %c", &key);
			deleteNode(root, key);
			break;

		case 4: printf("ã�� ���ڸ� �Է��ϼ��� : ");
			scanf(" %c", &key);
			foundedNode = searchBST(root, key);
			if (foundedNode != NULL)
				printf("\n %c�� ã�ҽ��ϴ�! \n", foundedNode->key);
			else  printf("\n ���ڸ� ã�� ���߽��ϴ�. \n");
			break;

		case 5: 	return 0;

		default: printf("���� �޴��Դϴ�. �޴��� �ٽ� �����ϼ���! \n");
			break;
		}
	}
}
