Algoritmo calculadora_de_nota
	
	Definir acertadas, falladas Como Entero
	Definir nota, notaacertadas, notafalladas Como Real
	
	Escribir "numero de respuestas acertadas: "
	Leer acertadas
	
	Escribir "numero de respuestas falladass: "
	Leer falladas
	
	notaacertadas=acertadas*0.5
	notafalladas=falladas*0.2
	nota=notaacertadas-notafalladas
	
	Escribir "la nota es " ,nota
	Escribir "las preguntas falladas son: " notafalladas
	Escribir "las preguntas acertadas son: " notaacertadas
	
	
		
	Segun trunc(nota) hacer
		5:
			Escribir "insuficiente"
		6:
			Escribir "bien"
		7, 8:
			Escribir "notable"
		
		9, 10:
			Escribir "sobresaliente"
	De Otro Modo:
		Escribir "insuficiente"
	FinSegun
	
	
	
FinAlgoritmo
