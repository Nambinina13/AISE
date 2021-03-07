#ifndef _SERVER_H_
#define _SERVER_H_

#include "capteur.h"

typedef struct client_info
{
  size_t id;
  size_t socket_client
  machine_info_t *machine;
}client_info_t;

typedef struct server_s
{
  size_t nb_user;
  size_t user_max;
}server_t;

void server_machine();
#endif
