#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

// Funcion que lee la opcion del menu
string LeerOpcion(const string& dir) {
    string s = "";
    try {
        ifstream bf(dir.c_str());
        getline(bf, s);
    } catch (exception const& ex) {
        cout << "No se encontro el archivo" << endl;
    }
    return s;
}

// Funcion que lee el alfabeto de la Maquina de Turing TXT
string LeerAlfabeto(const string& dir) {
    string s = "";
    try {
        ifstream bf(dir.c_str());
        getline(bf, s); // Lee la primera línea
        getline(bf, s); // Lee la segunda línea
    } catch (exception const& ex) {
        cout << "No se encontro el archivo" << endl;
    }
    return s;
}

/*
La funcion LeerFunTran lee la funcion de transicion de la Maquina de Turing
*/
string LeerFunTran(const string& dir) {
    string s = "";
    try {
        ifstream bf(dir.c_str());
        string txt = "";
        for (int i = 0; i <= 3; i++) getline(bf, txt);
        while (getline(bf, txt)) {
            s += txt;
        }
    } catch (exception const& ex) {
        cout << "No se encontro el archivo" << endl;
    }
    return s;
}

/**
La funcion LeerEstadoi lee el estado inicial de la Maquina de Turing
*/

string LeerEstadoi(const string& dir) {
    string s = "";
    try {
        ifstream bf(dir.c_str());
        for (int i = 0; i <= 2; i++) getline(bf, s);
    } catch (exception const& ex) {
        cout << "No se encontro el archivo" << endl;
    }
    return s;
}

/**
La funcion LeerEstadof lee el estado final de la Maquina de Turing
*/

string LeerEstadof(const string& dir) {
    string s = "";
    try {
        ifstream bf(dir.c_str());
        for (int i = 0; i <= 3; i++) getline(bf, s);
    } catch (exception const& ex) {
        cout << "No se encontro el archivo" << endl;
    }
    return s;
}

/**
La funcion MostrarDefinicion muestra la definicion de la Maquina de Turing
*/

void MostrarDefinicion(const char* dir) {
    ifstream archivoDefinicion(dir);
    string linea;

    cout << "\n\nRuta de contenido del archivo de definicion de la Maquina de Turing (" << dir << "):" << endl;

// Se encarga de mostrar la definicion de la Maquina de Turing
    while (getline(archivoDefinicion, linea)) {
        cout << linea << endl;
    }
}

// Funcion que inicia la Maquina de Turing
void IniciarMT(const string& c, const string& alfabeto, const string& funTran, const string& estadoi, const string& estadof, const string& dir) {
    vector<string> fpf;
    istringstream iss(funTran);
    string token;


// Se encarga de separar la funcion de transicion
    while (getline(iss, token, 'k')) {
        fpf.push_back(token);
    }

// Se encarga de inicializar las variables
    int posicion = 0;
    int i = 0;
    int j = 0;
    char estado = estadoi[0];
    char estadofinal = estadof[0];
    string c1 = c + "b";

// La funcion while se encarga de recorrer la cadena de entrada
    while (i < fpf.size()) {
        j = 0;
        i = 0;

// Se encarga de recorrer la funcion de transicion
        while ((j == 0) && (i < fpf.size())) {
            string aux = fpf[i];
            if (estado == aux[0] && c1[posicion] == aux[1]) {
                j = 1;
                estado = aux[2];
                if (aux[4] == 'D') {
                    posicion++;
                } else if (aux[4] == 'I') {
                    posicion--;
                }
            } else {
                i++;
            }
        }
    }

    i = 0;
    string cFinal = "";

// Se encarga de recorrer la cadena de entrada
    while (c1[i] != 'b') {
        cFinal += c1[i];
        i++;
    }

    if (estado == estadofinal) {
        cout << "\nCadena '" << cFinal << "' aceptada por la Maquina de Turing" << endl;
    } else {
        cout << "\nCadena '" << cFinal << "' no aceptada por la Maquina de Turing" << endl;
    }

// Se encarga de mostrar la definicion de la Maquina de Turing
    MostrarDefinicion(dir.c_str());
    cout<<"Recuerda seguir ese formato para cargar tus validaciones!";

}

int main() {

    cout << "\n\n\t\tMaquina de Turing ";


// Verifica la ruta del archivo de definicion de la Maquina de Turing
    string dir = "C:\\Users\\alumno\\Desktop\\definicionMT.txt";
    string alfabeto = LeerAlfabeto(dir);
    string funTran = LeerFunTran(dir);
    string estadoi = LeerEstadoi(dir);
    string estadof = LeerEstadof(dir);

    cout << "\nAlfabeto: " << alfabeto;

    string c;
    cout << "\nIngrese la cadena a tratar: ";
    cin >> c;

// Se encarga de iniciar la Maquina de Turing
    IniciarMT(c, alfabeto, funTran, estadoi, estadof, dir);

    return 0;
}
