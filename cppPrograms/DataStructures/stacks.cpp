#include <iostream>
typedef struct {
    int* collection;
    int capacity;
    int size;
} Stack;

Stack* create_stack(int capacity) {
    if (capacity <= 0) return NULL;
    Stack* stack = new Stack;
    stack->collection = new int[capacity];
    stack->capacity = capacity;
    stack->size = 0;
    return stack;
}

void delete_stack(Stack* stack) {
    delete stack->collection;
    delete stack;
}

bool is_full(Stack* stack) {
    return stack->capacity == stack->size;
}

bool is_empty(Stack* stack) {
    return stack->size == 0;
}

bool push(Stack* stack, int value) {
    if (is_full(stack)) return false;
    stack->collection[stack->size] = value; // stack->size gives the current size of the stack eg. stack->collection[5] = 10;
    stack->size++;                          // we'll need to increment size since element was inserted at the top 
    return true;
}

bool pop(Stack* stack) {
    if (is_empty(stack)) return false;
    stack->size--;
    return true;
}

bool peek(Stack* stack) {
    if (is_empty(stack)) return false;
    std::cout << stack->collection[stack->size - 1] << '\n'; // stack->size is the size, so index in 1 less
    return true;
}


int main() {
    std::cout << std::boolalpha;
    // creating stack, and testing if it was created successfully
    Stack* stack = create_stack(6);
    if (stack == NULL) {
        std::cout << "Stack creation failed!\n";
        std::exit(-1);
    }

    // test cases
    push(stack, 10);
    push(stack, 30);
    push(stack, 40);
    peek(stack); // should return 40;
    pop(stack);
    pop(stack);
    peek(stack); // should return 10;
    pop(stack);
    peek(stack); // nothing to peek
    for (int i = 0; i <= stack->capacity; ++i) { 
        push(stack, i);
    }
    std::cout << is_full(stack) << '\n'; // should return true
    for (int i = 0; i <= stack->capacity; ++i) { 
        pop(stack);
    }
    std::cout << is_empty(stack) << '\n'; // should return true 
}






