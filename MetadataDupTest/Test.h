#pragma once

struct Unmanaged;

template <typename T> ref class DerivedTemplate;

public ref class TestVM
{
public:
    TestVM();

    DerivedTemplate<Unmanaged>^ member;
};
