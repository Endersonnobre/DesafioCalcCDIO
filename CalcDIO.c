#include <stdio.h> 

int main(){

    int num1, num2, count = 0;
    float res;
    char op;
    char con[32];

    printf("Escoolha a operação matématica. (+ - * / b h )");
    scanf("%c", &op);

    if (op == 'b' || op == 'h')
    {
        printf("Digite o número para conversão.");
        scanf("%d", &num1);
    }else{
        printf("Digite o primeiro número.");
        scanf("%d", &num1);

        printf("Digite o segundo número.");
        scanf("%d", &num2);
    }

    

    switch (op)
    {
    case '+':
        res = num1 + num2;
        break;
    case '-':
        res = num1 - num2;
        break;
    case '*':
        res = num1 * num2;
        break;
    case '/':
        if (num2 > 0)
        {
            res = num1 / num2;
        }else{
            printf("Nao pode haver uma divisão por zero.");
        }
        break;
    case 'b':
        if(num1 == 0)
            res = 0;
        
        while (num1 > 0)
        {
            con[count] = num1 % 2;
            num1 /= 2;
            count++;
        }
        break;;
    case 'h':
        if(num1 == 0)
            res = 0;
        while (num1 > 0)
        {
            int temp = num1 % 16;

            if(temp < 10)
                con[count] = temp + '0';
            else
                con[count] = temp - 10 + 'A';

            num1 /= 16;
            count++;
        }
        break;
    default:
        printf("Operação inválida!");
        break;
    };

    if(op == 'b' || op == 'h'){
        for (int i = count - 1; i >= 0; i--)
        {
            printf("%d", con[i]);
        }  
    }else{
        printf("%d", res);
    }

    return 0;
}