﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Regex
struct Regex_t962;
// System.Int32[]
struct Int32U5BU5D_t195;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t900;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t1259;
// System.Text.RegularExpressions.Match
struct Match_t1166;
// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t1165;
// System.Text.RegularExpressions.IMachine
struct IMachine_t1256;
// System.String[]
struct StringU5BU5D_t284;
// System.Collections.IDictionary
struct IDictionary_t1260;
// System.Text.RegularExpressions.RegexOptions
#include "System_System_Text_RegularExpressions_RegexOptions.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Text.RegularExpressions.Regex::.ctor()
extern "C" void Regex__ctor_m7040 (Regex_t962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
extern "C" void Regex__ctor_m6553 (Regex_t962 * __this, String_t* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" void Regex__ctor_m7041 (Regex_t962 * __this, String_t* ___pattern, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Regex__ctor_m7042 (Regex_t962 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.cctor()
extern "C" void Regex__cctor_m7043 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Regex_System_Runtime_Serialization_ISerializable_GetObjectData_m7044 (Regex_t962 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.String)
extern "C" String_t* Regex_Replace_m5487 (Object_t * __this /* static, unused */, String_t* ___input, String_t* ___pattern, String_t* ___replacement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" String_t* Regex_Replace_m7045 (Object_t * __this /* static, unused */, String_t* ___input, String_t* ___pattern, String_t* ___replacement, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::validate_options(System.Text.RegularExpressions.RegexOptions)
extern "C" void Regex_validate_options_m7046 (Object_t * __this /* static, unused */, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::Init()
extern "C" void Regex_Init_m7047 (Regex_t962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::InitNewRegex()
extern "C" void Regex_InitNewRegex_m7048 (Regex_t962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::CreateMachineFactory(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" Object_t * Regex_CreateMachineFactory_m7049 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::get_Options()
extern "C" int32_t Regex_get_Options_m7050 (Regex_t962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::get_RightToLeft()
extern "C" bool Regex_get_RightToLeft_m7051 (Regex_t962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::GroupNumberFromName(System.String)
extern "C" int32_t Regex_GroupNumberFromName_m7052 (Regex_t962 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::GetGroupIndex(System.Int32)
extern "C" int32_t Regex_GetGroupIndex_m7053 (Regex_t962 * __this, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::default_startat(System.String)
extern "C" int32_t Regex_default_startat_m7054 (Regex_t962 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
extern "C" bool Regex_IsMatch_m7055 (Regex_t962 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.Int32)
extern "C" bool Regex_IsMatch_m7056 (Regex_t962 * __this, String_t* ___input, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.Int32)
extern "C" Match_t1166 * Regex_Match_m7057 (Regex_t962 * __this, String_t* ___input, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String)
extern "C" MatchCollection_t1165 * Regex_Matches_m6554 (Regex_t962 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.Int32)
extern "C" MatchCollection_t1165 * Regex_Matches_m7058 (Regex_t962 * __this, String_t* ___input, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String)
extern "C" String_t* Regex_Replace_m7059 (Regex_t962 * __this, String_t* ___input, String_t* ___replacement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.Int32,System.Int32)
extern "C" String_t* Regex_Replace_m7060 (Regex_t962 * __this, String_t* ___input, String_t* ___replacement, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::ToString()
extern "C" String_t* Regex_ToString_m7061 (Regex_t962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::get_GroupCount()
extern "C" int32_t Regex_get_GroupCount_m7062 (Regex_t962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::get_Gap()
extern "C" int32_t Regex_get_Gap_m7063 (Regex_t962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Regex::CreateMachine()
extern "C" Object_t * Regex_CreateMachine_m7064 (Regex_t962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.Regex::GetGroupNamesArray(System.Int32,System.Collections.IDictionary)
extern "C" StringU5BU5D_t284* Regex_GetGroupNamesArray_m7065 (Object_t * __this /* static, unused */, int32_t ___groupCount, Object_t * ___mapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Text.RegularExpressions.Regex::get_GroupNumbers()
extern "C" Int32U5BU5D_t195* Regex_get_GroupNumbers_m7066 (Regex_t962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;