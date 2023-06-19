#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALPHABET_SIZE 26

typedef struct Node {
    struct Node* children[ALPHABET_SIZE];
    int isEndOfWord;
} Node;

Node* createNode() {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->isEndOfWord = 0;
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        newNode->children[i] = NULL;
    }
    return newNode;
}

void insertWord(Node* root, const char* word) {
    int length = strlen(word);
    Node* currentNode = root;

    for (int i = 0; i < length; i++) {
        int index = word[i] - 'a';
        if (currentNode->children[index] == NULL) {
            currentNode->children[index] = createNode();
        }
        currentNode = currentNode->children[index];
    }

    currentNode->isEndOfWord = 1;
}

void searchWords(Node* root, const char* prefix) {
    Node* currentNode = root;
    int length = strlen(prefix);

    for (int i = 0; i < length; i++) {
        int index = prefix[i] - 'a';
        if (currentNode->children[index] == NULL) {
            return;
        }
        currentNode = currentNode->children[index];
    }

    if (currentNode != NULL && currentNode->isEndOfWord) {
        printf("%s\n", prefix);
    }

    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (currentNode->children[i] != NULL) {
            char newPrefix[length + 2];
            strcpy(newPrefix, prefix);
            newPrefix[length] = 'a' + i;
            newPrefix[length + 1] = '\0';
            searchWords(currentNode->children[i], newPrefix);
        }
    }
}

int main() {
    char* words[] = {"apple", "application", "banana", "art", "ball", "cat"};
    int numWords = sizeof(words) / sizeof(words[0]);

    Node* root = createNode();

    for (int i = 0; i < numWords; i++) {
        insertWord(root, words[i]);
    }

    const char* prefix = "app";
    searchWords(root, prefix);

    return 0;
}
