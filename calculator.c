#include <stdio.h>
#include <stdlib.h>

//Functions

double add(double n1, double n2){
    double result = n1 + n2;
    return result;
}
double sub(double n1, double n2){
    double result = n1 - n2;
    return result;
}
double multi(double n1, double n2){
    double result = n1 * n2;
    return result;
}
double divide(double n1, double n2){
    double result = n1 / n2;
    return result;
}
int main()
{
    int choice;
    printf("WELCOME ! Please choose the operation you want to perform:\n");
    printf("---------------------------------------------------------\n");
    printf("Type 1 for ADDITION | 2 for SUBTRACTION | 3 for MULTIPLICATION and 4 for DIVISION\n===>");
    scanf("%d",&choice);
    if(choice == 1){
        double n1;
        double n2;
        printf("ENTER FIRST NUMBER: ");
        scanf("%lf", &n1);
        printf("ENTER SSECOND NUMBER: ");
        scanf("%lf", &n2);
        printf("%f + %f = %f",n1 , n2, add(n1,n2));
    }
    else if(choice == 2){
        double n1;
        double n2;
        printf("ENTER FIRST NUMBER: ");
        scanf("%lf", &n1);
        printf("ENTER SSECOND NUMBER: ");
        scanf("%lf", &n2);
        printf("%f - %f = %f",n1 , n2, sub(n1,n2));
    }
    else if(choice == 3){
        double n1;
        double n2;
        printf("ENTER FIRST NUMBER: ");
        scanf("%lf", &n1);
        printf("ENTER SSECOND NUMBER: ");
        scanf("%lf", &n2);
        printf("%f X %f = %f",n1 , n2, multi(n1,n2));
    }
    else if(choice == 4){
        double n1;
        double n2;
        printf("ENTER FIRST NUMBER: ");
        scanf("%lf", &n1);
        printf("ENTER SSECOND NUMBER: ");
        scanf("%lf", &n2);
        printf("%f / %f = %f",n1 , n2, divide(n1,n2));
    }
    else{
        printf("                      INVALID INPUT! ENTER 1,2,3 or 4\n");
        printf("                      -----------------------------------");
        printf("\n");
        main();
    }

    return 0;
}


