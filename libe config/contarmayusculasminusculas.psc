Algoritmo sin_titulo
	//Introduciomos una caden leemos un caracter y tenemos que indicar cuantas vexces aparecce en minuscula myuscula y cuantas veces a salido
	
	Definir cad, car Como Caracter
	Definir salmay, salmin, total Como Entero
	
	Escribir "Escribe la cadena: " 
	Leer cad
	
	Escribir "Que caracter quieres almacenar"
	leer car
	
	salmay=0
	salmin=0
	
	Para i=0 Hasta Longitud(cad)-1 Con Paso 1 Hacer
		si Subcadena(cad,i,i)=Mayusculas(car) Entonces
			salmin=salmin+1
		SiNo
			si Subcadena(cad,i,i)=Minusculas(car) Entonces
				salmay=salmay+1
			FinSi
		FinSi
		
		
		
	Fin Para
	total=salmay+salmin
	Escribir "minusculas: " ,salmin
	Escribir "Mayusculas: " ,salmay
	Escribir "El total es: " total
	
FinAlgoritmo
