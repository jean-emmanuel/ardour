// -*- c++ -*-
// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!
#ifndef _GTKMM_LINKBUTTON_H
#define _GTKMM_LINKBUTTON_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* $Id: linkbutton.hg,v 1.2 2006/03/22 16:53:22 murrayc Exp $ */

/* linkbutton.h
 * 
 * Copyright (C) 2006 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <gtkmm/button.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkLinkButton GtkLinkButton;
typedef struct _GtkLinkButtonClass GtkLinkButtonClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class LinkButton_Class; } // namespace Gtk
namespace Gtk
{

/** Create buttons bound to a URL.
 *
 * A Gtk::LinkButton is a Gtk::Button with a hyperlink, similar to the one
 * used by web browsers, which triggers an action when clicked. It is useful
 * to show quick links to resources.
 *
 * The URI bound to a Gtk::LinkButton can be set specifically using set_uri(), 
 * and retrieved using get_uri().
 * Gtk::LinkButton offers a global hook, which is called when the used clicks on it: see set_uri_hook(). 
 *
 * The LinkButton widget looks like this:
 * @image html linkbutton1.png
 *
 * @newin{2,10}
 * @ingroup Widgets
 */

class LinkButton : public Button
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef LinkButton CppObjectType;
  typedef LinkButton_Class CppClassType;
  typedef GtkLinkButton BaseObjectType;
  typedef GtkLinkButtonClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~LinkButton();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class LinkButton_Class;
  static CppClassType linkbutton_class_;

  // noncopyable
  LinkButton(const LinkButton&);
  LinkButton& operator=(const LinkButton&);

protected:
  explicit LinkButton(const Glib::ConstructParams& construct_params);
  explicit LinkButton(GtkLinkButton* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkLinkButton*       gobj()       { return reinterpret_cast<GtkLinkButton*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkLinkButton* gobj() const { return reinterpret_cast<GtkLinkButton*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

public:
  LinkButton();
  explicit LinkButton(const Glib::ustring& uri);
  
    explicit LinkButton(const Glib::ustring& uri, const Glib::ustring& label);


  /** Retrieves the URI set using set_uri().
   * 
   * @newin{2,10}
   * 
   * @return A valid URI.  The returned string is owned by the link button
   * and should not be modified or freed.
   */
  Glib::ustring get_uri() const;
  
  /** Sets @a uri as the URI where the Gtk::LinkButton points. As a side-effect
   * this unsets the 'visited' state of the button.
   * 
   * @newin{2,10}
   * 
   * @param uri A valid URI.
   */
  void set_uri(const Glib::ustring& uri);

  
  /** Retrieves the 'visited' state of the URI where the Gtk::LinkButton
   * points. The button becomes visited when it is clicked. If the URI
   * is changed on the button, the 'visited' state is unset again.
   * 
   * The state may also be changed using set_visited().
   * 
   * @newin{2,14}
   * 
   * @return <tt>true</tt> if the link has been visited, <tt>false</tt> otherwise.
   */
  bool get_visited() const;
  
  /** Sets the 'visited' state of the URI where the Gtk::LinkButton
   * points.  See get_visited() for more details.
   * 
   * @newin{2,14}
   * 
   * @param visited The new 'visited' state.
   */
  void set_visited(bool visited =  true);

#ifndef GTKMM_DISABLE_DEPRECATED

  /** For instance,
   * void on_linkbutton_uri(Gtk::LinkButton *button, const Glib::ustring& uri);
   *
   * @see set_uri_hook().
   *
   * @deprecated Use Button::signal_clicked() instead.
   */
  typedef sigc::slot<void, Gtk::LinkButton*, const Glib::ustring&> SlotUri;

  /** Sets slot as the function that should be invoked every time a user clicks a LinkButton. 
   * This function is called before every signal handler registered for the "clicked" signal.
   *
   * @param slot A function called each time a LinkButton is clicked.
   * @newin{2,12}
   *
   * @deprecated Use Button::signal_clicked()  instead.
   */
  static void set_uri_hook(const SlotUri& slot);
  

  /** Unsets any previously set slot as the function that should be invoked every time a user clicks a LinkButton. 
   * @see set_uri_hook().
   * @newin{2,
   *
   * @deprecated Use  Button::signal_clicked() instead.
   */
  static void unset_uri_hook();
#endif // GTKMM_DISABLE_DEPRECATED


  /** The URI bound to this button.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_uri() ;

/** The URI bound to this button.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_uri() const;

  /** Whether this link has been visited.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_visited() ;

/** Whether this link has been visited.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_visited() const;
                                          

};


} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::LinkButton
   */
  Gtk::LinkButton* wrap(GtkLinkButton* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_LINKBUTTON_H */

