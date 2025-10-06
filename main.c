#include <stdio.h>
#include <stdbool.h>

void selector(int input, FILE **writeList)
{
    char taskName[30];
    switch (input)
    {
    case 1:
        printf("Enter new task name: ");
        scanf("%s", taskName);
        fprintf(*writeList, "%s\n", taskName);
        break;
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
        printf("Enter 1 to add a task\n>>");

        if (scanf("%d%c", &input, &temp) != 2 && temp != '\n' && (input != 1))
        {
            printf("Invalid input; Try again\n");
        }
        else
            break;
    } while (validInput == false);

    selector(input, &writeList);

    fclose(writeList);

    return 0;
}