# $NetBSD$

DISTNAME=	SFML-1.6-sdk-linux-64
PKGNAME=	sfml+-1.6
CATEGORIES=	multimedia
MASTER_SITES=	http://www.sfml-dev.org/files/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.sfml-dev.org/
COMMENT=	Free multimedia C++ API
LICENSE=	zlib

WRKSRC=			${WRKDIR}/SFML-1.6
USE_LANGUAGES=		c c++
USE_TOOLS+=		gmake rm
CPPFLAGS+=		-I${BUILDLINK_PREFIX.glu}/include
CPPFLAGS+=		-I${BUILDLINK_PREFIX.freetype2}/include/freetype2
LDFLAGS+=		-L${BUILDLINK_PREFIX.libsndfile}/lib
MAKE_ENV+=		DESTDIR=${DESTDIR}${PREFIX}
INSTALL_ENV=		PREFIX=${PREFIX}
INSTALLATION_DIRS+=	include/SFML/Audio include/SFML/Graphics
INSTALLATION_DIRS+=	include/SFML/Network/Unix include/SFML/Network/Win32
INSTALLATION_DIRS+=	include/SFML/System/Unix include/SFML/System/Win32
INSTALLATION_DIRS+=	include/SFML/Window lib

.include "options.mk"

post-install:
			${RM} ${DESTDIR}${PREFIX}/include/SFML/Config.hpp.orig
			${RM} ${DESTDIR}${PREFIX}/include/SFML/Window/OpenGL.hpp.orig
			${RM} ${DESTDIR}${PREFIX}/include/SFML/Window/WindowHandle.hpp.orig

.include "../../graphics/glu/buildlink3.mk"
.include "../../audio/openal/buildlink3.mk"
.include "../../audio/libsndfile/buildlink3.mk"
.include "../../mk/jpeg.buildlink3.mk"
.include "../../graphics/glew/buildlink3.mk"
.include "../../graphics/freetype2/buildlink3.mk"
.include "../../x11/libXrandr/buildlink3.mk"
.include "../../x11/libX11/buildlink3.mk"
.include "../../graphics/MesaLib/buildlink3.mk"
.include "../../mk/pthread.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
