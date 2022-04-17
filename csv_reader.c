#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main()
{
    char student[11][5][32] = {0};
    char info1[5] = {0}, info2[32] = {0}, info3[10] = {0}, info4[10] = {0}, info5[10] = {0};
    int i1 = 0;
    FILE *csv;
    csv = fopen("Student.csv","r");
    while((fscanf(csv,"%5[^,],%32[^,],%10[^,],%10[^,],%s ", info1, info2, info3, info4, info5)) != EOF)
    {
        int i2 = 0;
        memcpy(student[i1][i2], info1, 5);
        i2 += 1;
        memcpy(student[i1][i2], info2, 32);
        i2 += 1;
        memcpy(student[i1][i2], info3, 10);
        i2 += 1;
        memcpy(student[i1][i2], info4, 10);
        i2 += 1;
        memcpy(student[i1][i2], info5, 10);
        i2 += 1;
        i1 += 1;
    }
    for(int i = 0; i < 11; i++)
    {
        for(int i2 = 0; i2 < 5; i2++)
        {
            printf("%s ", student[i][i2]);
        }
        printf("\n");
    }
}