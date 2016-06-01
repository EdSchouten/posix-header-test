#include <arpa/inet.h>

#include "util.h"

TYPE_EQ(in_port_t, uint16_t);
TYPE_EQ(in_addr_t, uint32_t);

TYPE(struct in_addr);
MEMBER(struct in_addr, s_addr, in_addr_t);

IDENT_INT(INET_ADDRSTRLEN);
IDENT_INT(INET6_ADDRSTRLEN);

IDENT(htonl, uint32_t (*)(uint32_t));
IDENT(htons, uint16_t (*)(uint16_t));
IDENT(ntohl, uint32_t (*)(uint32_t));
IDENT(ntohs, uint16_t (*)(uint16_t));

TYPE_UINT(uint32_t);
TYPE_UINT(uint16_t);

IDENT(inet_addr, in_addr_t (*)(const char *));
IDENT(inet_ntoa, char *(*)(struct in_addr));
IDENT(inet_pton, int (*)(int, const char *restrict, void *restrict));

#include <sys/socket.h>

IDENT(inet_ntop,
      const char *(*)(int, const void *restrict, char *restrict, socklen_t));
