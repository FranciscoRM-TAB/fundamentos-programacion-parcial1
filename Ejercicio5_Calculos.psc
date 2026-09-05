Algoritmo CalculoPerimetros
	Definir opcion Como Entero
	Definir lado, radio, perimetro Como Real
	
	Escribir "Elige una figura para calcular su perímetro:"
	Escribir "1. Cuadrado"
	Escribir "2. Triángulo Equilátero"
	Escribir "3. Círculo"
	Leer opcion
	
	Segun opcion Hacer
		1:
			Escribir "Ingresa la medida del lado del cuadrado:"
			Leer lado
			perimetro <- 4 * lado
			Escribir "El perímetro es: ", perimetro
		2:
			Escribir "Ingresa la medida del lado del triángulo:"
			Leer lado
			perimetro <- 3 * lado
			Escribir "El perímetro es: ", perimetro
		3:
			Escribir "Ingresa la medida del radio del círculo:"
			Leer radio
			perimetro <- 2 * PI * radio 
			Escribir "El perímetro es: ", perimetro
		De Otro Modo:
			Escribir "Error: Opción no válida."
	FinSegun
FinAlgoritmo