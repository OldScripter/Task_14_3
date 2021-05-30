#include <iostream>

int main() {

    int snakeArray[5][5];
    int number = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            snakeArray[i][(i % 2) * 4 + (1 - 2 * (i % 2)) * j] = number;
            number++;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cout << snakeArray[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
