#include <stdio.h>
#include <stdbool.h>

bool w = true;
const int evenDivisionNumber = 2;
int num;

int main()
{

    printf("number : ");
    scanf("%i",&num);


    while (w == true)
    {
        printf("\n%i\n",num);
        if (num % 2 == 0)
        {
            num = num / evenDivisionNumber;
            printf("%i",num);

        }
        else
        {
             num = num * 3 + 1;

            printf("%i",num);

        }
        if (num == 1)
        {
            printf("\nEnd ( 1 loop)");
            w = false;

        }
    }

}
int main();
