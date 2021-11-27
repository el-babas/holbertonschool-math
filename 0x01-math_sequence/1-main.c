#include <stdio.h>
#include "fibonacci.h"

void print_list(t_cell *head)
{
    if (head == NULL)
        return;
    print_list(head->next);
    printf("%d ", head->elt);
}

int main()
{
    t_cell *head;

    head = Fibonnaci();
    print_list(head);
    printf("\n");
    if (head)
        printf("The gold number is: %lf\n", gold_number(head));
    return (0);
}
