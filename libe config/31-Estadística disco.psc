Algoritmo sin_titulo
	Definir i,cant,t_par,t_uni,long Como Entero
	Definir disco,guion Como Caracter
	Dimension nombre[10]
	Dimension partes[11]
	Dimension total_c[11]
	
	//INICIALIZACIÓN VARIABLES CONTADOR Y ACUMULADOR
	guion="-"
	Para i=0 Hasta 10 Hacer
		partes[i]=0
		total_c[i]=0
	Fin Para
	
	Escribir "Indique el nombre del disco:"
	Leer disco
	
	Escribir ""
	
	Escribir "Indique el nombre de las tiendas"
	
	Para i=0 Hasta 9 Hacer
		Escribir "Tienda ",(i+1),":"
		Leer nombre[i]
		Escribir ""
	Fin Para
	
	Escribir "Proceso de recogida de datos"
	Escribir "----------------------------"
	
	Escribir "Indique el número de la tienda:"
	Leer i
	Mientras i<>0 Hacer
		Escribir "Tienda: ",nombre[i-1]
		Escribir "Indique cuantas unidades ha vendido:"
		Leer cant
		partes[i]=partes[i]+1
		total_c[i]=total_c[i]+cant
		
		Escribir ""
		Escribir "Indique el número de la tienda:"
		Leer i
	Fin Mientras
	
	Escribir ""
	Escribir "**************************************************"
	Escribir ""
	
	long=Longitud("RESUMEN DE VENTAS - DISCO: ")+Longitud(disco)
	
	Escribir "RESUMEN DE VENTAS - DISCO: ", disco
	//DETERMINAR CANTIDAD DE GUIONES
	Para i=2 Hasta long Hacer
		guion=guion+"-"
	Fin Para
	Escribir guion
	
	Para i=1 Hasta 10 Hacer
		Escribir (i),": ",nombre[(i-1)]
		Escribir "   - Partes introducidos: ",partes[(i)]
		Escribir "   - Cantidad de discos vendidos: ",total_c[(i)]
		Escribir ""
		
		partes[0]=partes[0]+partes[i]
		total_c[0]=total_c[0]+total_c[i]
	Fin Para
	
	Escribir "**************************************************"
	Escribir ""
	
	Escribir "Total de partes realizados en todas las tiendas: ",partes[0]
	Escribir "Total de unidades vendidas del disco: ",total_c[0]
FinAlgoritmo
