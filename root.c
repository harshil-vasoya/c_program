#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])

 {
    double a, b, c, discriminant, root1, root2, rPart, iPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = (b) * (b) - 4 * (a * c);

    
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %lf and root2 = %lf", root1, root2);
    }

    
   if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %lf;", root1);
    }

   
   if(discriminant<0)
    {
        rPart = -b / (2 * a);
        iPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %lf+%lfi and root2 = %lf-%lfi", rPart, iPart, rPart, iPart);
    }

    return 0;
} 