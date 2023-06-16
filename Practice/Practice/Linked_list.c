// ��ũ�� ����Ʈ: ��� ���ڰ� ���� ������ ��ġ�� �˷��ֱ� ���� �����͸� ���� ����Ʈ

//#include <stdio.h>
//struct list {
//	char* name;
//	int no;
//	struct list* link;
//};
//
//int main()
//{
//	int i;
//	struct list k[3], * head, * pre, * next;
//	pre = NULL;
//	head = NULL;
//	
//	for (i = 0; i < 3; i++)
//	{
//		list1 = return (struct list*)malloc(sizeof(struct list));
//		scanf_s("%s %d", list1->name, 10, &(list1->no));
//		if (head == NULL)
//			head = list1;
//
//	}
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>

// ��� ����ü ����
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// ��� ���� �Լ�
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// ��� ���� �Լ�
void insertNode(Node** head, int data) {
    Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// ��� ���� �Լ�
void deleteNode(Node** head, int data) {
    Node* temp = *head;
    Node* prev = NULL;

    // ������ ��尡 �� �տ� ���� ���
    if (temp != NULL && temp->data == data) {
        *head = temp->next;
        free(temp);
        return;
    }

    // ������ ��尡 �� �տ� ���� ���� ���
    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;

    prev->next = temp->next;
    free(temp);
}

// ��ũ�� ����Ʈ ��� �Լ�
void printList(Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    Node* head = NULL;

    // ��� ����
    insertNode(&head, 10);
    insertNode(&head, 20);
    insertNode(&head, 30);
    insertNode(&head, 40);

    // ��ũ�� ����Ʈ ���
    printList(head);

    // ��� ����
    deleteNode(&head, 20);
    deleteNode(&head, 40);

    // ��ũ�� ����Ʈ ���
    printList(head);

    return 0;
}
