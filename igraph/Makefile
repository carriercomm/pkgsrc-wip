# $NetBSD$

DISTNAME=	igraph-0.7.1
CATEGORIES=	math
MASTER_SITES=	http://igraph.org/nightly/get/c/

MAINTAINER=	wenheping@gmail.com
HOMEPAGE=	http://igraph.sf.net/
COMMENT=	Package For Manipulating Undirected And Directed Graphs
LICENSE=	gnu-gpl-v2

GNU_CONFIGURE=	yes
USE_LIBTOOL=	yes
USE_TOOLS+=	bison pkg-config
USE_LANGUAGES=	c c++

PKGCONFIG_OVERRIDE+=	igraph.pc.in

.include "../../devel/gmp/buildlink3.mk"
.include "../../math/blas/buildlink3.mk"
.include "../../math/glpk/buildlink3.mk"
.include "../../math/lapack/buildlink3.mk"
.include "../../textproc/libxml2/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
