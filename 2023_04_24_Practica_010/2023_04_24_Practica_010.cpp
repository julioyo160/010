// 2023_04_24_Practica_010.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//JULIO CESAR ESPINOZA VASQUEZ

#include <iostream>
#include <string>


int main()
{
    std::string usuario;
    std::string clave;

    std::cout << "Por favor, ingrese su nombre de usuario: ";
    std::cin >> usuario;

    std::cout << "Por favor, ingrese su clave: ";
    std::cin >> clave;

    if (usuario == "julio_vasquez" && clave == "123") {
        std::cout << "¡Bienvenido, Julio Vasquez!" << std::endl;
    }
    else {
        std::cout << "Lo siento, nombre de usuario o clave incorrectos." << std::endl;
    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
