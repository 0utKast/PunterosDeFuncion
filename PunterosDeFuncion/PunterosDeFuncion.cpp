
#if 0
#include <iostream>
int ejemplo() // Se le asigna una direcci�n en memoria
{
    return 5;
}

int main()
{
    std::cout << ejemplo << '\n';//muestra direcci�n en memoria de ejemplo
    std::cout << ejemplo();  // salta a esa direcci�n en memoria y 
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
    int (*ejemploPtr)() { &ejemplo }; // ejemploPtr apunta a la funci�n ejemplo
    ejemploPtr = &otroEjemplo; // ejemploPtr ahora apunta a funci�n otroEjemplo
    
    return 0;
}








// Declaraci�n anticipada funciones
int primero();
double segundo();
int tercero(int x);

// Asignaci�n punteros de funci�n
int (*fcnPtr1)() { &primero }; // correcto
int (*fcnPtr2)() { &segundo }; // error -- tipos retorno distintos
double (*fcnPtr4)() { &segundo }; // correcto
fcnPtr1 = &tercero; // error -- fcnPtr1 no tiene par�metros, pero tercero() s�
int (*fcnPtr3)(int) { &tercero }; // correcto
int (*fcnptr)() { nullptr }; //correcto



#include <iostream>

int ejemplo(int x)
{
    return x;
}

int main()
{
    int (*ejemploPtr)(int) { &ejemplo }; // Inicializa ejemploPtr con la funci�n ejemplo
    int resultado = (*ejemploPtr)(3); // llama a la funci�n ejemplo(3) a trav�s de ejemploPtr.
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
    int (*ejemploPtr)(int) { &ejemplo }; // Inicializa ejemploPtr con la funci�n ejemplo
    int resultado = ejemploPtr(5); // llama a la funci�n ejemplo (3) a trav�s de ejemploPtr.
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
    int (*ejemploPtr)(int) { &ejemplo }; // Inicializa ejemploPtr con la funci�n ejemplo
    if (ejemploPtr) // Se asegura que punteroPtr no es un puntero nulo
        ejemploPtr(5); // porque de serlo, esto provocar�a un comportamient indefinido

    return 0;
}





