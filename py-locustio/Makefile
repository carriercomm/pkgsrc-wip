# $NetBSD$

DISTNAME=	locustio-0.7.2
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	devel www
MASTER_SITES=	https://pypi.python.org/packages/source/l/locustio/

MAINTAINER=	angel.medinamoscat@gmail.com
HOMEPAGE=	https://pypi.python.org/pypi/locustio
COMMENT=	Python utility for doing distributed load testing of a web site
LICENSE=	mit

DEPENDS+=	${PYPKGPREFIX}-gevent>=1.0.1:../../net/py-gevent
DEPENDS+=	${PYPKGPREFIX}-flask>=0.10.1:../../www/py-flask
DEPENDS+=	${PYPKGPREFIX}-requests>=2.4.1:../../devel/py-requests
DEPENDS+=	${PYPKGPREFIX}-msgpack>=0.4.2:../../devel/py-msgpack

USE_LANGUAGES=	# none

PLIST_SUBST+=	PYVERSSUFFIX=${PYVERSSUFFIX}

post-install:
	${MV} ${DESTDIR}${PREFIX}/bin/locust \
		${DESTDIR}${PREFIX}/bin/locust-${PYVERSSUFFIX}

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
