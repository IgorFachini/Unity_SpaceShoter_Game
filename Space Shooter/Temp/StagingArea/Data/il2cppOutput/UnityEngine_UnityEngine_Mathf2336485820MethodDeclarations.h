#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Mathf
struct Mathf_t2336485820;
struct Mathf_t2336485820_marshaled_pinvoke;
struct Mathf_t2336485820_marshaled_com;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Mathf::.cctor()
extern "C"  void Mathf__cctor_m326403828 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Abs(System.Single)
extern "C"  float Mathf_Abs_m1942863256 (Il2CppObject * __this /* static, unused */, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C"  float Mathf_Max_m2564622569 (Il2CppObject * __this /* static, unused */, float ___a0, float ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Floor(System.Single)
extern "C"  float Mathf_Floor_m3472740614 (Il2CppObject * __this /* static, unused */, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Sign(System.Single)
extern "C"  float Mathf_Sign_m2039143327 (Il2CppObject * __this /* static, unused */, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Clamp_m2354025655 (Il2CppObject * __this /* static, unused */, float ___value0, float ___min1, float ___max2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
extern "C"  float Mathf_MoveTowards_m1130995897 (Il2CppObject * __this /* static, unused */, float ___current0, float ___target1, float ___maxDelta2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
extern "C"  bool Mathf_Approximately_m1064446634 (Il2CppObject * __this /* static, unused */, float ___a0, float ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
extern "C"  float Mathf_Repeat_m943844734 (Il2CppObject * __this /* static, unused */, float ___t0, float ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Mathf_t2336485820;
struct Mathf_t2336485820_marshaled_pinvoke;

extern "C" void Mathf_t2336485820_marshal_pinvoke(const Mathf_t2336485820& unmarshaled, Mathf_t2336485820_marshaled_pinvoke& marshaled);
extern "C" void Mathf_t2336485820_marshal_pinvoke_back(const Mathf_t2336485820_marshaled_pinvoke& marshaled, Mathf_t2336485820& unmarshaled);
extern "C" void Mathf_t2336485820_marshal_pinvoke_cleanup(Mathf_t2336485820_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Mathf_t2336485820;
struct Mathf_t2336485820_marshaled_com;

extern "C" void Mathf_t2336485820_marshal_com(const Mathf_t2336485820& unmarshaled, Mathf_t2336485820_marshaled_com& marshaled);
extern "C" void Mathf_t2336485820_marshal_com_back(const Mathf_t2336485820_marshaled_com& marshaled, Mathf_t2336485820& unmarshaled);
extern "C" void Mathf_t2336485820_marshal_com_cleanup(Mathf_t2336485820_marshaled_com& marshaled);
