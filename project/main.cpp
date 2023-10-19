#include <iostream>
#include "LinkedList.h"
using namespace LinkedList;
int main() {
    Node *head = NULL;
    head = insert_at_head(head, "Ross");
    head = insert_at_head(head, "Chandler");
    head = insert_at_tail(head, "Joey");
    head = insert_at_head(head, "Susan");
    head = insert_at_head(head, "Joey");
    head = insert_at_head(head, "Ross");
    head = insert_at_head(head, "Rachel");

    std::cout << "Before Sorting: \n";

    print_ll(head);

    std::cout << "\nAfter Sorting: \n";

    sort_ll(head);

    print_ll(head);

    std::cout << "\nRepeated Words: \n";


    repeated_words(head);


}
