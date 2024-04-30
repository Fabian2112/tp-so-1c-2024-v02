#ifndef UTILS_HELLO_H_
#define UTILS_HELLO_H_

#include <stdlib.h>
#include <stdio.h>
#include <commons/log.h>
#include <commons/string.h>
#include <commons/config.h>
#include <readline/readline.h>
#include <signal.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netdb.h>
#include <string.h>



/**
* @fn    decir_hola
* @brief Imprime un saludo al nombre que se pase por parámetro por consola.
*/
void decir_hola(char* quien);

//Estructuras del cliente del TP0
typedef enum
{
	MENSAJE,
	PAQUETE
    //IREMOS COLOCANDO MAS VARIABLES SEGUN NECESITEMOS
    //PODEMOS SEPARAR SEGUN MENSAJES ENTRE DISTINTOS MODULOS O
    //CREAR ENUMS DISTINTOS PARA CADA MODULOS
}op_code;

typedef struct
{
	int size;
	void* stream;
} t_buffer;

typedef struct
{
	op_code codigo_operacion;
	t_buffer* buffer;
} t_paquete;

//Funciones del cliente del TP0
int crear_conexion(char *ip, char* puerto);
void* serializar_paquete(t_paquete* paquete, int bytes);


//Funciones del servidor del TP0
int iniciar_servidor(char* puerto, t_log* un_log, char* msj_servidor);
int esperar_cliente(int socket_servidor, t_log* un_log, char* msj_servidor);
int recibir_operacion(int socket_cliente);
#endif
