#pragma once

#include "../size.h"

#include "layout.h"

#include <string>
#include <vector>
#include <memory>
#include <type_traits>


namespace termic
{

struct Layout;

struct Widget
{
	void set_name(std::string_view s);

	void show(bool show);
	bool is_shown() const;

	Layout *set_layout(LayoutConstraint d);
	Layout &layout() const;

	template<typename T> requires std::is_base_of_v<Widget, T>
	T *add( /* args */ );

	//Layout *add_sequence(LayoutConstraint d); // shorthand for: w = add<Widget>(); w->set_layout(d); return w->layout();

	void set_minimum_size(Size size);
	void set_maximum_size(Size size);

private:
	void set_active_rect(Rectangle rect);

private:
	bool _shown { false };
	Layout *_layout;
	Rectangle _active_rect;

	std::vector<std::shared_ptr<Widget>> _children;

	Size _minimum_size;
	Size _maximum_size;

	std::string _name;
};

} // NS: termic
