Algoritmo permiso 
	
	definir clave Como Caracter
	
	Escribir "define la clave"
	leer clave
	
	si clave="VF" Entonces
		Escribir "puedes volar"
	SiNo
		si clave="LL" Entonces
			Escribir "no puedes volar"
		SiNo
			si clave="NE" Entonces
				Escribir "si tienes permiso"
			SiNo
				Escribir "puedes volar"
			FinSi
		FinSi
	FinSi
FinAlgoritmo
