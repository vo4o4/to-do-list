#include <stdio.h>
#include <stdbool.h>

void selector(int input, FILE **writeList, bool *exit)
{
    char taskName[30];
    switch (input)
    {
    case 1:
        printf("Enter new task name: ");
        scanf("%s", taskName);
        fprintf(*writeList, "%s\n", taskName);
        break;
    case 2:
        *exit = true;
        printf("Exiting...\n");
    }
}

int main()
{
    int input;
    char temp;

    FILE *writeList = fopen("TDL.txt", "a");

    printf("=======================\nTo-do-list v0.1\n=======================\n\n");

    bool validInput = false;
    do
    {
        printf("Enter 1 to add a task\nEnter 2 to exit\n\n>>");

        if (scanf("%d%c", &input, &temp) != 2 && temp != '\n' && (input != 1 || input != 2))
        {
            printf("Invalid input; Try again\n");
        }
        else
            selector(input, &writeList, &validInput);
    } while (validInput == false);

    fclose(writeList);

    return 0;
}