// This file was generated from "Test_I1.idl"
// Nirvana IDL compiler version 1.0
#ifndef IDL_TEST_I1_H_
#define IDL_TEST_I1_H_

namespace Test {

typedef ::CORBA::Nirvana::Sequence < ::CORBA::Long> SeqLong;
extern const ::Nirvana::ImportInterfaceT < ::CORBA::TypeCode> _tc_SeqLong;
#ifdef LEGACY_CORBA_CPP
typedef ::CORBA::Nirvana::Type <SeqLong>::C_var SeqLong_var;
typedef SeqLong_var& SeqLong_out;
#endif

typedef SeqLong MyAlias;
extern const ::Nirvana::ImportInterfaceT < ::CORBA::TypeCode> _tc_MyAlias;
#ifdef LEGACY_CORBA_CPP
typedef SeqLong_var MyAlias_var;
typedef SeqLong_out MyAlias_out;
#endif

class MyException : public ::CORBA::UserException
{
public:
	NIRVANA_EXCEPTION_DCL (MyException);

	struct _Data
	{
		::CORBA::Nirvana::String _param;
		::CORBA::Nirvana::Type < ::CORBA::Boolean>::ABI _bparam;
	};

	#ifndef LEGACY_CORBA_CPP

	MyException () :
		_param (),
		_bparam (::CORBA::FALSE)
	{}
	explicit MyException (::CORBA::Nirvana::Type < ::CORBA::Nirvana::String>::Var param, ::CORBA::Nirvana::Type < ::CORBA::Boolean>::Var bparam) :
		_param (std::move (param)),
		_bparam (std::move (bparam))
	{}

	::CORBA::Nirvana::Type < ::CORBA::Nirvana::String>::ConstRef param () const
	{
		return _param;
	}
	::CORBA::Nirvana::Type < ::CORBA::Nirvana::String>::Var& param ()
	{
		return _param;
	}
	void param (::CORBA::Nirvana::Type < ::CORBA::Nirvana::String>::ConstRef val)
	{
		_param = val;
	}
	void param (::CORBA::Nirvana::Type < ::CORBA::Nirvana::String>::Var&& val)
	{
		_param = std::move (val);
	}

	::CORBA::Nirvana::Type < ::CORBA::Boolean>::ConstRef bparam () const
	{
		return _bparam;
	}
	void bparam (::CORBA::Nirvana::Type < ::CORBA::Boolean>::ConstRef val)
	{
		_bparam = val;
	}
	::CORBA::Nirvana::String _param;
	::CORBA::Nirvana::Type < ::CORBA::Boolean>::ABI _bparam;

	#else

	MyException () :
		param (),
		bparam (::CORBA::FALSE)
	{}
	explicit MyException (::CORBA::Nirvana::Type < ::CORBA::Nirvana::String>::Var param, ::CORBA::Nirvana::Type < ::CORBA::Boolean>::Var bparam) :
		param (std::move (param)),
		bparam (std::move (bparam))
	{}
	::CORBA::String_var param;
	::CORBA::Nirvana::Type < ::CORBA::Boolean>::ABI bparam;

	#endif
private:
	virtual void* __data () NIRVANA_NOEXCEPT
	{
		#ifndef LEGACY_CORBA_CPP
		return &_param;
		#else
		return &param;
		#endif
	}
};
extern const ::Nirvana::ImportInterfaceT < ::CORBA::TypeCode> _tc_MyException;

}

namespace CORBA {
namespace Nirvana {

template <>
const Char RepIdOf < ::Test::MyException>::repository_id_ [] = "IDL:Test/MyException:1.0";

template <>
struct ABI < ::Test::MyException::_Data>
{
	Type <String>::ABI param;
	Type <Boolean>::ABI bparam;
};

template <>
struct Type < ::Test::MyException::_Data> : TypeVarLen < ::Test::MyException::_Data, 
	Type <String>::has_check>
{
	static void check (const ABI& val)
	{
		Type <String>::check (val.param);
		Type <Boolean>::check (val.bparam);
	}

	static void marshal_in (const Var& src, Marshal::_ptr_type marshaler, ABI& dst)
	{
		Type <String>::marshal_in (src._param, marshaler, dst.param);
		Type <Boolean>::marshal_in (src._bparam, marshaler, dst.bparam);
	}

	static void marshal_out (Var& src, Marshal::_ptr_type marshaler, ABI& dst)
	{
		Type <String>::marshal_out (src._param, marshaler, dst.param);
		Type <Boolean>::marshal_out (src._bparam, marshaler, dst.bparam);
	}

	static void unmarshal (const ABI& src, Unmarshal::_ptr_type unmarshaler, Var& dst)
	{
		Type <String>::unmarshal (src.param, unmarshaler, dst._param);
		Type <Boolean>::unmarshal (src.bparam, unmarshaler, dst._bparam);
	}
};

}
}

namespace Test {

class I1;
extern const ::Nirvana::ImportInterfaceT < ::CORBA::TypeCode> _tc_I1;

}

namespace CORBA {
namespace Nirvana {

template <>
struct Type < ::Test::I1> : TypeObject < ::Test::I1>
{
	static I_ptr <TypeCode> type_code ()
	{
		return ::Test::_tc_I1;
	}
};

}
}

namespace Test {

#ifdef LEGACY_CORBA_CPP
typedef ::CORBA::Nirvana::Type <I1>::C_ptr I1_ptr;
typedef ::CORBA::Nirvana::Type <I1>::C_var I1_var;
typedef I1_var& I1_out;
#endif

class MyStruct
{
public:
	#ifndef LEGACY_CORBA_CPP

	MyStruct () :
		_ws_member (),
		_l_member (0),
		_itf ()
	{}
	explicit MyStruct (::CORBA::Nirvana::Type < ::CORBA::Nirvana::WString>::Var ws_member, ::CORBA::Nirvana::Type < ::CORBA::Long>::Var l_member, ::CORBA::Nirvana::Type <I1>::Var itf) :
		_ws_member (std::move (ws_member)),
		_l_member (std::move (l_member)),
		_itf (std::move (itf))
	{}

	::CORBA::Nirvana::Type < ::CORBA::Nirvana::WString>::ConstRef ws_member () const
	{
		return _ws_member;
	}
	::CORBA::Nirvana::Type < ::CORBA::Nirvana::WString>::Var& ws_member ()
	{
		return _ws_member;
	}
	void ws_member (::CORBA::Nirvana::Type < ::CORBA::Nirvana::WString>::ConstRef val)
	{
		_ws_member = val;
	}
	void ws_member (::CORBA::Nirvana::Type < ::CORBA::Nirvana::WString>::Var&& val)
	{
		_ws_member = std::move (val);
	}

	::CORBA::Nirvana::Type < ::CORBA::Long>::ConstRef l_member () const
	{
		return _l_member;
	}
	void l_member (::CORBA::Nirvana::Type < ::CORBA::Long>::ConstRef val)
	{
		_l_member = val;
	}

	::CORBA::Nirvana::Type <I1>::ConstRef itf () const
	{
		return _itf;
	}
	::CORBA::Nirvana::Type <I1>::Var& itf ()
	{
		return _itf;
	}
	void itf (::CORBA::Nirvana::Type <I1>::ConstRef val)
	{
		_itf = val;
	}
	void itf (::CORBA::Nirvana::Type <I1>::Var&& val)
	{
		_itf = std::move (val);
	}

private:
	friend struct ::CORBA::Nirvana::Type <MyStruct>;
	::CORBA::Nirvana::WString _ws_member;
	::CORBA::Long _l_member;
	::CORBA::Nirvana::Type <I1>::Var _itf;
	#else
	::CORBA::WString_var ws_member;
	::CORBA::Long l_member;
	I1_var itf;
	#endif
};
extern const ::Nirvana::ImportInterfaceT < ::CORBA::TypeCode> _tc_MyStruct;

}

namespace CORBA {
namespace Nirvana {

template <>
const Char RepIdOf < ::Test::MyStruct>::repository_id_ [] = "IDL:Test/MyStruct:1.0";

template <>
struct ABI < ::Test::MyStruct>
{
	Type <WString>::ABI ws_member;
	Type <Long>::ABI l_member;
	Type < ::Test::I1>::ABI itf;
};

template <>
struct Type < ::Test::MyStruct> : TypeVarLen < ::Test::MyStruct, 
	Type <WString>::has_check
	| Type < ::Test::I1>::has_check>
{
	static void check (const ABI& val)
	{
		Type <WString>::check (val.ws_member);
		Type <Long>::check (val.l_member);
		Type < ::Test::I1>::check (val.itf);
	}

	static I_ptr <TypeCode> type_code ()
	{
		return ::Test::_tc_MyStruct;
	}

	#ifndef LEGACY_CORBA_CPP

	static void marshal_in (const Var& src, Marshal::_ptr_type marshaler, ABI& dst)
	{
		Type <WString>::marshal_in (src._ws_member, marshaler, dst.ws_member);
		Type <Long>::marshal_in (src._l_member, marshaler, dst.l_member);
		Type < ::Test::I1>::marshal_in (src._itf, marshaler, dst.itf);
	}

	static void marshal_out (Var& src, Marshal::_ptr_type marshaler, ABI& dst)
	{
		Type <WString>::marshal_out (src._ws_member, marshaler, dst.ws_member);
		Type <Long>::marshal_out (src._l_member, marshaler, dst.l_member);
		Type < ::Test::I1>::marshal_out (src._itf, marshaler, dst.itf);
	}

	static void unmarshal (const ABI& src, Unmarshal::_ptr_type unmarshaler, Var& dst)
	{
		Type <WString>::unmarshal (src.ws_member, unmarshaler, dst._ws_member);
		Type <Long>::unmarshal (src.l_member, unmarshaler, dst._l_member);
		Type < ::Test::I1>::unmarshal (src.itf, unmarshaler, dst._itf);
	}

	#else

	static void marshal_in (const Var& src, Marshal::_ptr_type marshaler, ABI& dst)
	{
		Type <WString>::marshal_in (src.ws_member, marshaler, dst.ws_member);
		Type <Long>::marshal_in (src.l_member, marshaler, dst.l_member);
		Type < ::Test::I1>::marshal_in (src.itf, marshaler, dst.itf);
	}

	static void marshal_out (Var& src, Marshal::_ptr_type marshaler, ABI& dst)
	{
		Type <WString>::marshal_out (src.ws_member, marshaler, dst.ws_member);
		Type <Long>::marshal_out (src.l_member, marshaler, dst.l_member);
		Type < ::Test::I1>::marshal_out (src.itf, marshaler, dst.itf);
	}

	static void unmarshal (const ABI& src, Unmarshal::_ptr_type unmarshaler, Var& dst)
	{
		Type <WString>::unmarshal (src.ws_member, unmarshaler, dst.ws_member);
		Type <Long>::unmarshal (src.l_member, unmarshaler, dst.l_member);
		Type < ::Test::I1>::unmarshal (src.itf, unmarshaler, dst.itf);
	}

	#endif
};

}
}

namespace Test {

#ifdef LEGACY_CORBA_CPP
typedef ::CORBA::Nirvana::Type <MyStruct>::C_var MyStruct_var;
typedef MyStruct_var& MyStruct_out;
#endif

enum class MyEnum : ::CORBA::Nirvana::ABI_enum
{
	a,
	b,
	c
};
extern const ::Nirvana::ImportInterfaceT < ::CORBA::TypeCode> _tc_MyEnum;

}

namespace CORBA {
namespace Nirvana {

template <>
const Char RepIdOf < ::Test::MyEnum>::repository_id_ [] = "IDL:Test/MyEnum:1.0";

template <>
struct Type < ::Test::MyEnum> : public TypeEnum < ::Test::MyEnum, ::Test::MyEnum::c>
{};

template <>
struct Definitions < ::Test::I1>
{
};

NIRVANA_BRIDGE_BEGIN (::Test::I1, "IDL:Test/I1:1.0")
NIRVANA_BASE_ENTRY (Object, CORBA_Object)
NIRVANA_BRIDGE_EPV
Type <Long>::ABI_ret (*op1) (Bridge < ::Test::I1>* _b, Type <Long>::ABI_in, Interface* _env);
void (*throw_no_implement) (Bridge < ::Test::I1>* _b, Interface* _env);
Interface* (*object_op) (Bridge < ::Test::I1>* _b, Interface*, Interface**, Interface**, Interface* _env);
Type <String>::ABI_ret (*string_op) (Bridge < ::Test::I1>* _b, Type <String>::ABI_in, Type <String>::ABI_out, Type <String>::ABI_out, Interface* _env);
Type < ::Test::SeqLong>::ABI_ret (*seq_op) (Bridge < ::Test::I1>* _b, Type < ::Test::SeqLong>::ABI_in, Type < ::Test::SeqLong>::ABI_out, Type < ::Test::SeqLong>::ABI_out, Interface* _env);
Type <Any>::ABI_ret (*any_op) (Bridge < ::Test::I1>* _b, Type <Any>::ABI_in, Type <Any>::ABI_out, Type <Any>::ABI_out, Interface* _env);
Type <Long>::ABI_ret (*_get_addendum) (Bridge < ::Test::I1>*, Interface*);
void (*_set_addendum) (Bridge < ::Test::I1>* _b, Type <Long>::ABI_in, Interface* _env);
NIRVANA_BRIDGE_END ()

template <class T>
class Client <T, ::Test::I1> :
	public T,
	public Definitions < ::Test::I1>
{
public:
	Type <Long>::Var op1 (Type <Long>::C_in p1);
	void throw_no_implement ();
	Type < ::Test::I1>::Var object_op (Type < ::Test::I1>::C_in in_obj, Type < ::Test::I1>::C_out out_obj, Type < ::Test::I1>::C_inout inout_obj);
	Type <String>::Var string_op (Type <String>::C_in in_s, Type <String>::C_out out_s, Type <String>::C_inout inout_s);
	Type < ::Test::SeqLong>::Var seq_op (Type < ::Test::SeqLong>::C_in in_s, Type < ::Test::SeqLong>::C_out out_s, Type < ::Test::SeqLong>::C_inout inout_s);
	Type <Any>::Var any_op (Type <Any>::C_in in_any, Type <Any>::C_out out_any, Type <Any>::C_inout inout_any);
	Type <Long>::Var addendum ();
	void addendum (Type <Long>::C_in);
};

template <class T>
Type <Long>::Var Client <T, ::Test::I1>::op1 (Type <Long>::C_in p1)
{
	Environment _env;
	Bridge < ::Test::I1>& _b (T::_get_bridge (_env));
	Type <Long>::C_ret _ret = (_b._epv ().epv.op1) (&_b, &p1, &_env);
	_env.check ();
	return _ret;
}

template <class T>
void Client <T, ::Test::I1>::throw_no_implement ()
{
	Environment _env;
	Bridge < ::Test::I1>& _b (T::_get_bridge (_env));
	(_b._epv ().epv.throw_no_implement) (&_b, &_env);
	_env.check ();
}

template <class T>
Type < ::Test::I1>::Var Client <T, ::Test::I1>::object_op (Type < ::Test::I1>::C_in in_obj, Type < ::Test::I1>::C_out out_obj, Type < ::Test::I1>::C_inout inout_obj)
{
	Environment _env;
	Bridge < ::Test::I1>& _b (T::_get_bridge (_env));
	Type < ::Test::I1>::C_ret _ret = (_b._epv ().epv.object_op) (&_b, &in_obj, &out_obj, &inout_obj, &_env);
	_env.check ();
	return _ret;
}

template <class T>
Type <String>::Var Client <T, ::Test::I1>::string_op (Type <String>::C_in in_s, Type <String>::C_out out_s, Type <String>::C_inout inout_s)
{
	Environment _env;
	Bridge < ::Test::I1>& _b (T::_get_bridge (_env));
	Type <String>::C_ret _ret = (_b._epv ().epv.string_op) (&_b, &in_s, &out_s, &inout_s, &_env);
	_env.check ();
	return _ret;
}

template <class T>
Type < ::Test::SeqLong>::Var Client <T, ::Test::I1>::seq_op (Type < ::Test::SeqLong>::C_in in_s, Type < ::Test::SeqLong>::C_out out_s, Type < ::Test::SeqLong>::C_inout inout_s)
{
	Environment _env;
	Bridge < ::Test::I1>& _b (T::_get_bridge (_env));
	Type < ::Test::SeqLong>::C_ret _ret = (_b._epv ().epv.seq_op) (&_b, &in_s, &out_s, &inout_s, &_env);
	_env.check ();
	return _ret;
}

template <class T>
Type <Any>::Var Client <T, ::Test::I1>::any_op (Type <Any>::C_in in_any, Type <Any>::C_out out_any, Type <Any>::C_inout inout_any)
{
	Environment _env;
	Bridge < ::Test::I1>& _b (T::_get_bridge (_env));
	Type <Any>::C_ret _ret = (_b._epv ().epv.any_op) (&_b, &in_any, &out_any, &inout_any, &_env);
	_env.check ();
	return _ret;
}

template <class T>
Type <Long>::Var Client <T, ::Test::I1>::addendum ()
{
	Environment _env;
	Bridge < ::Test::I1>& _b (T::_get_bridge (_env));
	Type <Long>::C_ret _ret = (_b._epv ().epv._get_addendum) (&_b, &_env);
	_env.check ();
	return _ret;
}

template <class T>
void Client <T, ::Test::I1>::addendum (Type <Long>::C_in val)
{
	Environment _env;
	Bridge < ::Test::I1>& _b (T::_get_bridge (_env));
	(_b._epv ().epv._set_addendum) (&_b, &val, &_env);
	_env.check ();
}

}
}

namespace Test {

class I1 : public ::CORBA::Nirvana::ClientInterface <I1, ::CORBA::Object>
{
public:
};

}

#endif
