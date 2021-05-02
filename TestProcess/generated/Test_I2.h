// This file was generated from "Test_I2.idl"
// Nirvana IDL compiler version 1.0
#ifndef IDL_TEST_I2_H_
#define IDL_TEST_I2_H_

namespace Test {

class I2;
extern const ::Nirvana::ImportInterfaceT < ::CORBA::TypeCode> _tc_I2;

}

namespace CORBA {
namespace Nirvana {

template <>
struct Type < ::Test::I2> : TypeObject < ::Test::I2>
{
	static I_ptr <TypeCode> type_code ()
	{
		return ::Test::_tc_I2;
	}
};

}
}

namespace Test {

#ifdef LEGACY_CORBA_CPP
typedef ::CORBA::Nirvana::Type <I2>::C_ptr I2_ptr;
typedef ::CORBA::Nirvana::Type <I2>::C_var I2_var;
typedef I2_var& I2_out;
#endif

}

namespace CORBA {
namespace Nirvana {

template <>
struct Definitions < ::Test::I2>
{
};

NIRVANA_BRIDGE_BEGIN (::Test::I2, "IDL:Test/I2:1.0")
NIRVANA_BASE_ENTRY (Object, CORBA_Object)
NIRVANA_BRIDGE_EPV
Type <Long>::ABI_ret (*op2) (Bridge < ::Test::I2>* _b, Type <Long>::ABI_in, Interface* _env);
NIRVANA_BRIDGE_END ()

template <class T>
class Client <T, ::Test::I2> :
	public T,
	public Definitions < ::Test::I2>
{
public:
	Type <Long>::Var op2 (Type <Long>::C_in p1);
};

template <class T>
Type <Long>::Var Client <T, ::Test::I2>::op2 (Type <Long>::C_in p1)
{
	Environment _env;
	Bridge < ::Test::I2>& _b (T::_get_bridge (_env));
	Type <Long>::C_ret _ret = (_b._epv ().epv.op2) (&_b, &p1, &_env);
	_env.check ();
	return _ret;
}

}
}

namespace Test {

class I2 : public ::CORBA::Nirvana::ClientInterface <I2, ::CORBA::Object>
{
public:
};

}

#endif
