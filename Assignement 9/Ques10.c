
#include <stdio.h>
#include <math.h> 

int main()
{
    float a, b, c;
    float r1, r2, imaginary;
    float D;

    printf("Enter values of a, b, c\n ");
    scanf("%f%f%f", &a, &b, &c);
    D = (b * b) - (4 * a * c);
    switch(D > 0)
    {
        case 1:
            r1 = (-b + sqrt(D)) / (2 * a);
            r2 = (-b - sqrt(D)) / (2 * a);

            printf("Two distinct and real roots exists: %.2f and %.2f", 
                    r1, r2);
            break;

        case 0:
            switch(D < 0)
            {
                case 1:
                    r1 = r2 = -b / (2 * a);
                    imaginary = sqrt(-D) / (2 * a);

                    printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f", 
                            r1, imaginary, r2, imaginary);
                    break;

                case 0:
                    r1 = r2 = -b / (2 * a);
                    printf("Two equal and real roots exists: %.2f and %.2f", r1, r2);
                    break;
            }
    }
    return 0;
}