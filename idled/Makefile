# $NetBSD$
#

DISTNAME=	idled-1.16
CATEGORIES=	sysutils
MASTER_SITES=	http://www.netsw.org/system/tools/process/

MAINTAINER=	tmarc@NetBSD.org.pl
HOMEPAGE=	http://web.archive.org/web/2/http://www.darkwing.com/idled/
COMMENT=	Daemon that logs out idle users

PKG_DESTDIR_SUPPORT=	none

post-extract:
	${RM} -f ${WRKSRC}/parse.c ${WRKSRC}/scan.c

.include "../../mk/bsd.pkg.mk"
