#include <stdio.h>
#include <string.h>
#include "../include/debug.h"
#define SIZE (200 + 200 + 1)
int main()
{
    int num, h;
    char cards[SIZE];
    scanf(" %200s", cards);
    while (cards[0] != '-')
    {
        scanf(" %d", &num);
        while (num--)
        {
            scanf(" %d", &h);
            strncat(cards, cards, h);
			dbg_printf("cards=%s\n",cards);
            strcpy(cards, cards + h);
			dbg_printf("cards=%s\n",cards);
        }
        printf("%s\n", cards);
        scanf(" %200s", cards);
    }
    return 0;
}
