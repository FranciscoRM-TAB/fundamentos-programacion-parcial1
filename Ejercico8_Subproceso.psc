Algoritmo PromedioDosAlumnos
	Definir calif1, calif2, calif3, prom1, prom2 Como Real
	
	Escribir "--- ALUMNO 1 ---"
	Escribir "Ingresa las 3 calificaciones (presiona Enter por cada una):"
	Leer calif1, calif2, calif3
	
	prom1 <- CalcularPromedio(calif1, calif2, calif3)
	Escribir "El promedio del Alumno 1 es: ", prom1
	
	Escribir "--- ALUMNO 2 ---"
	Escribir "Ingresa las 3 calificaciones (presiona Enter por cada una):"
	Leer calif1, calif2, calif3
	
	prom2 <- CalcularPromedio(calif1, calif2, calif3)
	Escribir "El promedio del Alumno 2 es: ", prom2
FinAlgoritmo

SubProceso resultado <- CalcularPromedio(n1, n2, n3)
	Definir resultado Como Real
	resultado <- (n1 + n2 + n3) / 3
FinSubProceso