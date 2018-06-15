// BookstoreViewModel.cpp
#include "pch.h"
#include "BookstoreViewModel.h"

namespace winrt::Bookstore::implementation
{
	BookstoreViewModel::BookstoreViewModel()
	{
		m_bookSku = make<Bookstore::implementation::BookSku>(L"Atticus");
		m_bookSkus = winrt::make<single_threaded_observable_vector<Windows::Foundation::IInspectable>>();
		m_bookSkus.Append(m_bookSku);
	}

	Windows::Foundation::Collections::IVector<Windows::Foundation::IInspectable> BookstoreViewModel::BookSkus()
	{
		return m_bookSkus;
	}

	Bookstore::BookSku BookstoreViewModel::BookSku()
	{
		return m_bookSku;
	}


}