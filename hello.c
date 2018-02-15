//
//  main.c
//  lab 1
//
//  Created by Rustamas on 14/02/2018.
//  Copyright © 2018 Rustamas. All rights reserved.
//

#include <stdio.h>
int main()
{
    FILE *f = fopen("doska.txt","rt");
    char T[10][10];
    int i = 0, j = 0;
    while(!feof(f))
    {
        fscanf(f, "%c", &T[i++][j]);
        if(i==9)
        {
            i = 0; j++;
        }
    }
    for(i=0; i<9; i++)
    {
        for(j=0; j<9; j++)
        {
            printf("%c",T[i][j]);
        }
        printf("/n");
    }
    return 0;
}

