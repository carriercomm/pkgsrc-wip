# $NetBSD$
#

DISTNAME=		p2kmoto-0.1-rc1
PKGNAME=		p2kmoto-0.1rc1
CATEGORIES=		comms
MASTER_SITES=		${MASTER_SITE_SOURCEFORGE:=moto4lin/}

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://moto4lin.sourceforge.net/
COMMENT=		Support for p2k on Motorola phones

PKG_DESTDIR_SUPPORT=	none

WRKSRC=			${WRKDIR}/p2kmoto-0.1
USE_LIBTOOL=		yes
GNU_CONFIGURE=		yes

.include "../../devel/libusb/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
