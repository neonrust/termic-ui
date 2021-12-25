#pragma once


namespace termic
{

enum LayoutConstraint
{
	None,
	Vertical,
	Horizontal,
};

struct Layout
{
	void set_constraint(LayoutConstraint c);
};

} // NS: termic
