# Maquina de Turing

Este proyecto implementa una Máquina de Turing mediante un programa en C++. La Máquina de Turing es un modelo abstracto de computación propuesto por Alan Turing, que consiste en una cinta infinita dividida en celdas, una cabeza de lectura/escritura, y un conjunto de estados y reglas de transición.

## Nota

Este proyecto permite validar cadenas previamente seteadas en la ruta del programa c++, por lo tanto si se desea cargar mas, debera solo modificar el txt , manejando 
esta estructura:

- ` 1 `                  : Numero de Maquina de Turing, puede ser cualquiera

- `{0,1} `              : Alfabeto

- `q`                 : Estado 

- `s `                : Estado

- `q0p0Dk`               : No. Transicion

- `q1p1Dk`              : No. Transicion

- `qbsbDk`              : No. Transicion

- `p0q0Dk`              : No. Transicion

- `p1q1Dk`               : No. Transicion

- El cual pues se indica la ruta en la ejecucion y el formato a seguir

## Nota
Decidi simplemente no agregarle la palabra ESTADO o MT, puesto que estaba procesando demasiados errores solo en lectura, aun ni analizaba, entonces mejor decidi el
quitar esas palabras y directamente setearlas, NO SE QUITO LA ESTRUCTURA GENERAL QUE SE SOLICITABA, SIMPLEMENTE SE PLASMA EN EL TXT SIGUIENDO LA ESTRUCTURA DESCRITA
ARRIBA.

Y aun maneja el mismo requisito solicitado, ya que ahi se detalla el alfabeto, estados y transiciones. Se uso para optimizar y que se viera mas limpio, ya que podria
haber errores de procesamiento de las palabras ESTADO O MT(), por lo tanto se simplifico sin agregar esas palabras al inicio y en parentesis, sino que SIMPLEMENTE SE
DECLARAN EN EL TXT , SIGUIENDO EL ORDEN QUE NOS SOLICITO EL DOCENTE.

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
