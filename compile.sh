echo -e "Iniciando compilacion"

echo -e "Generando archivo bison"
cd bison
bison -d bison.y

echo -e "Generando archivo flex"
cd ../flex
flex flex.l

echo -e "Compilando archivos generados"
cd ..
gcc -o analizador.exe bison/bison.tab.c flex/lex.yy.c

echo -e "Compilacion terminada"