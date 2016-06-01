#include <sys/mman.h>

#include "util.h"

IDENT_INT(PROT_EXEC);
IDENT_INT(PROT_NONE);
IDENT_INT(PROT_READ);
IDENT_INT(PROT_WRITE);

IDENT_INT(MAP_FIXED);
IDENT_INT(MAP_PRIVATE);
IDENT_INT(MAP_SHARED);

IDENT_INT(MS_ASYNC);
IDENT_INT(MS_INVALIDATE);
IDENT_INT(MS_SYNC);

IDENT_INT(MCL_CURRENT);
IDENT_INT(MCL_FUTURE);

IDENT(MAP_FAILED, void *);

IDENT_INT(POSIX_MADV_DONTNEED);
IDENT_INT(POSIX_MADV_NORMAL);
IDENT_INT(POSIX_MADV_RANDOM);
IDENT_INT(POSIX_MADV_SEQUENTIAL);
IDENT_INT(POSIX_MADV_WILLNEED);

#ifdef POSIX_TYPED_MEM_ALLOCATE
IDENT_INT(POSIX_TYPED_MEM_ALLOCATE);
IDENT_INT(POSIX_TYPED_MEM_ALLOCATE_CONTIG);
IDENT_INT(POSIX_TYPED_MEM_MAP_ALLOCATABLE);
#endif

TYPE_INT(mode_t);
TYPE_SINT(off_t);
TYPE_UINT(size_t);

#ifdef POSIX_TYPED_MEM_ALLOCATE
TYPE(struct posix_typed_mem_info);
MEMBER(struct posix_typed_mem_info, posix_tmi_length, size_t);
#endif

IDENT(mlock, int (*)(const void *, size_t));
IDENT(mlockall, int (*)(int));
IDENT(mmap, void *(*)(void *, size_t, int, int, int, off_t));
IDENT(mprotect, int (*)(void *, size_t, int));
IDENT(msync, int (*)(void *, size_t, int));
IDENT(munlock, int (*)(const void *, size_t));
IDENT(munlockall, int (*)(void));
IDENT(munmap, int (*)(void *, size_t));
IDENT(posix_madvise, int (*)(void *, size_t, int));
#ifdef POSIX_TYPED_MEM_ALLOCATE
IDENT(posix_mem_offset, int (*)(const void *restrict, size_t, off_t *restrict,
                                size_t *restrict, int *restrict));
IDENT(posix_typed_mem_get_info, int (*)(int, struct posix_typed_mem_info *));
IDENT(posix_typed_mem_open, int (*)(const char *, int, int));
#endif
IDENT(shm_open, int (*)(const char *, int, mode_t));
IDENT(shm_unlink, int (*)(const char *));
