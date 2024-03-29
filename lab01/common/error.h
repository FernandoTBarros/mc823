/**
 * Arquivo que manipula erros ocorridos
 **/

#ifndef _H_ERROR
#define _H_ERROR

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "common.h"
#include "log.h"

enum ERROR {
  ERROR_SOCKET = 1,
  ERROR_SOCKET_CLIENT,
  ERROR_SOCKET_CLIENT_CLOSED,
  ERROR_SOCKET_SEND,
  ERROR_SOCKET_SERVER_ERROR,
  ERROR_SOCKET_SERVER_CLOSED,
  ERROR_SOCKET_SERVER_BIND,
  ERROR_SOCKET_SERVER_LISTEN,
  ERROR_SOCKET_SERVER_ACCEPT,
  ERROR_LOG_FILE,
  ERROR_USAGE_MAIN,
  ERROR_FILE_OPEN,
  ERROR_NUM_COLUNAS_BOOKS
};
/**
 * Funcao que imprime um erro ocorrido, parametro int e (codigo de erro)
 * definido nesse arquivo
 * @param int e
 **/
void printError(int e);

/**
 * Escreve em um arquivo de log. Os parametros sao o titulo e mensagem a ser
 * escriva. Formato de escrita eh: title (time): msg
 * @param char *title
 * @param char *msg
 **/
void writeLog(char *title, char *msg, char *extra);

/**
 * Convert inteiro na base escolhida para string
 * @param int val
 * @param int base
 * @see http://www.jb.man.ac.uk/~slowe/cpp/itoa.html
 **/
char* my_itoa(int val, int base);
#endif
