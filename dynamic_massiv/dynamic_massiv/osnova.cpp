#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, j, n, m;
    printf("������� ���������� �����: ");
    scanf_s("%d", &n);
    printf("������� ���������� ��������: ");
    scanf_s("%d", &m);
   double* a = (double*)malloc(n * m * sizeof(double));
    // ���� ��������� �������
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            printf("a[%d][%d] = ", i, j);
            scanf_s("%lf", (a + i * m + j));
        }
    }
    // ����� ��������� �������
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
    //*(a+i*m+j) - ��������� � �������� a[i][j];
}