Algoritmo Notas
	Definir N, i, aprobadas, reprobadas Como Entero
	Definir nota, suma_total, suma_aprob, suma_reprob Como Real
	Escribir '¿Cuántas notas vas a ingresar?'
	Leer N
	i <- 1
	aprobadas <- 0
	reprobadas <- 0
	suma_total <- 0
	suma_aprob <- 0
	suma_reprob <- 0
	Mientras i<=N Hacer
		Escribir 'Ingresa la nota ', i, ':'
		Leer nota
		suma_total <- suma_total+nota
		Si nota>=6 Entonces
			aprobadas <- aprobadas+1
			suma_aprob <- suma_aprob+nota
		SiNo
			reprobadas <- reprobadas+1
			suma_reprob <- suma_reprob+nota
		FinSi
		i <- i+1
	FinMientras
	Escribir 'Cantidad de aprobadas: ', aprobadas
	Escribir 'Cantidad de reprobadas: ', reprobadas
	Escribir 'Promedio general: ', suma_total/N
	Escribir 'Promedio aprobadas: ', suma_aprob/aprobadas
	Escribir 'Promedio reprobadas: ', suma_reprob/reprobadas
FinAlgoritmo

