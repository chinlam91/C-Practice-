#include <stdio.h>
#include <stdlib.h> 

void visit(int, int);

int maze[9][9] = {{2, 2, 2, 2, 2, 2, 2, 2, 2},
                  {2, 0, 0, 0, 0, 0, 0, 0, 2},
                  {2, 0, 2, 2, 0, 2, 2, 0, 2},
                  {2, 0, 2, 0, 0, 2, 0, 0, 2},
                  {2, 0, 2, 0, 2, 0, 2, 0, 2},
                  {2, 0, 0, 0, 0, 0, 2, 0, 2},
                  {2, 2, 0, 2, 2, 0, 2, 2, 2},
                  {2, 0, 0, 0, 0, 0, 0, 0, 2},
                  {2, 2, 2, 2, 2, 2, 2, 2, 2}};

int startI = 1, startJ = 1;  // �J�f
int endI = 7, endJ = 7;  // �X�f

int main(void) { 
    int i, j; 

    printf("Show maze\n"); 
    for(i = 0; i < 7; i++) { 
        for(j = 0; j < 7; j++) 
            if(maze[i][j] == 2) 
                printf("M"); 
            else 
                printf(" "); 
        printf("\n"); 
    } 

    visit(startI, startJ);

    return 0; 
} 

void visit(int i, int j) {
    int m, n;

    maze[i][j] = 1; 

    if(i == endI && j == endJ) {
        printf("\nShow Path\n");
        for(m = 0; m < 9; m++) {
            for(n = 0; n < 9; n++)
                if(maze[m][n] == 2)
                    printf("M");
                else if(maze[m][n] == 1)
                    printf("x");
                else
                    printf(" ");
            printf("\n");
        }
    }

    if(maze[i][j+1] == 0) visit(i, j+1);
    if(maze[i+1][j] == 0) visit(i+1, j);
    if(maze[i][j-1] == 0) visit(i, j-1);
    if(maze[i-1][j] == 0) visit(i-1, j);

    maze[i][j] = 0;
} 
