# $NetBSD$
#

DISTNAME=		Pike-v7.6.66
PKGNAME=		pike-7.6.66
CATEGORIES=		lang
MASTER_SITES=		http://pike.ida.liu.se/pub/pike/latest-stable/

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://pike.ida.liu.se/
COMMENT=		Dynamic programming language similar to Java and C

PKG_DESTDIR_SUPPORT=	none

GNU_CONFIGURE=		yes
CONFIGURE_DIRS=		src
BUILD_TARGET=		pike #all
CONFIGURE_ARGS+=	--without-nettle

.include "../../devel/gmp/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
