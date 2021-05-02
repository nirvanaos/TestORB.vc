// This file was generated from "Test_I1_factory.idl"
// Nirvana IDL compiler version 1.0
#ifndef IDL_TEST_I1_FACTORY_H_
#define IDL_TEST_I1_FACTORY_H_
#include "Test_I1.h"

namespace Test {

class I1_factory;
extern const ::Nirvana::ImportInterfaceT < ::CORBA::TypeCode> _tc_I1_factory;

}

namespace CORBA {
namespace Nirvana {

template <>
struct Type < ::Test::I1_factory> : TypeObject < ::Test::I1_factory>
{
	static I_ptr <TypeCode> type_code ()
	{
		return ::Test::_tc_I1_factory;
	}
};

}
}

namespace Test {

#ifdef LEGACY_CORBA_CPP
typedef ::CORBA::Nirvana::Type <I1_factory>::C_ptr I1_factory_ptr;
typedef ::CORBA::Nirvana::Type <I1_factory>::C_var I1_factory_var;
typedef I1_factory_var& I1_factory_out;
#endif

}

namespace CORBA {
namespace Nirvana {

template <>
struct Definitions < ::Test::I1_factory>
{
};

NIRVANA_BRIDGE_BEGIN (::Test::I1_factory, "IDL:Test/I1_factory:1.0")
NIRVANA_BASE_ENTRY (Object, CORBA_Object)
NIRVANA_BRIDGE_EPV
Interface* (*create) (Bridge < ::Test::I1_factory>* _b, Type <Long>::ABI_in, Interface* _env);
NIRVANA_BRIDGE_END ()

template <class T>
class Client <T, ::Test::I1_factory> :
	public T,
	public Definitions < ::Test::I1_factory>
{
public:
	Type < ::Test::I1>::Var create (Type <Long>::C_in addendum);
};

template <class T>
Type < ::Test::I1>::Var Client <T, ::Test::I1_factory>::create (Type <Long>::C_in addendum)
{
	Environment _env;
	Bridge < ::Test::I1_factory>& _b (T::_get_bridge (_env));
	Type < ::Test::I1>::C_ret _ret = (_b._epv ().epv.create) (&_b, &addendum, &_env);
	_env.check ();
	return _ret;
}

}
}

namespace Test {

class I1_factory : public ::CORBA::Nirvana::ClientInterface <I1_factory, ::CORBA::Object>
{
public:
};

}

#endif
