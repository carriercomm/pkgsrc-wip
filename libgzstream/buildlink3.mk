# $NetBSD$

BUILDLINK_TREE+=	libgzstream

.if !defined(LIBGZSTREAM_BUILDLINK3_MK)
LIBGZSTREAM_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.libgzstream+=	libgzstream>=1.5
BUILDLINK_PKGSRCDIR.libgzstream?=	../../wip/libgzstream

.include "../../devel/zlib/buildlink3.mk"
.endif	# LIBGZSTREAM_BUILDLINK3_MK

BUILDLINK_TREE+=	-libgzstream
