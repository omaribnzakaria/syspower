#ifndef MAIN_HPP
#define MAIN_HPP

inline Glib::RefPtr<Gtk::Application> app;
int get_dirty_pages();
void sync_filesystems();
void kill_child_processes();

#endif
