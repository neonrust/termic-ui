#pragma once

#include "widget.h"
#include <termic/app.h>

#include <vector>
#include <memory>


namespace termic
{

struct Widget;
struct Layout;

struct Element
{
	// some common stuff (?)
};
//struct Widget : public Element {  };
//struct Layout : public Element {  };
struct vbox : public std::vector<Element> {  };
struct hbox : public std::vector<Element> {  };

struct UIApp : public App
{
	template<typename T, typename ...Args>
	T *create(Args &&...args);

	void set_content(Element e);
};


/*

spit-balling API ideas:

-------------------------------

auto L = layout<
  vbox<
    hbox<exit_button, menu_bar>,
    main_content,
    status_bar
  >
>( ..? )

auto menu = std:;get<menu_bar>(std::get<hbox>(std::get<vbox>(L)));

though cool, probably not feasible (and of course very static).

-------------------------------

auto *vbox = ui->add_vbox();  eq. to ui->add<Widget>()->set_layout(ui::vbox);
vbox->add<Button>(...)

-------------------------------
struct ExitButton {};
struct Title {};
struct Content {};
struct StatusBar {};

auto *eb = ui->create<ExitButton>( ... )
auto *t = ui->create<Title>( ... )
auto *c = ui->create<Content>( ... )
auto *sb = ui->create<StatusBar>( ... )

ui->set_layout(
  vbox{
    hbox{ eb, t },
    c,
    sb,
  }
);
*/


//*/

} // NS: termic
