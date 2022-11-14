#include <stdio.h>

int main() {

  float salario, newSalario, reajuste, percentual;


  scanf("%f", &salario);


  if ((salario > 0) && (salario <= 400.00)) { //0 - 400   10%

            newSalario = (salario * 15/100) + salario;
            reajuste =   salario * 15/100;
            percentual =  (((newSalario - salario) / salario) * 100) ;

        printf("Novo salario: %.2f\n", newSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %.0f %%\n", percentual);

  } else if ((salario >= 400.01) && (salario <= 800.00)) { //400.01 - 800.00     12%

            newSalario = (salario * 12/100) + salario;
            reajuste =   salario * 12/100;
            percentual =  (((newSalario - salario) / salario) * 100) ;

        printf("Novo salario: %.2f\n", newSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %.0f %%\n", percentual);

  } else if ((salario > 800.00) && (salario <= 1200.00 )) { //800.01 - 1200.00     10%

            newSalario = (salario * 10/100) + salario;
            reajuste =   salario * 10/100;
            percentual =  (((newSalario - salario) / salario) * 100) ;

        printf("Novo salario: %.2f\n", newSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %.0f %%\n", percentual);

  } else if ((salario >= 1200.01) && (salario <= 2000.00 )) { //1200.01 - 2000.00     7%

            newSalario = (salario * 7/100) + salario;
            reajuste =   salario * 7/100;
            percentual =  (((newSalario - salario) / salario) * 100) ;

        printf("Novo salario: %.2f\n", newSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %.0f %%\n", percentual);

  } else if (salario > 2000.00) { //Acima de 2000.00        4%

            newSalario = salario * 0.04 + salario;
            reajuste =   salario * 0.04;
            percentual =  (((newSalario - salario) / salario) * 100) ;

        printf("Novo salario: %.2f\n", newSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %.0f %%\n", percentual);

    }


  return 0;
}
