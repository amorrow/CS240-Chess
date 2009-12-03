obj/Bishop.o: src/Bishop.cpp inc/Bishop.h inc/Piece.h inc/Location.h \
  inc/ChessDefinitions.h inc/Board.h
obj/Board.o: src/Board.cpp inc/Board.h inc/Location.h inc/Piece.h \
  inc/ChessDefinitions.h inc/Rook.h inc/Pawn.h inc/Knight.h inc/Bishop.h \
  inc/Queen.h inc/Rook.h inc/Bishop.h inc/King.h
obj/Chess.o: src/Chess.cpp lib/inc/SelectDialog.h \
  /usr/include/gtkmm-2.4/gtkmm/dialog.h /usr/include/glibmm-2.4/glibmm.h \
  /usr/lib/glibmm-2.4/include/glibmmconfig.h \
  /usr/include/glibmm-2.4/glibmm/arrayhandle.h \
  /usr/include/glibmm-2.4/glibmm/containerhandle_shared.h \
  /usr/include/glib-2.0/glib-object.h \
  /usr/include/glib-2.0/gobject/gboxed.h \
  /usr/include/glib-2.0/gobject/gtype.h /usr/include/glib-2.0/glib.h \
  /usr/include/glib-2.0/glib/galloca.h \
  /usr/include/glib-2.0/glib/gtypes.h \
  /usr/lib/glib-2.0/include/glibconfig.h \
  /usr/include/glib-2.0/glib/gmacros.h \
  /usr/include/glib-2.0/glib/garray.h \
  /usr/include/glib-2.0/glib/gasyncqueue.h \
  /usr/include/glib-2.0/glib/gthread.h \
  /usr/include/glib-2.0/glib/gerror.h /usr/include/glib-2.0/glib/gquark.h \
  /usr/include/glib-2.0/glib/gutils.h \
  /usr/include/glib-2.0/glib/gatomic.h \
  /usr/include/glib-2.0/glib/gbacktrace.h \
  /usr/include/glib-2.0/glib/gbase64.h \
  /usr/include/glib-2.0/glib/gbookmarkfile.h \
  /usr/include/glib-2.0/glib/gcache.h /usr/include/glib-2.0/glib/glist.h \
  /usr/include/glib-2.0/glib/gmem.h /usr/include/glib-2.0/glib/gslice.h \
  /usr/include/glib-2.0/glib/gchecksum.h \
  /usr/include/glib-2.0/glib/gcompletion.h \
  /usr/include/glib-2.0/glib/gconvert.h \
  /usr/include/glib-2.0/glib/gdataset.h \
  /usr/include/glib-2.0/glib/gdate.h /usr/include/glib-2.0/glib/gdir.h \
  /usr/include/glib-2.0/glib/gfileutils.h \
  /usr/include/glib-2.0/glib/ghash.h /usr/include/glib-2.0/glib/ghook.h \
  /usr/include/glib-2.0/glib/giochannel.h \
  /usr/include/glib-2.0/glib/gmain.h /usr/include/glib-2.0/glib/gslist.h \
  /usr/include/glib-2.0/glib/gstring.h \
  /usr/include/glib-2.0/glib/gunicode.h \
  /usr/include/glib-2.0/glib/gkeyfile.h \
  /usr/include/glib-2.0/glib/gmappedfile.h \
  /usr/include/glib-2.0/glib/gmarkup.h \
  /usr/include/glib-2.0/glib/gmessages.h \
  /usr/include/glib-2.0/glib/gnode.h /usr/include/glib-2.0/glib/goption.h \
  /usr/include/glib-2.0/glib/gpattern.h \
  /usr/include/glib-2.0/glib/gprimes.h \
  /usr/include/glib-2.0/glib/gqsort.h /usr/include/glib-2.0/glib/gqueue.h \
  /usr/include/glib-2.0/glib/grand.h /usr/include/glib-2.0/glib/grel.h \
  /usr/include/glib-2.0/glib/gregex.h \
  /usr/include/glib-2.0/glib/gscanner.h \
  /usr/include/glib-2.0/glib/gsequence.h \
  /usr/include/glib-2.0/glib/gshell.h /usr/include/glib-2.0/glib/gspawn.h \
  /usr/include/glib-2.0/glib/gstrfuncs.h \
  /usr/include/glib-2.0/glib/gtestutils.h \
  /usr/include/glib-2.0/glib/gthreadpool.h \
  /usr/include/glib-2.0/glib/gtimer.h /usr/include/glib-2.0/glib/gtree.h \
  /usr/include/glib-2.0/glib/gurifuncs.h \
  /usr/include/glib-2.0/gobject/genums.h \
  /usr/include/glib-2.0/gobject/gobject.h \
  /usr/include/glib-2.0/gobject/gvalue.h \
  /usr/include/glib-2.0/gobject/gparam.h \
  /usr/include/glib-2.0/gobject/gclosure.h \
  /usr/include/glib-2.0/gobject/gsignal.h \
  /usr/include/glib-2.0/gobject/gmarshal.h \
  /usr/include/glib-2.0/gobject/gparamspecs.h \
  /usr/include/glib-2.0/gobject/gsourceclosure.h \
  /usr/include/glib-2.0/gobject/gtypemodule.h \
  /usr/include/glib-2.0/gobject/gtypeplugin.h \
  /usr/include/glib-2.0/gobject/gvaluearray.h \
  /usr/include/glib-2.0/gobject/gvaluetypes.h \
  /usr/include/glibmm-2.4/glibmm/refptr.h \
  /usr/include/glibmm-2.4/glibmm/ustring.h \
  /usr/include/glibmm-2.4/glibmm/unicode.h \
  /usr/include/glibmm-2.4/glibmm/wrap.h \
  /usr/include/glibmm-2.4/glibmm/objectbase.h \
  /usr/include/glibmm-2.4/glibmm/signalproxy.h \
  /usr/include/sigc++-2.0/sigc++/sigc++.h \
  /usr/include/sigc++-2.0/sigc++/signal.h \
  /usr/include/sigc++-2.0/sigc++/signal_base.h \
  /usr/lib/sigc++-2.0/include/sigc++config.h \
  /usr/include/sigc++-2.0/sigc++/type_traits.h \
  /usr/include/sigc++-2.0/sigc++/trackable.h \
  /usr/include/sigc++-2.0/sigc++/functors/slot.h \
  /usr/include/sigc++-2.0/sigc++/visit_each.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/adaptor_trait.h \
  /usr/include/sigc++-2.0/sigc++/functors/functor_trait.h \
  /usr/include/sigc++-2.0/sigc++/functors/ptr_fun.h \
  /usr/include/sigc++-2.0/sigc++/functors/mem_fun.h \
  /usr/include/sigc++-2.0/sigc++/limit_reference.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/deduce_result_type.h \
  /usr/include/sigc++-2.0/sigc++/functors/slot_base.h \
  /usr/include/sigc++-2.0/sigc++/connection.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/adaptors.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/bind.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/bound_argument.h \
  /usr/include/sigc++-2.0/sigc++/reference_wrapper.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/bind_return.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/hide.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/retype_return.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/retype.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/compose.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/exception_catch.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/lambda/lambda.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/lambda/base.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/lambda/select.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/lambda/operator.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/lambda/group.h \
  /usr/include/sigc++-2.0/sigc++/functors/functors.h \
  /usr/include/glibmm-2.4/glibmm/signalproxy_connectionnode.h \
  /usr/include/glibmm-2.4/glibmm/propertyproxy.h \
  /usr/include/glibmm-2.4/glibmm/propertyproxy_base.h \
  /usr/include/glibmm-2.4/glibmm/value.h \
  /usr/include/glibmm-2.4/glibmm/value_custom.h \
  /usr/include/glibmm-2.4/glibmm/value_basictypes.h \
  /usr/include/glibmm-2.4/glibmm/quark.h \
  /usr/include/glibmm-2.4/glibmm/debug.h \
  /usr/include/glibmm-2.4/glibmm/checksum.h \
  /usr/include/glibmm-2.4/glibmm/class.h \
  /usr/include/glibmm-2.4/glibmm/convert.h \
  /usr/include/glibmm-2.4/glibmm/error.h \
  /usr/include/glibmm-2.4/glibmm/exception.h \
  /usr/include/glibmm-2.4/glibmm/date.h \
  /usr/include/glibmm-2.4/glibmm/dispatcher.h \
  /usr/include/glibmm-2.4/glibmm/main.h \
  /usr/include/glibmm-2.4/glibmm/timeval.h \
  /usr/include/glibmm-2.4/glibmm/priorities.h \
  /usr/include/glibmm-2.4/glibmm/exceptionhandler.h \
  /usr/include/glibmm-2.4/glibmm/fileutils.h \
  /usr/include/glibmm-2.4/glibmm/helperlist.h \
  /usr/include/glibmm-2.4/glibmm/containers.h \
  /usr/include/glibmm-2.4/glibmm/sarray.h \
  /usr/include/glibmm-2.4/glibmm/interface.h \
  /usr/include/glibmm-2.4/glibmm/object.h \
  /usr/include/glibmm-2.4/glibmm/utility.h \
  /usr/include/glibmm-2.4/glibmm/iochannel.h \
  /usr/include/glibmm-2.4/glibmm/init.h \
  /usr/include/glibmm-2.4/glibmm/keyfile.h \
  /usr/include/glibmm-2.4/glibmm/streamiochannel.h \
  /usr/include/glibmm-2.4/glibmm/listhandle.h \
  /usr/include/glibmm-2.4/glibmm/markup.h \
  /usr/include/glibmm-2.4/glibmm/miscutils.h \
  /usr/include/glibmm-2.4/glibmm/module.h \
  /usr/include/glibmm-2.4/glibmm/optioncontext.h \
  /usr/include/glibmm-2.4/glibmm/optionentry.h \
  /usr/include/glibmm-2.4/glibmm/optiongroup.h \
  /usr/include/glibmm-2.4/glibmm/pattern.h \
  /usr/include/glibmm-2.4/glibmm/property.h \
  /usr/include/glibmm-2.4/glibmm/random.h \
  /usr/include/glibmm-2.4/glibmm/regex.h \
  /usr/include/glibmm-2.4/glibmm/shell.h \
  /usr/include/glibmm-2.4/glibmm/slisthandle.h \
  /usr/include/glibmm-2.4/glibmm/spawn.h \
  /usr/include/glibmm-2.4/glibmm/stringutils.h \
  /usr/include/glibmm-2.4/glibmm/thread.h \
  /usr/include/glibmm-2.4/glibmm/threadpool.h \
  /usr/include/glibmm-2.4/glibmm/timer.h \
  /usr/include/glibmm-2.4/glibmm/uriutils.h \
  /usr/include/gtkmm-2.4/gtkmm/window.h \
  /usr/include/gtkmm-2.4/gtkmm/bin.h \
  /usr/include/gtkmm-2.4/gtkmm/container.h \
  /usr/include/gtkmm-2.4/gtkmm/widget.h \
  /usr/include/pangomm-1.4/pangomm/context.h \
  /usr/include/pangomm-1.4/pangomm/fontdescription.h \
  /usr/include/pango-1.0/pango/pango-font.h \
  /usr/include/pango-1.0/pango/pango-coverage.h \
  /usr/include/pango-1.0/pango/pango-types.h \
  /usr/include/pango-1.0/pango/pango-gravity.h \
  /usr/include/pango-1.0/pango/pango-matrix.h \
  /usr/include/pango-1.0/pango/pango-script.h \
  /usr/include/pango-1.0/pango/pango-language.h \
  /usr/include/pangomm-1.4/pangomm/fontmetrics.h \
  /usr/include/pangomm-1.4/pangomm/fontset.h \
  /usr/include/pangomm-1.4/pangomm/language.h \
  /usr/include/pango-1.0/pango/pango-attributes.h \
  /usr/include/pangomm-1.4/pangomm/font.h \
  /usr/include/pangomm-1.4/pangomm/rectangle.h \
  /usr/include/pangomm-1.4/pangomm/glyph.h \
  /usr/include/pango-1.0/pango/pango-glyph.h \
  /usr/include/pango-1.0/pango/pango-item.h \
  /usr/include/pangomm-1.4/pangomm/coverage.h \
  /usr/include/pango-1.0/pango/pango-fontset.h \
  /usr/include/pangomm-1.4/pangomm/fontmap.h \
  /usr/include/pangomm-1.4/pangomm/fontfamily.h \
  /usr/include/pangomm-1.4/pangomm/fontface.h \
  /usr/include/pango-1.0/pango/pango-fontmap.h \
  /usr/include/pangomm-1.4/pangomm/item.h \
  /usr/include/pangomm-1.4/pangomm/attributes.h \
  /usr/include/pangomm-1.4/pangomm/color.h \
  /usr/include/pangomm-1.4/pangomm/attrlist.h \
  /usr/include/pangomm-1.4/pangomm/attriter.h \
  /usr/include/pangomm-1.4/pangomm/types.h \
  /usr/include/pango-1.0/pango/pango-context.h \
  /usr/include/cairomm-1.0/cairomm/context.h \
  /usr/include/cairomm-1.0/cairomm/surface.h \
  /usr/include/cairomm-1.0/cairomm/enums.h /usr/include/cairo/cairo.h \
  /usr/include/cairo/cairo-features.h \
  /usr/include/cairo/cairo-deprecated.h \
  /usr/include/cairomm-1.0/cairomm/exception.h \
  /usr/include/cairomm-1.0/cairomm/fontoptions.h \
  /usr/include/cairomm-1.0/cairomm/refptr.h \
  /usr/include/cairo/cairo-pdf.h /usr/include/cairo/cairo-ps.h \
  /usr/include/cairo/cairo-svg.h \
  /usr/include/cairomm-1.0/cairomm/fontface.h \
  /usr/include/cairomm-1.0/cairomm/pattern.h \
  /usr/include/cairomm-1.0/cairomm/path.h \
  /usr/include/pangomm-1.4/pangomm/layout.h \
  /usr/include/pangomm-1.4/pangomm/tabarray.h \
  /usr/include/pango-1.0/pango/pango-tabs.h \
  /usr/include/pango-1.0/pango/pango-break.h \
  /usr/include/pangomm-1.4/pangomm/layoutline.h \
  /usr/include/pango-1.0/pango/pango-layout.h \
  /usr/include/pango-1.0/pango/pango-glyph-item.h \
  /usr/include/pangomm-1.4/pangomm/layoutiter.h \
  /usr/include/pangomm-1.4/pangomm/layoutrun.h \
  /usr/lib/gtkmm-2.4/include/gtkmmconfig.h \
  /usr/lib/gdkmm-2.4/include/gdkmmconfig.h \
  /usr/include/atkmm-1.6/atkmm/object.h \
  /usr/include/atkmm-1.6/atkmm/component.h \
  /usr/include/atkmm-1.6/atkmm/relation.h \
  /usr/include/atkmm-1.6/atkmm/implementor.h \
  /usr/include/gdkmm-2.4/gdkmm/event.h \
  /usr/include/gdkmm-2.4/gdkmm/window.h \
  /usr/include/gdkmm-2.4/gdkmm/drawable.h \
  /usr/include/gtk-2.0/gdk/gdkdrawable.h \
  /usr/include/gtk-2.0/gdk/gdktypes.h \
  /usr/include/pango-1.0/pango/pango.h \
  /usr/include/pango-1.0/pango/pango-engine.h \
  /usr/include/pango-1.0/pango/pango-enum-types.h \
  /usr/include/pango-1.0/pango/pango-features.h \
  /usr/include/pango-1.0/pango/pango-renderer.h \
  /usr/include/pango-1.0/pango/pango-utils.h \
  /usr/lib/gtk-2.0/include/gdkconfig.h /usr/include/gtk-2.0/gdk/gdkgc.h \
  /usr/include/gtk-2.0/gdk/gdkcolor.h /usr/include/gtk-2.0/gdk/gdkrgb.h \
  /usr/include/gtk-2.0/gdk-pixbuf/gdk-pixbuf.h \
  /usr/include/gtk-2.0/gdk-pixbuf/gdk-pixbuf-features.h \
  /usr/include/gtk-2.0/gdk-pixbuf/gdk-pixbuf-core.h \
  /usr/include/gtk-2.0/gdk-pixbuf/gdk-pixbuf-transform.h \
  /usr/include/gtk-2.0/gdk-pixbuf/gdk-pixbuf-animation.h \
  /usr/include/gtk-2.0/gdk-pixbuf/gdk-pixbuf-simple-anim.h \
  /usr/include/gtk-2.0/gdk-pixbuf/gdk-pixbuf-io.h \
  /usr/include/glib-2.0/gmodule.h \
  /usr/include/gtk-2.0/gdk-pixbuf/gdk-pixbuf-loader.h \
  /usr/include/gtk-2.0/gdk-pixbuf/gdk-pixbuf-enum-types.h \
  /usr/include/pangomm-1.4/pangomm/glyphstring.h \
  /usr/include/gdkmm-2.4/gdkmm/gc.h /usr/include/gdkmm-2.4/gdkmm/types.h \
  /usr/include/gtk-2.0/gdk/gdk.h /usr/include/gtk-2.0/gdk/gdkcairo.h \
  /usr/include/gtk-2.0/gdk/gdkpixbuf.h \
  /usr/include/pango-1.0/pango/pangocairo.h \
  /usr/include/gtk-2.0/gdk/gdkcursor.h \
  /usr/include/gtk-2.0/gdk/gdkdisplay.h \
  /usr/include/gtk-2.0/gdk/gdkevents.h /usr/include/gtk-2.0/gdk/gdkdnd.h \
  /usr/include/gtk-2.0/gdk/gdkinput.h \
  /usr/include/gtk-2.0/gdk/gdkenumtypes.h \
  /usr/include/gtk-2.0/gdk/gdkfont.h /usr/include/gtk-2.0/gdk/gdkimage.h \
  /usr/include/gtk-2.0/gdk/gdkkeys.h \
  /usr/include/gtk-2.0/gdk/gdkdisplaymanager.h \
  /usr/include/gtk-2.0/gdk/gdkpango.h \
  /usr/include/gtk-2.0/gdk/gdkpixmap.h \
  /usr/include/gtk-2.0/gdk/gdkproperty.h \
  /usr/include/gtk-2.0/gdk/gdkregion.h \
  /usr/include/gtk-2.0/gdk/gdkscreen.h \
  /usr/include/gtk-2.0/gdk/gdkselection.h \
  /usr/include/gtk-2.0/gdk/gdkspawn.h \
  /usr/include/gtk-2.0/gdk/gdkvisual.h \
  /usr/include/gtk-2.0/gdk/gdkwindow.h \
  /usr/include/gdkmm-2.4/gdkmm/rectangle.h \
  /usr/include/gdkmm-2.4/gdkmm/region.h \
  /usr/include/gdkmm-2.4/gdkmm/screen.h \
  /usr/include/gdkmm-2.4/gdkmm/image.h \
  /usr/include/gdkmm-2.4/gdkmm/visual.h \
  /usr/include/gdkmm-2.4/gdkmm/colormap.h \
  /usr/include/gdkmm-2.4/gdkmm/color.h \
  /usr/include/gdkmm-2.4/gdkmm/rgbcmap.h \
  /usr/include/gdkmm-2.4/gdkmm/bitmap.h \
  /usr/include/gdkmm-2.4/gdkmm/pixmap.h \
  /usr/include/gdkmm-2.4/gdkmm/dragcontext.h \
  /usr/include/gdkmm-2.4/gdkmm/pixbuf.h \
  /usr/include/gdkmm-2.4/gdkmm/pixbufformat.h \
  /usr/include/gtkmm-2.4/gtkmm/stockid.h \
  /usr/include/gtkmm-2.4/gtkmm/enums.h \
  /usr/include/gdkmm-2.4/gdkmm/display.h \
  /usr/include/gdkmm-2.4/gdkmm/device.h \
  /usr/include/gtkmm-2.4/gtkmm/targetlist.h \
  /usr/include/gtkmm-2.4/gtkmm/targetentry.h \
  /usr/include/gtk-2.0/gtk/gtkselection.h \
  /usr/include/gtk-2.0/gtk/gtkenums.h \
  /usr/include/gtk-2.0/gtk/gtkwidget.h \
  /usr/include/gtk-2.0/gtk/gtkaccelgroup.h \
  /usr/include/gtk-2.0/gtk/gtkobject.h \
  /usr/include/gtk-2.0/gtk/gtktypeutils.h \
  /usr/include/gtk-2.0/gtk/gtktypebuiltins.h \
  /usr/include/gtk-2.0/gtk/gtkdebug.h \
  /usr/include/gtk-2.0/gtk/gtkadjustment.h \
  /usr/include/gtk-2.0/gtk/gtkstyle.h \
  /usr/include/gtk-2.0/gtk/gtksettings.h /usr/include/gtk-2.0/gtk/gtkrc.h \
  /usr/include/atk-1.0/atk/atkobject.h \
  /usr/include/atk-1.0/atk/atkstate.h \
  /usr/include/atk-1.0/atk/atkrelationtype.h \
  /usr/include/gtk-2.0/gtk/gtktextiter.h \
  /usr/include/gtk-2.0/gtk/gtktexttag.h \
  /usr/include/gtk-2.0/gtk/gtktextchild.h \
  /usr/include/gtkmm-2.4/gtkmm/rc.h /usr/include/gtkmm-2.4/gtkmm/style.h \
  /usr/include/gtkmm-2.4/gtkmm/object.h \
  /usr/include/gtkmm-2.4/gtkmm/base.h \
  /usr/include/gtkmm-2.4/gtkmm/iconsource.h \
  /usr/include/gtkmm-2.4/gtkmm/iconset.h \
  /usr/include/gtkmm-2.4/gtkmm/clipboard.h \
  /usr/include/gtkmm-2.4/gtkmm/selectiondata.h \
  /usr/include/gtkmm-2.4/gtkmm/box.h /usr/include/gtk-2.0/gtk/gtkbox.h \
  /usr/include/gtk-2.0/gtk/gtkcontainer.h \
  /usr/include/gtkmm-2.4/gtkmm/button.h \
  /usr/include/gtkmm-2.4/gtkmm/buttonbox.h \
  /usr/include/gtkmm-2.4/gtkmm/label.h \
  /usr/include/gtkmm-2.4/gtkmm/misc.h inc/Chess.h \
  /usr/include/libglademm-2.4/libglademm.h \
  /usr/include/libglademm-2.4/libglademm/xml.h \
  /usr/include/gtkmm-2.4/gtkmm/main.h /usr/include/gtk-2.0/gtk/gtkmain.h \
  lib/inc/ChessGuiDefines.h lib/inc/ChessGui.h \
  /usr/include/gtkmm-2.4/gtkmm/statusbar.h \
  /usr/include/gtkmm-2.4/gtkmm/textview.h \
  /usr/include/gtkmm-2.4/gtkmm/textbuffer.h \
  /usr/include/gtkmm-2.4/gtkmm/texttagtable.h \
  /usr/include/gtkmm-2.4/gtkmm/texttag.h \
  /usr/include/gtkmm-2.4/gtkmm/textchildanchor.h \
  /usr/include/gtkmm-2.4/gtkmm/textmark.h \
  /usr/include/gtkmm-2.4/gtkmm/textiter.h \
  /usr/include/gtkmm-2.4/gtkmm/textattributes.h \
  /usr/include/gtkmm-2.4/gtkmm/menu.h \
  /usr/include/gtkmm-2.4/gtkmm/menushell.h \
  /usr/include/gtk-2.0/gdk/gdkkeysyms.h \
  /usr/include/gtkmm-2.4/gtkmm/menu_elems.h \
  /usr/include/gtkmm-2.4/gtkmm/menuitem.h \
  /usr/include/gtkmm-2.4/gtkmm/item.h \
  /usr/include/gtkmm-2.4/gtkmm/accelkey.h \
  /usr/include/gtkmm-2.4/gtkmm/accellabel.h \
  /usr/include/gtkmm-2.4/gtkmm/imagemenuitem.h \
  /usr/include/gtkmm-2.4/gtkmm/radiomenuitem.h \
  /usr/include/gtkmm-2.4/gtkmm/checkmenuitem.h \
  /usr/include/gtkmm-2.4/gtkmm/radiobutton.h \
  /usr/include/gtkmm-2.4/gtkmm/checkbutton.h \
  /usr/include/gtkmm-2.4/gtkmm/togglebutton.h \
  /usr/include/gtkmm-2.4/gtkmm/radiobuttongroup.h \
  /usr/include/gtkmm-2.4/gtkmm/tearoffmenuitem.h \
  /usr/include/gtkmm-2.4/gtkmm/separatormenuitem.h \
  /usr/include/gtkmm-2.4/gtkmm/accelgroup.h \
  /usr/include/gtkmm-2.4/gtkmm/adjustment.h \
  /usr/include/gtkmm-2.4/gtkmm/scrolledwindow.h lib/inc/ChessGuiDefines.h \
  lib/inc/ChessGuiBoard.h /usr/include/gtkmm-2.4/gtkmm/image.h \
  /usr/include/gdkmm-2.4/gdkmm/pixbufanimation.h \
  /usr/include/gdkmm-2.4/gdkmm/pixbufanimationiter.h \
  /usr/include/gtkmm-2.4/gtkmm/eventbox.h \
  /usr/include/gtkmm-2.4/gtkmm/aspectframe.h \
  /usr/include/gtkmm-2.4/gtkmm/frame.h lib/inc/ChessGuiBoardCell.h \
  inc/Location.h inc/ChessInterface.h inc/Game.h inc/Board.h inc/Piece.h \
  inc/ChessDefinitions.h inc/Move.h
obj/ChessInterface.o: src/ChessInterface.cpp inc/ChessInterface.h \
  inc/Game.h inc/Location.h inc/Board.h inc/Piece.h \
  inc/ChessDefinitions.h inc/Move.h inc/Location.h
obj/Game.o: src/Game.cpp inc/Game.h inc/Location.h inc/Board.h \
  inc/Piece.h inc/ChessDefinitions.h inc/Move.h \
  /usr/include/glib-2.0/glib.h /usr/include/glib-2.0/glib/galloca.h \
  /usr/include/glib-2.0/glib/gtypes.h \
  /usr/lib/glib-2.0/include/glibconfig.h \
  /usr/include/glib-2.0/glib/gmacros.h \
  /usr/include/glib-2.0/glib/garray.h \
  /usr/include/glib-2.0/glib/gasyncqueue.h \
  /usr/include/glib-2.0/glib/gthread.h \
  /usr/include/glib-2.0/glib/gerror.h /usr/include/glib-2.0/glib/gquark.h \
  /usr/include/glib-2.0/glib/gutils.h \
  /usr/include/glib-2.0/glib/gatomic.h \
  /usr/include/glib-2.0/glib/gbacktrace.h \
  /usr/include/glib-2.0/glib/gbase64.h \
  /usr/include/glib-2.0/glib/gbookmarkfile.h \
  /usr/include/glib-2.0/glib/gcache.h /usr/include/glib-2.0/glib/glist.h \
  /usr/include/glib-2.0/glib/gmem.h /usr/include/glib-2.0/glib/gslice.h \
  /usr/include/glib-2.0/glib/gchecksum.h \
  /usr/include/glib-2.0/glib/gcompletion.h \
  /usr/include/glib-2.0/glib/gconvert.h \
  /usr/include/glib-2.0/glib/gdataset.h \
  /usr/include/glib-2.0/glib/gdate.h /usr/include/glib-2.0/glib/gdir.h \
  /usr/include/glib-2.0/glib/gfileutils.h \
  /usr/include/glib-2.0/glib/ghash.h /usr/include/glib-2.0/glib/ghook.h \
  /usr/include/glib-2.0/glib/giochannel.h \
  /usr/include/glib-2.0/glib/gmain.h /usr/include/glib-2.0/glib/gslist.h \
  /usr/include/glib-2.0/glib/gstring.h \
  /usr/include/glib-2.0/glib/gunicode.h \
  /usr/include/glib-2.0/glib/gkeyfile.h \
  /usr/include/glib-2.0/glib/gmappedfile.h \
  /usr/include/glib-2.0/glib/gmarkup.h \
  /usr/include/glib-2.0/glib/gmessages.h \
  /usr/include/glib-2.0/glib/gnode.h /usr/include/glib-2.0/glib/goption.h \
  /usr/include/glib-2.0/glib/gpattern.h \
  /usr/include/glib-2.0/glib/gprimes.h \
  /usr/include/glib-2.0/glib/gqsort.h /usr/include/glib-2.0/glib/gqueue.h \
  /usr/include/glib-2.0/glib/grand.h /usr/include/glib-2.0/glib/grel.h \
  /usr/include/glib-2.0/glib/gregex.h \
  /usr/include/glib-2.0/glib/gscanner.h \
  /usr/include/glib-2.0/glib/gsequence.h \
  /usr/include/glib-2.0/glib/gshell.h /usr/include/glib-2.0/glib/gspawn.h \
  /usr/include/glib-2.0/glib/gstrfuncs.h \
  /usr/include/glib-2.0/glib/gtestutils.h \
  /usr/include/glib-2.0/glib/gthreadpool.h \
  /usr/include/glib-2.0/glib/gtimer.h /usr/include/glib-2.0/glib/gtree.h \
  /usr/include/glib-2.0/glib/gurifuncs.h
obj/King.o: src/King.cpp inc/King.h inc/Piece.h inc/Location.h \
  inc/ChessDefinitions.h
obj/Knight.o: src/Knight.cpp inc/Knight.h inc/Piece.h inc/Location.h \
  inc/ChessDefinitions.h inc/Board.h
obj/Location.o: src/Location.cpp inc/Location.h inc/ChessDefinitions.h
obj/main.o: src/main.cpp /usr/include/gtkmm-2.4/gtkmm/main.h \
  /usr/include/glibmm-2.4/glibmm.h \
  /usr/lib/glibmm-2.4/include/glibmmconfig.h \
  /usr/include/glibmm-2.4/glibmm/arrayhandle.h \
  /usr/include/glibmm-2.4/glibmm/containerhandle_shared.h \
  /usr/include/glib-2.0/glib-object.h \
  /usr/include/glib-2.0/gobject/gboxed.h \
  /usr/include/glib-2.0/gobject/gtype.h /usr/include/glib-2.0/glib.h \
  /usr/include/glib-2.0/glib/galloca.h \
  /usr/include/glib-2.0/glib/gtypes.h \
  /usr/lib/glib-2.0/include/glibconfig.h \
  /usr/include/glib-2.0/glib/gmacros.h \
  /usr/include/glib-2.0/glib/garray.h \
  /usr/include/glib-2.0/glib/gasyncqueue.h \
  /usr/include/glib-2.0/glib/gthread.h \
  /usr/include/glib-2.0/glib/gerror.h /usr/include/glib-2.0/glib/gquark.h \
  /usr/include/glib-2.0/glib/gutils.h \
  /usr/include/glib-2.0/glib/gatomic.h \
  /usr/include/glib-2.0/glib/gbacktrace.h \
  /usr/include/glib-2.0/glib/gbase64.h \
  /usr/include/glib-2.0/glib/gbookmarkfile.h \
  /usr/include/glib-2.0/glib/gcache.h /usr/include/glib-2.0/glib/glist.h \
  /usr/include/glib-2.0/glib/gmem.h /usr/include/glib-2.0/glib/gslice.h \
  /usr/include/glib-2.0/glib/gchecksum.h \
  /usr/include/glib-2.0/glib/gcompletion.h \
  /usr/include/glib-2.0/glib/gconvert.h \
  /usr/include/glib-2.0/glib/gdataset.h \
  /usr/include/glib-2.0/glib/gdate.h /usr/include/glib-2.0/glib/gdir.h \
  /usr/include/glib-2.0/glib/gfileutils.h \
  /usr/include/glib-2.0/glib/ghash.h /usr/include/glib-2.0/glib/ghook.h \
  /usr/include/glib-2.0/glib/giochannel.h \
  /usr/include/glib-2.0/glib/gmain.h /usr/include/glib-2.0/glib/gslist.h \
  /usr/include/glib-2.0/glib/gstring.h \
  /usr/include/glib-2.0/glib/gunicode.h \
  /usr/include/glib-2.0/glib/gkeyfile.h \
  /usr/include/glib-2.0/glib/gmappedfile.h \
  /usr/include/glib-2.0/glib/gmarkup.h \
  /usr/include/glib-2.0/glib/gmessages.h \
  /usr/include/glib-2.0/glib/gnode.h /usr/include/glib-2.0/glib/goption.h \
  /usr/include/glib-2.0/glib/gpattern.h \
  /usr/include/glib-2.0/glib/gprimes.h \
  /usr/include/glib-2.0/glib/gqsort.h /usr/include/glib-2.0/glib/gqueue.h \
  /usr/include/glib-2.0/glib/grand.h /usr/include/glib-2.0/glib/grel.h \
  /usr/include/glib-2.0/glib/gregex.h \
  /usr/include/glib-2.0/glib/gscanner.h \
  /usr/include/glib-2.0/glib/gsequence.h \
  /usr/include/glib-2.0/glib/gshell.h /usr/include/glib-2.0/glib/gspawn.h \
  /usr/include/glib-2.0/glib/gstrfuncs.h \
  /usr/include/glib-2.0/glib/gtestutils.h \
  /usr/include/glib-2.0/glib/gthreadpool.h \
  /usr/include/glib-2.0/glib/gtimer.h /usr/include/glib-2.0/glib/gtree.h \
  /usr/include/glib-2.0/glib/gurifuncs.h \
  /usr/include/glib-2.0/gobject/genums.h \
  /usr/include/glib-2.0/gobject/gobject.h \
  /usr/include/glib-2.0/gobject/gvalue.h \
  /usr/include/glib-2.0/gobject/gparam.h \
  /usr/include/glib-2.0/gobject/gclosure.h \
  /usr/include/glib-2.0/gobject/gsignal.h \
  /usr/include/glib-2.0/gobject/gmarshal.h \
  /usr/include/glib-2.0/gobject/gparamspecs.h \
  /usr/include/glib-2.0/gobject/gsourceclosure.h \
  /usr/include/glib-2.0/gobject/gtypemodule.h \
  /usr/include/glib-2.0/gobject/gtypeplugin.h \
  /usr/include/glib-2.0/gobject/gvaluearray.h \
  /usr/include/glib-2.0/gobject/gvaluetypes.h \
  /usr/include/glibmm-2.4/glibmm/refptr.h \
  /usr/include/glibmm-2.4/glibmm/ustring.h \
  /usr/include/glibmm-2.4/glibmm/unicode.h \
  /usr/include/glibmm-2.4/glibmm/wrap.h \
  /usr/include/glibmm-2.4/glibmm/objectbase.h \
  /usr/include/glibmm-2.4/glibmm/signalproxy.h \
  /usr/include/sigc++-2.0/sigc++/sigc++.h \
  /usr/include/sigc++-2.0/sigc++/signal.h \
  /usr/include/sigc++-2.0/sigc++/signal_base.h \
  /usr/lib/sigc++-2.0/include/sigc++config.h \
  /usr/include/sigc++-2.0/sigc++/type_traits.h \
  /usr/include/sigc++-2.0/sigc++/trackable.h \
  /usr/include/sigc++-2.0/sigc++/functors/slot.h \
  /usr/include/sigc++-2.0/sigc++/visit_each.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/adaptor_trait.h \
  /usr/include/sigc++-2.0/sigc++/functors/functor_trait.h \
  /usr/include/sigc++-2.0/sigc++/functors/ptr_fun.h \
  /usr/include/sigc++-2.0/sigc++/functors/mem_fun.h \
  /usr/include/sigc++-2.0/sigc++/limit_reference.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/deduce_result_type.h \
  /usr/include/sigc++-2.0/sigc++/functors/slot_base.h \
  /usr/include/sigc++-2.0/sigc++/connection.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/adaptors.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/bind.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/bound_argument.h \
  /usr/include/sigc++-2.0/sigc++/reference_wrapper.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/bind_return.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/hide.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/retype_return.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/retype.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/compose.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/exception_catch.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/lambda/lambda.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/lambda/base.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/lambda/select.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/lambda/operator.h \
  /usr/include/sigc++-2.0/sigc++/adaptors/lambda/group.h \
  /usr/include/sigc++-2.0/sigc++/functors/functors.h \
  /usr/include/glibmm-2.4/glibmm/signalproxy_connectionnode.h \
  /usr/include/glibmm-2.4/glibmm/propertyproxy.h \
  /usr/include/glibmm-2.4/glibmm/propertyproxy_base.h \
  /usr/include/glibmm-2.4/glibmm/value.h \
  /usr/include/glibmm-2.4/glibmm/value_custom.h \
  /usr/include/glibmm-2.4/glibmm/value_basictypes.h \
  /usr/include/glibmm-2.4/glibmm/quark.h \
  /usr/include/glibmm-2.4/glibmm/debug.h \
  /usr/include/glibmm-2.4/glibmm/checksum.h \
  /usr/include/glibmm-2.4/glibmm/class.h \
  /usr/include/glibmm-2.4/glibmm/convert.h \
  /usr/include/glibmm-2.4/glibmm/error.h \
  /usr/include/glibmm-2.4/glibmm/exception.h \
  /usr/include/glibmm-2.4/glibmm/date.h \
  /usr/include/glibmm-2.4/glibmm/dispatcher.h \
  /usr/include/glibmm-2.4/glibmm/main.h \
  /usr/include/glibmm-2.4/glibmm/timeval.h \
  /usr/include/glibmm-2.4/glibmm/priorities.h \
  /usr/include/glibmm-2.4/glibmm/exceptionhandler.h \
  /usr/include/glibmm-2.4/glibmm/fileutils.h \
  /usr/include/glibmm-2.4/glibmm/helperlist.h \
  /usr/include/glibmm-2.4/glibmm/containers.h \
  /usr/include/glibmm-2.4/glibmm/sarray.h \
  /usr/include/glibmm-2.4/glibmm/interface.h \
  /usr/include/glibmm-2.4/glibmm/object.h \
  /usr/include/glibmm-2.4/glibmm/utility.h \
  /usr/include/glibmm-2.4/glibmm/iochannel.h \
  /usr/include/glibmm-2.4/glibmm/init.h \
  /usr/include/glibmm-2.4/glibmm/keyfile.h \
  /usr/include/glibmm-2.4/glibmm/streamiochannel.h \
  /usr/include/glibmm-2.4/glibmm/listhandle.h \
  /usr/include/glibmm-2.4/glibmm/markup.h \
  /usr/include/glibmm-2.4/glibmm/miscutils.h \
  /usr/include/glibmm-2.4/glibmm/module.h \
  /usr/include/glibmm-2.4/glibmm/optioncontext.h \
  /usr/include/glibmm-2.4/glibmm/optionentry.h \
  /usr/include/glibmm-2.4/glibmm/optiongroup.h \
  /usr/include/glibmm-2.4/glibmm/pattern.h \
  /usr/include/glibmm-2.4/glibmm/property.h \
  /usr/include/glibmm-2.4/glibmm/random.h \
  /usr/include/glibmm-2.4/glibmm/regex.h \
  /usr/include/glibmm-2.4/glibmm/shell.h \
  /usr/include/glibmm-2.4/glibmm/slisthandle.h \
  /usr/include/glibmm-2.4/glibmm/spawn.h \
  /usr/include/glibmm-2.4/glibmm/stringutils.h \
  /usr/include/glibmm-2.4/glibmm/thread.h \
  /usr/include/glibmm-2.4/glibmm/threadpool.h \
  /usr/include/glibmm-2.4/glibmm/timer.h \
  /usr/include/glibmm-2.4/glibmm/uriutils.h \
  /usr/include/gtk-2.0/gtk/gtkmain.h /usr/include/gtk-2.0/gdk/gdk.h \
  /usr/include/gtk-2.0/gdk/gdkcairo.h /usr/include/gtk-2.0/gdk/gdkcolor.h \
  /usr/include/cairo/cairo.h /usr/include/cairo/cairo-features.h \
  /usr/include/cairo/cairo-deprecated.h \
  /usr/include/gtk-2.0/gdk/gdktypes.h \
  /usr/include/pango-1.0/pango/pango.h \
  /usr/include/pango-1.0/pango/pango-attributes.h \
  /usr/include/pango-1.0/pango/pango-font.h \
  /usr/include/pango-1.0/pango/pango-coverage.h \
  /usr/include/pango-1.0/pango/pango-types.h \
  /usr/include/pango-1.0/pango/pango-gravity.h \
  /usr/include/pango-1.0/pango/pango-matrix.h \
  /usr/include/pango-1.0/pango/pango-script.h \
  /usr/include/pango-1.0/pango/pango-language.h \
  /usr/include/pango-1.0/pango/pango-break.h \
  /usr/include/pango-1.0/pango/pango-item.h \
  /usr/include/pango-1.0/pango/pango-context.h \
  /usr/include/pango-1.0/pango/pango-fontmap.h \
  /usr/include/pango-1.0/pango/pango-fontset.h \
  /usr/include/pango-1.0/pango/pango-engine.h \
  /usr/include/pango-1.0/pango/pango-glyph.h \
  /usr/include/pango-1.0/pango/pango-enum-types.h \
  /usr/include/pango-1.0/pango/pango-features.h \
  /usr/include/pango-1.0/pango/pango-glyph-item.h \
  /usr/include/pango-1.0/pango/pango-layout.h \
  /usr/include/pango-1.0/pango/pango-tabs.h \
  /usr/include/pango-1.0/pango/pango-renderer.h \
  /usr/include/pango-1.0/pango/pango-utils.h \
  /usr/lib/gtk-2.0/include/gdkconfig.h \
  /usr/include/gtk-2.0/gdk/gdkpixbuf.h /usr/include/gtk-2.0/gdk/gdkrgb.h \
  /usr/include/gtk-2.0/gdk-pixbuf/gdk-pixbuf.h \
  /usr/include/gtk-2.0/gdk-pixbuf/gdk-pixbuf-features.h \
  /usr/include/gtk-2.0/gdk-pixbuf/gdk-pixbuf-core.h \
  /usr/include/gtk-2.0/gdk-pixbuf/gdk-pixbuf-transform.h \
  /usr/include/gtk-2.0/gdk-pixbuf/gdk-pixbuf-animation.h \
  /usr/include/gtk-2.0/gdk-pixbuf/gdk-pixbuf-simple-anim.h \
  /usr/include/gtk-2.0/gdk-pixbuf/gdk-pixbuf-io.h \
  /usr/include/glib-2.0/gmodule.h \
  /usr/include/gtk-2.0/gdk-pixbuf/gdk-pixbuf-loader.h \
  /usr/include/gtk-2.0/gdk-pixbuf/gdk-pixbuf-enum-types.h \
  /usr/include/pango-1.0/pango/pangocairo.h \
  /usr/include/gtk-2.0/gdk/gdkcursor.h \
  /usr/include/gtk-2.0/gdk/gdkdisplay.h \
  /usr/include/gtk-2.0/gdk/gdkevents.h /usr/include/gtk-2.0/gdk/gdkdnd.h \
  /usr/include/gtk-2.0/gdk/gdkinput.h \
  /usr/include/gtk-2.0/gdk/gdkdrawable.h /usr/include/gtk-2.0/gdk/gdkgc.h \
  /usr/include/gtk-2.0/gdk/gdkenumtypes.h \
  /usr/include/gtk-2.0/gdk/gdkfont.h /usr/include/gtk-2.0/gdk/gdkimage.h \
  /usr/include/gtk-2.0/gdk/gdkkeys.h \
  /usr/include/gtk-2.0/gdk/gdkdisplaymanager.h \
  /usr/include/gtk-2.0/gdk/gdkpango.h \
  /usr/include/gtk-2.0/gdk/gdkpixmap.h \
  /usr/include/gtk-2.0/gdk/gdkproperty.h \
  /usr/include/gtk-2.0/gdk/gdkregion.h \
  /usr/include/gtk-2.0/gdk/gdkscreen.h \
  /usr/include/gtk-2.0/gdk/gdkselection.h \
  /usr/include/gtk-2.0/gdk/gdkspawn.h \
  /usr/include/gtk-2.0/gdk/gdkvisual.h \
  /usr/include/gtk-2.0/gdk/gdkwindow.h \
  /usr/include/gtk-2.0/gtk/gtkwidget.h \
  /usr/include/gtk-2.0/gtk/gtkaccelgroup.h \
  /usr/include/gtk-2.0/gtk/gtkenums.h \
  /usr/include/gtk-2.0/gtk/gtkobject.h \
  /usr/include/gtk-2.0/gtk/gtktypeutils.h \
  /usr/include/gtk-2.0/gtk/gtktypebuiltins.h \
  /usr/include/gtk-2.0/gtk/gtkdebug.h \
  /usr/include/gtk-2.0/gtk/gtkadjustment.h \
  /usr/include/gtk-2.0/gtk/gtkstyle.h \
  /usr/include/gtk-2.0/gtk/gtksettings.h /usr/include/gtk-2.0/gtk/gtkrc.h \
  /usr/include/atk-1.0/atk/atkobject.h \
  /usr/include/atk-1.0/atk/atkstate.h \
  /usr/include/atk-1.0/atk/atkrelationtype.h \
  /usr/include/gdkmm-2.4/gdkmm/types.h \
  /usr/lib/gdkmm-2.4/include/gdkmmconfig.h lib/inc/ChessGuiImages.h \
  /usr/include/gdkmm-2.4/gdkmm/pixbuf.h \
  /usr/include/gdkmm-2.4/gdkmm/drawable.h \
  /usr/include/pangomm-1.4/pangomm/font.h \
  /usr/include/pangomm-1.4/pangomm/rectangle.h \
  /usr/include/pangomm-1.4/pangomm/language.h \
  /usr/include/pangomm-1.4/pangomm/glyph.h \
  /usr/include/pangomm-1.4/pangomm/fontdescription.h \
  /usr/include/pangomm-1.4/pangomm/fontmetrics.h \
  /usr/include/pangomm-1.4/pangomm/coverage.h \
  /usr/include/pangomm-1.4/pangomm/layout.h \
  /usr/include/pangomm-1.4/pangomm/context.h \
  /usr/include/pangomm-1.4/pangomm/fontset.h \
  /usr/include/pangomm-1.4/pangomm/fontmap.h \
  /usr/include/pangomm-1.4/pangomm/fontfamily.h \
  /usr/include/pangomm-1.4/pangomm/fontface.h \
  /usr/include/pangomm-1.4/pangomm/item.h \
  /usr/include/pangomm-1.4/pangomm/attributes.h \
  /usr/include/pangomm-1.4/pangomm/color.h \
  /usr/include/pangomm-1.4/pangomm/attrlist.h \
  /usr/include/pangomm-1.4/pangomm/attriter.h \
  /usr/include/pangomm-1.4/pangomm/types.h \
  /usr/include/cairomm-1.0/cairomm/context.h \
  /usr/include/cairomm-1.0/cairomm/surface.h \
  /usr/include/cairomm-1.0/cairomm/enums.h \
  /usr/include/cairomm-1.0/cairomm/exception.h \
  /usr/include/cairomm-1.0/cairomm/fontoptions.h \
  /usr/include/cairomm-1.0/cairomm/refptr.h \
  /usr/include/cairo/cairo-pdf.h /usr/include/cairo/cairo-ps.h \
  /usr/include/cairo/cairo-svg.h \
  /usr/include/cairomm-1.0/cairomm/fontface.h \
  /usr/include/cairomm-1.0/cairomm/pattern.h \
  /usr/include/cairomm-1.0/cairomm/path.h \
  /usr/include/pangomm-1.4/pangomm/tabarray.h \
  /usr/include/pangomm-1.4/pangomm/layoutline.h \
  /usr/include/pangomm-1.4/pangomm/layoutiter.h \
  /usr/include/pangomm-1.4/pangomm/layoutrun.h \
  /usr/include/pangomm-1.4/pangomm/glyphstring.h \
  /usr/include/gdkmm-2.4/gdkmm/gc.h \
  /usr/include/gdkmm-2.4/gdkmm/rectangle.h \
  /usr/include/gdkmm-2.4/gdkmm/region.h \
  /usr/include/gdkmm-2.4/gdkmm/screen.h \
  /usr/include/gdkmm-2.4/gdkmm/image.h \
  /usr/include/gdkmm-2.4/gdkmm/visual.h \
  /usr/include/gdkmm-2.4/gdkmm/colormap.h \
  /usr/include/gdkmm-2.4/gdkmm/color.h \
  /usr/include/gdkmm-2.4/gdkmm/rgbcmap.h \
  /usr/include/gdkmm-2.4/gdkmm/pixmap.h \
  /usr/include/gdkmm-2.4/gdkmm/bitmap.h \
  /usr/include/gdkmm-2.4/gdkmm/pixbufformat.h \
  /usr/include/gtkmm-2.4/gtkmm/image.h \
  /usr/include/gtkmm-2.4/gtkmm/misc.h \
  /usr/include/gtkmm-2.4/gtkmm/widget.h \
  /usr/lib/gtkmm-2.4/include/gtkmmconfig.h \
  /usr/include/atkmm-1.6/atkmm/object.h \
  /usr/include/atkmm-1.6/atkmm/component.h \
  /usr/include/atkmm-1.6/atkmm/relation.h \
  /usr/include/atkmm-1.6/atkmm/implementor.h \
  /usr/include/gdkmm-2.4/gdkmm/event.h \
  /usr/include/gdkmm-2.4/gdkmm/window.h \
  /usr/include/gdkmm-2.4/gdkmm/dragcontext.h \
  /usr/include/gtkmm-2.4/gtkmm/stockid.h \
  /usr/include/gtkmm-2.4/gtkmm/enums.h \
  /usr/include/gdkmm-2.4/gdkmm/display.h \
  /usr/include/gdkmm-2.4/gdkmm/device.h \
  /usr/include/gtkmm-2.4/gtkmm/targetlist.h \
  /usr/include/gtkmm-2.4/gtkmm/targetentry.h \
  /usr/include/gtk-2.0/gtk/gtkselection.h \
  /usr/include/gtk-2.0/gtk/gtktextiter.h \
  /usr/include/gtk-2.0/gtk/gtktexttag.h \
  /usr/include/gtk-2.0/gtk/gtktextchild.h \
  /usr/include/gtkmm-2.4/gtkmm/rc.h /usr/include/gtkmm-2.4/gtkmm/style.h \
  /usr/include/gtkmm-2.4/gtkmm/object.h \
  /usr/include/gtkmm-2.4/gtkmm/base.h \
  /usr/include/gtkmm-2.4/gtkmm/iconsource.h \
  /usr/include/gtkmm-2.4/gtkmm/iconset.h \
  /usr/include/gtkmm-2.4/gtkmm/clipboard.h \
  /usr/include/gtkmm-2.4/gtkmm/selectiondata.h \
  /usr/include/gdkmm-2.4/gdkmm/pixbufanimation.h \
  /usr/include/gdkmm-2.4/gdkmm/pixbufanimationiter.h \
  lib/inc/ChessGuiDefines.h inc/Chess.h \
  /usr/include/libglademm-2.4/libglademm.h \
  /usr/include/libglademm-2.4/libglademm/xml.h \
  /usr/include/gtkmm-2.4/gtkmm/container.h lib/inc/ChessGuiDefines.h \
  lib/inc/ChessGui.h /usr/include/gtkmm-2.4/gtkmm/window.h \
  /usr/include/gtkmm-2.4/gtkmm/bin.h \
  /usr/include/gtkmm-2.4/gtkmm/statusbar.h \
  /usr/include/gtkmm-2.4/gtkmm/box.h /usr/include/gtk-2.0/gtk/gtkbox.h \
  /usr/include/gtk-2.0/gtk/gtkcontainer.h \
  /usr/include/gtkmm-2.4/gtkmm/label.h \
  /usr/include/gtkmm-2.4/gtkmm/textview.h \
  /usr/include/gtkmm-2.4/gtkmm/textbuffer.h \
  /usr/include/gtkmm-2.4/gtkmm/texttagtable.h \
  /usr/include/gtkmm-2.4/gtkmm/texttag.h \
  /usr/include/gtkmm-2.4/gtkmm/textchildanchor.h \
  /usr/include/gtkmm-2.4/gtkmm/textmark.h \
  /usr/include/gtkmm-2.4/gtkmm/textiter.h \
  /usr/include/gtkmm-2.4/gtkmm/textattributes.h \
  /usr/include/gtkmm-2.4/gtkmm/menu.h \
  /usr/include/gtkmm-2.4/gtkmm/menushell.h \
  /usr/include/gtk-2.0/gdk/gdkkeysyms.h \
  /usr/include/gtkmm-2.4/gtkmm/menu_elems.h \
  /usr/include/gtkmm-2.4/gtkmm/menuitem.h \
  /usr/include/gtkmm-2.4/gtkmm/item.h \
  /usr/include/gtkmm-2.4/gtkmm/accelkey.h \
  /usr/include/gtkmm-2.4/gtkmm/accellabel.h \
  /usr/include/gtkmm-2.4/gtkmm/imagemenuitem.h \
  /usr/include/gtkmm-2.4/gtkmm/radiomenuitem.h \
  /usr/include/gtkmm-2.4/gtkmm/checkmenuitem.h \
  /usr/include/gtkmm-2.4/gtkmm/radiobutton.h \
  /usr/include/gtkmm-2.4/gtkmm/checkbutton.h \
  /usr/include/gtkmm-2.4/gtkmm/togglebutton.h \
  /usr/include/gtkmm-2.4/gtkmm/button.h \
  /usr/include/gtkmm-2.4/gtkmm/radiobuttongroup.h \
  /usr/include/gtkmm-2.4/gtkmm/tearoffmenuitem.h \
  /usr/include/gtkmm-2.4/gtkmm/separatormenuitem.h \
  /usr/include/gtkmm-2.4/gtkmm/accelgroup.h \
  /usr/include/gtkmm-2.4/gtkmm/adjustment.h \
  /usr/include/gtkmm-2.4/gtkmm/scrolledwindow.h lib/inc/ChessGuiBoard.h \
  /usr/include/gtkmm-2.4/gtkmm/eventbox.h \
  /usr/include/gtkmm-2.4/gtkmm/aspectframe.h \
  /usr/include/gtkmm-2.4/gtkmm/frame.h lib/inc/ChessGuiBoardCell.h \
  inc/Location.h
obj/Move.o: src/Move.cpp inc/Move.h inc/Piece.h inc/Location.h \
  inc/ChessDefinitions.h
obj/Pawn.o: src/Pawn.cpp inc/Pawn.h inc/Piece.h inc/Location.h \
  inc/ChessDefinitions.h inc/Board.h /usr/include/glib-2.0/glib.h \
  /usr/include/glib-2.0/glib/galloca.h \
  /usr/include/glib-2.0/glib/gtypes.h \
  /usr/lib/glib-2.0/include/glibconfig.h \
  /usr/include/glib-2.0/glib/gmacros.h \
  /usr/include/glib-2.0/glib/garray.h \
  /usr/include/glib-2.0/glib/gasyncqueue.h \
  /usr/include/glib-2.0/glib/gthread.h \
  /usr/include/glib-2.0/glib/gerror.h /usr/include/glib-2.0/glib/gquark.h \
  /usr/include/glib-2.0/glib/gutils.h \
  /usr/include/glib-2.0/glib/gatomic.h \
  /usr/include/glib-2.0/glib/gbacktrace.h \
  /usr/include/glib-2.0/glib/gbase64.h \
  /usr/include/glib-2.0/glib/gbookmarkfile.h \
  /usr/include/glib-2.0/glib/gcache.h /usr/include/glib-2.0/glib/glist.h \
  /usr/include/glib-2.0/glib/gmem.h /usr/include/glib-2.0/glib/gslice.h \
  /usr/include/glib-2.0/glib/gchecksum.h \
  /usr/include/glib-2.0/glib/gcompletion.h \
  /usr/include/glib-2.0/glib/gconvert.h \
  /usr/include/glib-2.0/glib/gdataset.h \
  /usr/include/glib-2.0/glib/gdate.h /usr/include/glib-2.0/glib/gdir.h \
  /usr/include/glib-2.0/glib/gfileutils.h \
  /usr/include/glib-2.0/glib/ghash.h /usr/include/glib-2.0/glib/ghook.h \
  /usr/include/glib-2.0/glib/giochannel.h \
  /usr/include/glib-2.0/glib/gmain.h /usr/include/glib-2.0/glib/gslist.h \
  /usr/include/glib-2.0/glib/gstring.h \
  /usr/include/glib-2.0/glib/gunicode.h \
  /usr/include/glib-2.0/glib/gkeyfile.h \
  /usr/include/glib-2.0/glib/gmappedfile.h \
  /usr/include/glib-2.0/glib/gmarkup.h \
  /usr/include/glib-2.0/glib/gmessages.h \
  /usr/include/glib-2.0/glib/gnode.h /usr/include/glib-2.0/glib/goption.h \
  /usr/include/glib-2.0/glib/gpattern.h \
  /usr/include/glib-2.0/glib/gprimes.h \
  /usr/include/glib-2.0/glib/gqsort.h /usr/include/glib-2.0/glib/gqueue.h \
  /usr/include/glib-2.0/glib/grand.h /usr/include/glib-2.0/glib/grel.h \
  /usr/include/glib-2.0/glib/gregex.h \
  /usr/include/glib-2.0/glib/gscanner.h \
  /usr/include/glib-2.0/glib/gsequence.h \
  /usr/include/glib-2.0/glib/gshell.h /usr/include/glib-2.0/glib/gspawn.h \
  /usr/include/glib-2.0/glib/gstrfuncs.h \
  /usr/include/glib-2.0/glib/gtestutils.h \
  /usr/include/glib-2.0/glib/gthreadpool.h \
  /usr/include/glib-2.0/glib/gtimer.h /usr/include/glib-2.0/glib/gtree.h \
  /usr/include/glib-2.0/glib/gurifuncs.h
obj/Piece.o: src/Piece.cpp inc/Piece.h inc/Location.h \
  inc/ChessDefinitions.h
obj/Queen.o: src/Queen.cpp inc/Queen.h inc/Rook.h inc/Piece.h \
  inc/Location.h inc/ChessDefinitions.h inc/Bishop.h
obj/Rook.o: src/Rook.cpp inc/Rook.h inc/Piece.h inc/Location.h \
  inc/ChessDefinitions.h inc/ChessDefinitions.h \
  /usr/include/glib-2.0/glib.h /usr/include/glib-2.0/glib/galloca.h \
  /usr/include/glib-2.0/glib/gtypes.h \
  /usr/lib/glib-2.0/include/glibconfig.h \
  /usr/include/glib-2.0/glib/gmacros.h \
  /usr/include/glib-2.0/glib/garray.h \
  /usr/include/glib-2.0/glib/gasyncqueue.h \
  /usr/include/glib-2.0/glib/gthread.h \
  /usr/include/glib-2.0/glib/gerror.h /usr/include/glib-2.0/glib/gquark.h \
  /usr/include/glib-2.0/glib/gutils.h \
  /usr/include/glib-2.0/glib/gatomic.h \
  /usr/include/glib-2.0/glib/gbacktrace.h \
  /usr/include/glib-2.0/glib/gbase64.h \
  /usr/include/glib-2.0/glib/gbookmarkfile.h \
  /usr/include/glib-2.0/glib/gcache.h /usr/include/glib-2.0/glib/glist.h \
  /usr/include/glib-2.0/glib/gmem.h /usr/include/glib-2.0/glib/gslice.h \
  /usr/include/glib-2.0/glib/gchecksum.h \
  /usr/include/glib-2.0/glib/gcompletion.h \
  /usr/include/glib-2.0/glib/gconvert.h \
  /usr/include/glib-2.0/glib/gdataset.h \
  /usr/include/glib-2.0/glib/gdate.h /usr/include/glib-2.0/glib/gdir.h \
  /usr/include/glib-2.0/glib/gfileutils.h \
  /usr/include/glib-2.0/glib/ghash.h /usr/include/glib-2.0/glib/ghook.h \
  /usr/include/glib-2.0/glib/giochannel.h \
  /usr/include/glib-2.0/glib/gmain.h /usr/include/glib-2.0/glib/gslist.h \
  /usr/include/glib-2.0/glib/gstring.h \
  /usr/include/glib-2.0/glib/gunicode.h \
  /usr/include/glib-2.0/glib/gkeyfile.h \
  /usr/include/glib-2.0/glib/gmappedfile.h \
  /usr/include/glib-2.0/glib/gmarkup.h \
  /usr/include/glib-2.0/glib/gmessages.h \
  /usr/include/glib-2.0/glib/gnode.h /usr/include/glib-2.0/glib/goption.h \
  /usr/include/glib-2.0/glib/gpattern.h \
  /usr/include/glib-2.0/glib/gprimes.h \
  /usr/include/glib-2.0/glib/gqsort.h /usr/include/glib-2.0/glib/gqueue.h \
  /usr/include/glib-2.0/glib/grand.h /usr/include/glib-2.0/glib/grel.h \
  /usr/include/glib-2.0/glib/gregex.h \
  /usr/include/glib-2.0/glib/gscanner.h \
  /usr/include/glib-2.0/glib/gsequence.h \
  /usr/include/glib-2.0/glib/gshell.h /usr/include/glib-2.0/glib/gspawn.h \
  /usr/include/glib-2.0/glib/gstrfuncs.h \
  /usr/include/glib-2.0/glib/gtestutils.h \
  /usr/include/glib-2.0/glib/gthreadpool.h \
  /usr/include/glib-2.0/glib/gtimer.h /usr/include/glib-2.0/glib/gtree.h \
  /usr/include/glib-2.0/glib/gurifuncs.h inc/Board.h
