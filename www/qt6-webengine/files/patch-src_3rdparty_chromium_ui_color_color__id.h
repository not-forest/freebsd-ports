--- src/3rdparty/chromium/ui/color/color_id.h.orig	2024-10-22 08:31:56 UTC
+++ src/3rdparty/chromium/ui/color/color_id.h
@@ -622,7 +622,7 @@
   \
   E_CPONLY(kColorCrosSysPositive) \
   E_CPONLY(kColorCrosSysComplementVariant)
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #define PLATFORM_SPECIFIC_COLOR_IDS \
   E_CPONLY(kColorNativeButtonBorder)\
   E_CPONLY(kColorNativeHeaderButtonBorderActive) \
