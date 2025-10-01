#include <stdio.h>
#include <stdbool.h>

struct task
{
    char name[30];
    bool complete;
};

int main()
{
    int input;
    bool validInput = true;
    char temp;

    printf("Welcome to to-do-list SKELETON v1\n\n");

    printf("Enter 1 to add a task\nEnter 2 edit task completion\nEnter 3 to view all tasks\nEnter 4 to exit to-do-list\n\n>>");

    while (scanf("%d%c", &input, &temp) != 2 && temp != '\n' && (input != 1 || input != 2 || input != 3 || input != 4))
    {
        printf("Invalid input\n");
    }

    switch (input)
    {
    case 1:
        break;
    case 2:

        break;
    case 3:

        break;
    case 4:

        return 0;
    default:
        printf("Invalid input");
    }

    return 0;
}