# TP_SSL_Analizador

Trabajo practico integrador de mi cursada de sintaxis y semantica de los lengujes, en el año 2021.

Consiste en un analizar lexico, sintactico y semantico de archivos ".c". Es un analizador reducido, no contempla structs, multiples punteros, typedefs, etc.

------ Como compilar -------
1. Tener instalado flex y bison y gcc
2. Sobre la carpeta "bison" ejecutar: bison -d bison.y
3. Sobre la carpeta "flex" ejecutar: flex flex.l
4. Sobre la carpeta "TP_SSL_ANALIZADOR" ejecutar: gcc -o analizador.exe bison/bison.tab.c flex/lex.yy.c
   
------ Como ejecutar -------
1. Sobre la carpeta "TP_SSL_ANALIZADOR" ejecutar: ./analizador.exe "rutaArchivoAAnalizar".c