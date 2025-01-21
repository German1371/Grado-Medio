Algoritmo sin_titulo
	Definir nu,i,total_c Como Entero
	Definir txt,car Como Caracter
	Dimension cent[10]
	
	total_c=0
	Para i=0 Hasta 9  Hacer
		cent[i]=0
	Fin Para
	
	
	Escribir "Generando números"
	Escribir "-----------------"
	nu=azar(1001)
	Mientras (nu<>0) y (nu<>1000) Hacer
		Escribir nu
		cent[0]=cent[0]+1
		
		txt=ConvertirATexto(nu)
		si Longitud(txt)=3 Entonces
			car=SubCadena(txt,0,0)
			i=ConvertirANumero(car)
			cent[i]=cent[i]+1
		FinSi
		
		nu=azar(1001)
	Fin Mientras
	Escribir nu
	
	Escribir ""
	Escribir "--------------------"
	Escribir ""
	
	Para i=1 Hasta 9    Hacer
		Escribir "Centenas de ",i,": ",cent[i]
		total_c=total_c+cent[i]
	Fin Para
	
	Escribir ""
	Escribir "Total de números generados: ",cent[0]
	Escribir "Total de centenas: ",total_c
FinAlgoritmo
