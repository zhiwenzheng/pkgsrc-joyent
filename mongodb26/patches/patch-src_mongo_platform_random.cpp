$NetBSD$

Add NetBSD support.
--- src/mongo/platform/random.cpp.orig	2014-03-05 22:34:28.000000000 +0000
+++ src/mongo/platform/random.cpp
@@ -105,7 +105,7 @@ namespace mongo {
         return new WinSecureRandom();
     }
 
-#elif defined(__linux__) || defined(__sunos__) || defined(__APPLE__)
+#elif defined(__linux__) || defined(__sunos__) || defined(__APPLE__) || defined(__netbsd__)
 
     class InputStreamSecureRandom : public SecureRandom {
     public:
