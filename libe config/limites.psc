Algoritmo limite
	Definir limitein, limitesup, num Como Entero
	
	Escribir "Escribe el limite inferior"
	Leer limitein
	
	Escribir "Escribe el limite superior"
	Leer limitesup
	
	Escribir "Escribe un numero"
	Leer num
	
	si num=limitein o num=limitesup
		Escribir "El numero esta tocando los limites"
	SiNo
		si num<limitein o num>limitesup Entonces
			Escribir "El numero esta fuiera de rango"
			
		SiNo
			Escribir "El rango Esta dentro del rango"
		FinSi
		
	FinSi
	
	
FinAlgoritmo
