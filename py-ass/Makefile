# $NetBSD$

DISTNAME=	ass-0.4.1
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	devel python
MASTER_SITES=	https://pypi.python.org/packages/source/a/ass/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://github.com/rfw/python-ass
COMMENT=	Library for parsing and manipulating Advanced SubStation Alpha
LICENSE=	mit

USE_LANGUAGES=	# none

do-test:
	${RUN} cd ${WRKSRC}; ${SETENV} ${TEST_ENV} ${PYTHONBIN} test.py

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
