#include <stdio.h>
int main()
{
    int unit;
    float t, amount, s;
    printf("Enter unit charges:\n");
    scanf("%d", &unit);
    switch (unit <= 50)
    {
    case 1:
        amount = unit * 0.50;
        break;
    case 0:
        switch (unit <= 150)
        {
        case 1:
            amount = 25 + (unit - 50) * 0.75;
            break;
        case 0:
            switch (unit <= 250)
            {
            case 1:
                amount = 100 + (unit - 150) * 1.20;
                break;
            case 0:
                amount = 220 + (unit - 250) * 1.50;
                break;
            }
            break;
        }
        break;
    }
    s = amount * 0.20;
    t = amount + s;
    printf("%f", t);
    return 0;
}