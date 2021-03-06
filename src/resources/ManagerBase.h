#pragma once
#include <string>

template <class T>
class vResource;

template <class T>
class iManagerBase
{
public:
    virtual ~iManagerBase() {};

    virtual void Update(float dt) = 0;
    virtual unsigned int GetResourcesCount() const = 0;

    virtual bool ReloadAll() = 0;
    virtual bool ReloadResource(const std::string &id) = 0;

    virtual bool IsValidResource(vResource<T> *res) const = 0;
    virtual bool IsValidResource(const std::string &id) const = 0;

    virtual void NotifyResourceParentChanged(vResource<T> *res) = 0;

protected:

    virtual int FindResource(const std::string& id) const = 0;
    virtual void RemoveResource(unsigned int storage_index) = 0;
};
