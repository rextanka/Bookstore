#include "pch.h"
#include "MainPage.h"
#include "BookstoreViewModel.h"

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::Bookstore::implementation
{
    MainPage::MainPage()
    {
		m_mainViewModel = make<Bookstore::implementation::BookstoreViewModel>();
        InitializeComponent();
    }

    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

	Bookstore::BookstoreViewModel MainPage::MainViewModel()
	{
		return m_mainViewModel;
	}

    void MainPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
		MainViewModel().BookSku().Title(L"To Kill a Mockingbird");
	}
}
