# $NetBSD$

CATEGORIES=	math
MASTER_SITES=	${MASTER_SITE_R_CRAN:=contrib/}

MAINTAINER=	mishka@NetBSD.org
HOMEPAGE=	http://www.bigmemory.org/
COMMENT=	R table, tapply, and split-like functionality for (big.)matrix objects
LICENSE=	gnu-lgpl-v3

R_PKGNAME=	bigtabulate
R_PKGVER=	1.1.0

USE_LANGUAGES=	c++

.include "../../math/R/Makefile.extension"
.include "../../devel/gettext-lib/buildlink3.mk"
.include "../../wip/R-bigmemory/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
