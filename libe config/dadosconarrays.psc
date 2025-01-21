Algoritmo sin_titulo
	Dimension dado[7]
	Definir i Como Entero
	Definir tp Como Real
	
	Escribir "Estadísticas del dado"
	
	Para i=0 Hasta 6 Hacer
		dado[i]=0
	Fin Para
	
	i=azar(7)
	Mientras i<>0 Hacer
		Escribir "Tirada: ",i
		dado[i]=dado[i]+1
		dado[0]=dado[0]+1
		i=azar(7)
	Fin Mientras
	Escribir "Tirada: ",i
	
	Escribir ""
	Escribir "------ Fin ------"
	Escribir ""
	
	Escribir "Total de tiradas: ",dado[0]
	Para i=1 Hasta 6 Hacer
		tp=dado[i]/dado[0]*100
		Escribir "Valor ",i,": ",dado[i]," - Tanto por ciento: ",tp
	Fin Para
	
FinAlgoritmo