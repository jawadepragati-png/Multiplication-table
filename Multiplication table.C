#include <stdio.h>
#include <conio.h>

void main()
{
    int i;
    clrscr();

    for(i = 1; i <= 10; i++)
        printf("2 x %d = %d\n", i, 2*i);

    getch();
}
