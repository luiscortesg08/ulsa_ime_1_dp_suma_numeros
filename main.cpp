// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿por qué debe existir la función main()?
int main() {
    // 1. Constante: valor que no cambia durante la ejecución
    const int CANTIDAD = 5;

    // 2. Variables (siempre inicializadas)
    double suma   = 0;
    double numero = 0;

    std::cout << "Suma de " << CANTIDAD << " numeros\n";

    // 3. Ciclo: repetir CANTIDAD veces
    //    TODO: elige un ciclo (for o while) y usa un contador
    //    TODO: pedir el numero, leerlo y acumularlo en suma
    for (int contador = 1; contador <= CANTIDAD; contador++) {
        std::cout << "Numero " << contador << " de " << CANTIDAD << ": ";
        std::cin >> numero;
        suma = suma + numero;
    }

    // 4. Salida
    std::cout << "La suma es: " << suma << "\n";

    // ¿Qué significa return 0;?
    return 0;
}
