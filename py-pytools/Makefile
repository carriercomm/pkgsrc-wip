# $NetBSD$

DISTNAME=	pytools-2014.3.5
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	devel
MASTER_SITES=	https://pypi.python.org/packages/source/p/pytools/

MAINTAINER=	jihbed.research@gmail.com
HOMEPAGE=	http://pypi.python.org/pypi/pytools
COMMENT=	Collection of tools for Python
LICENSE=	mit

USE_LANGUAGES=	# none

DEPENDS+=       ${PYPKGPREFIX}-decorator>=3.3.2:../../devel/py-decorator
.include "../../lang/python/egg.mk"
DEPENDS+=       ${PYPKGPREFIX}-six>=1.9.0:../../lang/py-six
DEPENDS+=       ${PYPKGPREFIX}-appdirs>=1.4.0:../../wip/py-appdirs
.include "../../mk/bsd.pkg.mk"
