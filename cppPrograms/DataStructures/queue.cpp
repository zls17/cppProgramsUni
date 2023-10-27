#include <iostream>

typedef struct Node {
    int value;
    Node* next;
} Node;

typedef struct Queue {
    Node* head;
    Node* tail;
    int size;
} Queue;


Queue* create_queue() {
    Queue* queue = new Queue;
    queue->head = NULL;
    queue->tail = NULL;
    queue->size = 0;
    return queue;
}

int size(Queue* queue) {
    return queue->size;
}

bool is_empty(Queue* queue) {
    return queue->size == 0;
}

Queue* enque(Queue* queue, int value) {
    Node* new_node = new Node;
    new_node->value = value;
    new_node->next = NULL;
    if (is_empty(queue)) {
        queue->head = new_node;
        queue->tail = new_node;
    }
    else {
        queue->tail->next = new_node;
        queue->tail = new_node;
    }
    queue->size++;
    return queue;
}

Queue* deque(Queue* queue) {
    if (queue->size == 0) {
        return NULL;
    }
    if (queue->size == 1) {
        queue->head = NULL;
        queue->tail = NULL;
        queue->size--;
        return queue;
    }
    else {
        Node* temp_node = queue->head;
        queue->head = queue->head->next;
        delete temp_node;
        queue->size--;
        return queue;
    }
}

int peek(Queue* queue) {
    if (is_empty(queue)) {
        std::cout << "Nothing to peek!\n";
        exit(-1);
    }
    return queue->head->value;
}

int main() {
    std::cout << std::boolalpha;
    Queue* queue = create_queue();

    //test cases 
    queue = enque(queue, 10);
    queue = enque(queue, 20);
    queue = enque(queue, 30);
    std::cout << peek(queue) << '\n'; // should return 10
    deque(queue);
    std::cout << peek(queue) << '\n'; // should return 20
    deque(queue);
    std::cout << peek(queue) << '\n'; // should return 30
    queue = enque(queue, 50);
    std::cout << peek(queue) << '\n'; // should return 30
    std::cout << size(queue) << '\n'; // should return 2
}
