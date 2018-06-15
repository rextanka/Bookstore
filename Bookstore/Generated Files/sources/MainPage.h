#pragma once

#include "MainPage.g.h"

namespace winrt::Bookstore::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage() = default;

        Bookstore::BookstoreViewModel MainViewModel();
    };
}

namespace winrt::Bookstore::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
