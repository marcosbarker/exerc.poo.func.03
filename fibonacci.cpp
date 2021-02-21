#include <iostream>

using namespace std;

int fibonacci(int n){
     if (n == 1){
	return 1;
 }

    if (n == 2) {
	return 1;
 }

   int ultimo_numero = 1;
   int penultimo_numero = 1;
   for (int i = 3; i <= n; i++){
	int novo_numero = ultimo_numero + penultimo_numero; penultimo_numero = ultimo_numero; ultimo_numero = novo_numero;
	}

	return ultimo_numero;
 }

int main(){
    int n;
    cout << "Digite o tamanho da sequencia de Fibonacci desejada: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
	cout << "n= " << i << "\n fibonnaci= " << fibonacci(i) << "\n";
 }

    return 0;
}