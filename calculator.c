#include <stdio.h>


int main(){
    int a , b;
    char op;
    char choice;
    printf("\n------BASIC CALCULATOR--------\n");
    printf("1.Addition\n");
    printf("2.Multiplication\n");
    printf("3.Substraction\n");
    printf("4.Division\n");
   do

   {
    
  
    
    printf("Enter a number:",a);
    scanf("%d",&a);
    printf("Select the Oprtation(+,-,x,/) :",op);
    scanf(" %c",&op);
    printf("Enter a number b:",b);
    scanf("%d",&b);
    switch (op)
    {
    case '+':
  
    printf("%d + %d = %d",a , b, (a+b));
        
        break;
    case '-':
   
    printf("%d - %d = %d",a , b, (a-b));
        
        break;
    case '*':
  
    printf("%d x %d = %d",a , b, (a*b));
        
        break;
    case '/':

    if (b==0)
    {
        printf("Infinite value ,dinominator will be not equal to 0\n");
    }
    else
    
    printf("%d / %d = %d",a , b, (a/b));
        
        break;

    
    default:
    printf("Invalid Opration !\n");
        
    }
        printf("\nClear ? (y/Y)\n");
        scanf(" %c",&choice);
     } while (choice=='y'|| choice=='y');
     
    return 0;

}