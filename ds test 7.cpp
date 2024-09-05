#include <stdio.h>
#define MAX 10
int main() {
    int arr[MAX], n = 0, choice, element, position;
    while (1) {
        printf("\nMenu:\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                if (n < MAX) {
                    printf("Enter element and position: ");
                    scanf("%d %d", &element, &position);
                    if (position >= 0 && position <= n) {
                        for (int i = n; i > position; i--)
                            arr[i] = arr[i-1];
                        arr[position] = element;
                        n++;
                    } else {
                        printf("Invalid position!\n");
                    }
                } else {
                    printf("Array is full!\n");
                }
                break;
            case 2:
                if (n > 0) {
                    printf("Enter position to delete: ");
                    scanf("%d", &position);
                    if (position >= 0 && position < n) {
                        for (int i = position; i < n - 1; i++)
                            arr[i] = arr[i+1];
                        n--;
                    } else {
                        printf("Invalid position!\n");
                    }
                } else {
                    printf("Array is empty!\n");
                }
                break;
            case 3:
                printf("Array: ");
                for (int i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
