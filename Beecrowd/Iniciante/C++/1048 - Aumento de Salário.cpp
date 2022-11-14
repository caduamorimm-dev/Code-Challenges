#include <bits/stdc++.h>
using namespace std;

int main() {

  double salario, newSalario, reajuste, percentual;

  cin >> salario;


  if ((salario > 0) && (salario <= 400.00)) { //0 - 400   10%
      
            newSalario = (salario * 15/100) + salario;
            reajuste =   salario * 15/100;
            percentual =  (((newSalario - salario) / salario) * 100) ;

        cout << fixed << setprecision (2);
        cout << "Novo salario: " << newSalario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << fixed << setprecision (0);
        cout << "Em percentual: " << percentual << " %" << endl; 
    
  } else if ((salario >= 400.01) && (salario <= 800.00)) { //400.01 - 800.00     12% 
      
            newSalario = (salario * 12/100) + salario;
            reajuste =   salario * 12/100;
            percentual =  (((newSalario - salario) / salario) * 100) ;

        cout << fixed << setprecision (2);
        cout << "Novo salario: " << newSalario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << fixed << setprecision (0);
        cout << "Em percentual: " << percentual << " %" << endl; 
    
  } else if ((salario >= 800.01) && (salario <= 1200.00 )) { //800.01 - 1200.00     10% 
      
            newSalario = (salario * 10/100) + salario;
            reajuste =   salario * 10/100;
            percentual =  (((newSalario - salario) / salario) * 100) ;

        cout << fixed << setprecision (2);
        cout << "Novo salario: " << newSalario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << fixed << setprecision (0);
        cout << "Em percentual: " << percentual << " %" << endl; 
    
  } else if ((salario >= 1200.01) && (salario <= 2000.00 )) { //1200.01 - 2000.00     7% 
      
            newSalario = (salario * 7/100) + salario;
            reajuste =   salario * 7/100;
            percentual =  (((newSalario - salario) / salario) * 100) ;

        cout << fixed << setprecision (2);
        cout << "Novo salario: " << newSalario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << fixed << setprecision (0);
        cout << "Em percentual: " << percentual << " %" << endl; 
    
  } else if (salario > 2000.00) { //Acima de 2000.00        4% 
      
            newSalario = (salario * 4/100) + salario;
            reajuste =   salario * 4/100;
            percentual =  (((newSalario - salario) / salario) * 100) ;

        cout << fixed << setprecision (2);
        cout << "Novo salario: " << newSalario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << fixed << setprecision (0);
        cout << "Em percentual: " << percentual << " %" << endl; 
    }


  return 0;
}
