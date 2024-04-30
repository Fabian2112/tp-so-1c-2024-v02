#include <../include/memoria_kernel.h>

void atender_memoria_kernel(){
    bool control_key=1;

    while (control_key) {
		int cod_op = recibir_operacion(fd_memoria);
		switch (cod_op) {
            case MENSAJE:
                // recibir_mensaje(cliente_fd);
                break;
            case PAQUETE:
                // lista = recibir_paquete(fd_kernel_dispatch);
                // log_info(cpu_logger, "Me llegaron los siguientes valores:\n");
                // list_iterate(lista, (void*) iterator);
                break;
            case -1:
                log_error(memoria_logger, "El KERNEL se desconecto. Terminando servidor");
                control_key=0;
                // return EXIT_FAILURE;
                break;
            default:
                log_warning(memoria_logger,"Operacion desconocida de KERNEL");
                break;
            }
	}
}