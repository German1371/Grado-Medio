Algoritmo sin_titulo
	//calcule el area del triangulo si la base es mayor, si no la de un rectangulo y hay que escribir ç
	
	Definir b,h Como Entero
	definir ar Como Real
	
	Escribir "Introduzca la base"
	Leer  b
	
	Escribir "Introduzca la altura"
	Leer  h
	
	si b>h Entonces
		ar=b*h/2
		Escribir "Area del rectangulo: " ,ar
	SiNo
		ar=b*h
		Escribir "La area del triangulos es: " ,ar
	FinSi
	
FinAlgoritmo
