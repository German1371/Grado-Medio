Algoritmo notas
	definir numexamenes, numnotas, numtrabajos, e1, e2, e3, n1,n2, t1, t2, t3, t4, t5 como entero 
	definir mediaexamenes, medianotas, mediatrabajos, mediatotal Como Real
	
	Escribir "Cuantos examenes has realizado?"
	Leer numexamenes
	
	Escribir "Cuantos notas de clase tienes?"
	Leer numnotas
	
	Escribir "cuantos trabajos has hecho?"
	Leer numtrabajos
	
	//--------------------------notas examenes-------------------------------------------
	Escribir "Nota del primer examen:"
	Leer e1
	Escribir "Nota examen2:?"
	Leer e2
	si numexamenes=2
		
		mediaexamenes=(e1+e2)/2
	SiNo
		Escribir "Nota examen3:?"
		Leer e3
		mediaexamenes=(e1+e2+e3)/3
		
	FinSi
	//----------------------------notas de clase---------------------------------------
	Escribir"Escribe la nota1: "
	Leer n1
	
	si numnotas=1
		
		medianotas=n1
		
	SiNo
		Escribir "dime la segunda nota: "
		Leer n2
		medianotas=(n1+n2)/2
		
	FinSi
	
	//---------------------------notas de trabajos---------------------------------------
	
	Escribir "trabajo1: "
	leer t1
	
	Escribir "trabajo2: "
	leer t2
	
	Escribir "trabajo3: "
	leer t3
	
	Escribir "trabajo4: "
	leer t4
	
	
	
	si numtrabajos=4
		mediatrabajos=(t1+t2+t3+t4)/4
	SiNo
		Escribir "trabajo5: "
		leer t5
		mediatrabajos=(t1+t2+t3+t4+t5)/5
	FinSi
	
	mediatotal=(mediaexamenes*0.4)+(mediatrabajos*0.35)+(medianotas*0.25)
	
	//-----------------------salidas------------------------------------
	Escribir "la nota media de cada examen es:" ,mediaexamenes
	Escribir "la nota de las notas de clase es:",medianotas
	Escribir "la nota media de los trabajos",mediatrabajos
	Escribir "La nota final es: ",mediatotal
	
FinAlgoritmo
