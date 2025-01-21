Algoritmo Ordenar
	//ORDENAR ASCENDENTEMENTE TRES NUMEROS ENTEROS
	
	Definir num_1,num_2,num_3 Como Entero
	Definir chico,grande,medio Como Entero
		
	Escribir "Escribe 3 numeros: "
	Leer num_1, num_2, num_3
	Escribir n1 " ", n2, " " n3
	
	Si num_1 > num_2 y num_1>num_3 Entonces
		grande=num_1
	SiNo
		Si num_2>num_1 y num_2>num_3 Entonces
			grande=num_2
		SiNo
			grande=num_3
			FinSi
	FinSi
		
	Si num_1 > num_2 y num_1<num_3 Entonces
		medio=num_1
	SiNo
		Si num_2>num_1 y num_2<num_3 Entonces
			medio=num_2
		SiNo
			medio=num_3
		FinSi
	FinSi
	
	Si num_1 < num_2 y num_1<num_3 Entonces
		chico=num_1
	SiNo
		Si num_2<num_1 y num_2<num_3 Entonces
			chico=num_2
		SiNo
			chico=num_3
		FinSi
	FinSi
		
	Escribir "El numero mas chico es: " chico
		
	Escribir "El segundo numero mas chico es: " medio
		
	Escribir "El numero mas grande es : " grande
	
FinAlgoritmo
