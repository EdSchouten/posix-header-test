#include <netinet/in.h>

#include "test_util.h"

TYPE_UINT(in_port_t);
TYPE_EQ(in_addr_t, uint32_t);

TYPE_INT(sa_family_t);

TYPE_UINT(uint8_t);
TYPE_UINT(uint32_t);

TYPE(struct in_addr);
MEMBER(struct in_addr, s_addr, in_addr_t);

TYPE(struct sockaddr_in);
MEMBER(struct sockaddr_in, sin_family, sa_family_t);
MEMBER(struct sockaddr_in, sin_port, in_port_t);
MEMBER(struct sockaddr_in, sin_addr, struct in_addr);

TYPE(struct in6_addr);
MEMBER(struct in6_addr, s6_addr, uint8_t *);

TYPE(struct sockaddr_in6);
MEMBER(struct sockaddr_in6, sin6_family, sa_family_t);
MEMBER(struct sockaddr_in6, sin6_port, in_port_t);
MEMBER(struct sockaddr_in6, sin6_flowinfo, uint32_t);
MEMBER(struct sockaddr_in6, sin6_addr, struct in6_addr);
MEMBER(struct sockaddr_in6, sin6_scope_id, uint32_t);

IDENT(in6addr_any, struct in6_addr);
IDENT_INIT(IN6ADDR_ANY_INIT, struct in6_addr);

IDENT(in6addr_loopback, struct in6_addr);
IDENT_INIT(IN6ADDR_LOOPBACK_INIT, struct in6_addr);

TYPE(struct ipv6_mreq);
MEMBER(struct ipv6_mreq, ipv6mr_multiaddr, struct in6_addr);
MEMBER(struct ipv6_mreq, ipv6mr_interface, unsigned);

IDENT_INT(IPPROTO_IP);
IDENT_INT(IPPROTO_IPV6);
IDENT_INT(IPPROTO_ICMP);
IDENT_INT(IPPROTO_RAW);
IDENT_INT(IPPROTO_TCP);
IDENT_INT(IPPROTO_UDP);

IDENT_INT(INADDR_ANY);
IDENT_INT(INADDR_BROADCAST);

IDENT_INT(INET_ADDRSTRLEN);

IDENT_INT(INET6_ADDRSTRLEN);

IDENT_INT(IPV6_JOIN_GROUP);
IDENT_INT(IPV6_LEAVE_GROUP);
IDENT_INT(IPV6_MULTICAST_HOPS);
IDENT_INT(IPV6_MULTICAST_IF);
IDENT_INT(IPV6_MULTICAST_LOOP);
IDENT_INT(IPV6_UNICAST_HOPS);
IDENT_INT(IPV6_V6ONLY);

IDENT(IN6_IS_ADDR_UNSPECIFIED((const struct in6_addr *)0), int);
IDENT(IN6_IS_ADDR_LOOPBACK((const struct in6_addr *)0), int);
IDENT(IN6_IS_ADDR_MULTICAST((const struct in6_addr *)0), int);
IDENT(IN6_IS_ADDR_LINKLOCAL((const struct in6_addr *)0), int);
IDENT(IN6_IS_ADDR_SITELOCAL((const struct in6_addr *)0), int);
IDENT(IN6_IS_ADDR_V4MAPPED((const struct in6_addr *)0), int);
IDENT(IN6_IS_ADDR_V4COMPAT((const struct in6_addr *)0), int);
IDENT(IN6_IS_ADDR_MC_NODELOCAL((const struct in6_addr *)0), int);
IDENT(IN6_IS_ADDR_MC_LINKLOCAL((const struct in6_addr *)0), int);
IDENT(IN6_IS_ADDR_MC_SITELOCAL((const struct in6_addr *)0), int);
IDENT(IN6_IS_ADDR_MC_ORGLOCAL((const struct in6_addr *)0), int);
IDENT(IN6_IS_ADDR_MC_GLOBAL((const struct in6_addr *)0), int);
