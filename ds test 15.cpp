#include <stdio.h>
#include <stdlib.h>
#define SIZE 10  
int hashTable[SIZE];
void initHashTable() {
    for (int i = 0; i < SIZE; i++) {
        hashTable[i] = -1;  
    }
}
int hashFunction(int key) {
    return key % SIZE;
}
void insert(int key) {
    int index = hashFunction(key);
    while (hashTable[index] != -1) {
        index = (index + 1) % SIZE; 
    }

    hashTable[index] = key;
    printf("%d inserted at index %d\n", key, index);
}
int search(int key) {
    int index = hashFunction(key);
    int start = index;
    while (hashTable[index] != -1) {
        if (hashTable[index] == key) {
            return index; 
        }
        index = (index + 1) % SIZE;
        if (index == start) {
            break;
        }
    }
    return -1; 
}
void display() {
    printf("Hash table:\n");
    for (int i = 0; i < SIZE; i++) {
        if (hashTable[i] != -1)
            printf("Index %d: %d\n", i, hashTable[i]);
        else
            printf("Index %d: Empty\n", i);
    }
}
int main() {
    initHashTable();
    insert(23);
    insert(43);
    insert(13);
    insert(27);
    insert(57);
    display();
    int key = 43;
    int index = search(key);
    if (index != -1)
        printf("Key %d found at index %d\n", key, index);
    else
        printf("Key %d not found in the hash table\n", key);

    key = 99;
    index = search(key);
    if (index != -1)
        printf("Key %d found at index %d\n", key, index);
    else
        printf("Key %d not found in the hash table\n", key);

    return 0;
}

