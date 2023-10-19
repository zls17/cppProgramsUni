#include <iostream>
#include <vector>
/*
 * LinkedList Header only Library
 
 * Author: Ashish Balsure (22070123030)
           Bhoumik Sundaram (22070123034)
           Arjunsingh Gautam (22070123043)
 
 * This header only library has following functions
 
    1. void print_ll(Node* head): prints the linked list
        args: pointer to the head of Linked List
        returns: void

    2. Node* insert_at_head(Node* head, std::string val): inserts node at head
        args: arg1. pointer to head, arg2. string value to be inserted
        returns: pointer to the head

    3. Node* insert_at_tail(Node* head, std::string val): inserts node at tail
        args: arg1. pointer to head, arg2. string value to be inserted
        returns: pointer to the head

    4. Node* delete_at_head(Node* head): deletes node at head
        args: arg1. pointer to the head
        returns: pointer to the head

    5. Node* delete_at_tail(Node* head): deletes node at tail
        args: arg1. pointer to the head
        returns: pointer to the head

    6. int length(Node* head): returns length of linked list
        args: arg1. pointer to the head
        returns: int

    7. bool is_member(Node* node, std::string search_value): checks if a value is in Linked List.
        args: arg1. pointer to the head, arg2. value to be searched
        returns: a boolean indicated if the value was found or not.

    8. int count_matches(Node* head, std::string count_value): counts the occurences of a value in Linked list.
        args: arg1. pointer to the head, arg2. value to be counted
        returns: the number of occurences

    9. bool notIn(std::string value, std::vector<std::string> values): This is a helper function which we use
        to basically check if a value is already present in the values vector. We use this helper function to 
        print the repeated words, so for example while printing the repeated words if we've already printed the 
        word we don't want to print it again.

    10. void repeated_words(Node *head): prints the repeated words in the linked list. 
        Takes a pointer to the head as argument.

    11. void sort_ll(Node* head): sorts the linked list in ascending order by Bubble sort algorithm.
        args: pointer to the head
        returns: void

    [] NOTE: the following function are defined using the "inline" keyword to avoid ODR (One definition rule)
    violation, so we can include this header file into multiple .cpp files, and there will not be a
    redefinition error.
 
*/
namespace LinkedList {
    typedef struct node {
        std::string value;
        struct node* next;
    } Node;

    inline void print_ll(Node *head) {
        Node *current = head;
        while (current != NULL) {
            std::cout << current->value << '\n';
            current = current->next;
        }
    }

    inline Node* insert_at_head(Node* head, std::string val) {
        // Node* new_node = (Node*)calloc(1, sizeof(Node));
        Node* new_node = new Node;
        new_node->value = val;
        if (head == NULL) return new_node;
        else {
            new_node->next = head;
            return new_node;
        }
    }

    inline Node* insert_at_tail(Node* head, std::string val) {
        // Node *new_node = (Node*)calloc(1, sizeof(Node));
        Node* new_node = new Node;
        new_node->value = val;
        if (head == NULL) return new_node;
        else {
            Node* temp = head;
            while (temp->next != NULL) temp = temp->next;
            temp->next = new_node;
            return head;
        }
    }

    inline Node* delete_at_head(Node *head) {
        if (head == NULL) return NULL;
        else {
            Node* new_head = head->next;
            // free(head);
            delete head;
            return new_head;
        }
    }

    inline Node* delete_at_tail(Node* head) {
        if (head == NULL) return NULL;
        else if (head->next == NULL) {
            // free(head);
            delete head;
            return NULL;
        }
        else {
            Node* current = head;
            Node* prev = NULL;
            while (current->next != NULL) {
                prev = current;
                current = current->next;
            }
            prev->next = NULL;
            free(current);
            return head;
        }
    }

    inline int length(Node* head) {
        Node* current = head;
        int length {0};
        while (current != NULL) {
            length++;
            current = current->next;
        }
        return length;
    }

    inline bool is_member(Node* node, std::string search_value) {
        if (node == NULL) return false;
        else if (node->value == search_value) return true;
        else return is_member(node->next, search_value);
    }

    inline int count_matches(Node* head, std::string count_value) { 
        if (head == NULL) return 0;
        else if (head->value == count_value) return 1 + count_matches(head->next, count_value);
        else return count_matches(head->next, count_value);
    }

    inline bool notIn(std::string value, std::vector<std::string> values) {
        bool found = true;
        for (long unsigned int i {0}; i < values.size(); ++i) {
            if (values[i] == value) 
                found = false;
        }
        return found;
    }

    inline void repeated_words(Node*head) {
        Node* current = head;
        std::vector<std::string> values {};
        while (current != NULL) {
            if (count_matches(head, current->value) > 1) {
                if (notIn(current->value, values)) {
                    std::cout << current->value << " repeated " << count_matches(head, current->value) << " times.\n";
                }
                values.push_back(current->value);

            }
            current = current->next;
        }
    }

    inline void sort_ll(Node* head) {
        if (head == NULL) return;
        if (head->next == NULL) return;
        bool swapped = false;
        do {
            swapped = false;
            Node* prev = NULL;
            Node* current = head;
            prev = current;
            while (current->next != NULL) {
                prev = current;
                current = current->next;
                if (current != NULL) {
                    if (current->value < prev->value) {
                        std::string temp {};
                        temp = prev->value;
                        prev->value = current->value;
                        current->value = temp;
                        swapped = true;
                    }
                }
            }

        } while (swapped);

    }
}
