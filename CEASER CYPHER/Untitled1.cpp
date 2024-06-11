#include <stdio.h>

int isAvailable(int puzzle[][4], int row, int col, int num)
{
    int rowStart = (row/2) * 2;
    int colStart = (col/2) * 2;
    int i, j;

    for(i=0; i<4; ++i)
    {
        if (puzzle[row][i] == num) return 0;
        if (puzzle[i][col] == num) return 0;
        if (puzzle[rowStart + (i%2)][colStart + (i/2)] == num) return 0;
    }
    return 1;
}

int fillSudoku(int puzzle[][4], int row, int col)
{
    int i;
    if(row<4 && col<4)
    {
        if(puzzle[row][col] != 0)
        {
            if((col+1)<4) return fillSudoku(puzzle, row, col+1);
            else if((row+1)<4) return fillSudoku(puzzle, row+1, 0);
            else return 1;
        }
        else
        {
            for(i=0; i<4; ++i)
            {
                if(isAvailable(puzzle, row, col, i+1))
                {
                    puzzle[row][col] = i+1;
                    if((col+1)<4)
                    {
                        if(fillSudoku(puzzle, row, col +1)) return 1;
                        else puzzle[row][col] = 0;
                    }
                    else if((row+1)<4)
                    {
                        if(fillSudoku(puzzle, row+1, 0)) return 1;
                        else puzzle[row][col] = 0;
                    }
                    else return 1;
                }
            }
        }
        return 0;
    }
    else return 1;
}

int main()
{
    int i, j;
    int puzzle[4][4]={{2, 0, 0, 0},
                      {0, 4, 0, 0},
                      {0, 0, 0, 0},
                      {0, 2, 0, 0},
                      };

    if(fillSudoku(puzzle, 0, 0))
    {
        printf("\n  +-+-+-+-+\n");
        for(i=1; i<5; ++i)
        {
        	printf("  ");
            for(j=1; j<5; ++j)
			{
			  printf("|%d", puzzle[i-1][j-1]);
		}
            printf("|\n");
            if (i%2 == 0) printf("  +-+-+-+-+\n");
        }
    }
    else printf("\n\nNO SOLUTION\n\n");

    return 0;
}

