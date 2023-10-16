#include <iostream>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

void printll(Node *head) {
    Node *current = head;
    while (current != NULL) {
        std::cout << current->value<< '\n';
        current = current->next;
    }
}
int main() {
    Node a, b, c;
    a.value = 10;
    b.value = 20;
    c.value = 30;
    a.next = &b;
    b.next = &c;
    c.next = NULL;
    
    printll(&a);
}
