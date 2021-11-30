#include <stdio.h>
#include "my_mat.h"

#define s 10
int did_algo = 0;
int m[s][s];


void getMatrix()
{
    did_algo = 0;
    for(int i = 0; i < s; i++)
    {
        for(int j = 0; j < s; j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
}

void pathExists(int i, int j)
{
    if (did_algo == 0)
    {
        shortestPath(0,0);
    }
    if(m[i][j] == 0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}


int shortestPath(int i, int j)
{
    if(did_algo == 0)
    {
        for(int k = 0; k <= s-1; k++)
        {
            for(int i1 = 0; i1 <= s-1; i1++)
            {
                for(int j2 = 0; j2 <= s-1; j2++)
                {
                    if(m[i1][j2] > m[i1][k] + m[k][j2] && m[i1][k] != 0 && m[k][j2] != 0 && i1 != j2)
                    {
                        m[i1][j2] = m[i1][k] + m[k][j2];

                    }
                    else if(m[i1][j2] > -(m[i1][k] + m[k][j2]) && m[i1][k] != 0 && m[k][j2] != 0 && m[i1][j2] == 0 && i1 != j2)
                    {
                        m[i1][j2] = m[i1][k] + m[k][j2];

                    }
                }
            }
        }
        did_algo = 1;
    }
    if(m[i][j] == 0)
    {
        return -1;
    }
    return m[i][j];
    
}
