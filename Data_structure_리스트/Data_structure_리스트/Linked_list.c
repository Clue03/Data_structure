#include <stdio.h>
#include <stdlib.h>

// ��ũ�� ����Ʈ�� ��带 ��Ÿ���� ����ü
typedef struct Node {
    int data;           // ������
    struct Node* next;  // ���� ��带 ����Ű�� ������
} Node;

// ��ũ�� ����Ʈ�� ���ο� ��带 �߰��ϴ� �Լ�
void append(Node** headRef, int data) {
    // ���ο� ��� ����
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    // ����Ʈ�� ������� ���
    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }

    // ������ ������ �̵�
    Node* currentNode = *headRef;
    while (currentNode->next != NULL) {
        currentNode = currentNode->next;
    }

    // ���ο� ��带 ������ ����� �������� ����
    currentNode->next = newNode;
}

// ��ũ�� ����Ʈ�� ����ϴ� �Լ�
void printList(Node* head) {
    Node* currentNode = head;
    while (currentNode != NULL) {
        printf("%d ", currentNode->data);
        currentNode = currentNode->next;
    }
    printf("\n");
}

int main() {
    // ��ũ�� ����Ʈ ����
    Node* head = NULL;

    // ��� �߰�
    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);

    // ��ũ�� ����Ʈ ���
    printList(head);

    return 0;
}
