#	$NetBSD: Makefile,v 1.2 2019/01/27 02:08:44 pgoyette Exp $

.include "../Makefile.inc"

.PATH:	${S}/compat/common

KMOD=	compat_10

CPPFLAGS+=	-DCOMPAT_10 -DCOMPAT_12
CPPFLAGS+=	-DCOMPAT_13 -DCOMPAT_14 -DCOMPAT_16 -DCOMPAT_20 -DCOMPAT_30
CPPFLAGS+=	-DCOMPAT_40 -DCOMPAT_50 -DCOMPAT_60 -DCOMPAT_70 -DCOMPAT_80

SRCS+=	compat_10_mod.c
SRCS+=	vfs_syscalls_10.c

.include <bsd.kmodule.mk>
