#include <cstring>
#include <iostream>

void usePointerAndArray01()
{
    int matrix[2][5] = {{1, 2, 3, 4, 4}, {6, 7, 8, 9, 10}};
    int(*pmatrix)[5] = matrix;
    printf("pmatrix = %p\n", pmatrix);
    printf("pmatrix + 1 = %p\n", pmatrix + 1);
    printf("pmatrix[0] + 1 = %p\n", pmatrix[0] + 1);
    printf("*sizeof(*pmatrix) = %zu\n", sizeof(*pmatrix));
    printf("sizeof(*pmatrix[1]) = %zu\n", sizeof(*pmatrix[1]));
    printf("matrix[0] + 1 address = %p, matrix[0] + 1 value = %d\n", matrix[0] + 1, *(matrix[0] + 1));
    printf("pmatrix[0] + 1 value = %p\n", pmatrix[0] + 1);
    printf("\n============================================================================\n");
    // int (*ppmatrix)[5] = matrix;
}

/*===============================passing a multi-dimensional array===============================*/

void passingMultiDimensionalArray()
{
    // declaration
    // void display2DArray(int arr[][5], int rows);    // 隐式申明；
    // void display2DArray(int(*arr)[5], int rows);    // 显示声明;
}

void display2DArray01(int *arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", *(arr + (i * cols) + j));
            // printf("%d ", (arr + i)[j]); // can also work
        }
    }
    printf("\n============================================================================\n");
}

void testDisplay2DArray01()
{
    int arr[2][3] = {1, 2, 3, 4, 5, 6}; // {{1, 2, 3}, {4, 5, 6}};
    display2DArray01(&arr[0][0], 2, 3);
    // display2DArray01(arr[0], 2, 3);  // can also work;
    // display2DArray01(&arr[0][0], 2, 3);
}

/*==============================动态分配二维数组：分配不连续的内存==============================*/
void dynamicMalloc01()
{
    int rows = 3;
    int cols = 4;
    int **matrix = (int **)malloc(rows * sizeof(int *));

    for (int i = 0; i < rows; i++)
    {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }

    delete[] matrix;
}
/*==============================动态分配二维数组：分配连续的内存==============================*/
void dynamicMalloc02()
{
    int rows = 3;
    int cols = 4;
    int **matrix = (int **)malloc(rows * sizeof(int *));
    matrix[0] = (int *)malloc(rows * cols * sizeof(int));  // 通过第一行的地址定位其它行的地址

    for (int i = 1; i < cols; i++)
    {
        matrix[i] = matrix[0] + i * cols;
    }

    delete[] matrix;
}

void dynamicMalloc03()
{
    int rows = 3;
    int cols = 4;
    int *matrix = (int *)malloc(rows * cols * sizeof(int));

    for (int i = 0; i < rows; i++) // 不能使用下标定位元素，必须手动计算索引
    {
        for (int j = 0; j < cols; j++)
        {
            *(matrix + (i * cols) + j) = i + j;
        }
    }
    delete[] matrix;
}

/*==============================不规则数组与指针==============================*/
void irregularArray()
{
    // int(*(arr1[])) = {
    //     (int[3]){1, 2, 3},
    //     (int[3]){4, 5, 6},
    //     (int[3]){7, 8, 9},
    // }
}

int main(int argc, char const *argv[])
{
    usePointerAndArray01();
    testDisplay2DArray01();
    // dynamicMalloc01();
    // dynamicMalloc02();
    // dynamicMalloc03();
    // irregularArray();
    return 0;
}
