$NetBSD$

--- chrome/browser/ui/views/fullscreen_exit_bubble.cc.orig	2011-04-13 08:01:42.000000000 +0000
+++ chrome/browser/ui/views/fullscreen_exit_bubble.cc
@@ -19,7 +19,7 @@
 #if defined(OS_WIN)
 #include "ui/base/l10n/l10n_util_win.h"
 #include "views/widget/widget_win.h"
-#elif defined(OS_LINUX)
+#elif defined(TOOLKIT_GTK)
 #include "views/widget/widget_gtk.h"
 #endif
 
@@ -123,7 +123,7 @@ class FullscreenExitBubble::FullscreenEx
     return MA_NOACTIVATE;
   }
 };
-#elif defined(OS_LINUX)
+#elif defined(TOOLKIT_GTK)
 // TODO: figure out the equivalent of MA_NOACTIVATE for gtk.
 #endif
 
@@ -159,7 +159,7 @@ FullscreenExitBubble::FullscreenExitBubb
   popup_->set_window_style(WS_POPUP);
   popup_->set_window_ex_style(WS_EX_LAYERED | WS_EX_TOOLWINDOW |
                               l10n_util::GetExtendedTooltipStyles());
-#elif defined(OS_LINUX)
+#elif defined(TOOLKIT_GTK)
   popup_ = new views::WidgetGtk(views::WidgetGtk::TYPE_POPUP);
   popup_->MakeTransparent();
 #endif
@@ -207,7 +207,7 @@ void FullscreenExitBubble::AnimationProg
 #if defined(OS_WIN)
     popup_->MoveWindow(popup_rect.x(), popup_rect.y(), popup_rect.width(),
                        popup_rect.height());
-#elif defined(OS_LINUX)
+#elif defined(TOOLKIT_GTK)
     popup_->SetBounds(popup_rect);
 #endif
     popup_->Show();
