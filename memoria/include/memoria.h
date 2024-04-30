#ifndef MEMORIA_H_
#define MEMORIA_H_


#include "m_gestor.h"


// varieables GLOBALES

t_log* memoria_logger; 
t_config* memoria_config;

int fd_memoria;
int fd_entradaSalida;
int fd_cpu;
int fd_kernel;

char* PUERTO_ESCUCHA;
int TAM_MEMORIA;
int TAM_PAGINA;
char* PATH_INSTRUCCIONES;
int RETARDO_RESPUESTA;

#endif  /* MEMORIA_H_ */