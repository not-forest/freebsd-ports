PORTNAME=	state_machines-activerecord
PORTVERSION=	0.10.0
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Support for creating state machines for attributes on ActiveRecord
WWW=		https://github.com/state-machines/state_machines-activerecord

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-activerecord80>=7.1:databases/rubygem-activerecord80 \
		rubygem-state_machines-activemodel>=0.10.0:databases/rubygem-state_machines-activemodel

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>
