Algoritmo sin_titulo
	//meter una cadena y cambiar las mayusculas por minusculas
	Definir cad Como Caracter
	Definir i Como Entero
	
	
	Escribir "Dime una palabra o cadena"
	Leer cad
	
	sal=""
	Para i=0 Hasta Longitud(cad)-1 Con Paso 1 Hacer
		si Subcadena(cad,i,i)=Mayusculas(Subcadena(cad,i,i)) Entonces
			sal= Concatenar(sal, Minusculas(Subcadena(cad,i,i))) 
		SiNo
			sal=Concatenar(sal, Mayusculas(Subcadena(cad,i,i)))
		FinSi
		
	Fin Para
	Escribir sal
FinAlgoritmo
