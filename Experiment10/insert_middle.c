#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *temp, *newNode;
    int n, i, pos;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter value %d: ", i);
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if (!head) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    printf("Enter position to insert: ");
    scanf("%d", &pos);

    newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter new value: ");
    scanf("%d", &newNode->data);

    temp = head;
    for (i = 1; i < pos - 1; i++)
        temp = temp->next;

    newNode->next = temp->next;
    temp->next = newNode;

    printf("Updated List: ");
    temp = head;
    while (temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}

