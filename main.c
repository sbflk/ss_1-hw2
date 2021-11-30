#include <stdio.h>
#include "my_mat.h"

void getMatrix();

int main()
{
    char cmd;
    scanf(" %c",&cmd);

    while(cmd != 'D')
    {
        if(cmd == 'A')
        {
            getMatrix();
        }
        if(cmd == 'B')
        {
            int i,j;
            scanf("%d",&i);
            scanf("%d",&j);
            pathExists(i,j);
            printf("\n");
        }
        if(cmd == 'C')
        {
            int i,j;
            scanf("%d",&i);
            scanf("%d",&j);
            printf("%d",shortestPath(i,j));
            printf("\n");
        }
        scanf("%s",&cmd);
    }
}