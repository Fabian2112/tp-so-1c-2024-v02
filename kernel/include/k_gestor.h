#ifndef K_GESTOR_
#define K_GESTOR_

#include <stdlib.h>
#include <stdio.h>
#include <../../utils/include/hello.h>
#include <commons/log.h>
#include <commons/string.h>
#include <commons/config.h>
#include <readline/readline.h>
#include "inicializar_kernel.h"
#include <pthread.h>
#include "kernel_cpuDisp.h"
#include "kernel_cpuInt.h"
#include "kernel_es.h"
#include "kernel_memoria.h"

extern t_log* kernel_logger;
extern t_log* kernel_debug; 
extern t_config* kernel_config;

extern pthread_t hilo_kernel_es;
extern pthread_t hilo_kernel_memoria;
extern pthread_t hilo_kernel_cpu_dispatch;
extern pthread_t hilo_kernel_cpu_interrupt;
extern int fd_kernel;
extern int fd_cpu_dispatch;
extern int fd_cpu_interrupt;
extern int fd_memoria;
extern int fd_entsal;

extern char* PUERTO_ESCUCHA;
extern char* IP_MEMORIA;
extern char* PUERTO_MEMORIA;
extern char* IP_CPU;
extern char* PUERTO_CPU_DISPATCH;
extern char* PUERTO_CPU_INTERRUPT;
extern char* ALGORITMO_PLANIFICACION;
extern int QUANTUM;
extern char** RECURSOS;
extern char** INSTANCIAS_RECURSOS;
extern int GRADO_MULTIPROGRAMACION;

#endif  /* K_GESTOR_ */