#include <sys/socket.h>

#include "test_util.h"

TYPE_INT(socklen_t);

TYPE_INT(sa_family_t);

TYPE(struct sockaddr);
MEMBER(struct sockaddr, sa_family, sa_family_t);
MEMBER(struct sockaddr, sa_data, char *);

TYPE(struct sockaddr_storage);
MEMBER(struct sockaddr_storage, ss_family, sa_family_t);

TYPE(struct msghdr);
MEMBER(struct msghdr, msg_name, void *);
MEMBER(struct msghdr, msg_namelen, socklen_t);
MEMBER(struct msghdr, msg_iov, struct iovec *);
MEMBER(struct msghdr, msg_iovlen, int);
MEMBER(struct msghdr, msg_control, void *);
MEMBER(struct msghdr, msg_controllen, socklen_t);
MEMBER(struct msghdr, msg_flags, int);

TYPE(struct iovec);

TYPE(struct cmsghdr);
MEMBER(struct cmsghdr, cmsg_len, socklen_t);
MEMBER(struct cmsghdr, cmsg_level, int);
MEMBER(struct cmsghdr, cmsg_type, int);

IDENT_INT(SCM_RIGHTS);

IDENT(CMSG_DATA((struct cmsghdr *)0), unsigned char *);
IDENT(CMSG_NXTHDR((struct msghdr *)0, (struct cmsghdr *)0), struct cmsghdr *);
IDENT(CMSG_FIRSTHDR((struct msghdr *)0), struct cmsghdr *);

TYPE(struct linger);
MEMBER(struct linger, l_onoff, int);
MEMBER(struct linger, l_linger, int);

IDENT_INT(SOCK_DGRAM);
IDENT_INT(SOCK_RAW);
IDENT_INT(SOCK_SEQPACKET);
IDENT_INT(SOCK_STREAM);

IDENT_INT(SOL_SOCKET);

IDENT_INT(SO_ACCEPTCONN);
IDENT_INT(SO_BROADCAST);
IDENT_INT(SO_DEBUG);
IDENT_INT(SO_DONTROUTE);
IDENT_INT(SO_ERROR);
IDENT_INT(SO_KEEPALIVE);
IDENT_INT(SO_LINGER);
IDENT_INT(SO_OOBINLINE);
IDENT_INT(SO_RCVBUF);
IDENT_INT(SO_RCVLOWAT);
IDENT_INT(SO_RCVTIMEO);
IDENT_INT(SO_REUSEADDR);
IDENT_INT(SO_SNDBUF);
IDENT_INT(SO_SNDLOWAT);
IDENT_INT(SO_SNDTIMEO);
IDENT_INT(SO_TYPE);

IDENT_INT(SOMAXCONN);

IDENT_INT(MSG_CTRUNC);
IDENT_INT(MSG_DONTROUTE);
IDENT_INT(MSG_EOR);
IDENT_INT(MSG_OOB);
IDENT_INT(MSG_NOSIGNAL);
IDENT_INT(MSG_PEEK);
IDENT_INT(MSG_TRUNC);
IDENT_INT(MSG_WAITALL);

IDENT_INT(AF_INET);
IDENT_INT(AF_INET6);
IDENT_INT(AF_UNIX);
IDENT_INT(AF_UNSPEC);

IDENT_INT(SHUT_RD);
IDENT_INT(SHUT_RDWR);
IDENT_INT(SHUT_WR);

TYPE_UINT(size_t);
TYPE_SINT(ssize_t);

IDENT(accept, int (*)(int, struct sockaddr *restrict, socklen_t *restrict));
IDENT(bind, int (*)(int, const struct sockaddr *, socklen_t));
IDENT(connect, int (*)(int, const struct sockaddr *, socklen_t));
IDENT(getpeername,
      int (*)(int, struct sockaddr *restrict, socklen_t *restrict));
IDENT(getsockname,
      int (*)(int, struct sockaddr *restrict, socklen_t *restrict));
IDENT(getsockopt, int (*)(int, int, int, void *restrict, socklen_t *restrict));
IDENT(listen, int (*)(int, int));
IDENT(recv, ssize_t (*)(int, void *, size_t, int));
IDENT(recvfrom, ssize_t (*)(int, void *restrict, size_t, int,
                            struct sockaddr *restrict, socklen_t *restrict));
IDENT(recvmsg, ssize_t (*)(int, struct msghdr *, int));
IDENT(send, ssize_t (*)(int, const void *, size_t, int));
IDENT(sendmsg, ssize_t (*)(int, const struct msghdr *, int));
IDENT(sendto, ssize_t (*)(int, const void *, size_t, int,
                          const struct sockaddr *, socklen_t));
IDENT(setsockopt, int (*)(int, int, int, const void *, socklen_t));
IDENT(shutdown, int (*)(int, int));
IDENT(sockatmark, int (*)(int));
IDENT(socket, int (*)(int, int, int));
IDENT(socketpair, int (*)(int, int, int, int[2]));
