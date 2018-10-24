#include <stdio.h>

int main() {
    int a, i, k, j, c1, c2, r1, r2;
    int m1[10][10], m2[10][10], m3[10][10];
    while (1) {

        printf("\n 1. Transpose of Matrix:-\n");
        printf("\n 2. Addition of Matrix:-\n");
        printf("\n 3. Subtraction of Matrix:-\n");
        printf("\n 4. Multiplication of Matrix:-\n");
        printf("\n 5. Exit\n");
        printf("\n Enter your choice:-");
        scanf("%d", &a);
        switch (a) {
            case 1 :
                printf("\n Enter the number of row and coloum:-");
                scanf("%d%d", &r1, &c1);
                printf("\n Enter the element :-");
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c1; j++) {
                        scanf("%d", &m1[i][j]);
                        m2[j][i] = m1[i][j];
                    }
                }
                /*Displaying transpose of matrix*/
                printf("\n Transpose of Matrix is:-\n");
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c1; j++)
                        printf("\t%d", m2[i][j]);
                    printf("\n");
                }
                break;
            case 2:
                printf("\n how many row and coloum in Matrix one:-");
                scanf("%d%d", &r1, &c1);
                printf("\n How amny row and coloum in Matrix two:-");
                scanf("%d%d", &r2, &c2);
                if ((r1 == r2) && (c1 == c2)) {
                    printf("\n Addition is possible:-");
                    printf("\n Input Matrix one:-");
                    for (i = 0; i < r1; i++) {
                        for (j = 0; j < c1; j++)
                            scanf("%d", &m1[i][j]);
                    }
                    printf("\n Input Matrix two:-");
                    for (i = 0; i < r2; i++) {
                        for (j = 0; j < c2; j++)
                            scanf("%d", &m2[i][j]);
                    }
                    /* Addition of Matrix*/
                    for (i = 0; i < r1; i++) {
                        for (j = 0; j < c1; j++)
                            m3[i][j] = m1[i][j] + m2[i][j];
                    }
                    printf("\n The sum is:-\n");
                    for (i = 0; i < c1; i++) {
                        for (j = 0; j < r1; j++)
                            printf("%5d", m3[i][j]);
                        printf("\n");
                    }
                } else
                    printf("\n Addition is not possible:-");

                break;
            case 3:
                printf("\n how many row and coloum in Matrix one:-");
                scanf("%d%d", &r1, &c1);
                printf("\n How amny row and coloum in Matrix two:-");
                scanf("%d%d", &r2, &c2);

                if ((r1 == r2) && (c1 == c2)) {
                    printf("\n subtracton is possible:-");
                    printf("\n Input Matrix one:-");
                    for (i = 0; i < r1; i++) {
                        for (j = 0; j < c1; j++)
                            scanf("%d", &m1[i][j]);
                    }
                    printf("\n Input Matrix two:-");
                    for (i = 0; i < r2; i++) {
                        for (j = 0; j < c2; j++)
                            scanf("%d", &m2[i][j]);
                    }
                    /* Addition of Matrix*/
                    for (i = 0; i < r1; i++) {
                        for (j = 0; j < c1; j++)
                            m3[i][j] = m1[i][j] - m2[i][j];
                    }
                    printf("\n The sub is:-\n");
                    for (i = 0; i < c1; i++) {
                        for (j = 0; j < r1; j++)
                            printf("%5d", m3[i][j]);
                        printf("\n");
                    }
                } else
                    printf("\n Addition is not possible:-");

                break;
            case 4:

                printf("\n Enter number of row and coloum in matrix one:-");
                scanf("%d%d", &r1, &c1);
                printf("\n Enter number of row and coloum in matrix two:-");
                scanf("%d%d", &r2, &c2);
                if (c1 == r2) {
                    printf("\n Multiplication is possible:-");
                    printf("\n Input value of Matrix one:-");
                    for (i = 0; i < r1; i++) {
                        for (j = 0; j < c1; j++)
                            scanf("%d", &m1[i][j]);
                    }
                    printf("\n Input value of Matrix two:-");
                    for (i = 0; i < r2; i++) {
                        for (j = 0; j < c2; j++)
                            scanf("%d", &m2[i][j]);
                    }
                    for (i = 0; i < r1; i++)
                        for (j = 0; j < c2; j++) {
                            m3[i][j] = 0;
                            for (k = 0; k < c1; k++)
                                m3[i][j] = m3[i][j] + m1[i][k] * m2[k][j];
                        }
                    /*Displaying final matrix*/
                    printf("\n Multiplication of Matrix:-\n");
                    for (i = 0; i < r1; i++) {
                        for (j = 0; j < c2; j++)
                            printf("\t%d", m3[i][j]);
                        printf("\n");
                    }
                } else
                    printf("\n Multiplication is not possible");

                break;
            default:
                printf("wrong Selection");
                break;
        }
    }
}