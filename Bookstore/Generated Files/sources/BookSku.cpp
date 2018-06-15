#include "pch.h"
#include "BookSku.h"

namespace winrt::Bookstore::implementation
{
    hstring BookSku::Title()
    {
        throw hresult_not_implemented();
    }

    void BookSku::Title(hstring const& value)
    {
        throw hresult_not_implemented();
    }

    event_token BookSku::PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& value)
    {
        throw hresult_not_implemented();
    }

    void BookSku::PropertyChanged(event_token const& token)
    {
        throw hresult_not_implemented();
    }
}
