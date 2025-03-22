//Alberto Antonio Martinez Duarte 0909-24-7901
#include <iostream>

using namespace std;


double suma( double a,double b) {
    cout <<"EL RESULTADO DE LA SUMA FUE: "<< endl;
    cout << a + b << endl;
    return a+b;
}

double restar(double a,double b) {
    cout <<"EL RESULTADO DE LA RESTA FUE: "<< endl;
    cout << a - b << endl;
    return a-b;
}

double multiplicacion(double a,double b) {
    cout <<"EL RESULTADO DE LA MULTIPLICACION FUE: "<< endl;
    cout << a * b << endl;
    return a*b;
}

double division(double a, double b) {
    cout <<"EL RESULTADO DE LA DIVISION FUE: "<< endl;
    cout << a / b << endl;
    return a/b;
}

double raiz(double a, double b= 0.00001) {
    cout <<"EL RESULTADO DE LA RAIZ CUADRADA FUE: "<< endl;
    if (a < 0) {
        std::cout << "Error: No se puede calcular la raíz cuadrada de un número negativo." << std::endl;
        return -1;
    }
    double estimacion = a;
    double diferencia;

    do {
        diferencia = (estimacion * estimacion - a) / (2 * estimacion);
        estimacion -= diferencia;
    } while (diferencia > b || diferencia < -b);
    cout <<"El resultado es: "<< estimacion << endl;
    return estimacion;
}

double potencia(double a, double b) {
        double resultado = 1.0;
        if (b < 0) {
            a = 1 / a;
            b = -b;
        }
        for (int i = 0; i < b; i++) {
            resultado *= a;
        }
        cout << resultado << endl;
        return resultado;
    }

int factorial(int a){
    int fac1 = 1;
    for (int i = 1; i <= a; i++) {
        fac1 *= i;
    }
    cout << "El factorial del num ingresado fue: " << fac1 << endl;
    return fac1;
}


int main() {
    int opcion;
    cout << "INGRESE EN FORMA DE NUMERO LA OPCION QUE DESEA REALIZAR EN LA CALCULADORA" << endl;
    cout << "1: SUMA" << endl;
    cout << "2: RESTA" << endl;
    cout << "3: MULTIPLICACION" << endl;
    cout << "4: DIVISION" << endl;
    cout << "5: RAIZ" << endl;
    cout << "6: POTENCIA" << endl;
    cout << "7: FACTORIAL" << endl;

    cin >> opcion;
    switch (opcion) {
        case 1:{
            double a;
            double b;
            cout << "INGRESE EL PRIMER VALOR PARA SUMAR;" << endl;
            cin >> a;
            cout << "INGRESE EL SEGUNDO VALOR;" << endl;
            cin >>b;
            suma(a,b);
            break;
        }
        case 2: {
            double a;
            double b;
            cout << "INGRESE EL PRIMER VALOR PARA RESTAR;" << endl;
            cin >> a;
            cout << "INGRESE EL SEGUNDO VALOR;" << endl;
            cin >>b;
            restar(a,b);
            break;
        }
        case 3: {
            double a;
            double b;
            cout << "INGRESE EL PRIMER VALOR PARA MULTIPLICAR:" << endl;
            cin >> a;
            cout << "INGRESE EL SEGUNDO VALOR;" << endl;
            cin >>b;
            multiplicacion(a,b);
            break;
        }
        case 4: {
            double a;
            double b;
            cout << "INGRESE EL PRIMER VALOR PARA DIVIDIR:" << endl;
            cin >> a;
            cout << "INGRESE EL SEGUNDO VALOR;" << endl;
            cin >>b;
            division(a,b);
            break;
        }
        case 5: {
            double a;
            cout << "INGRESE EL VALOR PARA OBTENER SU RAIZ CUADRADA: " << endl;
            cin >> a;
            raiz(a);
            break;
        }
        case 6: {
            double a;
            double b;
            cout << "INGRESE EL PRIMER VALOR PARA LA POTENCIA:" << endl;
            cin >> a;
            cout << "INGRESE EL SEGUNDO VALOR PARA LA POTENCIA:" << endl;
            cin >>b;
            potencia(a,b);
            break;
        }
        case 7: {
            double a;
            cout << "INGRESE EL VALOR PARA OBTENER EL FACTORIAL:" << endl;
            cin >> a;
            factorial(a);
            break;
        }
        default:cout << "OPERACION NO  VALIDA NO VALIDA, INTENTE DE NUEVO";
        break;
    }
}

