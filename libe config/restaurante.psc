Algoritmo restaurante
	
	Definir plato, bebida Como caracter
	Definir precioplato, cant, cantbeb,   servicio  Como Entero
	Definir precioserv, preciobeb, precioin Como Real
	
	Escribir "que plato quieres"
	Leer plato
	Escribir "cuantas platos quieres"
	Leer cant
	Escribir "que bebida quieres"
	Leer bebida
	Escribir "cuantas bebidas quieres"
	Leer cantbeb
	Escribir "Donde te an servido"
	Leer servicio
	
	si plato="P" Entonces
		precioplato=15*cant
	SiNo
		si plato="C" Entonces
			precioplato=18*cant
		SiNo
			si plato="V" Entonces
				precioplato=12*cant
			SiNo
				precioplato=14*cant
			FinSi
		FinSi
		
	FinSi
	
	
	si bebida="R" Entonces
		preciobeb=1.2*cantbeb
	SiNo
		si bebida="C" Entonces
			preciobeb=1.5*cantbeb
		SiNo
			si bebida="VA" Entonces
				preciobeb=0.95*cantbeb
			SiNo
				si bebida="V" Entonces
					preciobeb=1.85*cantbeb
				SiNo
					preciobeb=0.0
				FinSi
			FinSi
		FinSi
		
	FinSi
	
	
	
	si servicio=1 Entonces
		precioserv=0.5
	SiNo
		precioserv=1
	FinSi
	
	
	preciosupl=precioin*precioserv
	precioin=precioplato+preciobeb
	Escribir "El precio del plato es: " ,precioplato "€"
	Escribir "El precio de la bebida es: " ,preciobeb "€"
	Escribir "El importe inicial es:" ,precioin "€"
	Escribir "El suplemento es de :" ,preciosupl "€"
	
	
FinAlgoritmo
