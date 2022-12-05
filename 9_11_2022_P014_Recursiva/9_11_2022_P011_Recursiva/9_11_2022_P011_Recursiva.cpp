// 9_11_2022_P014_Recursiva.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Jose Juan Bañuelos Hernandez
// Recursividad

#include <iostream>

/*void invertir(int num)
{
    std::cout << num % 10;
    if (num > 10)
    {
        invertir(num / 10);
    }

}
*/

/*int main()
{
    int numero;
    do
    {
        std::cout << "ingresa un numero de 4 cifras\n";
        std::cin >> numero;
        if (numero < 0)
        {
            std::cout << "\nIngresa un numero entero y positivo de 4 cifras :b" << std::endl;
        }
    } while (numero < 0);
    invertir(numero);
    std::cout << std::endl<< std::endl;
}
*/

//Convertir un Numero Decimal a Binario:
void convertir(int dec)
{
    std::string binario;

    std::cout << dec % 2;
    if (dec > 0)
    {
        if (dec % 2 == 0)
        {
            binario = "0" + binario;
        }
        else
        {
            binario = "1" + binario;
        }
        dec = (int)dec / 2;

        convertir(dec);
    }
}

int main()
{
    int decimal;
    do
    {
        std::cout << "Por favor ingrese un numero entero positivo" << std::endl;
        std::cin >> decimal;
        std::cout << "El numero en binario es:\n";
        if (decimal < 0)
        {
            std::cout << "No valido, vuelva a intentar\n";
             system("pause");
             system("cls");
        }
    } while (decimal < 0);
    convertir(decimal);

    std::cout << std::endl << std::endl;
}


