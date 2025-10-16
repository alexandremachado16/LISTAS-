#include <iostream>
#include <iostring>
#include <string>
#include <climits>
#include <iomainp>
using namespace std;
 
int main()
{
 
string nome1, nome2;
int idade1, idade2;
double salario1, salrio2;
char genero1, genero2;
 
cout << "Nome do primeiro funcionario " << endl;
getline(cin, nome1);
cout << "idade1 " << nome1 << endl;
cin >> idade1;
cout << "salario1 de " << nome1 << endl;
cin >> salario1;
cout << "Genero de " << nome1 << endl;
cin >> genero1;
cout << "Nome do segundo funcionario " << endl;
cin.ignore(INT_MAX, '\n');
getline(cin, nome2);
cout << "idade12 " << nome2 << endl;
cin >> idade2;
cout << "salario1 de " << nome2 << endl;
cin >> salario2;
cout << "Genero de " << nome2 << endl;
cin >> genero2;
cout << fixed << setprecision(2);
cout <<"o funcionario " << nome1 << " do genero " << genero1 << "tem" << " idade1 " << " anos de idade" << "e recebe R$" << salario1 << endl;
cout <<"o funcionario " << nome2 << " do genero " << genero2 << "tem" << " idade2 " << " anos de idade" << "e recebe R$" << salario1 << endl;
return 0;
}