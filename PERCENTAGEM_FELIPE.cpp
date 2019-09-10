#include <iostream>

using namespace std;

double calcular_Porcentagem(double porcentagem)
{
	return porcentagem/100;
}

double calcular(double valor, double porcentagem)
{
	return valor*calcular_Porcentagem(porcentagem);
}

int main()
{
	int n = 1;
	
	cout << "----> Para sair 'control+C'\n\n" << endl;
	
	while(1)
	{
		double valor = 0.0, porcentagem = 0.0; 
		
		cout << "Conta (" << n++ << "):\n" << endl;
		
		cout << "Valor:  ";
		cin >> valor;
		
		cout << "Porcentagem:  ";
		cin >> porcentagem;
				
		cout << porcentagem << "% de R$" << valor << " = " << calcular(valor, porcentagem) << " reais." << endl;
		cout << "\n\n-------------------------------------------------------------------------------------------" << endl;
		
	}
	
	return 0;
}