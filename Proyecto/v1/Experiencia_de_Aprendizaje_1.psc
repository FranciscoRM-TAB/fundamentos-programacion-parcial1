SubProceso promedio_final <- Calcular_promedio ( cal1, cal2, cal3 )
    Definir promedio_final Como Real;
    promedio_final <- (cal1 + cal2 + cal3) / 3;
FinSubProceso

Algoritmo Experiencia_de_Aprendizaje_1
	Definir prom1, prom2, prom3 Como Real;
	Definir Resultado Como Entero;
	Definir alumno1_nombre, alumno2_nombre, alumno3_nombre Como Caracter;
	Definir alumno1_1Caf, alumno1_2Caf, alumno1_3Caf Como Real;
	Definir alumno2_1Caf, alumno2_2Caf, alumno2_3Caf Como Real;
	Definir alumno3_1Caf, alumno3_2Caf, alumno3_3Caf Como Real;
	Definir datos_capturados Como Logico;
	datos_capturados <- Falso;
	Repetir
		Escribir "Bienvenido al menu de opciones,favor de escoger algunas de las siguiente opciones";
		Escribir "1. Nombre del alumno";
		Escribir "2. Promedio";
		Escribir "3. Mejor Resultado";
		Escribir "4. Salir";
		
		Leer Resultado;
		Segun Resultado Hacer
			1:
				Escribir "Introdusca el nombre del Alumno y sus calificaciones";
				Escribir "Nombre del primer alumno";
				Leer alumno1_nombre;
				Escribir "Introducir 1° Calificacion";
				Leer alumno1_1Caf;
				Escribir "Introducir 2° Calificacion";
				Leer alumno1_2Caf;
				Escribir "Introducir 3° Calificacion";
				Leer alumno1_3Caf;
				
				Escribir "Nombre del segundo alumno";
				Leer alumno2_nombre;
				Escribir "Introducir 1° Calificacion";
				Leer alumno2_1Caf;
				Escribir "Introducir 2° Calificacion";
				Leer alumno2_2Caf;
				Escribir "Introducir 3° Calificacion";
				Leer alumno2_3Caf;
				
				Escribir "Nombre del Tercer alumno";
				Leer alumno3_nombre;
				Escribir "Introducir 1° Calificacion";
				Leer alumno3_1Caf;
				Escribir "Introducir 2° Calificacion";
				Leer alumno3_2Caf;
				Escribir "Introducir 3° Calificacion";
				Leer alumno3_3Caf;
				datos_capturados <- Verdadero;
				Escribir "¡Datos guardados con éxito!";
			2:
				Si datos_capturados = Verdadero Entonces
					prom1 <- Calcular_promedio(alumno1_1Caf, alumno1_2Caf, alumno1_3Caf);
					Escribir "El promedio del alumno ", alumno1_nombre, " es: ", prom1;
					prom2 <- Calcular_promedio(alumno2_1Caf, alumno2_2Caf , alumno2_3Caf);
					Escribir "El promedio del alumno ", alumno2_nombre, " es:", prom2;
					prom3 <- Calcular_promedio(alumno3_1Caf, alumno3_2Caf , alumno3_3Caf);
					Escribir "El promedio del alumno ", alumno3_nombre, " es:", prom3;
				Sino
					Escribir "Error: ¡Primero debes capturar los datos en la Opción 1!";
				FinSi

			3:
				Si datos_capturados = Verdadero Entonces
					Si prom1>prom2 y prom1>prom3 Entonces
						Escribir " El mejor alumno con el mejor promedio fue :", alumno1_nombre;
					SiNo
						Si prom2>prom1 y prom2>prom3 Entonces
							Escribir "El mejor alumno con el mejor promedio fue :", alumno2_nombre;
						SiNo
							Escribir "El mejor alumno con el mejor promedio fue :", alumno3_nombre;
						Fin Si
					Fin Si
				SiNo
					Escribir "Error: ¡Primero debes capturar los datos en la Opción 2!";
				Fin Si
			4:
				Escribir "Saliendo del sistema. ¡Hasta pronto!";

		Fin Segun
	Hasta Que Resultado = 4
FinAlgoritmo