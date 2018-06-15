// BookstoreViewModel.h
#pragma once

#include "BookstoreViewModel.g.h"
#include "BookSku.h"

namespace winrt::Bookstore::implementation
{
	struct BookstoreViewModel : BookstoreViewModelT<BookstoreViewModel>
	{
		BookstoreViewModel();
		Bookstore::BookSku BookSku();
		Windows::Foundation::Collections::IVector<Windows::Foundation::IInspectable> BookSkus();

	private:
		Bookstore::BookSku m_bookSku{ nullptr };
		Windows::Foundation::Collections::IVector<Windows::Foundation::IInspectable> m_bookSkus;

	};
}