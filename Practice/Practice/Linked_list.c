// 링크드 리스트: 모든 원자가 다음 원자의 위치를 알려주기 위한 포인터를 가진 리스트

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

// 노드 구조체 정의
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// 노드 생성 함수
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// 노드 삽입 함수
void insertNode(Node** head, int data) {
    Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// 노드 삭제 함수
void deleteNode(Node** head, int data) {
    Node* temp = *head;
    Node* prev = NULL;

    // 삭제할 노드가 맨 앞에 있을 경우
    if (temp != NULL && temp->data == data) {
        *head = temp->next;
        free(temp);
        return;
    }

    // 삭제할 노드가 맨 앞에 있지 않을 경우
    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;

    prev->next = temp->next;
    free(temp);
}

// 링크드 리스트 출력 함수
void printList(Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    Node* head = NULL;

    // 노드 삽입
    insertNode(&head, 10);
    insertNode(&head, 20);
    insertNode(&head, 30);
    insertNode(&head, 40);

    // 링크드 리스트 출력
    printList(head);

    // 노드 삭제
    deleteNode(&head, 20);
    deleteNode(&head, 40);

    // 링크드 리스트 출력
    printList(head);

    return 0;
}
