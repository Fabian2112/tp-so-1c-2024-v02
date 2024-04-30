#include <../include/cpu_memoria.h>

void atender_cpu_memoria(){

   bool control_key=1;

    while (control_key) {
		int cod_op = recibir_operacion(fd_memoria);
		switch (cod_op) {
            case MENSAJE:
                // recibir_mensaje(cliente_fd);
                break;
            case PAQUETE:
                // lista = recibir_paquete(fd_kernel_INTERRUPT);
                // log_info(cpu_logger, "Me llegaron los siguientes valores:\n");
                // list_iterate(lista, (void*) iterator);
                break;
            case -1:
                log_error(cpu_logger, "La MEMORIA se desconecto. Terminando servidor");
                control_key=0;
                // return EXIT_FAILURE;
                break;
            default:
                log_warning(cpu_logger,"Operacion desconocida de MEMORIA");
                break;
            }
	}
}