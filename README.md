# Práctica 1: Suma de 5 números
## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->
El programa pide cinco números al usuario, los suma y muestra el resultado. Puede servir en la vida real para calcular gastos o sumar calificaciones.

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
1. Cinco números de tipo double que ingresa el usuario.

**Salidas:**
1. La suma total de los cinco números, de tipo double.

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- La suma debe comenzar en cero y el ciclo debe repetirse cinco veces.
- El programa debe pedir exactamente cinco números.

**Decisión sobre negativos y decimales** (¿los acepto? ¿por qué?):
Sí, acepto números negativos y decimales porque pueden representar gastos, temperaturas o calificaciones.

**Invariante** (¿qué es verdad después de cada vuelta del ciclo?):
Después de cada vuelta del ciclo, la variable suma contiene el total de los números ingresados hasta ese momento y el contador indica cuántos números van.

## 4. Casos resueltos a mano (Fase 1)

| Caso | Números | Suma calculada a mano |
|---|---|---|
| 1 | 1,2,3,4,5 | 15 |
| 2 | 0,0,0,0,0 | 0 |
| 3 | 1,4,0,2,1 | 8 |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las dos preguntas. -->

**¿Probé mi receta a mano con un caso?** Sí / No
**¿Tuve que corregirla?** Revisé que la suma comenzara en cero y que el ciclo se repitiera exactamente cinco veces.

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o suma
./suma
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->

```
Suma de 5 numeros
Numero 1 de 5: 1
Numero 2 de 5: 2
Numero 3 de 5: 3
Numero 4 de 5: 4
Numero 5 de 5: 5
La suma es: 15
```

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué pasó al no inicializar `suma`?**
El resultado sale incorrecto

**Experimento B (opcional): ¿qué pasó al usar `int` con 2.5?**
No se lee el 0.5, solo el 2

## 9. Tabla de pruebas (Fase 4)

| Caso | Números | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Del 1 al 5 | 1 a 5 | 15 | 15 | si |
| Todos ceros | 0 ×5 | 0 | 0 | si |
| Con negativos | -1,-2,-3,-4,-5 | 15 | 15 | si |
| Decimales | 0.5 ×5 | 2.5 | 2.5 | si |
| Todos iguales | 7 ×5 | 35 | 35 | si |
| Caso propio 1 | 2x5 | 10 | 10 | si |
| Caso propio 2 | 1,-4,5,-6,0 | -4 | -4 | si |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | Queria que la suma empiece en 0 | Inicie suma en 0 | si |
| 2 | Con el cin no se quedaban decimales | use double | si |

**Reto elegido (opcional):** _____

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| _____ | _____ |

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
A utilizar otras variables más completas para resolver operaciones

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
Probaria el codigo poco a poco

**¿Qué fue lo más difícil y cómo lo resolví?**
Corregir errores, repasando lentamente el codigo

**¿Qué pregunta me quedó sin responder?**
Dudas del profesor

## 13. Lista de verificación antes de entregar (Fase 5)

- [no] Llené todas las secciones (no quedan `_____`)
- [si] Mi programa compila sin advertencias
- [si] Probé todos los casos de la tabla
- [si] Hice al menos 3 commits con mensajes claros
- [si] Hice `git push` y verifiqué mi fork en GitHub
- [si] Entregué el enlace de mi fork en Classroom