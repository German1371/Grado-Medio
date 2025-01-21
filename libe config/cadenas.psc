Algoritmo sin_titulo
	//ller una cadena y escribimos cada caracter en una linea distinta
	Definir cad Como Caracter
	Definir i Como Entero
	
	
	Escribir "Dime una palabra o cadena"
	Leer cad
	
	
Para i=0 Hasta Longitud(cad)-1 Con Paso 1 Hacer
	Escribir Subcadena(cad,i,i) 
	Fin Para
	
FinAlgoritmo
