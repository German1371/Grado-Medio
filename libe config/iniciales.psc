Algoritmo sin_titulo
	//nombre de una persona y la salida tiene que salir las iniciales
	
	Definir ent, sal Como Caracter
	
	Escribir "introduce un nombre completo"
	Leer ent
	sal=Mayusculas(Subcadena(ent,0,0))
	
	Para i=1 Hasta Longitud(ent)-1 Con Paso 1 Hacer
		si Subcadena(ent,i,i)=" " Entonces
			i=i+1
			sal=sal+Mayusculas(Subcadena(ent,i,i))
		FinSi
	Fin Para
	
	Escribir "cadena de salida: " ,sal
FinAlgoritmo
