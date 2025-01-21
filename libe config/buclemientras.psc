Algoritmo bucle
	definir e1, e2, e3 Como Entero
	Definir med Como Real
	Definir nombre Como Caracter
	
	Escribir "Alumno: "
	leer nombre
	
	Mientras (Mayusculas(nombre)<>"X") Hacer
		Escribir "Examen 1: "
		leer e1
		
		Escribir "Examen 2: "
		leer e2
		
		Escribir "Examen 3: "
		leer e3
		med=(e1+e2+e3)/3
		Escribir "la media del alumno es " ,med
		
		Escribir "Alumno: "
		leer nombre
	Fin Mientras
FinAlgoritmo
