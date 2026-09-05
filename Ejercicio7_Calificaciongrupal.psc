Algoritmo CalificacionesGrupo
	Definir p1, p2, p3, prom_alumno, suma_promedios, prom_general Como Real
	Definir total_alumnos Como Entero
	Definir continuar Como Caracter
	
	continuar <- "S"
	total_alumnos <- 0
	suma_promedios <- 0
	
	Mientras continuar = "S" O continuar = "s" Hacer
		Escribir "Ingresa la calificación del parcial 1:"
		Leer p1
		Escribir "Ingresa la calificación del parcial 2:"
		Leer p2
		Escribir "Ingresa la calificación del parcial 3:"
		Leer p3
		
		prom_alumno <- (p1 + p2 + p3) / 3
		Escribir "--> El promedio del alumno es: ", prom_alumno
		
		suma_promedios <- suma_promedios + prom_alumno
		total_alumnos <- total_alumnos + 1
		
		Escribir "¿Deseas capturar otro alumno? (Escribe S para sí, o N para no):"
		Leer continuar
	FinMientras
	
	Si total_alumnos > 0 Entonces
		prom_general <- suma_promedios / total_alumnos
		Escribir "==================================="
		Escribir "Total de alumnos evaluados: ", total_alumnos
		Escribir "El promedio general del grupo es: ", prom_general
	FinSi
FinAlgoritmo