﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl
struct X509Crl_t1036;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1029;
// System.Byte[]
struct ByteU5BU5D_t169;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t1035;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1030;
// System.Security.Cryptography.DSA
struct DSA_t1028;
// System.Security.Cryptography.RSA
struct RSA_t1022;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1118;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" void X509Crl__ctor_m5855 (X509Crl_t1036 * __this, ByteU5BU5D_t169* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" void X509Crl_Parse_m5856 (X509Crl_t1036 * __this, ByteU5BU5D_t169* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" X509ExtensionCollection_t1029 * X509Crl_get_Extensions_m5857 (X509Crl_t1036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" ByteU5BU5D_t169* X509Crl_get_Hash_m5858 (X509Crl_t1036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" String_t* X509Crl_get_IssuerName_m5859 (X509Crl_t1036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" DateTime_t672  X509Crl_get_NextUpdate_m5860 (X509Crl_t1036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" bool X509Crl_Compare_m5861 (X509Crl_t1036 * __this, ByteU5BU5D_t169* ___array1, ByteU5BU5D_t169* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" X509CrlEntry_t1035 * X509Crl_GetCrlEntry_m5862 (X509Crl_t1036 * __this, X509Certificate_t1030 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" X509CrlEntry_t1035 * X509Crl_GetCrlEntry_m5863 (X509Crl_t1036 * __this, ByteU5BU5D_t169* ___serialNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" String_t* X509Crl_GetHashName_m5864 (X509Crl_t1036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Crl_VerifySignature_m5865 (X509Crl_t1036 * __this, DSA_t1028 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Crl_VerifySignature_m5866 (X509Crl_t1036 * __this, RSA_t1022 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Crl_VerifySignature_m5867 (X509Crl_t1036 * __this, AsymmetricAlgorithm_t1118 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;