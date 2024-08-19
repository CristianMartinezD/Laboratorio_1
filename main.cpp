#include <iostream>

using namespace std;

        /* DECLARACIÓN DE LAS FUNCIONES: EJERCICIOS */
void ejercicio_1(); void ejercicio_2(); void ejercicio_3();
void ejercicio_4(); void ejercicio_5(); void ejercicio_6();
void ejercicio_7(); void ejercicio_8(); void ejercicio_9();
void ejercicio_10(); void ejercicio_11(); void ejercicio_12();
void ejercicio_13(); void ejercicio_14(); void ejercicio_15();
void ejercicio_16(); void ejercicio_17(); void ejercicio_18();
void ejercicio_19(); void ejercicio_20(); void ejercicio_21();
void ejercicio_22(); void ejercicio_23(); void ejercicio_24();
void ejercicio_25(); void ejercicio_26();void ejercicio_27();
void ejercicio_28(); void ejercicio_29(); void ejercicio_30();


        /* DECLARACIÓN DE LAS FUNCIONES: PROBLEMAS */
void problema_1(); void problema_2(); void problema_3();
void problema_4(); void problema_5(); void problema_6();
void problema_7(); void problema_8(); void problema_9();
void problema_10(); void problema_11(); void problema_12();
void problema_13(); void problema_14(); void problema_15();
void problema_16(); void problema_17();

        /*DECLARACIÓN DE OTRAS FUNCIONES*/
int verificar_entero(string); /* Esta función verifica si un string
                            puede servir como un numero entero */




int main()
{
    int OPCION = 100;
    while (OPCION != 0) {
        string opcion;
        cout<<"\nDeseas probar un EJERCICIO o un PROBLEMA?\n1. Ejercicio\n2. Problema\n0. Salir";
        cout<<"\nINGRESA UNA OPCION (1,2 o 0): "; cin>>opcion;
        OPCION = verificar_entero(opcion);
        while (OPCION != 1 && OPCION != 2 && OPCION != 0) {
            OPCION = verificar_entero("NO VALIDO");
        }

        if (OPCION == 1){
            string ejercicio; int EJERCICIO;
            cout<<"\nCual ejercicio deseas probar (del 1 al 30): "; cin>>ejercicio;
            EJERCICIO = verificar_entero(ejercicio);
            while (EJERCICIO < 1 || EJERCICIO > 30) {
                cout<<"Valor NO valido"<<endl;
                EJERCICIO = verificar_entero("Valor NO valido");
            }
            switch (EJERCICIO) {
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
            case 11: ejercicio_11();break;
            case 12: ejercicio_12();break;
            case 13: ejercicio_13();break;
            case 14: ejercicio_14();break;
            case 15: ejercicio_15();break;
            case 16: ejercicio_16();break;
            case 17: ejercicio_17();break;
            case 18: ejercicio_18();break;
            case 19: ejercicio_19();break;
            case 20: ejercicio_20();break;
            case 21: ejercicio_21();break;
            case 22: ejercicio_22();break;
            case 23: ejercicio_23();break;
            case 24: ejercicio_24();break;
            case 25: ejercicio_25();break;
            case 26: ejercicio_26();break;
            case 27: ejercicio_27();break;
            case 28: ejercicio_28();break;
            case 29: ejercicio_29();break;
            case 30: ejercicio_30();break;
            }
        }

        else if(OPCION == 2){
            switch (OPCION) {
            //case 1: problema_1();
            cout<<"Hola"; break;
            }
        }

        else OPCION = 0;

    }


    return 0;
}





/*
    EJECICIO No. 1
*/
void ejercicio_1(){
    string A,B;

    cout<<"\nEscribe un numero entero: "; cin>>A;
    int a = verificar_entero(A);
    cout<<"\nEscribe otro numero entero: "; cin>>B;
    int b = verificar_entero(B);

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

    N = verificar_entero(n); //Aquí verifico si ese string n puede servir como un entero.

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
    A = verificar_entero(a);
    cout<<"\nEscribe el segundo numero entero: "; cin>>b;
    B = verificar_entero(b);
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
    A = verificar_entero(a);
    cout<<"\nEscribe el segundo numero entero: "; cin>>b;
    B = verificar_entero(b);
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
    A = verificar_entero(a);
    cout<<"\nEscribe otro numero entero: "; cin>>b;
    B = verificar_entero(b);

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
    A = verificar_entero(a);
    cout<<"\nEscribe otro numero entero: "; cin>>b;
    B = verificar_entero(b);

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

    N = verificar_entero(n);
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
    N = verificar_entero(n);
    while (N < 0) {cout<<"El numero debe ser positivo.\n"; N = verificar_entero("NO VALIDO");}

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
    R = verificar_entero(r);
    while (R < 0) {cout<<"El numero debe ser positivo.\n"; R = verificar_entero("NO VALIDO");}
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
    N = verificar_entero(n);
    while (N < 0) {cout<<"El numero debe ser positivo.\n"; N = verificar_entero("NO VALIDO");}

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


/*
    EJECICIO No. 11
*/
void ejercicio_11(){
    string n; int N;
    cout<<"\nLA TABLA DE MULTIPLICAR DE N\n";
    cout<<"\nEscribe un numero entero N y te muestro su tabla hasta 10xN: \n"; cin>>n;
    N = verificar_entero(n);

    for (int i = 1; i <= 10; i++) cout<<i<<"x"<<N<<"="<<i*N<<endl;

    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 12
*/
void ejercicio_12(){
    int N; string n;
    cout<<"\n   POTENCIAS DESDE N^1 HASTA N^5\n";
    cout<<"Escribe un numero entero: "; cin>>n;
    N = verificar_entero(n);
    int potencia = N;
    cout<<N<<"^"<<1<<"="<<potencia<<endl;
    for (int i = 2; i <= 5; i++){
        for (int j = 2; j <= i; j++){
            potencia *= N;
        }
        cout<<N<<"^"<<i<<"="<<potencia<<endl;
        potencia = N;
    }

    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 13
*/
void ejercicio_13(){
    int N; string n;
    cout<<"\n   LOS DIVISORES DE N\n";
    cout<<"Escribe un numero entero: "; cin>>n;
    N = verificar_entero(n);

    if (N == 0) cout<<"\nLos divisores del 0 son todos los reales."<<endl;
    else {cout<<"\nLos divisores de "<<N<<" son:"<<endl;
        if (N < 0) N = -1*N;
        for (int i = 1; i <= N; i++){
            if (N%i == 0) cout<<i<<endl;
        }
    }

    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 14
*/
void ejercicio_14(){
    cout<<"\n   IMPRIMIR DOS COLUMNAS (1-50 | 50-1)\n";

    for (int i = 1; i <= 50; i++){
        cout<<i<<"      "<<51-i<<endl;
    }

    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 15
*/
void ejercicio_15(){
    string n; int N, suma = 0; bool cero = false, primera_vez =true;

    cout<<"\n   SUMAR HASTA QUE SE INGRESE 0\n";
    while (cero != true) {
        if (primera_vez == true){
            cout<<"Ingresa un numero entero: "; cin>>n;
            N = verificar_entero(n);
            suma += N;
            primera_vez = false;
        }
        else{
            cout<<"Ingresa otro numero entero: "; cin>>n;
            N = verificar_entero(n);
            suma += N;
        }
        if (N == 0) {
            cero = true;
            cout<<"\nEl resultado de la sumatoria es: "<<suma<<endl<<endl;
        }

    }

    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 16
*/
void ejercicio_16(){
    cout<<"\n   TÍTULO\n";

    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 17
*/
void ejercicio_17(){
    cout<<"\n   TÍTULO\n";

    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 18
*/
void ejercicio_18(){
    cout<<"\n   TÍTULO\n";

    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 19
*/
void ejercicio_19(){
    cout<<"\n   TÍTULO\n";

    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 20
*/
void ejercicio_20(){
    cout<<"\n   TÍTULO\n";

    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 21
*/
void ejercicio_21(){
    cout<<"\n   TÍTULO\n";

    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 21
*/
void ejercicio_22(){
    cout<<"\n   TÍTULO\n";

    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 23
*/
void ejercicio_23(){
    cout<<"\n   TÍTULO\n";

    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 24
*/
void ejercicio_24(){
    cout<<"\n   TÍTULO\n";

    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 25
*/
void ejercicio_25(){
    cout<<"\n   TÍTULO\n";

    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 26
*/
void ejercicio_26(){
    cout<<"\n   TÍTULO\n";

    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 27
*/
void ejercicio_27(){
    cout<<"\n   TÍTULO\n";

    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 28
*/
void ejercicio_28(){
    cout<<"\n   TÍTULO\n";

    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 29
*/
void ejercicio_29(){
    cout<<"\n   TÍTULO\n";

    system("pause");
    system("cls");
}
/*##########FIN##########*/


/*
    EJECICIO No. 30
*/
void ejercicio_30(){
    cout<<"\n   TÍTULO\n";

    system("pause");
    system("cls");
}
/*##########FIN##########*/






int verificar_entero(string numero_en_texto){ /* Esta función verifica si un string
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
