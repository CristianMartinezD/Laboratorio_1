#include <iostream>

using namespace std;


/* Validador de numero entero */
int obtener_entero(string numero_en_texto){ /* Esta función verifica si un string puede
                                            puede servir como un numero entero */

    bool El_numero_es_negativo = false;
    string NUMEROS = "1234567890";
    unsigned validador = 0;

    while (validador < numero_en_texto.length())
    {   if (numero_en_texto[0] == '-' && numero_en_texto.length() > 1) {numero_en_texto.erase(0,1); El_numero_es_negativo = true;}

        for (unsigned i = 0; i < numero_en_texto.length(); i++)
        {

            if (NUMEROS.find(numero_en_texto[i]) != string::npos) {
                validador += 1;
            } else{
                cout<<"Ingresa un numero valido: "; cin>>numero_en_texto;
                validador = 0;
                break;
            }
        }
        if (validador != 0) validador += 1;
    }

    if (El_numero_es_negativo) return -1*stoi(numero_en_texto);
    else return stoi(numero_en_texto);

}




/*
    EJECICIO No. 1
*/
void ejercicio_1(){
    string A,B;

    cout<<"\nEscribe un numero entero: "; cin>>A;
    int a = obtener_entero(A);
    cout<<"\nEscribe otro numero entero: "; cin>>B;
    int b = obtener_entero(B);

    cout<<"\nEl residuo de la division "<<a<<"/"<<b<<" es: "<<a%b<<endl<<endl;
    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 2
*/
void ejercicio_2(){
    string n; int N;
    cout<<"\nEscribe un numero entero y te dire si es par o impar: "; cin>>n;

    N = obtener_entero(n); //Aquí verifico si ese string n puede servir como un entero.

    if (N%2 == 0) {cout<<endl<<N<<" Es par\n\n";}
    else {cout<<endl<<endl<<N<<" Es impar\n\n";}
    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 3
*/
void ejercicio_3(){
    int A,B,Mayor; string a,b;
    cout<<"\nEscribe dos numeros y te digo cual es mayor.\n";
    cout<<"\nEscribe el primer numero entero: "; cin>>a;
    A = obtener_entero(a);
    cout<<"\nEscribe el segundo numero entero: "; cin>>b;
    B = obtener_entero(b);
    Mayor = (A > B) ? A:B;
    cout<<"\nEl mayor es "<<Mayor<<endl<<endl;
    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 4
*/
void ejercicio_4(){
    int A,B,menor; string a,b;
    cout<<"\nEscribe dos numeros y te digo cual es menor.\n";
    cout<<"\nEscribe el primer numero entero: "; cin>>a;
    A = obtener_entero(a);
    cout<<"\nEscribe el segundo numero entero: "; cin>>b;
    B = obtener_entero(b);
    menor = (A < B) ? A:B;
    cout<<"\n\nEl menor es "<<menor<<endl<<endl;
    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 5
*/
void ejercicio_5(){
    int A,B; string a,b;
    cout<<"\n     REDONDEO DE A/B\n";
    cout<<"\nEscribe un numero entero: "; cin>>a;
    A = obtener_entero(a);
    cout<<"\nEscribe otro numero entero: "; cin>>b;
    B = obtener_entero(b);

    if (B<0) {B = -1*B; A = -1*A;}

    float residuo = A%B;

    if (residuo > 0) {
        if (residuo/B >= 0.5){cout<<endl<<A<<"/"<<B<<" = "<<(A/B)+1<<endl<<endl;}
        else {cout<<endl<<A<<"/"<<B<<" = "<<A/B<<endl<<endl;}
        system("pause");
        system("cls");
    }

    else {
        residuo = -1*residuo;
        if (residuo/B >= 0.5){cout<<endl<<A<<"/"<<B<<" = "<<(A/B)-1<<endl<<endl;}
        else {cout<<endl<<A<<"/"<<B<<" = "<<A/B<<endl<<endl;}
        system("pause");
        system("cls");
    }
}
/*##########FIN##########*/


/*
    EJECICIO No. 6
*/
void ejercicio_6(){
    int A,B; string a,b;
    cout<<"\n     POTENCIA DE A^B\n";
    cout<<"\nEscribe un numero entero: "; cin>>a;
    A = obtener_entero(a);
    cout<<"\nEscribe otro numero entero: "; cin>>b;
    B = obtener_entero(b);

    bool B_es_negativo = false;
    if (B < 0){ B = B*(-1); B_es_negativo = true;}

    if (B == 0) {cout<<endl<<A<<"^"<<B<<" = "<<1;}
    else{
        long long int resultado = A;
        for (int var = 1; var < B; ++var) {
            resultado *= A;
        }
        if(B_es_negativo == false)cout<<endl<<A<<"^"<<B<<" = "<<resultado<<endl<<endl;
        else {float resul = 1.0/resultado; cout<<endl<<A<<"^-"<<B<<" = "<<resul<<endl<<endl;}
    }
    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 7
*/
void ejercicio_7(){
    int N; string n;
    cout<<"\nEscribe un numero entero N y te doy la sumatoria de 0 hasta N: "; cin>>n;

    N = obtener_entero(n);
    bool A_es_negativo = false;
    if (N < 0) {A_es_negativo = true; N = -1*N;}

    int suma = 0;
    for (int var = 1; var <= N; ++var) {
        suma += var;
    }
    if (A_es_negativo == true) {cout<<"\nLa sumatoria desde 0 hasta -"<<N<<" es -"<<suma<<endl<<endl;}
    else cout<<"\nLa sumatoria desde 0 hasta "<<N<<" es "<<suma<<endl<<endl;
    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 8
*/
void ejercicio_8(){
    int N; string n;
    cout<<"\n     HALLEMOS N!\n";
    cout<<"\nEscribe un numero entero positivo: "; cin>>n;
    N = obtener_entero(n);
    while (N < 0) {cout<<"El numero debe ser positivo.\n"; N = obtener_entero("NO VALIDO");}

    int long long resultado = 1;
    for (int var = 1; var <= N; ++var) {
        resultado *= var;
    }
    cout<<"\n"<<N<<"!: "<<resultado<<endl<<endl;
    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 9
*/
void ejercicio_9(){
    int R; float pi = 3.1416; string r;
    cout<<"\n     HALLAR PERIMETRO Y AREA.\n";
    cout<<"\nEscribe un numero entero positivo: "; cin>>r;
    R = obtener_entero(r);
    while (R < 0) {cout<<"El numero debe ser positivo.\n"; R = obtener_entero("NO VALIDO");}
    cout<<"\n\nPerimetro: "<<2*pi*R<<endl;
    cout<<"\nArea: "<<pi*R*R<<endl<<endl;
    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 10
*/
void ejercicio_10(){
    int N; string n;
    cout<<"\n     MULTIPLOS DE N MENORES A 100\n";
    cout<<"\nEscribe un numero mayor que 0: "; cin>>n;
    N = obtener_entero(n);
    while (N < 0) {cout<<"El numero debe ser positivo.\n"; N = obtener_entero("NO VALIDO");}

    cout<<"\nMultiplos de "<<N<<" menores que 100:\n";

    int i = 1;
    while (N*i < 100) {
        cout<<N*i<<endl;
        i++;
    }
    system("pause");
    system("cls");
}
/*##########FIN##########*/



void pronlema_1(){}

int main()
{
    int OPCION = 100;
    while (OPCION != 0) {
        string opcion;
        cout<<"\nDeseas probar un EJERCICIO o un PROBLEMA?\n1. Ejercicio\n2. Problema\n0. Salir";
        cout<<"\nINGRESA UNA OPCION (1,2 o 0): "; cin>>opcion;
        OPCION = obtener_entero(opcion);
        while (OPCION != 1 && OPCION != 2 && OPCION != 0) {
            OPCION = obtener_entero("NO VALIDO");
        }

        if (OPCION == 1){
            int ejercicio;
            cout<<"\nCual ejercicio deseas probar (del 1 al 30): "; cin>>ejercicio;
            switch (ejercicio) {
            case 1: ejercicio_1();break;
            case 2: ejercicio_2();break;
            case 3: ejercicio_3();break;
            case 4: ejercicio_4();break;
            case 5: ejercicio_5();break;
            case 6: ejercicio_6();break;
            case 7: ejercicio_7();break;
            case 8: ejercicio_8();break;
            case 9: ejercicio_9();break;
            case 10: ejercicio_10();break;
            }
        }

        else if(OPCION == 2){
            switch (OPCION) {
            case 1: pronlema_1();
            }
        }

        else OPCION = 0;

    }


    return 0;
}
