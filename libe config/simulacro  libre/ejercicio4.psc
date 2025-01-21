Algoritmo ejercicio4
	
	Definir numalumnos Como Entero
	Definir precioalumno Como Real
	
	Escribir "Escribe el numero de alumnos: "
	Leer numalumnos
	

	
	si numalumnos>100 Entonces
		precioalumno=65
		
	SiNo
		si numalumnos>50
			precioalumno=70
			
		SiNo
			si numalumnos>30
				precioalumno=95
				
			SiNo
				precioalumno=4000/numalumnos
				
			FinSi
		FinSi
	FinSi

	Escribir "el precio de cada alumno sera: " trunc(precioalumno) "€"
	Escribir "El precio del autobus es de 4000€"
	
	
FinAlgoritmo
