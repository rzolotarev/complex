#include "iostream"
#include "vector"

void print(char *toPrint)
{
    for (int i = 0; toPrint[i]; i++)
        std::cout << toPrint[i];
    std::cout << '\n';
}

void getAllCombinations(std::string input, int start, int length, int fillingPoistion, char *filled)
{
    for (int i = start; i < input.length(); i++)
    {
        filled[fillingPoistion++] = input[i];
        if (fillingPoistion < length)
        {
            getAllCombinations(input, i + 1, length, fillingPoistion, filled);
            fillingPoistion--;
        }
        else
        {

            print(filled);
            fillingPoistion--;
        }
    }
}

int main()
{
    int length = 3;
    char *filled = new char[length];
    getAllCombinations("abcde", 0, length, 0, filled);
    return 0;
}
