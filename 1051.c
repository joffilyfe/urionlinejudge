#include <stdio.h>
 
int main(void) {
 
    float salary = 0;
    float tax = 0;
    float aux = 0;
 
    //get salary
    scanf("%f", &salary);
     
    //test cases
    if ( (salary >= 0.00) && (salary <= 2000.00) ) {
        printf("Isento\n");
 
    } else if ( (salary >= 2000.01) && (salary <= 3000.00)) {
        //taxa = salario - 2000 (isen??o) * o impost
        tax = (salary - 2000.00) * 0.08;
 
    } else if (salary >= 3000.01 && salary <= 4500.00) {
        tax = (salary - 3000.00) * 0.18 + (1000.00 * 0.08);
 
    } else {
        tax = ((salary - 4500.00) * 0.28) + (1500 * 0.18) + (1000.00 * 0.08);
    }
 
    if (tax > 0) {
        printf("R$ %0.2f\n", tax);
    }
    return 0;
}