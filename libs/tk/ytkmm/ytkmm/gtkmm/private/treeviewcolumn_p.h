// -*- c++ -*-
// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!
#ifndef _GTKMM_TREEVIEWCOLUMN_P_H
#define _GTKMM_TREEVIEWCOLUMN_P_H


#include <gtkmm/private/object_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class TreeViewColumn_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef TreeViewColumn CppObjectType;
  typedef GtkTreeViewColumn BaseObjectType;
  typedef GtkTreeViewColumnClass BaseClassType;
  typedef Gtk::Object_Class CppClassParent;
  typedef GtkObjectClass BaseClassParent;

  friend class TreeViewColumn;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void clicked_callback(GtkTreeViewColumn* self);

  //Callbacks (virtual functions):
};


} // namespace Gtk


#endif /* _GTKMM_TREEVIEWCOLUMN_P_H */

