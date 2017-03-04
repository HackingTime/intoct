#include <stdio.h>
#include <stdlib.h>

int main()
{
    int des;
    int sep1, sep2, sep3, sep4, sep5;
    int oct1, oct2, oct3, oct4, oct5;
    printf("Enter a number between 0 and 32767:");
    scanf("%d", &des);

    sep1 = des % 8;
    des = des / 8;

    sep2 = des % 8;
    des = des / 8;

    sep3 = des % 8;
    des = des / 8;

    sep4 = des % 8;
    des = des / 8;

    sep5 = des % 8;
    des = des / 8;

    printf("%d%d%d%d%d", sep5, sep4, sep3, sep2, sep1);

    return 0;
}
