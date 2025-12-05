#include <stdio.h>

int main() {
    int opcion, unidad_origen, unidad_destino;
    float cantidad, resultado = 0;

    // Menú de categorías de conversión
    printf("Que Convertimos Hoy?:\n");
    printf(" 1: Longitud\n 2: Masa\n 3: Tiempo\n 4: Temperatura\n 5: Velocidad\n");
    printf(" 6: Volumen\n 7: Área\n 8: Energía\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1: // Longitud
            printf("Selecciona la unidad que tienes:\n");
            printf(" 1: Centímetros\n 2: Metros\n 3: Kilómetros\n 4: Millas\n 5: Yardas\n");
            printf(" 6: Pies\n 7: Pulgadas\n");
            scanf("%d", &unidad_origen);

            printf("Selecciona la unidad a la que quieres transformar:\n");
            scanf("%d", &unidad_destino);

            printf("Ingresa cuánto vas a convertir: ");
            scanf("%f", &cantidad);

            switch (unidad_origen) {
                case 1: // Centímetros
                    switch (unidad_destino) {
                        case 2: resultado = cantidad / 100; break;
                        case 3: resultado = cantidad / 100000; break;
                        case 4: resultado = cantidad / 160934.4; break;
                        case 5: resultado = cantidad / 91.44; break;
                        case 6: resultado = cantidad / 30.48; break;
                        case 7: resultado = cantidad / 2.54; break;
                        default: resultado = cantidad;
                    }
                    break;

                case 2: // Metros
                    switch (unidad_destino) {
                        case 1: resultado = cantidad * 100; break;
                        case 3: resultado = cantidad / 1000; break;
                        case 4: resultado = cantidad / 1609.344; break;
                        case 5: resultado = cantidad * 1.0936133; break;
                        case 6: resultado = cantidad * 3.2808399; break;
                        case 7: resultado = cantidad * 39.3700787; break;
                        default: resultado = cantidad;
                    }
                    break;

                case 3: // Kilómetros
                    switch (unidad_destino) {
                        case 1: resultado = cantidad * 100000; break;
                        case 2: resultado = cantidad * 1000; break;
                        case 4: resultado = cantidad / 1.609344; break;
                        case 5: resultado = cantidad * 1093.6133; break;
                        case 6: resultado = cantidad * 3280.8399; break;
                        case 7: resultado = cantidad * 39370.0787; break;
                        default: resultado = cantidad;
                    }
                    break;

                case 4: // Millas
                    switch (unidad_destino) {
                        case 1: resultado = cantidad * 160934.4; break;
                        case 2: resultado = cantidad * 1609.344; break;
                        case 3: resultado = cantidad * 1.609344; break;
                        case 5: resultado = cantidad * 1760.0; break;
                        case 6: resultado = cantidad * 5280.0; break;
                        case 7: resultado = cantidad * 63360.0; break;
                        default: resultado = cantidad;
                    }
                    break;

                case 5: // Yardas
                    switch (unidad_destino) {
                        case 1: resultado = cantidad * 91.44; break;
                        case 2: resultado = cantidad * 0.9144; break;
                        case 3: resultado = cantidad * 0.0009144; break;
                        case 4: resultado = cantidad / 1760.0; break;
                        case 6: resultado = cantidad * 3.0; break;
                        case 7: resultado = cantidad * 36.0; break;
                        default: resultado = cantidad;
                    }
                    break;

                case 6: // Pies
                    switch (unidad_destino) {
                        case 1: resultado = cantidad * 30.48; break;
                        case 2: resultado = cantidad * 0.3048; break;
                        case 3: resultado = cantidad * 0.0003048; break;
                        case 4: resultado = cantidad / 5280.0; break;
                        case 5: resultado = cantidad / 3.0; break;
                        case 7: resultado = cantidad * 12.0; break;
                        default: resultado = cantidad;
                    }
                    break;

                case 7: // Pulgadas
                    switch (unidad_destino) {
                        case 1: resultado = cantidad * 2.54; break;
                        case 2: resultado = cantidad * 0.0254; break;
                        case 3: resultado = cantidad * 0.0000254; break;
                        case 4: resultado = cantidad / 63360.0; break;
                        case 5: resultado = cantidad / 36.0; break;
                        case 6: resultado = cantidad / 12.0; break;
                        default: resultado = cantidad;
                    }
                    break;

                default:
                    printf("Epa, esa unidad no esta en la lista mi lider.\n");
                    return 1;
            }

            printf("El resultado es: %.2f\n", resultado);
            break;

        case 2: printf("Aquí irían las conversiones de masa...\n"); break;
        case 3: printf("Aquí irían las conversiones de tiempo...\n"); break;
        case 4: printf("Aquí irían las conversiones de temperatura...\n"); break;
        case 5: printf("Aquí irían las conversiones de velocidad...\n"); break;
        case 6: printf("Aquí irían las conversiones de volumen...\n"); break;
        case 7: printf("Aquí irían las conversiones de área...\n"); break;
        case 8: printf("Aquí irían las conversiones de energía...\n"); break;
        default: printf("Chamo que vaina e, pon los datos como es.\n");
    }

    return 0;
}
