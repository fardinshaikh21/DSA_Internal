#include <stdio.h>
#include <stdlib.h>

/* Node structure */
struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

/* Function to check if list is empty */
int isEmpty() {
    return head == NULL;
}

/* Insert at beginning */
void insertFirst(int value) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

/* Insert at last */
void insertLast(int value) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}

/* Delete first node */
void deleteFirst() {
    if (isEmpty()) {
        printf("List is empty\n");
        return;
    }
    struct node *temp = head;
    head = head->next;
    free(temp);
    printf("First node deleted\n");
}

/* Delete last node */
void deleteLast() {
    if (isEmpty()) {
        printf("List is empty\n");
        return;
    }

    if (head->next == NULL) {
        free(head);
        head = NULL;
        printf("Last node deleted\n");
        return;
    }

    struct node *temp = head;
    struct node *prev;
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);
    printf("Last node deleted\n");
}

/* Search element */
void search(int key) {
    struct node *temp = head;
    int pos = 1;
    while (temp != NULL) {
        if (temp->data == key) {
            printf("Element %d found at position %d\n", key, pos);
            return;
        }
        temp = temp->next;
        pos++;
    }
    printf("Element not found\n");
}

/* Sort linked list using Bubble Sort */
void sortList() {
    if (isEmpty() || head->next == NULL) {
        printf("List is empty or has only one node\n");
        return;
    }

    struct node *i, *j;
    int temp;
    for (i = head; i->next != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->data > j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
    printf("Linked list sorted in ascending order\n");
}

/* Display list */
void display() {
    if (isEmpty()) {
        printf("List is empty\n");
        return;
    }
    struct node *temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

/* Main function */
int main() {
    int choice, value;

    while (1) {
        printf("\n--- Linked List Menu ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at Last\n");
        printf("3. Delete First Node\n");
        printf("4. Delete Last Node\n");
        printf("5. Search Element\n");
        printf("6. Check if List is Empty\n");
        printf("7. Display List\n");
        printf("8. Sort Linked List\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insertFirst(value);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                insertLast(value);
                break;

            case 3:
                deleteFirst();
                break;

            case 4:
                deleteLast();
                break;

            case 5:
                printf("Enter element to search: ");
                scanf("%d", &value);
                search(value);
                break;

            case 6:
                if (isEmpty())
                    printf("Linked List is empty\n");
                else
                    printf("Linked List is not empty\n");
                break;

            case 7:
                display();
                break;

            case 8:
                sortList();
                break;

            case 9:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
