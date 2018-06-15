// BookSku.cpp
#include "pch.h"
#include "BookSku.h"

namespace winrt::Bookstore::implementation
{
	BookSku::BookSku(hstring const& title)
	{
		Title(title);
	}

	hstring BookSku::Title()
	{
		return title;
	}

	void BookSku::Title(hstring const& value)
	{
		if (title != value)
		{
			title = value;
			propertyChanged(*this, Windows::UI::Xaml::Data::PropertyChangedEventArgs{ L"Title" });
		}
	}

	event_token BookSku::PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler)
	{
		return propertyChanged.add(handler);
	}

	void BookSku::PropertyChanged(event_token const& token)
	{
		propertyChanged.remove(token);
	}
}