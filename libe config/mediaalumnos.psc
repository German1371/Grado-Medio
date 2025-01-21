Algoritmo media_alumnos_hasta_X
	
	//Caclular nota media de los alumno del curso, indicando nu¡ombre de alumno, numero de examenes y la nota obtenida en cada examen. Hasta que el nombre del alumno sea X
	//Deberá respoinbder con cada nota media de cada aluimno y con el numero total de alumnos y la media del grupo
	
	Definir nombreAlumno Como Caracter
	
	Definir numExams, nota, numAlumnos, media Como Real
	
	numExams=0
	
	media0=0
	
	nota0=0
	
	i=0
	
	j=0
	
	Escribir "¿Dime el nombre del alumno?"
	Leer nombreAlumno
	
	Mientras Mayusculas(nombreAlumno)<>"X" Hacer
		
		numExams=numExams+numExams
		
		Escribir "¿Cuantos exámenes ha hecho?"
		Leer numExams
		
		Si numExams=0 Entonces
			Escribir "No ha hecho ningún examen"
			
		SiNo
			
			
			Escribir "¿Que nota has sacado en los exámenes?"
			Repetir
				
				Escribir "¿Cuánta nota has sacado en el examen número " ,i+1 "?"
				Leer nota
				
				nota=nota0+nota
				nota0=nota
				i=i+1
			Hasta Que i=numExams
			
			media=nota/numExams
			
			Escribir "La nota media del alumno " ,nombreAlumno  " es: " ,media
			
			j=j+1
			
			mediaCurso=media0+media
			media0=media
			
			i=0
			
			nota0=0
		FinSi
		
		Escribir "¿Dime el nombre del alumno?"
		Leer nombreAlumno
		
	Fin Mientras
	
	
	si j=0
		Escribir "No hay media de alumnos"
	SiNo
		Escribir "El número de alumnos es: " ,j
		
		Escribir "Nota total del curso: " ,mediaCurso
		
		Escribir "La nota media del curso es: " ,mediaCurso/j
		
	FinSi
	
	
	
	
	
FinAlgoritmo
