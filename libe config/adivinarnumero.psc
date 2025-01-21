Algoritmo adivinarnumero
	//programa que le metas los intentos y tengas que adivinar un numero al azar con los intentos dichos
	Definir al, int, jug, intentos Como Entero
	
	num=azar(100)+1
	intentos=0
	
	Escribir "Escribe el numero de intentos"
	Leer int
	
	
	Repetir
		Escribir "di un numero"
		Leer jug
		intentos=intentos+1
		si num<jug Entonces
			Escribir "el numero es menor"
		SiNo
			si num>jug
				Escribir  "El numero es mayor"
			SiNo
				Escribir "HAS ACERTADO EL NUMERO!!"
			FinSi
			
		FinSi
	Hasta Que jug=num o intentos=int
	Si intentos=int y jug<>num
		Escribir "As fallado"
	FinSi
FinAlgoritmo
//