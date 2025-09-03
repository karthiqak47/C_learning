#include<stdio.h>
#include<stdlib.h>

int main() {
  char op;
  double a,b,res;

printf("Type operation: a , s , m , d ");
scanf("%d",&op);
printf("enter two operands");
scanf("%d %d ",&a,&b);
switch (op) {
    case 'a':
        res = a + b;
        break;
    case 's':
        res = a - b;
        break;
    case 'm':
         res = a * b;
        break;
    case 'd':
        res = a / b;
        break;
    default:
        printf("Error! Incorrect Operator Value\n");
        res = 0;
    }
    return 0;
}
  
