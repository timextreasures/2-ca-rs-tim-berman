﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t2287;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2255;
// System.Object[]
struct ObjectU5BU5D_t38;

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m15914_gshared (InvokableCall_1_t2287 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m15914(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2287 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m15914_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m15915_gshared (InvokableCall_1_t2287 * __this, UnityAction_1_t2255 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m15915(__this, ___callback, method) (( void (*) (InvokableCall_1_t2287 *, UnityAction_1_t2255 *, const MethodInfo*))InvokableCall_1__ctor_m15915_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m15916_gshared (InvokableCall_1_t2287 * __this, ObjectU5BU5D_t38* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m15916(__this, ___args, method) (( void (*) (InvokableCall_1_t2287 *, ObjectU5BU5D_t38*, const MethodInfo*))InvokableCall_1_Invoke_m15916_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m15917_gshared (InvokableCall_1_t2287 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m15917(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2287 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m15917_gshared)(__this, ___targetObj, ___method, method)
