#include <iostream>

int main()
{
    //      rows
    //       vvv
    int board[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    //          ^^^
    //        columns

    for (int row = 0; row < 3; row++)
    {
        // std::cout << board[i][i] << std::endl;
        for (int col = 0; col < 3; col++)
        {
            std::cout << row << "x" << col << " - " << board[row][col] << std::endl;
        }
    }
    return 0;
}