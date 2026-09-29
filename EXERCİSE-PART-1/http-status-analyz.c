#include <stdio.h>

int main()
{
    int durum = 1;
    int status_code;

    while (durum)
    {
        printf("Lutfen status code girin (0 = quit): ");
        scanf("%d", &status_code);

        switch (status_code)
        {
            case 0:
                durum = 0;
                break;

            case 200:
                printf("%d => OK !!!\n", status_code);
                break;

            case 301:
                printf("%d => REDIRECT !!!\n", status_code);
                break;

            case 401:
                printf("%d => UNAUTHORIZED !!!\n", status_code);
                break;

            case 403:
                printf("%d => FORBIDDEN !!!\n", status_code);
                break;

            case 404:
                printf("%d => NOT FOUND !!!\n", status_code);
                break;

            case 500:
                printf("%d => INTERNAL SERVER ERROR !!!\n", status_code);
                break;

            default:
                printf("%d => UNKNOWN STATUS CODE !!!\n", status_code);
                break;
        }
    }

    return 0;
}