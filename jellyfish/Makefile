# $NetBSD$

###########################################################
#               Generated by fbsd2pkg                     #
###########################################################

###########################################################
# Unconverted and partially converted FreeBSD port syntax:

## Created by: Jason Bacon <jwbacon@tds.net>
## $FreeBSD$
## Variable length arrays
#USE_GCC=	yes
#MAKE_JOBS_UNSAFE=yes
#USE_LDCONFIG=	yes
#LDFLAGS=	-lexecinfo
## GCC? -Wl,-rpath=${PREFIX}
#post-stage:
#	${MV} ${DESTDIR}${PREFIX}/lib/pkgconfig/* \
#		${DESTDIR}${PREFIX}/libdata/pkgconfig
#.include <bsd.port.mk>

DISTNAME=	jellyfish-1.1.11
CATEGORIES=	biology
MASTER_SITES=	http://www.cbcb.umd.edu/software/jellyfish/

MAINTAINER=	jwbacon@tds.net

COMMENT=	Fast, memory-efficient counting of k-mers in DNA
LICENSE=	gnu-gpl-v3

# Pessimistic assumption.  Test and change if possible.
MAKE_JOBS_SAFE=	no

ONLY_FOR_PLATFORM=	

# Just assuming C and C++: Adjust this!
USE_LANGUAGES=	c c++
GNU_CONFIGURE=	yes
DATADIR=	${PREFIX}/share/jellyfish
DOCSDIR=	${PREFIX}/share/doc/jellyfish

# Sets OPSYS, OS_VERSION, MACHINE_ARCH, etc..
#.include "../../mk/bsd.prefs.mk"

# Keep this if there are user-selectable options.
#.include "options.mk"

# You may need this, especially if using do-install.
#AUTO_MKDIRS=	yes

.include "../../mk/bsd.pkg.mk"
