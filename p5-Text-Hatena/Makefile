# $NetBSD$

DISTNAME=		Text-Hatena-0.15
PKGNAME=		p5-${DISTNAME}
CATEGORIES=		textproc perl5
MASTER_SITES=		${MASTER_SITE_PERL_CPAN:=Text/}

MAINTAINER=		hiramatu@boreas.dti.ne.jp
HOMEPAGE=		http://search.cpan.org/dist/Text-Hatena/
COMMENT=		Perl extension for formatting text with Hatena Style

DEPENDS+=		p5-HTML-Parser>=3.26:../../www/p5-HTML-Parser
DEPENDS+=		p5-Class-Data-Inheritable>=0.04:../../devel/p5-Class-Data-Inheritable
DEPENDS+=		p5-Net-Amazon>=0.34:../../net/p5-Net-Amazon
DEPENDS+=		p5-Template-Toolkit>=2.14:../../www/p5-Template-Toolkit
DEPENDS+=		p5-libwww>=5.805:../../www/p5-libwww
DEPENDS+=		p5-Text-VimColor>=0.11:../../wip/p5-Text-VimColor

PKG_DESTDIR_SUPPORT=	none

PERL5_PACKLIST=		auto/Text/Hatena/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
