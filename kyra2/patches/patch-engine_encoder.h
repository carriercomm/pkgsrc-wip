$NetBSD$

Removes extra qualifier on Save().

--- engine/encoder.h.orig	2005-03-31 01:02:36.000000000 +0000
+++ engine/encoder.h
@@ -148,7 +148,7 @@ class KrEncoder
 														GLASSERT( numRGBA >= numSegment );
 //														GLASSERT( numSegment >= numLine );
 													 }
-	void KrEncoder::Save();
+	void Save();
 
 	KrResourceVault* GetVault()						{ return &vault; }
 
