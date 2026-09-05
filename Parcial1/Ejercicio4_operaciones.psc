Algoritmo OperacionesDosNumeros
	Definir num1, num2, resultado Como Real
	Escribir "Ingresa el primer número:"
	Leer num1
	Escribir "Ingresa el segundo número:"
	Leer num2
	
	Si num1 = num2 Entonces
		resultado <- num1 * num2
		Escribir "Son iguales. La multiplicación es: ", resultado
	SiNo
		Si num1 > num2 Entonces
			resultado <- num1 - num2
			Escribir "El primero es mayor. La resta es: ", resultado
		SiNo
			resultado <- num1 + num2
			Escribir "El segundo es mayor. La suma es: ", resultado
		FinSi
	FinSi
FinAlgoritmo
