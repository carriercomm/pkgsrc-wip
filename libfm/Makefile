# $NetBSD: Makefile,v 1.10 2010/09/14 11:02:48 wiz Exp $
#

DISTNAME=	libfm-1.2.3
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=pcmanfm/}
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://pcmanfm.sourceforge.net/
COMMENT=	File management library
LICENSE=	gnu-gpl-v2

GNU_CONFIGURE=		yes
USE_LIBTOOL=		yes
USE_TOOLS+=		intltool pkg-config

OWN_DIRS=	${PKG_SYSCONFDIR}/xdg/libfm
CONF_FILES+=	${PREFIX}/etc/xdg/libfm/libfm.conf \
		${PKG_SYSCONFDIR}/xdg/libfm/libfm.conf

.include "../../graphics/libexif/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../x11/gtk2/buildlink3.mk"
.include "../../sysutils/menu-cache/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
