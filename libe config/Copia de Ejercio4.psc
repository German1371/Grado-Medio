Algoritmo ejercicio4
	definir PrecioUnit, Importe, Descuento, Importebase, Iva, Factura Como Real
	definir cantidad Como Entero
	
	Escribir  "escribe el precio del producto "
	Leer PrecioUnit
	
	Escribir "cuantos productos quieres comprar "
	leer cantidad
	
	Importe=PrecioUnit*cantidad
	Descuento=cantidad*(-5)
	Importebase=Importe+Descuento
	Iva=Importebase*0.21
	Factura=Importebase+Iva
	
	Escribir "El importe es: " ,Importe "€"
	
	Escribir "El descuento es de: " ,Descuento
	
	Escribir "El impote base es de: " Importebase
	
	Escribir "El IVA es de: " ,Iva
	
	Escribir "La factura es de: " Factura
	
FinAlgoritmo
