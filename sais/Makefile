# $NetBSD$

DISTNAME=		sais-nick-20060509
PKGNAME=		${DISTNAME:S/-nick//}
CATEGORIES=		games
MASTER_SITES=		#

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://zork.net/~nick/sais/
COMMENT=		Strange Adventures in Infinite Space engine (SDL port)

INSTALLATION_DIRS=	bin

USE_LANGUAGES+=	c++
USE_TOOLS+=	gmake
WRKSRC=		${WRKDIR}/sais
BUILD_TARGET=	sais

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/sais ${DESTDIR}${PREFIX}/bin

.include "../../audio/SDL_mixer/buildlink3.mk"
.include "../../devel/SDL/buildlink3.mk"
.include "../../graphics/SDL_image/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
