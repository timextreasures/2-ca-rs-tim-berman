﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MonoEnumInfo
struct MonoEnumInfo_t1900;
// System.Collections.Hashtable
struct Hashtable_t24;
// System.Type
struct Type_t;
// System.MonoEnumInfo
#include "mscorlib_System_MonoEnumInfo.h"

// System.Void System.MonoEnumInfo::.ctor(System.MonoEnumInfo)
extern "C" void MonoEnumInfo__ctor_m11997 (MonoEnumInfo_t1900 * __this, MonoEnumInfo_t1900  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::.cctor()
extern "C" void MonoEnumInfo__cctor_m11998 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::get_enum_info(System.Type,System.MonoEnumInfo&)
extern "C" void MonoEnumInfo_get_enum_info_m11999 (Object_t * __this /* static, unused */, Type_t * ___enumType, MonoEnumInfo_t1900 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.MonoEnumInfo::get_Cache()
extern "C" Hashtable_t24 * MonoEnumInfo_get_Cache_m12000 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::GetInfo(System.Type,System.MonoEnumInfo&)
extern "C" void MonoEnumInfo_GetInfo_m12001 (Object_t * __this /* static, unused */, Type_t * ___enumType, MonoEnumInfo_t1900 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
