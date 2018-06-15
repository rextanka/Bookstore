// BookSku.h
#pragma once

#include "BookSku.g.h"

namespace winrt::Bookstore::implementation
{
	struct BookSku : BookSkuT<BookSku>
	{
		BookSku() = delete;
		BookSku(hstring const& title);

		hstring Title();
		void Title(hstring const& value);
		event_token PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& value);
		void PropertyChanged(event_token const& token);

	private:
		hstring title;
		event<Windows::UI::Xaml::Data::PropertyChangedEventHandler> propertyChanged;
	};
}