# $NetBSD$
#

DISTNAME=	snark-0.5
CATEGORIES=	net
MASTER_SITES=	http://www.klomp.org/snark/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.klomp.org/snark/
COMMENT=	BitTorrent application suite in Java
LICENSE=	gnu-gpl-v2

BUILD_TARGET=	snark.jar

# yet defined in java-sh
#JAR_PREFIX=	${PREFIX}/share/classpath

INSTALLATION_DIRS+=	bin share/classpath

JAVA_APP_TARGETS=		snark
JAVA_APP_MAIN.snark=		org.klomp.snark.Snark
JAVA_APP_CLASSPATH.snark=	${DESTDIR}${JAR_PREFIX}/snark.jar
JAVA_APP_PATH=			${DESTDIR}${PREFIX}/bin

do-install:
	${INSTALL_DATA} ${WRKSRC}/snark.jar ${DESTDIR}${JAR_PREFIX}

.include "../../wip/mk/java-app.mk"
.include "../../mk/bsd.pkg.mk"
