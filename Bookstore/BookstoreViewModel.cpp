// BookstoreViewModel.cpp
#include "pch.h"
#include "BookstoreViewModel.h"

namespace winrt::Bookstore::implementation
{
	BookstoreViewModel::BookstoreViewModel()
	{
		m_bookSku = make<Bookstore::implementation::BookSku>(L"Atticus");
	}

	Bookstore::BookSku BookstoreViewModel::BookSku()
	{
		return m_bookSku;
	}
}