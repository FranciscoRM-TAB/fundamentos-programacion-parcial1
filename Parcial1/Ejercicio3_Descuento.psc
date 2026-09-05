Algoritmo DescuentoSueldo
	Definir sueldo, descuento, sueldo_neto Como Real
	Escribir "Ingresa el sueldo del trabajador:"
	Leer sueldo
	
	Si sueldo <= 1000 Entonces
		descuento <- sueldo * 0.10
	SiNo
		Si sueldo <= 2000 Entonces
			
			descuento <- (1000 * 0.10) + ((sueldo - 1000) * 0.05)
		SiNo
			
			descuento <- (1000 * 0.10) + (1000 * 0.05) + ((sueldo - 2000) * 0.03)
		FinSi
	FinSi
	
	sueldo_neto <- sueldo - descuento
	
	Escribir "El descuento calculado es: $", descuento
	Escribir "El sueldo neto a recibir es: $", sueldo_neto
FinAlgoritmo
