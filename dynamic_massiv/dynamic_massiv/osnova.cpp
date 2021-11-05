#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, j, n, m;
    printf("Введите количество строк: ");
    scanf_s("%d", &n);
    printf("Введите количество столбцов: ");
    scanf_s("%d", &m);
   double* a = (double*)malloc(n * m * sizeof(double));
    // Ввод элементов массива
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            printf("a[%d][%d] = ", i, j);
            scanf_s("%lf", (a + i * m + j));
        }
    }
    // Вывод элементов массива
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            printf("%.3lf ", *(a + i * m + j));
        }
        printf("\n");
    }
    free(a);
    return 0;
    //*(a+i*m+j) - обращение к элементу a[i][j];
}