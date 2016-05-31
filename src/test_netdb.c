#include <netdb.h>

#include "test_util.h"

TYPE_UINT(in_port_t);
TYPE_EQ(in_addr_t, uint32_t);

TYPE(struct hostent);
MEMBER(struct hostent, h_name, char *);
MEMBER(struct hostent, h_aliases, char **);
MEMBER(struct hostent, h_addrtype, int);
MEMBER(struct hostent, h_length, int);
MEMBER(struct hostent, h_addr_list, char **);

TYPE(struct netent);
MEMBER(struct netent, n_name, char *);
MEMBER(struct netent, n_aliases, char **);
MEMBER(struct netent, n_addrtype, int);
MEMBER(struct netent, n_net, uint32_t);

TYPE_INT(uint32_t);

TYPE(struct protoent);
MEMBER(struct protoent, p_name, char *);
MEMBER(struct protoent, p_aliases, char **);
MEMBER(struct protoent, p_proto, int);

TYPE(struct servent);
MEMBER(struct servent, s_name, char *);
MEMBER(struct servent, s_aliases, char **);
MEMBER(struct servent, s_port, int);
MEMBER(struct servent, s_proto, char *);

IDENT_INT(IPPORT_RESERVED);

TYPE(struct addrinfo);
MEMBER(struct addrinfo, ai_flags, int);
MEMBER(struct addrinfo, ai_family, int);
MEMBER(struct addrinfo, ai_socktype, int);
MEMBER(struct addrinfo, ai_protocol, int);
MEMBER(struct addrinfo, ai_addrlen, socklen_t);
MEMBER(struct addrinfo, ai_addr, struct sockaddr *);
MEMBER(struct addrinfo, ai_canonname, char *);
MEMBER(struct addrinfo, ai_next, struct addrinfo *);

IDENT_INT(AI_PASSIVE);
IDENT_INT(AI_CANONNAME);
IDENT_INT(AI_NUMERICHOST);
IDENT_INT(AI_NUMERICSERV);
IDENT_INT(AI_V4MAPPED);
IDENT_INT(AI_ALL);
IDENT_INT(AI_ADDRCONFIG);

IDENT_INT(NI_NOFQDN);
IDENT_INT(NI_NUMERICHOST);
IDENT_INT(NI_NAMEREQD);
IDENT_INT(NI_NUMERICSERV);
// TODO(ed): Fix FreeBSD!
// IDENT_INT(NI_NUMERICSCOPE);
IDENT_INT(NI_DGRAM);

IDENT_INT(EAI_AGAIN);
IDENT_INT(EAI_BADFLAGS);
IDENT_INT(EAI_FAIL);
IDENT_INT(EAI_FAMILY);
IDENT_INT(EAI_MEMORY);
IDENT_INT(EAI_NONAME);
IDENT_INT(EAI_SERVICE);
IDENT_INT(EAI_SOCKTYPE);
IDENT_INT(EAI_SYSTEM);
IDENT_INT(EAI_OVERFLOW);

IDENT(endhostent, void (*)(void));
IDENT(endnetent, void (*)(void));
IDENT(endprotoent, void (*)(void));
IDENT(endservent, void (*)(void));
IDENT(freeaddrinfo, void (*)(struct addrinfo *));
IDENT(gai_strerror, const char *(*)(int));
IDENT(getaddrinfo,
      int (*)(const char *restrict, const char *restrict,
              const struct addrinfo *restrict, struct addrinfo **restrict));
IDENT(gethostent, struct hostent *(*)(void));
IDENT(getnameinfo,
      int (*)(const struct sockaddr *restrict, socklen_t, char *restrict,
              socklen_t, char *restrict, socklen_t, int));
IDENT(getnetbyaddr, struct netent *(*)(uint32_t, int));
IDENT(getnetbyname, struct netent *(*)(const char *));
IDENT(getnetent, struct netent *(*)(void));
IDENT(getprotobyname, struct protoent *(*)(const char *));
IDENT(getprotobynumber, struct protoent *(*)(int));
IDENT(getprotoent, struct protoent *(*)(void));
IDENT(getservbyname, struct servent *(*)(const char *, const char *));
IDENT(getservbyport, struct servent *(*)(int, const char *));
IDENT(getservent, struct servent *(*)(void));
IDENT(sethostent, void (*)(int));
IDENT(setnetent, void (*)(int));
IDENT(setprotoent, void (*)(int));
IDENT(setservent, void (*)(int));
