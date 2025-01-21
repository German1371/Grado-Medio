Algoritmo areas
	
	definir ct, cc, cr, ca Como Entero
	Definir clave Como Caracter
	Definir area Como real
	
	
	Escribir "------claves-----"
	Escribir "triangulo-------T"
	Escribir "cuadrado--------C"
	Escribir "Rectangulo------R"
	Escribir "Circunferencia--A"
	Escribir "salir-----------F"
	Escribir ""
	Escribir  "pon la clave: "
	Leer clave
	
	ct=0
	cc=0
	cr=0
	ca=0
	cont=0
	Mientras Mayusculas(clave)<>"F" Hacer
		
		Segun clave hacer
			"T":
				Escribir "Di la base y la altura"
				Leer base, altura
				area=(base*altura)/2
				Escribir "El area es: " ,area
				ct=ct+1
			"C":
				Escribir "Di un lado"
				Leer lado
				area=lado*lado
				Escribir "El area es: " ,area
				cc=cc+1
			"R":
				Escribir "Di la base y la altura"
				Leer base, altura
				area=base*altura
				Escribir "El area es: " ,area
				cr=cr+1
			"A":
				Escribir "Di el radio del circunferencia"
				Leer radio
				area=PI*radio^2
				Escribir "El area es: " ,area
				ca=ca+1
		FinSegun
		cont=cont+1
		Escribir "di una clave"
		Leer clave
	FinMientras
	Escribir "total de triangulos an sido" ,ct
	Escribir "total de cuadrados an sido" ,cc
	Escribir "total de rectangulos an sido" ,cr
	Escribir "total de circunferencia an sido" ,ca
	Escribir "El total de las operaciones an sido " ,cont
	
FinAlgoritmo
