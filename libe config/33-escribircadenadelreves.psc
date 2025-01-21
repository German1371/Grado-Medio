Algoritmo cadenaalreves
	Definir cad,sal Como Caracter
	Definir i Como Entero
	
	
	Escribir "Escribe una cadena" 
	leer cad
	
	Para i=Longitud(cad) Hasta 0 Con Paso -1 Hacer
		sal=Concatenar(sal,SubCadena(cad,i,i))
	Fin Para
	
	Escribir sal
	si sal=cad Entonces
		Escribir "la palabra es un polindromo"
	FinSi
	
FinAlgoritmo
