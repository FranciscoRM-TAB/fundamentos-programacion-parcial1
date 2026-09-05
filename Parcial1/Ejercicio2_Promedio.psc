Algoritmo PromedioEstatus
	Definir calif1, calif2, calif3, promedio Como Real
	Escribir "Ingresa la calificación 1:"
	Leer calif1
	Escribir "Ingresa la calificación 2:"
	Leer calif2
	Escribir "Ingresa la calificación 3:"
	Leer calif3
	
	promedio <- (calif1 + calif2 + calif3) / 3
	Escribir "Tu promedio es: ", promedio
	
	Si promedio >= 6 Entonces
		Escribir "Estatus: APROBADO"
	SiNo
		Escribir "Estatus: REPROBADO"
	FinSi
FinAlgoritmo
