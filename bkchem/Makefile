# $NetBSD$

DISTNAME=	bkchem-0.13.0
PKGREVISION=	1
CATEGORIES=	biology python
MASTER_SITES=	http://bkchem.zirael.org/download/

MAINTAINER=	jihbed.research@gmail.com
HOMEPAGE=	http://bkchem.zirael.org/
COMMENT=	Python based chemical structures editor
LICENSE=	gnu-gpl-v2

DEPENDS+=	${PYPKGPREFIX}-Tk-[0-9]*:../../x11/py-Tk

PYTHON_VERSIONED_DEPENDENCIES=	Pmw

USE_PKGLOCALEDIR=	yes
USE_TOOLS+=	intltool msgfmt
USE_LANGUAGES=		# none

PLIST_SUBST+=	PYVERSSUFFIX=${PYVERSSUFFIX}
PYDISTUTILSPKG=	yes

PY_EXEC=${PREFIX}/bin/python${PYVERSSUFFIX}
PY_APPAPATH=${PREFIX}/${PYSITELIB}/bkchem/bkchem.py

post-extract:
	    ${CP} ${FILESDIR}/bkchem.desktop ${WRKSRC}
	    ${ECHO} '#!/bin/sh' > ${WRKSRC}/bkchem${PYVERSSUFFIX}
	    ${ECHO} 'echo "Starting Bkchem" ' >> ${WRKSRC}/bkchem${PYVERSSUFFIX}
	    ${ECHO} exec ${PY_EXEC} -OO  ${PY_APPAPATH} >> ${WRKSRC}/bkchem${PYVERSSUFFIX}

.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../lang/python/extension.mk"
.include "../../lang/python/versioned_dependencies.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../mk/bsd.pkg.mk"
