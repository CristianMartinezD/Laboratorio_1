#include <iostream>

using namespace std;


/* Validador de numero entero */
int obtener_entero(string numero_en_texto){

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
    int A;
    cout<<"\nEscribe un numero entero: "; cin>>A;
    if (A%2 == 0) {cout<<endl<<A<<" Es par\n\n";}
    else {cout<<endl<<endl<<A<<" Es impar\n\n";}
    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 3
*/
void ejercicio_3(){
    int A,B,Mayor;
    cout<<"\nEscribe un numero entero: "; cin>>A;
    cout<<"\nEscribe otro numero entero: "; cin>>B;
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
    int A,B,menor;
    cout<<"\nEscribe un numero entero: "; cin>>A;
    cout<<"\nEscribe otro numero entero: "; cin>>B;
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
    int A,B;
    cout<<"\nEscribe un numero entero: "; cin>>A;
    cout<<"\nEscribe otro numero entero: "; cin>>B;
    float residuo = A%B;
    if (residuo/B >= 0.5){cout<<endl<<A<<"/"<<B<<" = "<<(A/B)+1<<endl<<endl;}
    else {cout<<endl<<A<<"/"<<B<<" = "<<A/B<<endl<<endl;}
    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 6
*/
void ejercicio_6(){
    int A,B;
    cout<<"\nEscribe un numero entero: "; cin>>A;
    cout<<"\nEscribe otro numero entero: "; cin>>B;

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
    int N;
    cout<<"\nEscribe un numero entero: "; cin>>N;

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
    int N;
    cout<<"\nEscribe un numero entero positivo: "; cin>>N;

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
    int r; float pi = 3.1416;
    cout<<"\nEscribe un numero entero positivo: "; cin>>r;

    cout<<"\n\nPerimetro: "<<2*pi*r<<endl;
    cout<<"\nArea: "<<pi*r*r<<endl<<endl;
    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 10
*/
void ejercicio_10(){
    int N;
    cout<<"\nEscribe un numero mayor que 0: "; cin>>N;
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
    int opcion = 100;
    while (opcion != 0) {
        cout<<"\nDeseas probar un EJERCICIO o un PROBLEMA?\n1. Ejercicio\n2. Problema\n0. Salir";
        cout<<"\nINGRESA UNA OPCION (1,2 o 0): "; cin>>opcion;

        if (opcion == 1){
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

        else if(opcion == 2){
            switch (opcion) {
            case 1: pronlema_1();
            }
        }

        else opcion = 0;

    }


    return 0;
}
