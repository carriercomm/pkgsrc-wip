# $NetBSD$
#

DISTNAME=	datatree-0.1.8
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	textproc python
MASTER_SITES=	http://pypi.python.org/packages/source/d/datatree/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://github.com/bigjason/datatree
COMMENT=	DSL for creating structured documents in python

DEPENDS+=	${PYPKGPREFIX}-yaml>=3.08:../../textproc/py-yaml

WRKSRC=		${WRKDIR}/datatree-0.1.8

USE_LANGUAGES=	# none
#PYTHON_VERSIONS_ACCEPTED= 27

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
