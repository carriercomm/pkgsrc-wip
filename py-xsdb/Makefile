# $NetBSD$
#

DISTNAME=		xsdb
PKGNAME=		${PYPKGPREFIX}-${DISTNAME}-0.1
CATEGORIES=		databases
MASTER_SITES=		${MASTER_SITE_SOURCEFORGE:=xsdb/}
EXTRACT_SUFX=		.zip

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://xsdb.sourceforge.net/
COMMENT=		Concurrent database with concurrency control and recovery

PY_PATCHPLIST=		yes
PYDISTUTILSPKG=		yes

.include "../../lang/python/extension.mk"
.include "../../mk/bsd.pkg.mk"
