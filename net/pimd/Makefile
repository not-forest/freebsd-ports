PORTNAME=	pimd
PORTVERSION=	2.3.2b
PORTREVISION=	1
CATEGORIES=	net

MAINTAINER=	olivier@FreeBSD.org
COMMENT=	Lightweight stand-alone PIM-SM v2 multicast routing daemon
WWW=		http://troglobit.com/pimd.html

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		autoreconf:build

USE_GITHUB=	yes
GH_ACCOUNT=	troglobit
GH_PROJECT=	libite:libite
GH_TAGNAME=	17ae62f\
		v1.4.4:libite
GH_SUBDIR=	libite:libite

USE_RC_SUBR=	${PORTNAME}

GNU_CONFIGURE=	yes

MAKE_ARGS=	prefix="${PREFIX}" sysconfdir="${PREFIX}/etc/"

pre-configure:
	cd ${WRKSRC} && ./autogen.sh

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/pimd ${STAGEDIR}${PREFIX}/sbin/
	${INSTALL_PROGRAM} ${WRKSRC}/src/pimctl ${STAGEDIR}${PREFIX}/sbin/
	${INSTALL_DATA} ${WRKSRC}/pimd.conf \
		${STAGEDIR}${PREFIX}/etc/pimd.conf.sample
	${INSTALL_SCRIPT} ${FILESDIR}/pimd.in \
		${STAGEDIR}${PREFIX}/etc/rc.d/pimd
	${INSTALL_MAN} ${WRKSRC}/man/pimd.8 ${STAGEDIR}${PREFIX}/share/man/man8/
	${INSTALL_MAN} ${WRKSRC}/man/pimctl.8 ${STAGEDIR}${PREFIX}/share/man/man8/
	${INSTALL_MAN} ${WRKSRC}/man/pimd.conf.5 ${STAGEDIR}${PREFIX}/share/man/man5/

.include <bsd.port.mk>
