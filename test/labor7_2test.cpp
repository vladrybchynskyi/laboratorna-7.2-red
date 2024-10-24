#include <gtest/gtest.h>
#include "../labor7_2.hpp"

TEST(SearchMinMaxOddColumnsTest, HandlesValidInput) {
    int rows = 3;
    int cols = 4;

    // Створюємо тестовий масив
    int** testArray = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        testArray[i] = new int[cols];
    }
    testArray[0][0] = 1; testArray[0][1] = 2; testArray[0][2] = 3; testArray[0][3] = 4;
    testArray[1][0] = 5; testArray[1][1] = 6; testArray[1][2] = 7; testArray[1][3] = 8;
    testArray[2][0] = 9; testArray[2][1] = 10; testArray[2][2] = 11; testArray[2][3] = 12;

    int minMaxOddCol;
    ASSERT_TRUE(SearchMinMaxOddColumns(testArray, rows, cols, minMaxOddCol));
    ASSERT_EQ(minMaxOddCol, 9); // Максимум з непарних стовпців 0 та 2

    // Звільняємо пам'ять
    for (int i = 0; i < rows; ++i) {
        delete[] testArray[i];
    }
    delete[] testArray;
}
    

