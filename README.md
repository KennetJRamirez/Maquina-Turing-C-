# Maquina de Turing

Este proyecto implementa una Máquina de Turing mediante un programa en C++. La Máquina de Turing es un modelo abstracto de computación propuesto por Alan Turing, que consiste en una cinta infinita dividida en celdas, una cabeza de lectura/escritura, y un conjunto de estados y reglas de transición.

## Contenido del Repositorio

- `Turing.cpp`: Código fuente del programa en C++.
- `definicionMT.txt`: Archivo de definición de la Máquina de Turing que contiene información sobre el alfabeto, la función de transición, el estado inicial y el estado final.

## Requisitos

- **C++ Compiler**: Asegúrate de tener un compilador C++ instalado en tu sistema.
- **Archivo de Definición**: Crea un archivo de definición (`definicionMT.txt`) siguiendo el formato especificado más adelante.

## Cómo Utilizar

1. **Compilación**: Compila el programa usando un compilador C++. Por ejemplo:
   ```bash
   g++ main.cpp -o maquina_turing

## Estructura del Programa

- **LeerOpcion**: Función que lee la opción del menú desde un archivo.
- **LeerAlfabeto**: Función que lee el alfabeto de la Máquina de Turing desde un archivo.
- **LeerFunTran**: Función que lee la función de transición desde un archivo.
- **LeerEstadoi**: Función que lee el estado inicial desde un archivo.
- **LeerEstadof**: Función que lee el estado final desde un archivo.
- **MostrarDefinicion**: Función que muestra la definición de la Máquina de Turing desde un archivo.
- **IniciarMT**: Función principal que inicia la Máquina de Turing con la cadena de entrada dada.
- **main**: Función principal del programa que gestiona la ejecución del programa.

## Fases del Programa
**Ejecución**: Ejecuta el programa compilado y sigue las instrucciones para ingresar la cadena a procesar.

**Archivo de Definición (definicionMT.txt)**: Asegúrate de tener un archivo de definición siguiendo el formato especificado.

**Formato de la Definición**: Verifica que la definición en el archivo cumpla con el formato requerido.

**Entrada de la Máquina de Turing**: Ingresa la cadena que deseas procesar cuando se solicite.

**Resultados**: El programa mostrará si la cadena fue aceptada o no por la Máquina de Turing, así como la definición utilizada.

¡Listo! Ahora puedes experimentar con diferentes definiciones de Máquinas de Turing.
