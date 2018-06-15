//
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"

namespace winrt::Bookstore::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();
		Bookstore::BookstoreViewModel MainViewModel();

    private:
        int32_t MyProperty();
        void MyProperty(int32_t value);

		Bookstore::BookstoreViewModel m_mainViewModel{ nullptr };

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);

    	friend class MainPageT<MainPage>;
    };
}

namespace winrt::Bookstore::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
