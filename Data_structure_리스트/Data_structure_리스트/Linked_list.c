#include <stdio.h>
#include <stdlib.h>

// 링크드 리스트의 노드를 나타내는 구조체
typedef struct Node {
    int data;           // 데이터
    struct Node* next;  // 다음 노드를 가리키는 포인터
} Node;

// 링크드 리스트에 새로운 노드를 추가하는 함수
void append(Node** headRef, int data) {
    // 새로운 노드 생성
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    // 리스트가 비어있을 경우
    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }

    // 마지막 노드까지 이동
    Node* currentNode = *headRef;
    while (currentNode->next != NULL) {
        currentNode = currentNode->next;
    }

    // 새로운 노드를 마지막 노드의 다음으로 연결
    currentNode->next = newNode;
}

// 링크드 리스트를 출력하는 함수
void printList(Node* head) {
    Node* currentNode = head;
    while (currentNode != NULL) {
        printf("%d ", currentNode->data);
        currentNode = currentNode->next;
    }
    printf("\n");
}

int main() {
    // 링크드 리스트 생성
    Node* head = NULL;

    // 노드 추가
    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);

    // 링크드 리스트 출력
    printList(head);

    return 0;
}
