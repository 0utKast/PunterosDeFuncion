
#if 0
#include <iostream>
int ejemplo() // Se le asigna una dirección en memoria
{
    return 5;
}

int main()
{
    std::cout << ejemplo << '\n';//muestra dirección en memoria de ejemplo
    std::cout << ejemplo();  // salta a esa dirección en memoria y 
                            //ejecuta su contenido

    return 0;
}






// fcnPtr is a pointer to a function that takes no arguments and returns an integer






int (*const ejemploPtr)();


int *ejemploPtr ();








int ejemplo()
{
    return 5;
}

int otroEjemplo()
{
    return 6;
}

int main()
{
    int (*ejemploPtr)() { &ejemplo }; // ejemploPtr apunta a la función ejemplo
    ejemploPtr = &otroEjemplo; // ejemploPtr ahora apunta a función otroEjemplo
    
    return 0;
}








// Declaración anticipada funciones
int primero();
double segundo();
int tercero(int x);

// Asignación punteros de función
int (*fcnPtr1)() { &primero }; // correcto
int (*fcnPtr2)() { &segundo }; // error -- tipos retorno distintos
double (*fcnPtr4)() { &segundo }; // correcto
fcnPtr1 = &tercero; // error -- fcnPtr1 no tiene parámetros, pero tercero() sí
int (*fcnPtr3)(int) { &tercero }; // correcto
int (*fcnptr)() { nullptr }; //correcto



#include <iostream>

int ejemplo(int x)
{
    return x;
}

int main()
{
    int (*ejemploPtr)(int) { &ejemplo }; // Inicializa ejemploPtr con la función ejemplo
    int resultado = (*ejemploPtr)(3); // llama a la función ejemplo(3) a través de ejemploPtr.
    std::cout << resultado;

    return 0;
}





#include <iostream>
int ejemplo(int x)
{
    return x;
}

int main()
{
    int (*ejemploPtr)(int) { &ejemplo }; // Inicializa ejemploPtr con la función ejemplo
    int resultado = ejemploPtr(5); // llama a la función ejemplo (3) a través de ejemploPtr.
    std::cout << resultado;

    return 0;
}

#endif



int ejemplo(int x)
{
    return x;
}

int main()
{
    int (*ejemploPtr)(int) { &ejemplo }; // Inicializa ejemploPtr con la función ejemplo
    if (ejemploPtr) // Se asegura que punteroPtr no es un puntero nulo
        ejemploPtr(5); // porque de serlo, esto provocaría un comportamient indefinido

    return 0;
}





