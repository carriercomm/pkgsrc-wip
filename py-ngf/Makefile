# $NetBSD$

DISTNAME=	PyNFG-0.1.2
PKGNAME=	${PYPKGPREFIX}-${DISTNAME:S/Py//tl}
CATEGORIES=	math python
MASTER_SITES=	https://pypi.python.org/packages/source/P/PyNFG/

MAINTAINER=	jihbed.research@gmail.com
HOMEPAGE=	https://pypi.python.org/packages/source/P/PyNFG/
COMMENT=	Python package for implementing and solving Network form games
LICENSE=	gnu-agpl-v3

WRKSRC=		${WRKDIR}/PyNFG-0.1.2

USE_LANGUAGES=	# none

PLIST_SUBST+=	PYVERSSUFFIX=${PYVERSSUFFIX}

post-extract:
	${MV} ${WRKSRC}/bin/hideandseek.py ${WRKSRC}/bin/hideandseek.py${PYVERSSUFFIX}
	${MV} ${WRKSRC}/bin/stackelberg.py ${WRKSRC}/bin/stackelberg.py${PYVERSSUFFIX}

.include "../../graphics/py-matplotlib/buildlink3.mk"
.include "../../lang/python/egg.mk"
DEPENDS+=		${PYPKGPREFIX}-networkx>=1.8.1:../../math/py-networkx
.include "../../math/py-numpy/buildlink3.mk"
DEPENDS+=		${PYPKGPREFIX}-scipy>=0.12.0:../../math/py-scipy
.include "../../mk/bsd.pkg.mk"
