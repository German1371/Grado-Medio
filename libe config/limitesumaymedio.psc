Algoritmo intervalos
	//decir un intervalo y Escribir numeros pares incluidos, cuantos pares hay y su suma y su medio
	//limites por encima de 0
	//limite superior debe estar por encima del inferior
	
	Definir men, may Como Entero
	
	Escribir "pon el limite inferior "
	Leer men
	
	Escribir "pon el limite superior"
	Leer may
	
	
	
	si men%2 <> 0
		men=men+1
	FinSi
	c=0
	s=0
		Para i=men Hasta may Con Paso 2 Hacer
			Escribir i
			c=c+1
			s=s+i
		Fin Para

FinAlgoritmo