#pragma once

#include <memory>
#include <vector>


namespace termic
{

struct Element;
struct Layout;
struct Widget;

using ElementRef = std::shared_ptr<Element>;
using LayoutRef = std::shared_ptr<Layout>;
using WidgetRef = std::shared_ptr<Widget>;


struct Element
{
	// some common stuff (?)

	void add(ElementRef e);
	void add(LayoutRef l);
	void add(WidgetRef w);

private:
	std::vector<ElementRef> _children;
};


} // NS: termic
