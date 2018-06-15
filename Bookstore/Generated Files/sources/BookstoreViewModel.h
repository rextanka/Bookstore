#pragma once

#include "BookstoreViewModel.g.h"

namespace winrt::Bookstore::implementation
{
    struct BookstoreViewModel : BookstoreViewModelT<BookstoreViewModel>
    {
        BookstoreViewModel() = delete;

        Bookstore::BookSku BookSku();
    };
}
