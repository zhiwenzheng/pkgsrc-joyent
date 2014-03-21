$NetBSD$

Avoid ambiguous overload.
--- src/third_party/s2/s2polygonbuilder.cc.orig	2014-03-05 22:34:28.000000000 +0000
+++ src/third_party/s2/s2polygonbuilder.cc
@@ -55,7 +55,7 @@ void S2PolygonBuilderOptions::set_vertex
 }
 
 void S2PolygonBuilderOptions::set_edge_splice_fraction(double fraction) {
-  CHECK(fraction < sqrt(3) / 2);
+  CHECK(fraction < sqrt((double)3) / 2);
   edge_splice_fraction_ = fraction;
 }
 
