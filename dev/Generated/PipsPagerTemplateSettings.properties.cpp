// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "PipsPagerTemplateSettings.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(PipsPagerTemplateSettings)
}

#include "PipsPagerTemplateSettings.g.cpp"

GlobalDependencyProperty PipsPagerTemplateSettingsProperties::s_DispatcherProperty{ nullptr };
GlobalDependencyProperty PipsPagerTemplateSettingsProperties::s_PipsPagerItemsProperty{ nullptr };

PipsPagerTemplateSettingsProperties::PipsPagerTemplateSettingsProperties()
{
    EnsureProperties();
}

void PipsPagerTemplateSettingsProperties::EnsureProperties()
{
    if (!s_DispatcherProperty)
    {
        s_DispatcherProperty =
            InitializeDependencyProperty(
                L"Dispatcher",
                winrt::name_of<winrt::CoreDispatcher>(),
                winrt::name_of<winrt::PipsPagerTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<winrt::CoreDispatcher>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_PipsPagerItemsProperty)
    {
        s_PipsPagerItemsProperty =
            InitializeDependencyProperty(
                L"PipsPagerItems",
                winrt::name_of<winrt::IVector<winrt::IInspectable>>(),
                winrt::name_of<winrt::PipsPagerTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<winrt::IVector<winrt::IInspectable>>::BoxedDefaultValue(),
                nullptr);
    }
}

void PipsPagerTemplateSettingsProperties::ClearProperties()
{
    s_DispatcherProperty = nullptr;
    s_PipsPagerItemsProperty = nullptr;
}

void PipsPagerTemplateSettingsProperties::Dispatcher(winrt::CoreDispatcher const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PipsPagerTemplateSettings*>(this)->SetValue(s_DispatcherProperty, ValueHelper<winrt::CoreDispatcher>::BoxValueIfNecessary(value));
    }
}

winrt::CoreDispatcher PipsPagerTemplateSettingsProperties::Dispatcher()
{
    return ValueHelper<winrt::CoreDispatcher>::CastOrUnbox(static_cast<PipsPagerTemplateSettings*>(this)->GetValue(s_DispatcherProperty));
}

void PipsPagerTemplateSettingsProperties::PipsPagerItems(winrt::IVector<winrt::IInspectable> const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PipsPagerTemplateSettings*>(this)->SetValue(s_PipsPagerItemsProperty, ValueHelper<winrt::IVector<winrt::IInspectable>>::BoxValueIfNecessary(value));
    }
}

winrt::IVector<winrt::IInspectable> PipsPagerTemplateSettingsProperties::PipsPagerItems()
{
    return ValueHelper<winrt::IVector<winrt::IInspectable>>::CastOrUnbox(static_cast<PipsPagerTemplateSettings*>(this)->GetValue(s_PipsPagerItemsProperty));
}