$NetBSD$

--- src/h501.cxx.orig	2007-08-06 20:51:07.000000000 +0000
+++ src/h501.cxx
@@ -2475,7 +2475,7 @@ H501_ElementIdentifier & H501_ElementIde
 }
 
 
-H501_ElementIdentifier & H501_ElementIdentifier::operator=(const PWORDArray & v)
+H501_ElementIdentifier & H501_ElementIdentifier::operator=(const PWCharArray & v)
 {
   SetValue(v);
   return *this;
