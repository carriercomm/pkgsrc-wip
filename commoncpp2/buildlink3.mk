# $NetBSD$

BUILDLINK_TREE+=	commoncpp2

.if !defined(COMMONCPP2_BUILDLINK3_MK)
COMMONCPP2_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.commoncpp2+=	commoncpp2>=1.5.3
BUILDLINK_PKGSRCDIR.commoncpp2?=	../../wip/commoncpp2

.include "../../textproc/libxml2/buildlink3.mk"
.endif # COMMONCPP2_BUILDLINK3_MK

BUILDLINK_TREE+=	-commoncpp2
