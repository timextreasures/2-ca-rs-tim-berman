﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.BinaryCommon
struct BinaryCommon_t1726;
// System.Type
struct Type_t;
// System.Byte[]
struct ByteU5BU5D_t169;

// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryCommon::.cctor()
extern "C" void BinaryCommon__cctor_m10676 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.BinaryCommon::IsPrimitive(System.Type)
extern "C" bool BinaryCommon_IsPrimitive_m10677 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.BinaryCommon::GetTypeFromCode(System.Int32)
extern "C" Type_t * BinaryCommon_GetTypeFromCode_m10678 (Object_t * __this /* static, unused */, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryCommon::SwapBytes(System.Byte[],System.Int32,System.Int32)
extern "C" void BinaryCommon_SwapBytes_m10679 (Object_t * __this /* static, unused */, ByteU5BU5D_t169* ___byteArray, int32_t ___size, int32_t ___dataSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
