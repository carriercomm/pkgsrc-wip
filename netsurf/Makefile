# $NetBSD: Makefile,v 1.40 2014/05/29 23:37:58 wiz Exp $
#

DISTNAME=	netsurf-all-3.3
PKGNAME=	${DISTNAME:S/-all//}
CATEGORIES=	www
MASTER_SITES=	http://download.netsurf-browser.org/netsurf/releases/source-full/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.netsurf-browser.org/
COMMENT=	Web browser for RISC OS and UNIX-like platforms
LICENSE=	gnu-gpl-v2 AND mit

BUILD_DEPENDS+=	lemon>=1.0:../../devel/lemon
BUILD_DEPENDS+=	re2c>=0.12:../../devel/re2c

BUILD_TARGET=	build
USE_TOOLS+=	bison flex gmake perl:build pax pkg-config

INSTALLATION_DIRS+=	share/netsurf bin

BUILDLINK_TRANSFORM+=	rm:-Werror

.include "../../x11/gtk2/buildlink3.mk"
.include "../../devel/libglade/buildlink3.mk"
.include "../../graphics/librsvg/buildlink3.mk"
.include "../../graphics/lcms/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
.include "../../www/curl/buildlink3.mk"
.include "../../textproc/libxml2/buildlink3.mk"
.include "../../graphics/mng/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
