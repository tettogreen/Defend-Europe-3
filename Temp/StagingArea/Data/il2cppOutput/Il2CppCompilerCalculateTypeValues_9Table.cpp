#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3520677791;
// System.Collections.ArrayList
struct ArrayList_t3796796676;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1749231613;
// System.Security.Cryptography.RSA
struct RSA_t401729117;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1222972373;
// Mono.Security.ASN1
struct ASN1_t1825750942;
// System.UInt32[]
struct UInt32U5BU5D_t155030608;
// Mono.Math.BigInteger
struct BigInteger_t2840320901;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t1077440025;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t671522817;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2164408312;
// Mono.Security.X509.X509Store
struct X509Store_t647118203;
// Mono.Security.X509.X509Stores
struct X509Stores_t3427924730;
// System.Collections.IEnumerator
struct IEnumerator_t3757897221;
// System.Char[]
struct CharU5BU5D_t3855443485;
// System.Void
struct Void_t1901813639;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1143972990;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t1054481065;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t949223364;
// System.String[]
struct StringU5BU5D_t1453726374;
// System.Int32[]
struct Int32U5BU5D_t2907286259;
// Mono.Math.BigInteger
struct BigInteger_t2840320900;
// System.IAsyncResult
struct IAsyncResult_t34971173;
// System.AsyncCallback
struct AsyncCallback_t802987637;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t2558787287;
// System.AssemblyLoadEventArgs
struct AssemblyLoadEventArgs_t41996734;
// System.EventArgs
struct EventArgs_t2874633079;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t2179390746;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2859044483;
// System.Reflection.Assembly
struct Assembly_t3987309587;
// System.ResolveEventArgs
struct ResolveEventArgs_t1937648638;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t2189253772;
// System.Security.Cryptography.DSA
struct DSA_t948809611;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CMODULEU3E_T1940706082_H
#define U3CMODULEU3E_T1940706082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1940706082 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T1940706082_H
#ifndef PKCS5_T3364872932_H
#define PKCS5_T3364872932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS5
struct  PKCS5_t3364872932  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS5_T3364872932_H
#ifndef ENCRYPTEDPRIVATEKEYINFO_T407094643_H
#define ENCRYPTEDPRIVATEKEYINFO_T407094643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct  EncryptedPrivateKeyInfo_t407094643  : public RuntimeObject
{
public:
	// System.String Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_algorithm
	String_t* ____algorithm_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_salt
	ByteU5BU5D_t3520677791* ____salt_1;
	// System.Int32 Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_iterations
	int32_t ____iterations_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_data
	ByteU5BU5D_t3520677791* ____data_3;

public:
	inline static int32_t get_offset_of__algorithm_0() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t407094643, ____algorithm_0)); }
	inline String_t* get__algorithm_0() const { return ____algorithm_0; }
	inline String_t** get_address_of__algorithm_0() { return &____algorithm_0; }
	inline void set__algorithm_0(String_t* value)
	{
		____algorithm_0 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_0), value);
	}

	inline static int32_t get_offset_of__salt_1() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t407094643, ____salt_1)); }
	inline ByteU5BU5D_t3520677791* get__salt_1() const { return ____salt_1; }
	inline ByteU5BU5D_t3520677791** get_address_of__salt_1() { return &____salt_1; }
	inline void set__salt_1(ByteU5BU5D_t3520677791* value)
	{
		____salt_1 = value;
		Il2CppCodeGenWriteBarrier((&____salt_1), value);
	}

	inline static int32_t get_offset_of__iterations_2() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t407094643, ____iterations_2)); }
	inline int32_t get__iterations_2() const { return ____iterations_2; }
	inline int32_t* get_address_of__iterations_2() { return &____iterations_2; }
	inline void set__iterations_2(int32_t value)
	{
		____iterations_2 = value;
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t407094643, ____data_3)); }
	inline ByteU5BU5D_t3520677791* get__data_3() const { return ____data_3; }
	inline ByteU5BU5D_t3520677791** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(ByteU5BU5D_t3520677791* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDPRIVATEKEYINFO_T407094643_H
#ifndef PRIVATEKEYINFO_T54500118_H
#define PRIVATEKEYINFO_T54500118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct  PrivateKeyInfo_t54500118  : public RuntimeObject
{
public:
	// System.Int32 Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_version
	int32_t ____version_0;
	// System.String Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_algorithm
	String_t* ____algorithm_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_key
	ByteU5BU5D_t3520677791* ____key_2;
	// System.Collections.ArrayList Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_list
	ArrayList_t3796796676 * ____list_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t54500118, ____version_0)); }
	inline int32_t get__version_0() const { return ____version_0; }
	inline int32_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(int32_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__algorithm_1() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t54500118, ____algorithm_1)); }
	inline String_t* get__algorithm_1() const { return ____algorithm_1; }
	inline String_t** get_address_of__algorithm_1() { return &____algorithm_1; }
	inline void set__algorithm_1(String_t* value)
	{
		____algorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_1), value);
	}

	inline static int32_t get_offset_of__key_2() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t54500118, ____key_2)); }
	inline ByteU5BU5D_t3520677791* get__key_2() const { return ____key_2; }
	inline ByteU5BU5D_t3520677791** get_address_of__key_2() { return &____key_2; }
	inline void set__key_2(ByteU5BU5D_t3520677791* value)
	{
		____key_2 = value;
		Il2CppCodeGenWriteBarrier((&____key_2), value);
	}

	inline static int32_t get_offset_of__list_3() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t54500118, ____list_3)); }
	inline ArrayList_t3796796676 * get__list_3() const { return ____list_3; }
	inline ArrayList_t3796796676 ** get_address_of__list_3() { return &____list_3; }
	inline void set__list_3(ArrayList_t3796796676 * value)
	{
		____list_3 = value;
		Il2CppCodeGenWriteBarrier((&____list_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIVATEKEYINFO_T54500118_H
#ifndef PKCS8_T1712231073_H
#define PKCS8_T1712231073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8
struct  PKCS8_t1712231073  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS8_T1712231073_H
#ifndef PKCS1_T3083961623_H
#define PKCS1_T3083961623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS1
struct  PKCS1_t3083961623  : public RuntimeObject
{
public:

public:
};

struct PKCS1_t3083961623_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA1
	ByteU5BU5D_t3520677791* ___emptySHA1_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA256
	ByteU5BU5D_t3520677791* ___emptySHA256_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA384
	ByteU5BU5D_t3520677791* ___emptySHA384_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA512
	ByteU5BU5D_t3520677791* ___emptySHA512_3;

public:
	inline static int32_t get_offset_of_emptySHA1_0() { return static_cast<int32_t>(offsetof(PKCS1_t3083961623_StaticFields, ___emptySHA1_0)); }
	inline ByteU5BU5D_t3520677791* get_emptySHA1_0() const { return ___emptySHA1_0; }
	inline ByteU5BU5D_t3520677791** get_address_of_emptySHA1_0() { return &___emptySHA1_0; }
	inline void set_emptySHA1_0(ByteU5BU5D_t3520677791* value)
	{
		___emptySHA1_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA1_0), value);
	}

	inline static int32_t get_offset_of_emptySHA256_1() { return static_cast<int32_t>(offsetof(PKCS1_t3083961623_StaticFields, ___emptySHA256_1)); }
	inline ByteU5BU5D_t3520677791* get_emptySHA256_1() const { return ___emptySHA256_1; }
	inline ByteU5BU5D_t3520677791** get_address_of_emptySHA256_1() { return &___emptySHA256_1; }
	inline void set_emptySHA256_1(ByteU5BU5D_t3520677791* value)
	{
		___emptySHA256_1 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA256_1), value);
	}

	inline static int32_t get_offset_of_emptySHA384_2() { return static_cast<int32_t>(offsetof(PKCS1_t3083961623_StaticFields, ___emptySHA384_2)); }
	inline ByteU5BU5D_t3520677791* get_emptySHA384_2() const { return ___emptySHA384_2; }
	inline ByteU5BU5D_t3520677791** get_address_of_emptySHA384_2() { return &___emptySHA384_2; }
	inline void set_emptySHA384_2(ByteU5BU5D_t3520677791* value)
	{
		___emptySHA384_2 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA384_2), value);
	}

	inline static int32_t get_offset_of_emptySHA512_3() { return static_cast<int32_t>(offsetof(PKCS1_t3083961623_StaticFields, ___emptySHA512_3)); }
	inline ByteU5BU5D_t3520677791* get_emptySHA512_3() const { return ___emptySHA512_3; }
	inline ByteU5BU5D_t3520677791** get_address_of_emptySHA512_3() { return &___emptySHA512_3; }
	inline void set_emptySHA512_3(ByteU5BU5D_t3520677791* value)
	{
		___emptySHA512_3 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA512_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS1_T3083961623_H
#ifndef KEYBUILDER_T1522895459_H
#define KEYBUILDER_T1522895459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyBuilder
struct  KeyBuilder_t1522895459  : public RuntimeObject
{
public:

public:
};

struct KeyBuilder_t1522895459_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::rng
	RandomNumberGenerator_t1749231613 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(KeyBuilder_t1522895459_StaticFields, ___rng_0)); }
	inline RandomNumberGenerator_t1749231613 * get_rng_0() const { return ___rng_0; }
	inline RandomNumberGenerator_t1749231613 ** get_address_of_rng_0() { return &___rng_0; }
	inline void set_rng_0(RandomNumberGenerator_t1749231613 * value)
	{
		___rng_0 = value;
		Il2CppCodeGenWriteBarrier((&___rng_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBUILDER_T1522895459_H
#ifndef CRYPTOCONVERT_T3058864859_H
#define CRYPTOCONVERT_T3058864859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.CryptoConvert
struct  CryptoConvert_t3058864859  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONVERT_T3058864859_H
#ifndef PRIVATEKEY_T3810315688_H
#define PRIVATEKEY_T3810315688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Authenticode.PrivateKey
struct  PrivateKey_t3810315688  : public RuntimeObject
{
public:
	// System.Boolean Mono.Security.Authenticode.PrivateKey::encrypted
	bool ___encrypted_0;
	// System.Security.Cryptography.RSA Mono.Security.Authenticode.PrivateKey::rsa
	RSA_t401729117 * ___rsa_1;
	// System.Boolean Mono.Security.Authenticode.PrivateKey::weak
	bool ___weak_2;
	// System.Int32 Mono.Security.Authenticode.PrivateKey::keyType
	int32_t ___keyType_3;

public:
	inline static int32_t get_offset_of_encrypted_0() { return static_cast<int32_t>(offsetof(PrivateKey_t3810315688, ___encrypted_0)); }
	inline bool get_encrypted_0() const { return ___encrypted_0; }
	inline bool* get_address_of_encrypted_0() { return &___encrypted_0; }
	inline void set_encrypted_0(bool value)
	{
		___encrypted_0 = value;
	}

	inline static int32_t get_offset_of_rsa_1() { return static_cast<int32_t>(offsetof(PrivateKey_t3810315688, ___rsa_1)); }
	inline RSA_t401729117 * get_rsa_1() const { return ___rsa_1; }
	inline RSA_t401729117 ** get_address_of_rsa_1() { return &___rsa_1; }
	inline void set_rsa_1(RSA_t401729117 * value)
	{
		___rsa_1 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_1), value);
	}

	inline static int32_t get_offset_of_weak_2() { return static_cast<int32_t>(offsetof(PrivateKey_t3810315688, ___weak_2)); }
	inline bool get_weak_2() const { return ___weak_2; }
	inline bool* get_address_of_weak_2() { return &___weak_2; }
	inline void set_weak_2(bool value)
	{
		___weak_2 = value;
	}

	inline static int32_t get_offset_of_keyType_3() { return static_cast<int32_t>(offsetof(PrivateKey_t3810315688, ___keyType_3)); }
	inline int32_t get_keyType_3() const { return ___keyType_3; }
	inline int32_t* get_address_of_keyType_3() { return &___keyType_3; }
	inline void set_keyType_3(int32_t value)
	{
		___keyType_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIVATEKEY_T3810315688_H
#ifndef ENCRYPTEDDATA_T1746547686_H
#define ENCRYPTEDDATA_T1746547686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/EncryptedData
struct  EncryptedData_t1746547686  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/EncryptedData::_version
	uint8_t ____version_0;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_content
	ContentInfo_t1222972373 * ____content_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_encryptionAlgorithm
	ContentInfo_t1222972373 * ____encryptionAlgorithm_2;
	// System.Byte[] Mono.Security.PKCS7/EncryptedData::_encrypted
	ByteU5BU5D_t3520677791* ____encrypted_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(EncryptedData_t1746547686, ____version_0)); }
	inline uint8_t get__version_0() const { return ____version_0; }
	inline uint8_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(uint8_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__content_1() { return static_cast<int32_t>(offsetof(EncryptedData_t1746547686, ____content_1)); }
	inline ContentInfo_t1222972373 * get__content_1() const { return ____content_1; }
	inline ContentInfo_t1222972373 ** get_address_of__content_1() { return &____content_1; }
	inline void set__content_1(ContentInfo_t1222972373 * value)
	{
		____content_1 = value;
		Il2CppCodeGenWriteBarrier((&____content_1), value);
	}

	inline static int32_t get_offset_of__encryptionAlgorithm_2() { return static_cast<int32_t>(offsetof(EncryptedData_t1746547686, ____encryptionAlgorithm_2)); }
	inline ContentInfo_t1222972373 * get__encryptionAlgorithm_2() const { return ____encryptionAlgorithm_2; }
	inline ContentInfo_t1222972373 ** get_address_of__encryptionAlgorithm_2() { return &____encryptionAlgorithm_2; }
	inline void set__encryptionAlgorithm_2(ContentInfo_t1222972373 * value)
	{
		____encryptionAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____encryptionAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__encrypted_3() { return static_cast<int32_t>(offsetof(EncryptedData_t1746547686, ____encrypted_3)); }
	inline ByteU5BU5D_t3520677791* get__encrypted_3() const { return ____encrypted_3; }
	inline ByteU5BU5D_t3520677791** get_address_of__encrypted_3() { return &____encrypted_3; }
	inline void set__encrypted_3(ByteU5BU5D_t3520677791* value)
	{
		____encrypted_3 = value;
		Il2CppCodeGenWriteBarrier((&____encrypted_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDDATA_T1746547686_H
#ifndef PKCS7_T2339435917_H
#define PKCS7_T2339435917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7
struct  PKCS7_t2339435917  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS7_T2339435917_H
#ifndef CONTENTINFO_T1222972373_H
#define CONTENTINFO_T1222972373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/ContentInfo
struct  ContentInfo_t1222972373  : public RuntimeObject
{
public:
	// System.String Mono.Security.PKCS7/ContentInfo::contentType
	String_t* ___contentType_0;
	// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::content
	ASN1_t1825750942 * ___content_1;

public:
	inline static int32_t get_offset_of_contentType_0() { return static_cast<int32_t>(offsetof(ContentInfo_t1222972373, ___contentType_0)); }
	inline String_t* get_contentType_0() const { return ___contentType_0; }
	inline String_t** get_address_of_contentType_0() { return &___contentType_0; }
	inline void set_contentType_0(String_t* value)
	{
		___contentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___contentType_0), value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(ContentInfo_t1222972373, ___content_1)); }
	inline ASN1_t1825750942 * get_content_1() const { return ___content_1; }
	inline ASN1_t1825750942 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(ASN1_t1825750942 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTINFO_T1222972373_H
#ifndef BITCONVERTERLE_T4204741695_H
#define BITCONVERTERLE_T4204741695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.BitConverterLE
struct  BitConverterLE_t4204741695  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTERLE_T4204741695_H
#ifndef ASN1CONVERT_T1742440628_H
#define ASN1CONVERT_T1742440628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1Convert
struct  ASN1Convert_t1742440628  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1CONVERT_T1742440628_H
#ifndef ASN1_T1825750942_H
#define ASN1_T1825750942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1
struct  ASN1_t1825750942  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_t3520677791* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t3796796676 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_t1825750942, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_t1825750942, ___m_aValue_1)); }
	inline ByteU5BU5D_t3520677791* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_t3520677791** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_t3520677791* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_aValue_1), value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_t1825750942, ___elist_2)); }
	inline ArrayList_t3796796676 * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t3796796676 ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t3796796676 * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier((&___elist_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1_T1825750942_H
#ifndef IL2CPPCOMOBJECT_H
#define IL2CPPCOMOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComObject

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPCOMOBJECT_H
#ifndef PRIMEGENERATORBASE_T372813111_H
#define PRIMEGENERATORBASE_T372813111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct  PrimeGeneratorBase_t372813111  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMEGENERATORBASE_T372813111_H
#ifndef LOCALE_T205405272_H
#define LOCALE_T205405272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t205405272  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T205405272_H
#ifndef BIGINTEGER_T2840320901_H
#define BIGINTEGER_T2840320901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger
struct  BigInteger_t2840320901  : public RuntimeObject
{
public:
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t155030608* ___data_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(BigInteger_t2840320901, ___length_0)); }
	inline uint32_t get_length_0() const { return ___length_0; }
	inline uint32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(uint32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_t2840320901, ___data_1)); }
	inline UInt32U5BU5D_t155030608* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_t155030608** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_t155030608* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

struct BigInteger_t2840320901_StaticFields
{
public:
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t155030608* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t1749231613 * ___rng_3;

public:
	inline static int32_t get_offset_of_smallPrimes_2() { return static_cast<int32_t>(offsetof(BigInteger_t2840320901_StaticFields, ___smallPrimes_2)); }
	inline UInt32U5BU5D_t155030608* get_smallPrimes_2() const { return ___smallPrimes_2; }
	inline UInt32U5BU5D_t155030608** get_address_of_smallPrimes_2() { return &___smallPrimes_2; }
	inline void set_smallPrimes_2(UInt32U5BU5D_t155030608* value)
	{
		___smallPrimes_2 = value;
		Il2CppCodeGenWriteBarrier((&___smallPrimes_2), value);
	}

	inline static int32_t get_offset_of_rng_3() { return static_cast<int32_t>(offsetof(BigInteger_t2840320901_StaticFields, ___rng_3)); }
	inline RandomNumberGenerator_t1749231613 * get_rng_3() const { return ___rng_3; }
	inline RandomNumberGenerator_t1749231613 ** get_address_of_rng_3() { return &___rng_3; }
	inline void set_rng_3(RandomNumberGenerator_t1749231613 * value)
	{
		___rng_3 = value;
		Il2CppCodeGenWriteBarrier((&___rng_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIGINTEGER_T2840320901_H
#ifndef PRIMALITYTESTS_T2473390572_H
#define PRIMALITYTESTS_T2473390572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTests
struct  PrimalityTests_t2473390572  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTESTS_T2473390572_H
#ifndef PKCS9_T1352108399_H
#define PKCS9_T1352108399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS9
struct  PKCS9_t1352108399  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS9_T1352108399_H
#ifndef MODULUSRING_T4084302345_H
#define MODULUSRING_T4084302345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/ModulusRing
struct  ModulusRing_t4084302345  : public RuntimeObject
{
public:
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::mod
	BigInteger_t2840320901 * ___mod_0;
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::constant
	BigInteger_t2840320901 * ___constant_1;

public:
	inline static int32_t get_offset_of_mod_0() { return static_cast<int32_t>(offsetof(ModulusRing_t4084302345, ___mod_0)); }
	inline BigInteger_t2840320901 * get_mod_0() const { return ___mod_0; }
	inline BigInteger_t2840320901 ** get_address_of_mod_0() { return &___mod_0; }
	inline void set_mod_0(BigInteger_t2840320901 * value)
	{
		___mod_0 = value;
		Il2CppCodeGenWriteBarrier((&___mod_0), value);
	}

	inline static int32_t get_offset_of_constant_1() { return static_cast<int32_t>(offsetof(ModulusRing_t4084302345, ___constant_1)); }
	inline BigInteger_t2840320901 * get_constant_1() const { return ___constant_1; }
	inline BigInteger_t2840320901 ** get_address_of_constant_1() { return &___constant_1; }
	inline void set_constant_1(BigInteger_t2840320901 * value)
	{
		___constant_1 = value;
		Il2CppCodeGenWriteBarrier((&___constant_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULUSRING_T4084302345_H
#ifndef SAFEBAG_T2043874717_H
#define SAFEBAG_T2043874717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.SafeBag
struct  SafeBag_t2043874717  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.SafeBag::_bagOID
	String_t* ____bagOID_0;
	// Mono.Security.ASN1 Mono.Security.X509.SafeBag::_asn1
	ASN1_t1825750942 * ____asn1_1;

public:
	inline static int32_t get_offset_of__bagOID_0() { return static_cast<int32_t>(offsetof(SafeBag_t2043874717, ____bagOID_0)); }
	inline String_t* get__bagOID_0() const { return ____bagOID_0; }
	inline String_t** get_address_of__bagOID_0() { return &____bagOID_0; }
	inline void set__bagOID_0(String_t* value)
	{
		____bagOID_0 = value;
		Il2CppCodeGenWriteBarrier((&____bagOID_0), value);
	}

	inline static int32_t get_offset_of__asn1_1() { return static_cast<int32_t>(offsetof(SafeBag_t2043874717, ____asn1_1)); }
	inline ASN1_t1825750942 * get__asn1_1() const { return ____asn1_1; }
	inline ASN1_t1825750942 ** get_address_of__asn1_1() { return &____asn1_1; }
	inline void set__asn1_1(ASN1_t1825750942 * value)
	{
		____asn1_1 = value;
		Il2CppCodeGenWriteBarrier((&____asn1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEBAG_T2043874717_H
#ifndef DERIVEBYTES_T418925586_H
#define DERIVEBYTES_T418925586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12/DeriveBytes
struct  DeriveBytes_t418925586  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.PKCS12/DeriveBytes::_hashName
	String_t* ____hashName_3;
	// System.Int32 Mono.Security.X509.PKCS12/DeriveBytes::_iterations
	int32_t ____iterations_4;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_password
	ByteU5BU5D_t3520677791* ____password_5;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_salt
	ByteU5BU5D_t3520677791* ____salt_6;

public:
	inline static int32_t get_offset_of__hashName_3() { return static_cast<int32_t>(offsetof(DeriveBytes_t418925586, ____hashName_3)); }
	inline String_t* get__hashName_3() const { return ____hashName_3; }
	inline String_t** get_address_of__hashName_3() { return &____hashName_3; }
	inline void set__hashName_3(String_t* value)
	{
		____hashName_3 = value;
		Il2CppCodeGenWriteBarrier((&____hashName_3), value);
	}

	inline static int32_t get_offset_of__iterations_4() { return static_cast<int32_t>(offsetof(DeriveBytes_t418925586, ____iterations_4)); }
	inline int32_t get__iterations_4() const { return ____iterations_4; }
	inline int32_t* get_address_of__iterations_4() { return &____iterations_4; }
	inline void set__iterations_4(int32_t value)
	{
		____iterations_4 = value;
	}

	inline static int32_t get_offset_of__password_5() { return static_cast<int32_t>(offsetof(DeriveBytes_t418925586, ____password_5)); }
	inline ByteU5BU5D_t3520677791* get__password_5() const { return ____password_5; }
	inline ByteU5BU5D_t3520677791** get_address_of__password_5() { return &____password_5; }
	inline void set__password_5(ByteU5BU5D_t3520677791* value)
	{
		____password_5 = value;
		Il2CppCodeGenWriteBarrier((&____password_5), value);
	}

	inline static int32_t get_offset_of__salt_6() { return static_cast<int32_t>(offsetof(DeriveBytes_t418925586, ____salt_6)); }
	inline ByteU5BU5D_t3520677791* get__salt_6() const { return ____salt_6; }
	inline ByteU5BU5D_t3520677791** get_address_of__salt_6() { return &____salt_6; }
	inline void set__salt_6(ByteU5BU5D_t3520677791* value)
	{
		____salt_6 = value;
		Il2CppCodeGenWriteBarrier((&____salt_6), value);
	}
};

struct DeriveBytes_t418925586_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::keyDiversifier
	ByteU5BU5D_t3520677791* ___keyDiversifier_0;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::ivDiversifier
	ByteU5BU5D_t3520677791* ___ivDiversifier_1;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::macDiversifier
	ByteU5BU5D_t3520677791* ___macDiversifier_2;

public:
	inline static int32_t get_offset_of_keyDiversifier_0() { return static_cast<int32_t>(offsetof(DeriveBytes_t418925586_StaticFields, ___keyDiversifier_0)); }
	inline ByteU5BU5D_t3520677791* get_keyDiversifier_0() const { return ___keyDiversifier_0; }
	inline ByteU5BU5D_t3520677791** get_address_of_keyDiversifier_0() { return &___keyDiversifier_0; }
	inline void set_keyDiversifier_0(ByteU5BU5D_t3520677791* value)
	{
		___keyDiversifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyDiversifier_0), value);
	}

	inline static int32_t get_offset_of_ivDiversifier_1() { return static_cast<int32_t>(offsetof(DeriveBytes_t418925586_StaticFields, ___ivDiversifier_1)); }
	inline ByteU5BU5D_t3520677791* get_ivDiversifier_1() const { return ___ivDiversifier_1; }
	inline ByteU5BU5D_t3520677791** get_address_of_ivDiversifier_1() { return &___ivDiversifier_1; }
	inline void set_ivDiversifier_1(ByteU5BU5D_t3520677791* value)
	{
		___ivDiversifier_1 = value;
		Il2CppCodeGenWriteBarrier((&___ivDiversifier_1), value);
	}

	inline static int32_t get_offset_of_macDiversifier_2() { return static_cast<int32_t>(offsetof(DeriveBytes_t418925586_StaticFields, ___macDiversifier_2)); }
	inline ByteU5BU5D_t3520677791* get_macDiversifier_2() const { return ___macDiversifier_2; }
	inline ByteU5BU5D_t3520677791** get_address_of_macDiversifier_2() { return &___macDiversifier_2; }
	inline void set_macDiversifier_2(ByteU5BU5D_t3520677791* value)
	{
		___macDiversifier_2 = value;
		Il2CppCodeGenWriteBarrier((&___macDiversifier_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DERIVEBYTES_T418925586_H
#ifndef ASYMMETRICALGORITHM_T2859044483_H
#define ASYMMETRICALGORITHM_T2859044483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t2859044483  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t1077440025* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t2859044483, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t2859044483, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t1077440025* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t1077440025** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t1077440025* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T2859044483_H
#ifndef VERSION_T2743731698_H
#define VERSION_T2743731698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_t2743731698  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_1;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_2;
	// System.Int32 System.Version::_Build
	int32_t ____Build_3;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_4;

public:
	inline static int32_t get_offset_of__Major_1() { return static_cast<int32_t>(offsetof(Version_t2743731698, ____Major_1)); }
	inline int32_t get__Major_1() const { return ____Major_1; }
	inline int32_t* get_address_of__Major_1() { return &____Major_1; }
	inline void set__Major_1(int32_t value)
	{
		____Major_1 = value;
	}

	inline static int32_t get_offset_of__Minor_2() { return static_cast<int32_t>(offsetof(Version_t2743731698, ____Minor_2)); }
	inline int32_t get__Minor_2() const { return ____Minor_2; }
	inline int32_t* get_address_of__Minor_2() { return &____Minor_2; }
	inline void set__Minor_2(int32_t value)
	{
		____Minor_2 = value;
	}

	inline static int32_t get_offset_of__Build_3() { return static_cast<int32_t>(offsetof(Version_t2743731698, ____Build_3)); }
	inline int32_t get__Build_3() const { return ____Build_3; }
	inline int32_t* get_address_of__Build_3() { return &____Build_3; }
	inline void set__Build_3(int32_t value)
	{
		____Build_3 = value;
	}

	inline static int32_t get_offset_of__Revision_4() { return static_cast<int32_t>(offsetof(Version_t2743731698, ____Revision_4)); }
	inline int32_t get__Revision_4() const { return ____Revision_4; }
	inline int32_t* get_address_of__Revision_4() { return &____Revision_4; }
	inline void set__Revision_4(int32_t value)
	{
		____Revision_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T2743731698_H
#ifndef COLLECTIONBASE_T3889770519_H
#define COLLECTIONBASE_T3889770519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t3889770519  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t3796796676 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t3889770519, ___list_0)); }
	inline ArrayList_t3796796676 * get_list_0() const { return ___list_0; }
	inline ArrayList_t3796796676 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t3796796676 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_T3889770519_H
#ifndef HASHALGORITHM_T1257816470_H
#define HASHALGORITHM_T1257816470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t1257816470  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t3520677791* ___HashValue_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_HashValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1257816470, ___HashValue_0)); }
	inline ByteU5BU5D_t3520677791* get_HashValue_0() const { return ___HashValue_0; }
	inline ByteU5BU5D_t3520677791** get_address_of_HashValue_0() { return &___HashValue_0; }
	inline void set_HashValue_0(ByteU5BU5D_t3520677791* value)
	{
		___HashValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_0), value);
	}

	inline static int32_t get_offset_of_HashSizeValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1257816470, ___HashSizeValue_1)); }
	inline int32_t get_HashSizeValue_1() const { return ___HashSizeValue_1; }
	inline int32_t* get_address_of_HashSizeValue_1() { return &___HashSizeValue_1; }
	inline void set_HashSizeValue_1(int32_t value)
	{
		___HashSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1257816470, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1257816470, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHALGORITHM_T1257816470_H
#ifndef VALUETYPE_T4023604559_H
#define VALUETYPE_T4023604559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4023604559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4023604559_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4023604559_marshaled_com
{
};
#endif // VALUETYPE_T4023604559_H
#ifndef PKCS12_T3753670934_H
#define PKCS12_T3753670934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12
struct  PKCS12_t3753670934  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12::_password
	ByteU5BU5D_t3520677791* ____password_17;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_keyBags
	ArrayList_t3796796676 * ____keyBags_18;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_secretBags
	ArrayList_t3796796676 * ____secretBags_19;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::_certs
	X509CertificateCollection_t671522817 * ____certs_20;
	// System.Boolean Mono.Security.X509.PKCS12::_keyBagsChanged
	bool ____keyBagsChanged_21;
	// System.Boolean Mono.Security.X509.PKCS12::_secretBagsChanged
	bool ____secretBagsChanged_22;
	// System.Boolean Mono.Security.X509.PKCS12::_certsChanged
	bool ____certsChanged_23;
	// System.Int32 Mono.Security.X509.PKCS12::_iterations
	int32_t ____iterations_24;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_safeBags
	ArrayList_t3796796676 * ____safeBags_25;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::_rng
	RandomNumberGenerator_t1749231613 * ____rng_26;

public:
	inline static int32_t get_offset_of__password_17() { return static_cast<int32_t>(offsetof(PKCS12_t3753670934, ____password_17)); }
	inline ByteU5BU5D_t3520677791* get__password_17() const { return ____password_17; }
	inline ByteU5BU5D_t3520677791** get_address_of__password_17() { return &____password_17; }
	inline void set__password_17(ByteU5BU5D_t3520677791* value)
	{
		____password_17 = value;
		Il2CppCodeGenWriteBarrier((&____password_17), value);
	}

	inline static int32_t get_offset_of__keyBags_18() { return static_cast<int32_t>(offsetof(PKCS12_t3753670934, ____keyBags_18)); }
	inline ArrayList_t3796796676 * get__keyBags_18() const { return ____keyBags_18; }
	inline ArrayList_t3796796676 ** get_address_of__keyBags_18() { return &____keyBags_18; }
	inline void set__keyBags_18(ArrayList_t3796796676 * value)
	{
		____keyBags_18 = value;
		Il2CppCodeGenWriteBarrier((&____keyBags_18), value);
	}

	inline static int32_t get_offset_of__secretBags_19() { return static_cast<int32_t>(offsetof(PKCS12_t3753670934, ____secretBags_19)); }
	inline ArrayList_t3796796676 * get__secretBags_19() const { return ____secretBags_19; }
	inline ArrayList_t3796796676 ** get_address_of__secretBags_19() { return &____secretBags_19; }
	inline void set__secretBags_19(ArrayList_t3796796676 * value)
	{
		____secretBags_19 = value;
		Il2CppCodeGenWriteBarrier((&____secretBags_19), value);
	}

	inline static int32_t get_offset_of__certs_20() { return static_cast<int32_t>(offsetof(PKCS12_t3753670934, ____certs_20)); }
	inline X509CertificateCollection_t671522817 * get__certs_20() const { return ____certs_20; }
	inline X509CertificateCollection_t671522817 ** get_address_of__certs_20() { return &____certs_20; }
	inline void set__certs_20(X509CertificateCollection_t671522817 * value)
	{
		____certs_20 = value;
		Il2CppCodeGenWriteBarrier((&____certs_20), value);
	}

	inline static int32_t get_offset_of__keyBagsChanged_21() { return static_cast<int32_t>(offsetof(PKCS12_t3753670934, ____keyBagsChanged_21)); }
	inline bool get__keyBagsChanged_21() const { return ____keyBagsChanged_21; }
	inline bool* get_address_of__keyBagsChanged_21() { return &____keyBagsChanged_21; }
	inline void set__keyBagsChanged_21(bool value)
	{
		____keyBagsChanged_21 = value;
	}

	inline static int32_t get_offset_of__secretBagsChanged_22() { return static_cast<int32_t>(offsetof(PKCS12_t3753670934, ____secretBagsChanged_22)); }
	inline bool get__secretBagsChanged_22() const { return ____secretBagsChanged_22; }
	inline bool* get_address_of__secretBagsChanged_22() { return &____secretBagsChanged_22; }
	inline void set__secretBagsChanged_22(bool value)
	{
		____secretBagsChanged_22 = value;
	}

	inline static int32_t get_offset_of__certsChanged_23() { return static_cast<int32_t>(offsetof(PKCS12_t3753670934, ____certsChanged_23)); }
	inline bool get__certsChanged_23() const { return ____certsChanged_23; }
	inline bool* get_address_of__certsChanged_23() { return &____certsChanged_23; }
	inline void set__certsChanged_23(bool value)
	{
		____certsChanged_23 = value;
	}

	inline static int32_t get_offset_of__iterations_24() { return static_cast<int32_t>(offsetof(PKCS12_t3753670934, ____iterations_24)); }
	inline int32_t get__iterations_24() const { return ____iterations_24; }
	inline int32_t* get_address_of__iterations_24() { return &____iterations_24; }
	inline void set__iterations_24(int32_t value)
	{
		____iterations_24 = value;
	}

	inline static int32_t get_offset_of__safeBags_25() { return static_cast<int32_t>(offsetof(PKCS12_t3753670934, ____safeBags_25)); }
	inline ArrayList_t3796796676 * get__safeBags_25() const { return ____safeBags_25; }
	inline ArrayList_t3796796676 ** get_address_of__safeBags_25() { return &____safeBags_25; }
	inline void set__safeBags_25(ArrayList_t3796796676 * value)
	{
		____safeBags_25 = value;
		Il2CppCodeGenWriteBarrier((&____safeBags_25), value);
	}

	inline static int32_t get_offset_of__rng_26() { return static_cast<int32_t>(offsetof(PKCS12_t3753670934, ____rng_26)); }
	inline RandomNumberGenerator_t1749231613 * get__rng_26() const { return ____rng_26; }
	inline RandomNumberGenerator_t1749231613 ** get_address_of__rng_26() { return &____rng_26; }
	inline void set__rng_26(RandomNumberGenerator_t1749231613 * value)
	{
		____rng_26 = value;
		Il2CppCodeGenWriteBarrier((&____rng_26), value);
	}
};

struct PKCS12_t3753670934_StaticFields
{
public:
	// System.Int32 Mono.Security.X509.PKCS12::recommendedIterationCount
	int32_t ___recommendedIterationCount_16;
	// System.Int32 Mono.Security.X509.PKCS12::password_max_length
	int32_t ___password_max_length_27;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map5
	Dictionary_2_t2164408312 * ___U3CU3Ef__switchU24map5_28;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map6
	Dictionary_2_t2164408312 * ___U3CU3Ef__switchU24map6_29;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map7
	Dictionary_2_t2164408312 * ___U3CU3Ef__switchU24map7_30;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map8
	Dictionary_2_t2164408312 * ___U3CU3Ef__switchU24map8_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map9
	Dictionary_2_t2164408312 * ___U3CU3Ef__switchU24map9_32;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapA
	Dictionary_2_t2164408312 * ___U3CU3Ef__switchU24mapA_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapB
	Dictionary_2_t2164408312 * ___U3CU3Ef__switchU24mapB_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapC
	Dictionary_2_t2164408312 * ___U3CU3Ef__switchU24mapC_35;

public:
	inline static int32_t get_offset_of_recommendedIterationCount_16() { return static_cast<int32_t>(offsetof(PKCS12_t3753670934_StaticFields, ___recommendedIterationCount_16)); }
	inline int32_t get_recommendedIterationCount_16() const { return ___recommendedIterationCount_16; }
	inline int32_t* get_address_of_recommendedIterationCount_16() { return &___recommendedIterationCount_16; }
	inline void set_recommendedIterationCount_16(int32_t value)
	{
		___recommendedIterationCount_16 = value;
	}

	inline static int32_t get_offset_of_password_max_length_27() { return static_cast<int32_t>(offsetof(PKCS12_t3753670934_StaticFields, ___password_max_length_27)); }
	inline int32_t get_password_max_length_27() const { return ___password_max_length_27; }
	inline int32_t* get_address_of_password_max_length_27() { return &___password_max_length_27; }
	inline void set_password_max_length_27(int32_t value)
	{
		___password_max_length_27 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map5_28() { return static_cast<int32_t>(offsetof(PKCS12_t3753670934_StaticFields, ___U3CU3Ef__switchU24map5_28)); }
	inline Dictionary_2_t2164408312 * get_U3CU3Ef__switchU24map5_28() const { return ___U3CU3Ef__switchU24map5_28; }
	inline Dictionary_2_t2164408312 ** get_address_of_U3CU3Ef__switchU24map5_28() { return &___U3CU3Ef__switchU24map5_28; }
	inline void set_U3CU3Ef__switchU24map5_28(Dictionary_2_t2164408312 * value)
	{
		___U3CU3Ef__switchU24map5_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map5_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map6_29() { return static_cast<int32_t>(offsetof(PKCS12_t3753670934_StaticFields, ___U3CU3Ef__switchU24map6_29)); }
	inline Dictionary_2_t2164408312 * get_U3CU3Ef__switchU24map6_29() const { return ___U3CU3Ef__switchU24map6_29; }
	inline Dictionary_2_t2164408312 ** get_address_of_U3CU3Ef__switchU24map6_29() { return &___U3CU3Ef__switchU24map6_29; }
	inline void set_U3CU3Ef__switchU24map6_29(Dictionary_2_t2164408312 * value)
	{
		___U3CU3Ef__switchU24map6_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map6_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map7_30() { return static_cast<int32_t>(offsetof(PKCS12_t3753670934_StaticFields, ___U3CU3Ef__switchU24map7_30)); }
	inline Dictionary_2_t2164408312 * get_U3CU3Ef__switchU24map7_30() const { return ___U3CU3Ef__switchU24map7_30; }
	inline Dictionary_2_t2164408312 ** get_address_of_U3CU3Ef__switchU24map7_30() { return &___U3CU3Ef__switchU24map7_30; }
	inline void set_U3CU3Ef__switchU24map7_30(Dictionary_2_t2164408312 * value)
	{
		___U3CU3Ef__switchU24map7_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map7_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map8_31() { return static_cast<int32_t>(offsetof(PKCS12_t3753670934_StaticFields, ___U3CU3Ef__switchU24map8_31)); }
	inline Dictionary_2_t2164408312 * get_U3CU3Ef__switchU24map8_31() const { return ___U3CU3Ef__switchU24map8_31; }
	inline Dictionary_2_t2164408312 ** get_address_of_U3CU3Ef__switchU24map8_31() { return &___U3CU3Ef__switchU24map8_31; }
	inline void set_U3CU3Ef__switchU24map8_31(Dictionary_2_t2164408312 * value)
	{
		___U3CU3Ef__switchU24map8_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map8_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map9_32() { return static_cast<int32_t>(offsetof(PKCS12_t3753670934_StaticFields, ___U3CU3Ef__switchU24map9_32)); }
	inline Dictionary_2_t2164408312 * get_U3CU3Ef__switchU24map9_32() const { return ___U3CU3Ef__switchU24map9_32; }
	inline Dictionary_2_t2164408312 ** get_address_of_U3CU3Ef__switchU24map9_32() { return &___U3CU3Ef__switchU24map9_32; }
	inline void set_U3CU3Ef__switchU24map9_32(Dictionary_2_t2164408312 * value)
	{
		___U3CU3Ef__switchU24map9_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map9_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapA_33() { return static_cast<int32_t>(offsetof(PKCS12_t3753670934_StaticFields, ___U3CU3Ef__switchU24mapA_33)); }
	inline Dictionary_2_t2164408312 * get_U3CU3Ef__switchU24mapA_33() const { return ___U3CU3Ef__switchU24mapA_33; }
	inline Dictionary_2_t2164408312 ** get_address_of_U3CU3Ef__switchU24mapA_33() { return &___U3CU3Ef__switchU24mapA_33; }
	inline void set_U3CU3Ef__switchU24mapA_33(Dictionary_2_t2164408312 * value)
	{
		___U3CU3Ef__switchU24mapA_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapA_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapB_34() { return static_cast<int32_t>(offsetof(PKCS12_t3753670934_StaticFields, ___U3CU3Ef__switchU24mapB_34)); }
	inline Dictionary_2_t2164408312 * get_U3CU3Ef__switchU24mapB_34() const { return ___U3CU3Ef__switchU24mapB_34; }
	inline Dictionary_2_t2164408312 ** get_address_of_U3CU3Ef__switchU24mapB_34() { return &___U3CU3Ef__switchU24mapB_34; }
	inline void set_U3CU3Ef__switchU24mapB_34(Dictionary_2_t2164408312 * value)
	{
		___U3CU3Ef__switchU24mapB_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapB_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapC_35() { return static_cast<int32_t>(offsetof(PKCS12_t3753670934_StaticFields, ___U3CU3Ef__switchU24mapC_35)); }
	inline Dictionary_2_t2164408312 * get_U3CU3Ef__switchU24mapC_35() const { return ___U3CU3Ef__switchU24mapC_35; }
	inline Dictionary_2_t2164408312 ** get_address_of_U3CU3Ef__switchU24mapC_35() { return &___U3CU3Ef__switchU24mapC_35; }
	inline void set_U3CU3Ef__switchU24mapC_35(Dictionary_2_t2164408312 * value)
	{
		___U3CU3Ef__switchU24mapC_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapC_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS12_T3753670934_H
#ifndef X509STORES_T3427924730_H
#define X509STORES_T3427924730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Stores
struct  X509Stores_t3427924730  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Stores::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_personal
	X509Store_t647118203 * ____personal_1;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_other
	X509Store_t647118203 * ____other_2;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_intermediate
	X509Store_t647118203 * ____intermediate_3;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_trusted
	X509Store_t647118203 * ____trusted_4;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_untrusted
	X509Store_t647118203 * ____untrusted_5;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Stores_t3427924730, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((&____storePath_0), value);
	}

	inline static int32_t get_offset_of__personal_1() { return static_cast<int32_t>(offsetof(X509Stores_t3427924730, ____personal_1)); }
	inline X509Store_t647118203 * get__personal_1() const { return ____personal_1; }
	inline X509Store_t647118203 ** get_address_of__personal_1() { return &____personal_1; }
	inline void set__personal_1(X509Store_t647118203 * value)
	{
		____personal_1 = value;
		Il2CppCodeGenWriteBarrier((&____personal_1), value);
	}

	inline static int32_t get_offset_of__other_2() { return static_cast<int32_t>(offsetof(X509Stores_t3427924730, ____other_2)); }
	inline X509Store_t647118203 * get__other_2() const { return ____other_2; }
	inline X509Store_t647118203 ** get_address_of__other_2() { return &____other_2; }
	inline void set__other_2(X509Store_t647118203 * value)
	{
		____other_2 = value;
		Il2CppCodeGenWriteBarrier((&____other_2), value);
	}

	inline static int32_t get_offset_of__intermediate_3() { return static_cast<int32_t>(offsetof(X509Stores_t3427924730, ____intermediate_3)); }
	inline X509Store_t647118203 * get__intermediate_3() const { return ____intermediate_3; }
	inline X509Store_t647118203 ** get_address_of__intermediate_3() { return &____intermediate_3; }
	inline void set__intermediate_3(X509Store_t647118203 * value)
	{
		____intermediate_3 = value;
		Il2CppCodeGenWriteBarrier((&____intermediate_3), value);
	}

	inline static int32_t get_offset_of__trusted_4() { return static_cast<int32_t>(offsetof(X509Stores_t3427924730, ____trusted_4)); }
	inline X509Store_t647118203 * get__trusted_4() const { return ____trusted_4; }
	inline X509Store_t647118203 ** get_address_of__trusted_4() { return &____trusted_4; }
	inline void set__trusted_4(X509Store_t647118203 * value)
	{
		____trusted_4 = value;
		Il2CppCodeGenWriteBarrier((&____trusted_4), value);
	}

	inline static int32_t get_offset_of__untrusted_5() { return static_cast<int32_t>(offsetof(X509Stores_t3427924730, ____untrusted_5)); }
	inline X509Store_t647118203 * get__untrusted_5() const { return ____untrusted_5; }
	inline X509Store_t647118203 ** get_address_of__untrusted_5() { return &____untrusted_5; }
	inline void set__untrusted_5(X509Store_t647118203 * value)
	{
		____untrusted_5 = value;
		Il2CppCodeGenWriteBarrier((&____untrusted_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORES_T3427924730_H
#ifndef X509STOREMANAGER_T1478984319_H
#define X509STOREMANAGER_T1478984319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509StoreManager
struct  X509StoreManager_t1478984319  : public RuntimeObject
{
public:

public:
};

struct X509StoreManager_t1478984319_StaticFields
{
public:
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_userStore
	X509Stores_t3427924730 * ____userStore_0;
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_machineStore
	X509Stores_t3427924730 * ____machineStore_1;

public:
	inline static int32_t get_offset_of__userStore_0() { return static_cast<int32_t>(offsetof(X509StoreManager_t1478984319_StaticFields, ____userStore_0)); }
	inline X509Stores_t3427924730 * get__userStore_0() const { return ____userStore_0; }
	inline X509Stores_t3427924730 ** get_address_of__userStore_0() { return &____userStore_0; }
	inline void set__userStore_0(X509Stores_t3427924730 * value)
	{
		____userStore_0 = value;
		Il2CppCodeGenWriteBarrier((&____userStore_0), value);
	}

	inline static int32_t get_offset_of__machineStore_1() { return static_cast<int32_t>(offsetof(X509StoreManager_t1478984319_StaticFields, ____machineStore_1)); }
	inline X509Stores_t3427924730 * get__machineStore_1() const { return ____machineStore_1; }
	inline X509Stores_t3427924730 ** get_address_of__machineStore_1() { return &____machineStore_1; }
	inline void set__machineStore_1(X509Stores_t3427924730 * value)
	{
		____machineStore_1 = value;
		Il2CppCodeGenWriteBarrier((&____machineStore_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STOREMANAGER_T1478984319_H
#ifndef EVENTARGS_T2874633079_H
#define EVENTARGS_T2874633079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t2874633079  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t2874633079_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t2874633079 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t2874633079_StaticFields, ___Empty_0)); }
	inline EventArgs_t2874633079 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t2874633079 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t2874633079 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T2874633079_H
#ifndef X509EXTENSION_T2372217941_H
#define X509EXTENSION_T2372217941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Extension
struct  X509Extension_t2372217941  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Extension::extnOid
	String_t* ___extnOid_0;
	// System.Boolean Mono.Security.X509.X509Extension::extnCritical
	bool ___extnCritical_1;
	// Mono.Security.ASN1 Mono.Security.X509.X509Extension::extnValue
	ASN1_t1825750942 * ___extnValue_2;

public:
	inline static int32_t get_offset_of_extnOid_0() { return static_cast<int32_t>(offsetof(X509Extension_t2372217941, ___extnOid_0)); }
	inline String_t* get_extnOid_0() const { return ___extnOid_0; }
	inline String_t** get_address_of_extnOid_0() { return &___extnOid_0; }
	inline void set_extnOid_0(String_t* value)
	{
		___extnOid_0 = value;
		Il2CppCodeGenWriteBarrier((&___extnOid_0), value);
	}

	inline static int32_t get_offset_of_extnCritical_1() { return static_cast<int32_t>(offsetof(X509Extension_t2372217941, ___extnCritical_1)); }
	inline bool get_extnCritical_1() const { return ___extnCritical_1; }
	inline bool* get_address_of_extnCritical_1() { return &___extnCritical_1; }
	inline void set_extnCritical_1(bool value)
	{
		___extnCritical_1 = value;
	}

	inline static int32_t get_offset_of_extnValue_2() { return static_cast<int32_t>(offsetof(X509Extension_t2372217941, ___extnValue_2)); }
	inline ASN1_t1825750942 * get_extnValue_2() const { return ___extnValue_2; }
	inline ASN1_t1825750942 ** get_address_of_extnValue_2() { return &___extnValue_2; }
	inline void set_extnValue_2(ASN1_t1825750942 * value)
	{
		___extnValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___extnValue_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSION_T2372217941_H
#ifndef X509CERTIFICATEENUMERATOR_T3326071014_H
#define X509CERTIFICATEENUMERATOR_T3326071014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct  X509CertificateEnumerator_t3326071014  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509CertificateEnumerator_t3326071014, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEENUMERATOR_T3326071014_H
#ifndef X509BUILDER_T88911523_H
#define X509BUILDER_T88911523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Builder
struct  X509Builder_t88911523  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Builder::hashName
	String_t* ___hashName_1;

public:
	inline static int32_t get_offset_of_hashName_1() { return static_cast<int32_t>(offsetof(X509Builder_t88911523, ___hashName_1)); }
	inline String_t* get_hashName_1() const { return ___hashName_1; }
	inline String_t** get_address_of_hashName_1() { return &___hashName_1; }
	inline void set_hashName_1(String_t* value)
	{
		___hashName_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashName_1), value);
	}
};

struct X509Builder_t88911523_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Builder::<>f__switch$mapE
	Dictionary_2_t2164408312 * ___U3CU3Ef__switchU24mapE_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapE_2() { return static_cast<int32_t>(offsetof(X509Builder_t88911523_StaticFields, ___U3CU3Ef__switchU24mapE_2)); }
	inline Dictionary_2_t2164408312 * get_U3CU3Ef__switchU24mapE_2() const { return ___U3CU3Ef__switchU24mapE_2; }
	inline Dictionary_2_t2164408312 ** get_address_of_U3CU3Ef__switchU24mapE_2() { return &___U3CU3Ef__switchU24mapE_2; }
	inline void set_U3CU3Ef__switchU24mapE_2(Dictionary_2_t2164408312 * value)
	{
		___U3CU3Ef__switchU24mapE_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapE_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509BUILDER_T88911523_H
#ifndef X501_T585421765_H
#define X501_T585421765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X501
struct  X501_t585421765  : public RuntimeObject
{
public:

public:
};

struct X501_t585421765_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.X501::countryName
	ByteU5BU5D_t3520677791* ___countryName_0;
	// System.Byte[] Mono.Security.X509.X501::organizationName
	ByteU5BU5D_t3520677791* ___organizationName_1;
	// System.Byte[] Mono.Security.X509.X501::organizationalUnitName
	ByteU5BU5D_t3520677791* ___organizationalUnitName_2;
	// System.Byte[] Mono.Security.X509.X501::commonName
	ByteU5BU5D_t3520677791* ___commonName_3;
	// System.Byte[] Mono.Security.X509.X501::localityName
	ByteU5BU5D_t3520677791* ___localityName_4;
	// System.Byte[] Mono.Security.X509.X501::stateOrProvinceName
	ByteU5BU5D_t3520677791* ___stateOrProvinceName_5;
	// System.Byte[] Mono.Security.X509.X501::streetAddress
	ByteU5BU5D_t3520677791* ___streetAddress_6;
	// System.Byte[] Mono.Security.X509.X501::domainComponent
	ByteU5BU5D_t3520677791* ___domainComponent_7;
	// System.Byte[] Mono.Security.X509.X501::userid
	ByteU5BU5D_t3520677791* ___userid_8;
	// System.Byte[] Mono.Security.X509.X501::email
	ByteU5BU5D_t3520677791* ___email_9;
	// System.Byte[] Mono.Security.X509.X501::dnQualifier
	ByteU5BU5D_t3520677791* ___dnQualifier_10;
	// System.Byte[] Mono.Security.X509.X501::title
	ByteU5BU5D_t3520677791* ___title_11;
	// System.Byte[] Mono.Security.X509.X501::surname
	ByteU5BU5D_t3520677791* ___surname_12;
	// System.Byte[] Mono.Security.X509.X501::givenName
	ByteU5BU5D_t3520677791* ___givenName_13;
	// System.Byte[] Mono.Security.X509.X501::initial
	ByteU5BU5D_t3520677791* ___initial_14;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X501::<>f__switch$mapD
	Dictionary_2_t2164408312 * ___U3CU3Ef__switchU24mapD_15;

public:
	inline static int32_t get_offset_of_countryName_0() { return static_cast<int32_t>(offsetof(X501_t585421765_StaticFields, ___countryName_0)); }
	inline ByteU5BU5D_t3520677791* get_countryName_0() const { return ___countryName_0; }
	inline ByteU5BU5D_t3520677791** get_address_of_countryName_0() { return &___countryName_0; }
	inline void set_countryName_0(ByteU5BU5D_t3520677791* value)
	{
		___countryName_0 = value;
		Il2CppCodeGenWriteBarrier((&___countryName_0), value);
	}

	inline static int32_t get_offset_of_organizationName_1() { return static_cast<int32_t>(offsetof(X501_t585421765_StaticFields, ___organizationName_1)); }
	inline ByteU5BU5D_t3520677791* get_organizationName_1() const { return ___organizationName_1; }
	inline ByteU5BU5D_t3520677791** get_address_of_organizationName_1() { return &___organizationName_1; }
	inline void set_organizationName_1(ByteU5BU5D_t3520677791* value)
	{
		___organizationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___organizationName_1), value);
	}

	inline static int32_t get_offset_of_organizationalUnitName_2() { return static_cast<int32_t>(offsetof(X501_t585421765_StaticFields, ___organizationalUnitName_2)); }
	inline ByteU5BU5D_t3520677791* get_organizationalUnitName_2() const { return ___organizationalUnitName_2; }
	inline ByteU5BU5D_t3520677791** get_address_of_organizationalUnitName_2() { return &___organizationalUnitName_2; }
	inline void set_organizationalUnitName_2(ByteU5BU5D_t3520677791* value)
	{
		___organizationalUnitName_2 = value;
		Il2CppCodeGenWriteBarrier((&___organizationalUnitName_2), value);
	}

	inline static int32_t get_offset_of_commonName_3() { return static_cast<int32_t>(offsetof(X501_t585421765_StaticFields, ___commonName_3)); }
	inline ByteU5BU5D_t3520677791* get_commonName_3() const { return ___commonName_3; }
	inline ByteU5BU5D_t3520677791** get_address_of_commonName_3() { return &___commonName_3; }
	inline void set_commonName_3(ByteU5BU5D_t3520677791* value)
	{
		___commonName_3 = value;
		Il2CppCodeGenWriteBarrier((&___commonName_3), value);
	}

	inline static int32_t get_offset_of_localityName_4() { return static_cast<int32_t>(offsetof(X501_t585421765_StaticFields, ___localityName_4)); }
	inline ByteU5BU5D_t3520677791* get_localityName_4() const { return ___localityName_4; }
	inline ByteU5BU5D_t3520677791** get_address_of_localityName_4() { return &___localityName_4; }
	inline void set_localityName_4(ByteU5BU5D_t3520677791* value)
	{
		___localityName_4 = value;
		Il2CppCodeGenWriteBarrier((&___localityName_4), value);
	}

	inline static int32_t get_offset_of_stateOrProvinceName_5() { return static_cast<int32_t>(offsetof(X501_t585421765_StaticFields, ___stateOrProvinceName_5)); }
	inline ByteU5BU5D_t3520677791* get_stateOrProvinceName_5() const { return ___stateOrProvinceName_5; }
	inline ByteU5BU5D_t3520677791** get_address_of_stateOrProvinceName_5() { return &___stateOrProvinceName_5; }
	inline void set_stateOrProvinceName_5(ByteU5BU5D_t3520677791* value)
	{
		___stateOrProvinceName_5 = value;
		Il2CppCodeGenWriteBarrier((&___stateOrProvinceName_5), value);
	}

	inline static int32_t get_offset_of_streetAddress_6() { return static_cast<int32_t>(offsetof(X501_t585421765_StaticFields, ___streetAddress_6)); }
	inline ByteU5BU5D_t3520677791* get_streetAddress_6() const { return ___streetAddress_6; }
	inline ByteU5BU5D_t3520677791** get_address_of_streetAddress_6() { return &___streetAddress_6; }
	inline void set_streetAddress_6(ByteU5BU5D_t3520677791* value)
	{
		___streetAddress_6 = value;
		Il2CppCodeGenWriteBarrier((&___streetAddress_6), value);
	}

	inline static int32_t get_offset_of_domainComponent_7() { return static_cast<int32_t>(offsetof(X501_t585421765_StaticFields, ___domainComponent_7)); }
	inline ByteU5BU5D_t3520677791* get_domainComponent_7() const { return ___domainComponent_7; }
	inline ByteU5BU5D_t3520677791** get_address_of_domainComponent_7() { return &___domainComponent_7; }
	inline void set_domainComponent_7(ByteU5BU5D_t3520677791* value)
	{
		___domainComponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___domainComponent_7), value);
	}

	inline static int32_t get_offset_of_userid_8() { return static_cast<int32_t>(offsetof(X501_t585421765_StaticFields, ___userid_8)); }
	inline ByteU5BU5D_t3520677791* get_userid_8() const { return ___userid_8; }
	inline ByteU5BU5D_t3520677791** get_address_of_userid_8() { return &___userid_8; }
	inline void set_userid_8(ByteU5BU5D_t3520677791* value)
	{
		___userid_8 = value;
		Il2CppCodeGenWriteBarrier((&___userid_8), value);
	}

	inline static int32_t get_offset_of_email_9() { return static_cast<int32_t>(offsetof(X501_t585421765_StaticFields, ___email_9)); }
	inline ByteU5BU5D_t3520677791* get_email_9() const { return ___email_9; }
	inline ByteU5BU5D_t3520677791** get_address_of_email_9() { return &___email_9; }
	inline void set_email_9(ByteU5BU5D_t3520677791* value)
	{
		___email_9 = value;
		Il2CppCodeGenWriteBarrier((&___email_9), value);
	}

	inline static int32_t get_offset_of_dnQualifier_10() { return static_cast<int32_t>(offsetof(X501_t585421765_StaticFields, ___dnQualifier_10)); }
	inline ByteU5BU5D_t3520677791* get_dnQualifier_10() const { return ___dnQualifier_10; }
	inline ByteU5BU5D_t3520677791** get_address_of_dnQualifier_10() { return &___dnQualifier_10; }
	inline void set_dnQualifier_10(ByteU5BU5D_t3520677791* value)
	{
		___dnQualifier_10 = value;
		Il2CppCodeGenWriteBarrier((&___dnQualifier_10), value);
	}

	inline static int32_t get_offset_of_title_11() { return static_cast<int32_t>(offsetof(X501_t585421765_StaticFields, ___title_11)); }
	inline ByteU5BU5D_t3520677791* get_title_11() const { return ___title_11; }
	inline ByteU5BU5D_t3520677791** get_address_of_title_11() { return &___title_11; }
	inline void set_title_11(ByteU5BU5D_t3520677791* value)
	{
		___title_11 = value;
		Il2CppCodeGenWriteBarrier((&___title_11), value);
	}

	inline static int32_t get_offset_of_surname_12() { return static_cast<int32_t>(offsetof(X501_t585421765_StaticFields, ___surname_12)); }
	inline ByteU5BU5D_t3520677791* get_surname_12() const { return ___surname_12; }
	inline ByteU5BU5D_t3520677791** get_address_of_surname_12() { return &___surname_12; }
	inline void set_surname_12(ByteU5BU5D_t3520677791* value)
	{
		___surname_12 = value;
		Il2CppCodeGenWriteBarrier((&___surname_12), value);
	}

	inline static int32_t get_offset_of_givenName_13() { return static_cast<int32_t>(offsetof(X501_t585421765_StaticFields, ___givenName_13)); }
	inline ByteU5BU5D_t3520677791* get_givenName_13() const { return ___givenName_13; }
	inline ByteU5BU5D_t3520677791** get_address_of_givenName_13() { return &___givenName_13; }
	inline void set_givenName_13(ByteU5BU5D_t3520677791* value)
	{
		___givenName_13 = value;
		Il2CppCodeGenWriteBarrier((&___givenName_13), value);
	}

	inline static int32_t get_offset_of_initial_14() { return static_cast<int32_t>(offsetof(X501_t585421765_StaticFields, ___initial_14)); }
	inline ByteU5BU5D_t3520677791* get_initial_14() const { return ___initial_14; }
	inline ByteU5BU5D_t3520677791** get_address_of_initial_14() { return &___initial_14; }
	inline void set_initial_14(ByteU5BU5D_t3520677791* value)
	{
		___initial_14 = value;
		Il2CppCodeGenWriteBarrier((&___initial_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapD_15() { return static_cast<int32_t>(offsetof(X501_t585421765_StaticFields, ___U3CU3Ef__switchU24mapD_15)); }
	inline Dictionary_2_t2164408312 * get_U3CU3Ef__switchU24mapD_15() const { return ___U3CU3Ef__switchU24mapD_15; }
	inline Dictionary_2_t2164408312 ** get_address_of_U3CU3Ef__switchU24mapD_15() { return &___U3CU3Ef__switchU24mapD_15; }
	inline void set_U3CU3Ef__switchU24mapD_15(Dictionary_2_t2164408312 * value)
	{
		___U3CU3Ef__switchU24mapD_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapD_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X501_T585421765_H
#ifndef X509STORE_T647118203_H
#define X509STORE_T647118203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Store
struct  X509Store_t647118203  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Store::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::_certificates
	X509CertificateCollection_t671522817 * ____certificates_1;
	// System.Collections.ArrayList Mono.Security.X509.X509Store::_crls
	ArrayList_t3796796676 * ____crls_2;
	// System.Boolean Mono.Security.X509.X509Store::_crl
	bool ____crl_3;
	// System.String Mono.Security.X509.X509Store::_name
	String_t* ____name_4;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Store_t647118203, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((&____storePath_0), value);
	}

	inline static int32_t get_offset_of__certificates_1() { return static_cast<int32_t>(offsetof(X509Store_t647118203, ____certificates_1)); }
	inline X509CertificateCollection_t671522817 * get__certificates_1() const { return ____certificates_1; }
	inline X509CertificateCollection_t671522817 ** get_address_of__certificates_1() { return &____certificates_1; }
	inline void set__certificates_1(X509CertificateCollection_t671522817 * value)
	{
		____certificates_1 = value;
		Il2CppCodeGenWriteBarrier((&____certificates_1), value);
	}

	inline static int32_t get_offset_of__crls_2() { return static_cast<int32_t>(offsetof(X509Store_t647118203, ____crls_2)); }
	inline ArrayList_t3796796676 * get__crls_2() const { return ____crls_2; }
	inline ArrayList_t3796796676 ** get_address_of__crls_2() { return &____crls_2; }
	inline void set__crls_2(ArrayList_t3796796676 * value)
	{
		____crls_2 = value;
		Il2CppCodeGenWriteBarrier((&____crls_2), value);
	}

	inline static int32_t get_offset_of__crl_3() { return static_cast<int32_t>(offsetof(X509Store_t647118203, ____crl_3)); }
	inline bool get__crl_3() const { return ____crl_3; }
	inline bool* get_address_of__crl_3() { return &____crl_3; }
	inline void set__crl_3(bool value)
	{
		____crl_3 = value;
	}

	inline static int32_t get_offset_of__name_4() { return static_cast<int32_t>(offsetof(X509Store_t647118203, ____name_4)); }
	inline String_t* get__name_4() const { return ____name_4; }
	inline String_t** get_address_of__name_4() { return &____name_4; }
	inline void set__name_4(String_t* value)
	{
		____name_4 = value;
		Il2CppCodeGenWriteBarrier((&____name_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORE_T647118203_H
#ifndef KERNEL_T3006765331_H
#define KERNEL_T3006765331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Kernel
struct  Kernel_t3006765331  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KERNEL_T3006765331_H
#ifndef MD2_T494816239_H
#define MD2_T494816239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD2
struct  MD2_t494816239  : public HashAlgorithm_t1257816470
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD2_T494816239_H
#ifndef MD4_T442451773_H
#define MD4_T442451773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD4
struct  MD4_t442451773  : public HashAlgorithm_t1257816470
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD4_T442451773_H
#ifndef X509EXTENSIONCOLLECTION_T2179390746_H
#define X509EXTENSIONCOLLECTION_T2179390746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ExtensionCollection
struct  X509ExtensionCollection_t2179390746  : public CollectionBase_t3889770519
{
public:
	// System.Boolean Mono.Security.X509.X509ExtensionCollection::readOnly
	bool ___readOnly_1;

public:
	inline static int32_t get_offset_of_readOnly_1() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t2179390746, ___readOnly_1)); }
	inline bool get_readOnly_1() const { return ___readOnly_1; }
	inline bool* get_address_of_readOnly_1() { return &___readOnly_1; }
	inline void set_readOnly_1(bool value)
	{
		___readOnly_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONCOLLECTION_T2179390746_H
#ifndef ENUM_T1400231720_H
#define ENUM_T1400231720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1400231720  : public ValueType_t4023604559
{
public:

public:
};

struct Enum_t1400231720_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3855443485* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1400231720_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3855443485* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3855443485** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3855443485* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1400231720_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1400231720_marshaled_com
{
};
#endif // ENUM_T1400231720_H
#ifndef GCHANDLE_T3745996711_H
#define GCHANDLE_T3745996711_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3745996711 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3745996711, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3745996711_H
#ifndef VOID_T1901813639_H
#define VOID_T1901813639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1901813639 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1901813639_H
#ifndef SEQUENTIALSEARCHPRIMEGENERATORBASE_T2591969681_H
#define SEQUENTIALSEARCHPRIMEGENERATORBASE_T2591969681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct  SequentialSearchPrimeGeneratorBase_t2591969681  : public PrimeGeneratorBase_t372813111
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEQUENTIALSEARCHPRIMEGENERATORBASE_T2591969681_H
#ifndef RSA_T401729117_H
#define RSA_T401729117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t401729117  : public AsymmetricAlgorithm_t2859044483
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T401729117_H
#ifndef X509CERTIFICATECOLLECTION_T671522817_H
#define X509CERTIFICATECOLLECTION_T671522817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection
struct  X509CertificateCollection_t671522817  : public CollectionBase_t3889770519
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATECOLLECTION_T671522817_H
#ifndef TIMESPAN_T1164646297_H
#define TIMESPAN_T1164646297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t1164646297 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_8;

public:
	inline static int32_t get_offset_of__ticks_8() { return static_cast<int32_t>(offsetof(TimeSpan_t1164646297, ____ticks_8)); }
	inline int64_t get__ticks_8() const { return ____ticks_8; }
	inline int64_t* get_address_of__ticks_8() { return &____ticks_8; }
	inline void set__ticks_8(int64_t value)
	{
		____ticks_8 = value;
	}
};

struct TimeSpan_t1164646297_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t1164646297  ___MaxValue_5;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t1164646297  ___MinValue_6;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t1164646297  ___Zero_7;

public:
	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(TimeSpan_t1164646297_StaticFields, ___MaxValue_5)); }
	inline TimeSpan_t1164646297  get_MaxValue_5() const { return ___MaxValue_5; }
	inline TimeSpan_t1164646297 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(TimeSpan_t1164646297  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_MinValue_6() { return static_cast<int32_t>(offsetof(TimeSpan_t1164646297_StaticFields, ___MinValue_6)); }
	inline TimeSpan_t1164646297  get_MinValue_6() const { return ___MinValue_6; }
	inline TimeSpan_t1164646297 * get_address_of_MinValue_6() { return &___MinValue_6; }
	inline void set_MinValue_6(TimeSpan_t1164646297  value)
	{
		___MinValue_6 = value;
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(TimeSpan_t1164646297_StaticFields, ___Zero_7)); }
	inline TimeSpan_t1164646297  get_Zero_7() const { return ___Zero_7; }
	inline TimeSpan_t1164646297 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(TimeSpan_t1164646297  value)
	{
		___Zero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T1164646297_H
#ifndef UNHANDLEDEXCEPTIONEVENTARGS_T2189253772_H
#define UNHANDLEDEXCEPTIONEVENTARGS_T2189253772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t2189253772  : public EventArgs_t2874633079
{
public:
	// System.Object System.UnhandledExceptionEventArgs::exception
	RuntimeObject * ___exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::m_isTerminating
	bool ___m_isTerminating_2;

public:
	inline static int32_t get_offset_of_exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2189253772, ___exception_1)); }
	inline RuntimeObject * get_exception_1() const { return ___exception_1; }
	inline RuntimeObject ** get_address_of_exception_1() { return &___exception_1; }
	inline void set_exception_1(RuntimeObject * value)
	{
		___exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___exception_1), value);
	}

	inline static int32_t get_offset_of_m_isTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2189253772, ___m_isTerminating_2)); }
	inline bool get_m_isTerminating_2() const { return ___m_isTerminating_2; }
	inline bool* get_address_of_m_isTerminating_2() { return &___m_isTerminating_2; }
	inline void set_m_isTerminating_2(bool value)
	{
		___m_isTerminating_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTARGS_T2189253772_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef U24ARRAYTYPEU2424_T2624162912_H
#define U24ARRAYTYPEU2424_T2624162912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$24
struct  U24ArrayTypeU2424_t2624162912 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2424_t2624162912__padding[24];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2424_T2624162912_H
#ifndef U24ARRAYTYPEU2416_T3380194243_H
#define U24ARRAYTYPEU2416_T3380194243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$16
struct  U24ArrayTypeU2416_t3380194243 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2416_t3380194243__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2416_T3380194243_H
#ifndef U24ARRAYTYPEU24120_T1413270009_H
#define U24ARRAYTYPEU24120_T1413270009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$120
struct  U24ArrayTypeU24120_t1413270009 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24120_t1413270009__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24120_T1413270009_H
#ifndef U24ARRAYTYPEU243132_T1888951863_H
#define U24ARRAYTYPEU243132_T1888951863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$3132
struct  U24ArrayTypeU243132_t1888951863 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU243132_t1888951863__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU243132_T1888951863_H
#ifndef U24ARRAYTYPEU2420_T1159733451_H
#define U24ARRAYTYPEU2420_T1159733451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$20
struct  U24ArrayTypeU2420_t1159733451 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2420_t1159733451__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2420_T1159733451_H
#ifndef U24ARRAYTYPEU2432_T2039541092_H
#define U24ARRAYTYPEU2432_T2039541092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$32
struct  U24ArrayTypeU2432_t2039541092 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2432_t2039541092__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2432_T2039541092_H
#ifndef U24ARRAYTYPEU2448_T1074680674_H
#define U24ARRAYTYPEU2448_T1074680674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$48
struct  U24ArrayTypeU2448_t1074680674 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2448_t1074680674__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2448_T1074680674_H
#ifndef U24ARRAYTYPEU2464_T2623078705_H
#define U24ARRAYTYPEU2464_T2623078705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$64
struct  U24ArrayTypeU2464_t2623078705 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2464_t2623078705__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2464_T2623078705_H
#ifndef U24ARRAYTYPEU2412_T1299012761_H
#define U24ARRAYTYPEU2412_T1299012761_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t1299012761 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2412_t1299012761__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T1299012761_H
#ifndef U24ARRAYTYPEU248_T3835539436_H
#define U24ARRAYTYPEU248_T3835539436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$8
struct  U24ArrayTypeU248_t3835539436 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU248_t3835539436__padding[8];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU248_T3835539436_H
#ifndef U24ARRAYTYPEU2472_T3179949102_H
#define U24ARRAYTYPEU2472_T3179949102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$72
struct  U24ArrayTypeU2472_t3179949102 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2472_t3179949102__padding[72];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2472_T3179949102_H
#ifndef U24ARRAYTYPEU24136_T1971499818_H
#define U24ARRAYTYPEU24136_T1971499818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$136
struct  U24ArrayTypeU24136_t1971499818 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24136_t1971499818__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24136_T1971499818_H
#ifndef U24ARRAYTYPEU2456_T239899001_H
#define U24ARRAYTYPEU2456_T239899001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$56
struct  U24ArrayTypeU2456_t239899001 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2456_t239899001__padding[56];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2456_T239899001_H
#ifndef __IL2CPPCOMDELEGATE_T1202828922_H
#define __IL2CPPCOMDELEGATE_T1202828922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComDelegate
struct  __Il2CppComDelegate_t1202828922  : public Il2CppComObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __IL2CPPCOMDELEGATE_T1202828922_H
#ifndef U24ARRAYTYPEU2452_T900058358_H
#define U24ARRAYTYPEU2452_T900058358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$52
struct  U24ArrayTypeU2452_t900058358 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2452_t900058358__padding[52];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2452_T900058358_H
#ifndef U24ARRAYTYPEU24128_T1235336854_H
#define U24ARRAYTYPEU24128_T1235336854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$128
struct  U24ArrayTypeU24128_t1235336854 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24128_t1235336854__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24128_T1235336854_H
#ifndef U24ARRAYTYPEU2496_T4150189610_H
#define U24ARRAYTYPEU2496_T4150189610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$96
struct  U24ArrayTypeU2496_t4150189610 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2496_t4150189610__padding[96];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2496_T4150189610_H
#ifndef U24ARRAYTYPEU242048_T3961179899_H
#define U24ARRAYTYPEU242048_T3961179899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$2048
struct  U24ArrayTypeU242048_t3961179899 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU242048_t3961179899__padding[2048];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU242048_T3961179899_H
#ifndef U24ARRAYTYPEU24256_T3535968740_H
#define U24ARRAYTYPEU24256_T3535968740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t3535968740 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24256_t3535968740__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T3535968740_H
#ifndef U24ARRAYTYPEU24640_T3342558379_H
#define U24ARRAYTYPEU24640_T3342558379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$640
struct  U24ArrayTypeU24640_t3342558379 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24640_t3342558379__padding[640];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24640_T3342558379_H
#ifndef U24ARRAYTYPEU24124_T1967030645_H
#define U24ARRAYTYPEU24124_T1967030645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$124
struct  U24ArrayTypeU24124_t1967030645 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24124_t1967030645__padding[124];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24124_T1967030645_H
#ifndef U24ARRAYTYPEU241024_T1609428469_H
#define U24ARRAYTYPEU241024_T1609428469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t1609428469 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU241024_t1609428469__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T1609428469_H
#ifndef WEAKREFERENCE_T90516665_H
#define WEAKREFERENCE_T90516665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t90516665  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t3745996711  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t90516665, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t90516665, ___gcHandle_1)); }
	inline GCHandle_t3745996711  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t3745996711 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t3745996711  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T90516665_H
#ifndef CONFIDENCEFACTOR_T87125200_H
#define CONFIDENCEFACTOR_T87125200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t87125200 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t87125200, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIDENCEFACTOR_T87125200_H
#ifndef UNITYTYPE_T1525977742_H
#define UNITYTYPE_T1525977742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder/UnityType
struct  UnityType_t1525977742 
{
public:
	// System.Byte System.UnitySerializationHolder/UnityType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityType_t1525977742, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYTYPE_T1525977742_H
#ifndef DELEGATE_T1486180179_H
#define DELEGATE_T1486180179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1486180179  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1143972990 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1486180179, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1486180179, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1486180179, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1486180179, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1486180179, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1486180179, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1486180179, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1486180179, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1486180179, ___data_8)); }
	inline DelegateData_t1143972990 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1143972990 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1143972990 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1486180179_H
#ifndef CONFIDENCEFACTOR_T87125201_H
#define CONFIDENCEFACTOR_T87125201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t87125201 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t87125201, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIDENCEFACTOR_T87125201_H
#ifndef CIPHERMODE_T2580529368_H
#define CIPHERMODE_T2580529368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t2580529368 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t2580529368, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERMODE_T2580529368_H
#ifndef X509CHAINSTATUSFLAGS_T2563343606_H
#define X509CHAINSTATUSFLAGS_T2563343606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ChainStatusFlags
struct  X509ChainStatusFlags_t2563343606 
{
public:
	// System.Int32 Mono.Security.X509.X509ChainStatusFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509ChainStatusFlags_t2563343606, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAINSTATUSFLAGS_T2563343606_H
#ifndef PADDINGMODE_T2839519232_H
#define PADDINGMODE_T2839519232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t2839519232 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t2839519232, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PADDINGMODE_T2839519232_H
#ifndef SIGN_T2001255325_H
#define SIGN_T2001255325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Sign
struct  Sign_t2001255325 
{
public:
	// System.Int32 Mono.Math.BigInteger/Sign::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Sign_t2001255325, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGN_T2001255325_H
#ifndef PURPOSE_T2403021809_H
#define PURPOSE_T2403021809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12/DeriveBytes/Purpose
struct  Purpose_t2403021809 
{
public:
	// System.Int32 Mono.Security.X509.PKCS12/DeriveBytes/Purpose::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Purpose_t2403021809, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PURPOSE_T2403021809_H
#ifndef DATETIMEKIND_T2123197700_H
#define DATETIMEKIND_T2123197700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t2123197700 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t2123197700, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T2123197700_H
#ifndef MD2MANAGED_T1560317356_H
#define MD2MANAGED_T1560317356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD2Managed
struct  MD2Managed_t1560317356  : public MD2_t494816239
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::state
	ByteU5BU5D_t3520677791* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::checksum
	ByteU5BU5D_t3520677791* ___checksum_5;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::buffer
	ByteU5BU5D_t3520677791* ___buffer_6;
	// System.Int32 Mono.Security.Cryptography.MD2Managed::count
	int32_t ___count_7;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::x
	ByteU5BU5D_t3520677791* ___x_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD2Managed_t1560317356, ___state_4)); }
	inline ByteU5BU5D_t3520677791* get_state_4() const { return ___state_4; }
	inline ByteU5BU5D_t3520677791** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(ByteU5BU5D_t3520677791* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_checksum_5() { return static_cast<int32_t>(offsetof(MD2Managed_t1560317356, ___checksum_5)); }
	inline ByteU5BU5D_t3520677791* get_checksum_5() const { return ___checksum_5; }
	inline ByteU5BU5D_t3520677791** get_address_of_checksum_5() { return &___checksum_5; }
	inline void set_checksum_5(ByteU5BU5D_t3520677791* value)
	{
		___checksum_5 = value;
		Il2CppCodeGenWriteBarrier((&___checksum_5), value);
	}

	inline static int32_t get_offset_of_buffer_6() { return static_cast<int32_t>(offsetof(MD2Managed_t1560317356, ___buffer_6)); }
	inline ByteU5BU5D_t3520677791* get_buffer_6() const { return ___buffer_6; }
	inline ByteU5BU5D_t3520677791** get_address_of_buffer_6() { return &___buffer_6; }
	inline void set_buffer_6(ByteU5BU5D_t3520677791* value)
	{
		___buffer_6 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_6), value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(MD2Managed_t1560317356, ___count_7)); }
	inline int32_t get_count_7() const { return ___count_7; }
	inline int32_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(int32_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of_x_8() { return static_cast<int32_t>(offsetof(MD2Managed_t1560317356, ___x_8)); }
	inline ByteU5BU5D_t3520677791* get_x_8() const { return ___x_8; }
	inline ByteU5BU5D_t3520677791** get_address_of_x_8() { return &___x_8; }
	inline void set_x_8(ByteU5BU5D_t3520677791* value)
	{
		___x_8 = value;
		Il2CppCodeGenWriteBarrier((&___x_8), value);
	}
};

struct MD2Managed_t1560317356_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::PI_SUBST
	ByteU5BU5D_t3520677791* ___PI_SUBST_9;

public:
	inline static int32_t get_offset_of_PI_SUBST_9() { return static_cast<int32_t>(offsetof(MD2Managed_t1560317356_StaticFields, ___PI_SUBST_9)); }
	inline ByteU5BU5D_t3520677791* get_PI_SUBST_9() const { return ___PI_SUBST_9; }
	inline ByteU5BU5D_t3520677791** get_address_of_PI_SUBST_9() { return &___PI_SUBST_9; }
	inline void set_PI_SUBST_9(ByteU5BU5D_t3520677791* value)
	{
		___PI_SUBST_9 = value;
		Il2CppCodeGenWriteBarrier((&___PI_SUBST_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD2MANAGED_T1560317356_H
#ifndef MD4MANAGED_T2280579529_H
#define MD4MANAGED_T2280579529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD4Managed
struct  MD4Managed_t2280579529  : public MD4_t442451773
{
public:
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::state
	UInt32U5BU5D_t155030608* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::buffer
	ByteU5BU5D_t3520677791* ___buffer_5;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::count
	UInt32U5BU5D_t155030608* ___count_6;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::x
	UInt32U5BU5D_t155030608* ___x_7;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::digest
	ByteU5BU5D_t3520677791* ___digest_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD4Managed_t2280579529, ___state_4)); }
	inline UInt32U5BU5D_t155030608* get_state_4() const { return ___state_4; }
	inline UInt32U5BU5D_t155030608** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(UInt32U5BU5D_t155030608* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(MD4Managed_t2280579529, ___buffer_5)); }
	inline ByteU5BU5D_t3520677791* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_t3520677791** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_t3520677791* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_5), value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD4Managed_t2280579529, ___count_6)); }
	inline UInt32U5BU5D_t155030608* get_count_6() const { return ___count_6; }
	inline UInt32U5BU5D_t155030608** get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(UInt32U5BU5D_t155030608* value)
	{
		___count_6 = value;
		Il2CppCodeGenWriteBarrier((&___count_6), value);
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(MD4Managed_t2280579529, ___x_7)); }
	inline UInt32U5BU5D_t155030608* get_x_7() const { return ___x_7; }
	inline UInt32U5BU5D_t155030608** get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(UInt32U5BU5D_t155030608* value)
	{
		___x_7 = value;
		Il2CppCodeGenWriteBarrier((&___x_7), value);
	}

	inline static int32_t get_offset_of_digest_8() { return static_cast<int32_t>(offsetof(MD4Managed_t2280579529, ___digest_8)); }
	inline ByteU5BU5D_t3520677791* get_digest_8() const { return ___digest_8; }
	inline ByteU5BU5D_t3520677791** get_address_of_digest_8() { return &___digest_8; }
	inline void set_digest_8(ByteU5BU5D_t3520677791* value)
	{
		___digest_8 = value;
		Il2CppCodeGenWriteBarrier((&___digest_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD4MANAGED_T2280579529_H
#ifndef RSAMANAGED_T1367527829_H
#define RSAMANAGED_T1367527829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged
struct  RSAManaged_t1367527829  : public RSA_t401729117
{
public:
	// System.Boolean Mono.Security.Cryptography.RSAManaged::isCRTpossible
	bool ___isCRTpossible_2;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keyBlinding
	bool ___keyBlinding_3;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keypairGenerated
	bool ___keypairGenerated_4;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::m_disposed
	bool ___m_disposed_5;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::d
	BigInteger_t2840320901 * ___d_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::p
	BigInteger_t2840320901 * ___p_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::q
	BigInteger_t2840320901 * ___q_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dp
	BigInteger_t2840320901 * ___dp_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dq
	BigInteger_t2840320901 * ___dq_10;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::qInv
	BigInteger_t2840320901 * ___qInv_11;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::n
	BigInteger_t2840320901 * ___n_12;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::e
	BigInteger_t2840320901 * ___e_13;
	// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.RSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t1054481065 * ___KeyGenerated_14;

public:
	inline static int32_t get_offset_of_isCRTpossible_2() { return static_cast<int32_t>(offsetof(RSAManaged_t1367527829, ___isCRTpossible_2)); }
	inline bool get_isCRTpossible_2() const { return ___isCRTpossible_2; }
	inline bool* get_address_of_isCRTpossible_2() { return &___isCRTpossible_2; }
	inline void set_isCRTpossible_2(bool value)
	{
		___isCRTpossible_2 = value;
	}

	inline static int32_t get_offset_of_keyBlinding_3() { return static_cast<int32_t>(offsetof(RSAManaged_t1367527829, ___keyBlinding_3)); }
	inline bool get_keyBlinding_3() const { return ___keyBlinding_3; }
	inline bool* get_address_of_keyBlinding_3() { return &___keyBlinding_3; }
	inline void set_keyBlinding_3(bool value)
	{
		___keyBlinding_3 = value;
	}

	inline static int32_t get_offset_of_keypairGenerated_4() { return static_cast<int32_t>(offsetof(RSAManaged_t1367527829, ___keypairGenerated_4)); }
	inline bool get_keypairGenerated_4() const { return ___keypairGenerated_4; }
	inline bool* get_address_of_keypairGenerated_4() { return &___keypairGenerated_4; }
	inline void set_keypairGenerated_4(bool value)
	{
		___keypairGenerated_4 = value;
	}

	inline static int32_t get_offset_of_m_disposed_5() { return static_cast<int32_t>(offsetof(RSAManaged_t1367527829, ___m_disposed_5)); }
	inline bool get_m_disposed_5() const { return ___m_disposed_5; }
	inline bool* get_address_of_m_disposed_5() { return &___m_disposed_5; }
	inline void set_m_disposed_5(bool value)
	{
		___m_disposed_5 = value;
	}

	inline static int32_t get_offset_of_d_6() { return static_cast<int32_t>(offsetof(RSAManaged_t1367527829, ___d_6)); }
	inline BigInteger_t2840320901 * get_d_6() const { return ___d_6; }
	inline BigInteger_t2840320901 ** get_address_of_d_6() { return &___d_6; }
	inline void set_d_6(BigInteger_t2840320901 * value)
	{
		___d_6 = value;
		Il2CppCodeGenWriteBarrier((&___d_6), value);
	}

	inline static int32_t get_offset_of_p_7() { return static_cast<int32_t>(offsetof(RSAManaged_t1367527829, ___p_7)); }
	inline BigInteger_t2840320901 * get_p_7() const { return ___p_7; }
	inline BigInteger_t2840320901 ** get_address_of_p_7() { return &___p_7; }
	inline void set_p_7(BigInteger_t2840320901 * value)
	{
		___p_7 = value;
		Il2CppCodeGenWriteBarrier((&___p_7), value);
	}

	inline static int32_t get_offset_of_q_8() { return static_cast<int32_t>(offsetof(RSAManaged_t1367527829, ___q_8)); }
	inline BigInteger_t2840320901 * get_q_8() const { return ___q_8; }
	inline BigInteger_t2840320901 ** get_address_of_q_8() { return &___q_8; }
	inline void set_q_8(BigInteger_t2840320901 * value)
	{
		___q_8 = value;
		Il2CppCodeGenWriteBarrier((&___q_8), value);
	}

	inline static int32_t get_offset_of_dp_9() { return static_cast<int32_t>(offsetof(RSAManaged_t1367527829, ___dp_9)); }
	inline BigInteger_t2840320901 * get_dp_9() const { return ___dp_9; }
	inline BigInteger_t2840320901 ** get_address_of_dp_9() { return &___dp_9; }
	inline void set_dp_9(BigInteger_t2840320901 * value)
	{
		___dp_9 = value;
		Il2CppCodeGenWriteBarrier((&___dp_9), value);
	}

	inline static int32_t get_offset_of_dq_10() { return static_cast<int32_t>(offsetof(RSAManaged_t1367527829, ___dq_10)); }
	inline BigInteger_t2840320901 * get_dq_10() const { return ___dq_10; }
	inline BigInteger_t2840320901 ** get_address_of_dq_10() { return &___dq_10; }
	inline void set_dq_10(BigInteger_t2840320901 * value)
	{
		___dq_10 = value;
		Il2CppCodeGenWriteBarrier((&___dq_10), value);
	}

	inline static int32_t get_offset_of_qInv_11() { return static_cast<int32_t>(offsetof(RSAManaged_t1367527829, ___qInv_11)); }
	inline BigInteger_t2840320901 * get_qInv_11() const { return ___qInv_11; }
	inline BigInteger_t2840320901 ** get_address_of_qInv_11() { return &___qInv_11; }
	inline void set_qInv_11(BigInteger_t2840320901 * value)
	{
		___qInv_11 = value;
		Il2CppCodeGenWriteBarrier((&___qInv_11), value);
	}

	inline static int32_t get_offset_of_n_12() { return static_cast<int32_t>(offsetof(RSAManaged_t1367527829, ___n_12)); }
	inline BigInteger_t2840320901 * get_n_12() const { return ___n_12; }
	inline BigInteger_t2840320901 ** get_address_of_n_12() { return &___n_12; }
	inline void set_n_12(BigInteger_t2840320901 * value)
	{
		___n_12 = value;
		Il2CppCodeGenWriteBarrier((&___n_12), value);
	}

	inline static int32_t get_offset_of_e_13() { return static_cast<int32_t>(offsetof(RSAManaged_t1367527829, ___e_13)); }
	inline BigInteger_t2840320901 * get_e_13() const { return ___e_13; }
	inline BigInteger_t2840320901 ** get_address_of_e_13() { return &___e_13; }
	inline void set_e_13(BigInteger_t2840320901 * value)
	{
		___e_13 = value;
		Il2CppCodeGenWriteBarrier((&___e_13), value);
	}

	inline static int32_t get_offset_of_KeyGenerated_14() { return static_cast<int32_t>(offsetof(RSAManaged_t1367527829, ___KeyGenerated_14)); }
	inline KeyGeneratedEventHandler_t1054481065 * get_KeyGenerated_14() const { return ___KeyGenerated_14; }
	inline KeyGeneratedEventHandler_t1054481065 ** get_address_of_KeyGenerated_14() { return &___KeyGenerated_14; }
	inline void set_KeyGenerated_14(KeyGeneratedEventHandler_t1054481065 * value)
	{
		___KeyGenerated_14 = value;
		Il2CppCodeGenWriteBarrier((&___KeyGenerated_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAMANAGED_T1367527829_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2227229331_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2227229331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t2227229331  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$56 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU2456_t239899001  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU2424_t2624162912  ___U24U24fieldU2D1_1;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU2424_t2624162912  ___U24U24fieldU2D2_2;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU2424_t2624162912  ___U24U24fieldU2D3_3;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU2424_t2624162912  ___U24U24fieldU2D4_4;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU2416_t3380194243  ___U24U24fieldU2D5_5;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU2416_t3380194243  ___U24U24fieldU2D6_6;
	// <PrivateImplementationDetails>/$ArrayType$3132 <PrivateImplementationDetails>::$$field-15
	U24ArrayTypeU243132_t1888951863  ___U24U24fieldU2D15_7;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-16
	U24ArrayTypeU2420_t1159733451  ___U24U24fieldU2D16_8;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-17
	U24ArrayTypeU2432_t2039541092  ___U24U24fieldU2D17_9;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-18
	U24ArrayTypeU2448_t1074680674  ___U24U24fieldU2D18_10;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-19
	U24ArrayTypeU2464_t2623078705  ___U24U24fieldU2D19_11;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-20
	U24ArrayTypeU2464_t2623078705  ___U24U24fieldU2D20_12;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-21
	U24ArrayTypeU2464_t2623078705  ___U24U24fieldU2D21_13;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-22
	U24ArrayTypeU2464_t2623078705  ___U24U24fieldU2D22_14;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-23
	U24ArrayTypeU2412_t1299012761  ___U24U24fieldU2D23_15;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-24
	U24ArrayTypeU2412_t1299012761  ___U24U24fieldU2D24_16;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-25
	U24ArrayTypeU2412_t1299012761  ___U24U24fieldU2D25_17;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-26
	U24ArrayTypeU2416_t3380194243  ___U24U24fieldU2D26_18;
	// <PrivateImplementationDetails>/$ArrayType$136 <PrivateImplementationDetails>::$$field-27
	U24ArrayTypeU24136_t1971499818  ___U24U24fieldU2D27_19;
	// <PrivateImplementationDetails>/$ArrayType$72 <PrivateImplementationDetails>::$$field-30
	U24ArrayTypeU2472_t3179949102  ___U24U24fieldU2D30_20;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-31
	U24ArrayTypeU248_t3835539436  ___U24U24fieldU2D31_21;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-32
	U24ArrayTypeU2420_t1159733451  ___U24U24fieldU2D32_22;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-33
	U24ArrayTypeU2464_t2623078705  ___U24U24fieldU2D33_23;
	// <PrivateImplementationDetails>/$ArrayType$124 <PrivateImplementationDetails>::$$field-34
	U24ArrayTypeU24124_t1967030645  ___U24U24fieldU2D34_24;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-35
	U24ArrayTypeU2432_t2039541092  ___U24U24fieldU2D35_25;
	// <PrivateImplementationDetails>/$ArrayType$96 <PrivateImplementationDetails>::$$field-36
	U24ArrayTypeU2496_t4150189610  ___U24U24fieldU2D36_26;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-37
	U24ArrayTypeU242048_t3961179899  ___U24U24fieldU2D37_27;
	// <PrivateImplementationDetails>/$ArrayType$56 <PrivateImplementationDetails>::$$field-38
	U24ArrayTypeU2456_t239899001  ___U24U24fieldU2D38_28;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-39
	U24ArrayTypeU2416_t3380194243  ___U24U24fieldU2D39_29;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-40
	U24ArrayTypeU2448_t1074680674  ___U24U24fieldU2D40_30;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-41
	U24ArrayTypeU242048_t3961179899  ___U24U24fieldU2D41_31;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-42
	U24ArrayTypeU242048_t3961179899  ___U24U24fieldU2D42_32;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-43
	U24ArrayTypeU24256_t3535968740  ___U24U24fieldU2D43_33;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-44
	U24ArrayTypeU24256_t3535968740  ___U24U24fieldU2D44_34;
	// <PrivateImplementationDetails>/$ArrayType$120 <PrivateImplementationDetails>::$$field-45
	U24ArrayTypeU24120_t1413270009  ___U24U24fieldU2D45_35;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-46
	U24ArrayTypeU24256_t3535968740  ___U24U24fieldU2D46_36;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-47
	U24ArrayTypeU24256_t3535968740  ___U24U24fieldU2D47_37;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-48
	U24ArrayTypeU241024_t1609428469  ___U24U24fieldU2D48_38;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-49
	U24ArrayTypeU241024_t1609428469  ___U24U24fieldU2D49_39;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-50
	U24ArrayTypeU241024_t1609428469  ___U24U24fieldU2D50_40;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-51
	U24ArrayTypeU241024_t1609428469  ___U24U24fieldU2D51_41;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-52
	U24ArrayTypeU241024_t1609428469  ___U24U24fieldU2D52_42;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-53
	U24ArrayTypeU241024_t1609428469  ___U24U24fieldU2D53_43;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-54
	U24ArrayTypeU241024_t1609428469  ___U24U24fieldU2D54_44;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-55
	U24ArrayTypeU241024_t1609428469  ___U24U24fieldU2D55_45;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-56
	U24ArrayTypeU24256_t3535968740  ___U24U24fieldU2D56_46;
	// <PrivateImplementationDetails>/$ArrayType$640 <PrivateImplementationDetails>::$$field-57
	U24ArrayTypeU24640_t3342558379  ___U24U24fieldU2D57_47;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-60
	U24ArrayTypeU2412_t1299012761  ___U24U24fieldU2D60_48;
	// <PrivateImplementationDetails>/$ArrayType$128 <PrivateImplementationDetails>::$$field-62
	U24ArrayTypeU24128_t1235336854  ___U24U24fieldU2D62_49;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-63
	U24ArrayTypeU24256_t3535968740  ___U24U24fieldU2D63_50;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-64
	U24ArrayTypeU2452_t900058358  ___U24U24fieldU2D64_51;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-65
	U24ArrayTypeU2452_t900058358  ___U24U24fieldU2D65_52;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU2456_t239899001  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU2456_t239899001 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU2456_t239899001  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D1_1)); }
	inline U24ArrayTypeU2424_t2624162912  get_U24U24fieldU2D1_1() const { return ___U24U24fieldU2D1_1; }
	inline U24ArrayTypeU2424_t2624162912 * get_address_of_U24U24fieldU2D1_1() { return &___U24U24fieldU2D1_1; }
	inline void set_U24U24fieldU2D1_1(U24ArrayTypeU2424_t2624162912  value)
	{
		___U24U24fieldU2D1_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D2_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D2_2)); }
	inline U24ArrayTypeU2424_t2624162912  get_U24U24fieldU2D2_2() const { return ___U24U24fieldU2D2_2; }
	inline U24ArrayTypeU2424_t2624162912 * get_address_of_U24U24fieldU2D2_2() { return &___U24U24fieldU2D2_2; }
	inline void set_U24U24fieldU2D2_2(U24ArrayTypeU2424_t2624162912  value)
	{
		___U24U24fieldU2D2_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D3_3)); }
	inline U24ArrayTypeU2424_t2624162912  get_U24U24fieldU2D3_3() const { return ___U24U24fieldU2D3_3; }
	inline U24ArrayTypeU2424_t2624162912 * get_address_of_U24U24fieldU2D3_3() { return &___U24U24fieldU2D3_3; }
	inline void set_U24U24fieldU2D3_3(U24ArrayTypeU2424_t2624162912  value)
	{
		___U24U24fieldU2D3_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D4_4)); }
	inline U24ArrayTypeU2424_t2624162912  get_U24U24fieldU2D4_4() const { return ___U24U24fieldU2D4_4; }
	inline U24ArrayTypeU2424_t2624162912 * get_address_of_U24U24fieldU2D4_4() { return &___U24U24fieldU2D4_4; }
	inline void set_U24U24fieldU2D4_4(U24ArrayTypeU2424_t2624162912  value)
	{
		___U24U24fieldU2D4_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D5_5)); }
	inline U24ArrayTypeU2416_t3380194243  get_U24U24fieldU2D5_5() const { return ___U24U24fieldU2D5_5; }
	inline U24ArrayTypeU2416_t3380194243 * get_address_of_U24U24fieldU2D5_5() { return &___U24U24fieldU2D5_5; }
	inline void set_U24U24fieldU2D5_5(U24ArrayTypeU2416_t3380194243  value)
	{
		___U24U24fieldU2D5_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D6_6)); }
	inline U24ArrayTypeU2416_t3380194243  get_U24U24fieldU2D6_6() const { return ___U24U24fieldU2D6_6; }
	inline U24ArrayTypeU2416_t3380194243 * get_address_of_U24U24fieldU2D6_6() { return &___U24U24fieldU2D6_6; }
	inline void set_U24U24fieldU2D6_6(U24ArrayTypeU2416_t3380194243  value)
	{
		___U24U24fieldU2D6_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D15_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D15_7)); }
	inline U24ArrayTypeU243132_t1888951863  get_U24U24fieldU2D15_7() const { return ___U24U24fieldU2D15_7; }
	inline U24ArrayTypeU243132_t1888951863 * get_address_of_U24U24fieldU2D15_7() { return &___U24U24fieldU2D15_7; }
	inline void set_U24U24fieldU2D15_7(U24ArrayTypeU243132_t1888951863  value)
	{
		___U24U24fieldU2D15_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D16_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D16_8)); }
	inline U24ArrayTypeU2420_t1159733451  get_U24U24fieldU2D16_8() const { return ___U24U24fieldU2D16_8; }
	inline U24ArrayTypeU2420_t1159733451 * get_address_of_U24U24fieldU2D16_8() { return &___U24U24fieldU2D16_8; }
	inline void set_U24U24fieldU2D16_8(U24ArrayTypeU2420_t1159733451  value)
	{
		___U24U24fieldU2D16_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D17_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D17_9)); }
	inline U24ArrayTypeU2432_t2039541092  get_U24U24fieldU2D17_9() const { return ___U24U24fieldU2D17_9; }
	inline U24ArrayTypeU2432_t2039541092 * get_address_of_U24U24fieldU2D17_9() { return &___U24U24fieldU2D17_9; }
	inline void set_U24U24fieldU2D17_9(U24ArrayTypeU2432_t2039541092  value)
	{
		___U24U24fieldU2D17_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D18_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D18_10)); }
	inline U24ArrayTypeU2448_t1074680674  get_U24U24fieldU2D18_10() const { return ___U24U24fieldU2D18_10; }
	inline U24ArrayTypeU2448_t1074680674 * get_address_of_U24U24fieldU2D18_10() { return &___U24U24fieldU2D18_10; }
	inline void set_U24U24fieldU2D18_10(U24ArrayTypeU2448_t1074680674  value)
	{
		___U24U24fieldU2D18_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D19_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D19_11)); }
	inline U24ArrayTypeU2464_t2623078705  get_U24U24fieldU2D19_11() const { return ___U24U24fieldU2D19_11; }
	inline U24ArrayTypeU2464_t2623078705 * get_address_of_U24U24fieldU2D19_11() { return &___U24U24fieldU2D19_11; }
	inline void set_U24U24fieldU2D19_11(U24ArrayTypeU2464_t2623078705  value)
	{
		___U24U24fieldU2D19_11 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D20_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D20_12)); }
	inline U24ArrayTypeU2464_t2623078705  get_U24U24fieldU2D20_12() const { return ___U24U24fieldU2D20_12; }
	inline U24ArrayTypeU2464_t2623078705 * get_address_of_U24U24fieldU2D20_12() { return &___U24U24fieldU2D20_12; }
	inline void set_U24U24fieldU2D20_12(U24ArrayTypeU2464_t2623078705  value)
	{
		___U24U24fieldU2D20_12 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D21_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D21_13)); }
	inline U24ArrayTypeU2464_t2623078705  get_U24U24fieldU2D21_13() const { return ___U24U24fieldU2D21_13; }
	inline U24ArrayTypeU2464_t2623078705 * get_address_of_U24U24fieldU2D21_13() { return &___U24U24fieldU2D21_13; }
	inline void set_U24U24fieldU2D21_13(U24ArrayTypeU2464_t2623078705  value)
	{
		___U24U24fieldU2D21_13 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D22_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D22_14)); }
	inline U24ArrayTypeU2464_t2623078705  get_U24U24fieldU2D22_14() const { return ___U24U24fieldU2D22_14; }
	inline U24ArrayTypeU2464_t2623078705 * get_address_of_U24U24fieldU2D22_14() { return &___U24U24fieldU2D22_14; }
	inline void set_U24U24fieldU2D22_14(U24ArrayTypeU2464_t2623078705  value)
	{
		___U24U24fieldU2D22_14 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D23_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D23_15)); }
	inline U24ArrayTypeU2412_t1299012761  get_U24U24fieldU2D23_15() const { return ___U24U24fieldU2D23_15; }
	inline U24ArrayTypeU2412_t1299012761 * get_address_of_U24U24fieldU2D23_15() { return &___U24U24fieldU2D23_15; }
	inline void set_U24U24fieldU2D23_15(U24ArrayTypeU2412_t1299012761  value)
	{
		___U24U24fieldU2D23_15 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D24_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D24_16)); }
	inline U24ArrayTypeU2412_t1299012761  get_U24U24fieldU2D24_16() const { return ___U24U24fieldU2D24_16; }
	inline U24ArrayTypeU2412_t1299012761 * get_address_of_U24U24fieldU2D24_16() { return &___U24U24fieldU2D24_16; }
	inline void set_U24U24fieldU2D24_16(U24ArrayTypeU2412_t1299012761  value)
	{
		___U24U24fieldU2D24_16 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D25_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D25_17)); }
	inline U24ArrayTypeU2412_t1299012761  get_U24U24fieldU2D25_17() const { return ___U24U24fieldU2D25_17; }
	inline U24ArrayTypeU2412_t1299012761 * get_address_of_U24U24fieldU2D25_17() { return &___U24U24fieldU2D25_17; }
	inline void set_U24U24fieldU2D25_17(U24ArrayTypeU2412_t1299012761  value)
	{
		___U24U24fieldU2D25_17 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D26_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D26_18)); }
	inline U24ArrayTypeU2416_t3380194243  get_U24U24fieldU2D26_18() const { return ___U24U24fieldU2D26_18; }
	inline U24ArrayTypeU2416_t3380194243 * get_address_of_U24U24fieldU2D26_18() { return &___U24U24fieldU2D26_18; }
	inline void set_U24U24fieldU2D26_18(U24ArrayTypeU2416_t3380194243  value)
	{
		___U24U24fieldU2D26_18 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D27_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D27_19)); }
	inline U24ArrayTypeU24136_t1971499818  get_U24U24fieldU2D27_19() const { return ___U24U24fieldU2D27_19; }
	inline U24ArrayTypeU24136_t1971499818 * get_address_of_U24U24fieldU2D27_19() { return &___U24U24fieldU2D27_19; }
	inline void set_U24U24fieldU2D27_19(U24ArrayTypeU24136_t1971499818  value)
	{
		___U24U24fieldU2D27_19 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D30_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D30_20)); }
	inline U24ArrayTypeU2472_t3179949102  get_U24U24fieldU2D30_20() const { return ___U24U24fieldU2D30_20; }
	inline U24ArrayTypeU2472_t3179949102 * get_address_of_U24U24fieldU2D30_20() { return &___U24U24fieldU2D30_20; }
	inline void set_U24U24fieldU2D30_20(U24ArrayTypeU2472_t3179949102  value)
	{
		___U24U24fieldU2D30_20 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D31_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D31_21)); }
	inline U24ArrayTypeU248_t3835539436  get_U24U24fieldU2D31_21() const { return ___U24U24fieldU2D31_21; }
	inline U24ArrayTypeU248_t3835539436 * get_address_of_U24U24fieldU2D31_21() { return &___U24U24fieldU2D31_21; }
	inline void set_U24U24fieldU2D31_21(U24ArrayTypeU248_t3835539436  value)
	{
		___U24U24fieldU2D31_21 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D32_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D32_22)); }
	inline U24ArrayTypeU2420_t1159733451  get_U24U24fieldU2D32_22() const { return ___U24U24fieldU2D32_22; }
	inline U24ArrayTypeU2420_t1159733451 * get_address_of_U24U24fieldU2D32_22() { return &___U24U24fieldU2D32_22; }
	inline void set_U24U24fieldU2D32_22(U24ArrayTypeU2420_t1159733451  value)
	{
		___U24U24fieldU2D32_22 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D33_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D33_23)); }
	inline U24ArrayTypeU2464_t2623078705  get_U24U24fieldU2D33_23() const { return ___U24U24fieldU2D33_23; }
	inline U24ArrayTypeU2464_t2623078705 * get_address_of_U24U24fieldU2D33_23() { return &___U24U24fieldU2D33_23; }
	inline void set_U24U24fieldU2D33_23(U24ArrayTypeU2464_t2623078705  value)
	{
		___U24U24fieldU2D33_23 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D34_24() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D34_24)); }
	inline U24ArrayTypeU24124_t1967030645  get_U24U24fieldU2D34_24() const { return ___U24U24fieldU2D34_24; }
	inline U24ArrayTypeU24124_t1967030645 * get_address_of_U24U24fieldU2D34_24() { return &___U24U24fieldU2D34_24; }
	inline void set_U24U24fieldU2D34_24(U24ArrayTypeU24124_t1967030645  value)
	{
		___U24U24fieldU2D34_24 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D35_25() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D35_25)); }
	inline U24ArrayTypeU2432_t2039541092  get_U24U24fieldU2D35_25() const { return ___U24U24fieldU2D35_25; }
	inline U24ArrayTypeU2432_t2039541092 * get_address_of_U24U24fieldU2D35_25() { return &___U24U24fieldU2D35_25; }
	inline void set_U24U24fieldU2D35_25(U24ArrayTypeU2432_t2039541092  value)
	{
		___U24U24fieldU2D35_25 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D36_26() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D36_26)); }
	inline U24ArrayTypeU2496_t4150189610  get_U24U24fieldU2D36_26() const { return ___U24U24fieldU2D36_26; }
	inline U24ArrayTypeU2496_t4150189610 * get_address_of_U24U24fieldU2D36_26() { return &___U24U24fieldU2D36_26; }
	inline void set_U24U24fieldU2D36_26(U24ArrayTypeU2496_t4150189610  value)
	{
		___U24U24fieldU2D36_26 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D37_27() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D37_27)); }
	inline U24ArrayTypeU242048_t3961179899  get_U24U24fieldU2D37_27() const { return ___U24U24fieldU2D37_27; }
	inline U24ArrayTypeU242048_t3961179899 * get_address_of_U24U24fieldU2D37_27() { return &___U24U24fieldU2D37_27; }
	inline void set_U24U24fieldU2D37_27(U24ArrayTypeU242048_t3961179899  value)
	{
		___U24U24fieldU2D37_27 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D38_28() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D38_28)); }
	inline U24ArrayTypeU2456_t239899001  get_U24U24fieldU2D38_28() const { return ___U24U24fieldU2D38_28; }
	inline U24ArrayTypeU2456_t239899001 * get_address_of_U24U24fieldU2D38_28() { return &___U24U24fieldU2D38_28; }
	inline void set_U24U24fieldU2D38_28(U24ArrayTypeU2456_t239899001  value)
	{
		___U24U24fieldU2D38_28 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D39_29() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D39_29)); }
	inline U24ArrayTypeU2416_t3380194243  get_U24U24fieldU2D39_29() const { return ___U24U24fieldU2D39_29; }
	inline U24ArrayTypeU2416_t3380194243 * get_address_of_U24U24fieldU2D39_29() { return &___U24U24fieldU2D39_29; }
	inline void set_U24U24fieldU2D39_29(U24ArrayTypeU2416_t3380194243  value)
	{
		___U24U24fieldU2D39_29 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D40_30() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D40_30)); }
	inline U24ArrayTypeU2448_t1074680674  get_U24U24fieldU2D40_30() const { return ___U24U24fieldU2D40_30; }
	inline U24ArrayTypeU2448_t1074680674 * get_address_of_U24U24fieldU2D40_30() { return &___U24U24fieldU2D40_30; }
	inline void set_U24U24fieldU2D40_30(U24ArrayTypeU2448_t1074680674  value)
	{
		___U24U24fieldU2D40_30 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D41_31() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D41_31)); }
	inline U24ArrayTypeU242048_t3961179899  get_U24U24fieldU2D41_31() const { return ___U24U24fieldU2D41_31; }
	inline U24ArrayTypeU242048_t3961179899 * get_address_of_U24U24fieldU2D41_31() { return &___U24U24fieldU2D41_31; }
	inline void set_U24U24fieldU2D41_31(U24ArrayTypeU242048_t3961179899  value)
	{
		___U24U24fieldU2D41_31 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D42_32() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D42_32)); }
	inline U24ArrayTypeU242048_t3961179899  get_U24U24fieldU2D42_32() const { return ___U24U24fieldU2D42_32; }
	inline U24ArrayTypeU242048_t3961179899 * get_address_of_U24U24fieldU2D42_32() { return &___U24U24fieldU2D42_32; }
	inline void set_U24U24fieldU2D42_32(U24ArrayTypeU242048_t3961179899  value)
	{
		___U24U24fieldU2D42_32 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D43_33() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D43_33)); }
	inline U24ArrayTypeU24256_t3535968740  get_U24U24fieldU2D43_33() const { return ___U24U24fieldU2D43_33; }
	inline U24ArrayTypeU24256_t3535968740 * get_address_of_U24U24fieldU2D43_33() { return &___U24U24fieldU2D43_33; }
	inline void set_U24U24fieldU2D43_33(U24ArrayTypeU24256_t3535968740  value)
	{
		___U24U24fieldU2D43_33 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D44_34() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D44_34)); }
	inline U24ArrayTypeU24256_t3535968740  get_U24U24fieldU2D44_34() const { return ___U24U24fieldU2D44_34; }
	inline U24ArrayTypeU24256_t3535968740 * get_address_of_U24U24fieldU2D44_34() { return &___U24U24fieldU2D44_34; }
	inline void set_U24U24fieldU2D44_34(U24ArrayTypeU24256_t3535968740  value)
	{
		___U24U24fieldU2D44_34 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D45_35() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D45_35)); }
	inline U24ArrayTypeU24120_t1413270009  get_U24U24fieldU2D45_35() const { return ___U24U24fieldU2D45_35; }
	inline U24ArrayTypeU24120_t1413270009 * get_address_of_U24U24fieldU2D45_35() { return &___U24U24fieldU2D45_35; }
	inline void set_U24U24fieldU2D45_35(U24ArrayTypeU24120_t1413270009  value)
	{
		___U24U24fieldU2D45_35 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D46_36() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D46_36)); }
	inline U24ArrayTypeU24256_t3535968740  get_U24U24fieldU2D46_36() const { return ___U24U24fieldU2D46_36; }
	inline U24ArrayTypeU24256_t3535968740 * get_address_of_U24U24fieldU2D46_36() { return &___U24U24fieldU2D46_36; }
	inline void set_U24U24fieldU2D46_36(U24ArrayTypeU24256_t3535968740  value)
	{
		___U24U24fieldU2D46_36 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D47_37() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D47_37)); }
	inline U24ArrayTypeU24256_t3535968740  get_U24U24fieldU2D47_37() const { return ___U24U24fieldU2D47_37; }
	inline U24ArrayTypeU24256_t3535968740 * get_address_of_U24U24fieldU2D47_37() { return &___U24U24fieldU2D47_37; }
	inline void set_U24U24fieldU2D47_37(U24ArrayTypeU24256_t3535968740  value)
	{
		___U24U24fieldU2D47_37 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D48_38() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D48_38)); }
	inline U24ArrayTypeU241024_t1609428469  get_U24U24fieldU2D48_38() const { return ___U24U24fieldU2D48_38; }
	inline U24ArrayTypeU241024_t1609428469 * get_address_of_U24U24fieldU2D48_38() { return &___U24U24fieldU2D48_38; }
	inline void set_U24U24fieldU2D48_38(U24ArrayTypeU241024_t1609428469  value)
	{
		___U24U24fieldU2D48_38 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D49_39() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D49_39)); }
	inline U24ArrayTypeU241024_t1609428469  get_U24U24fieldU2D49_39() const { return ___U24U24fieldU2D49_39; }
	inline U24ArrayTypeU241024_t1609428469 * get_address_of_U24U24fieldU2D49_39() { return &___U24U24fieldU2D49_39; }
	inline void set_U24U24fieldU2D49_39(U24ArrayTypeU241024_t1609428469  value)
	{
		___U24U24fieldU2D49_39 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D50_40() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D50_40)); }
	inline U24ArrayTypeU241024_t1609428469  get_U24U24fieldU2D50_40() const { return ___U24U24fieldU2D50_40; }
	inline U24ArrayTypeU241024_t1609428469 * get_address_of_U24U24fieldU2D50_40() { return &___U24U24fieldU2D50_40; }
	inline void set_U24U24fieldU2D50_40(U24ArrayTypeU241024_t1609428469  value)
	{
		___U24U24fieldU2D50_40 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D51_41() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D51_41)); }
	inline U24ArrayTypeU241024_t1609428469  get_U24U24fieldU2D51_41() const { return ___U24U24fieldU2D51_41; }
	inline U24ArrayTypeU241024_t1609428469 * get_address_of_U24U24fieldU2D51_41() { return &___U24U24fieldU2D51_41; }
	inline void set_U24U24fieldU2D51_41(U24ArrayTypeU241024_t1609428469  value)
	{
		___U24U24fieldU2D51_41 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D52_42() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D52_42)); }
	inline U24ArrayTypeU241024_t1609428469  get_U24U24fieldU2D52_42() const { return ___U24U24fieldU2D52_42; }
	inline U24ArrayTypeU241024_t1609428469 * get_address_of_U24U24fieldU2D52_42() { return &___U24U24fieldU2D52_42; }
	inline void set_U24U24fieldU2D52_42(U24ArrayTypeU241024_t1609428469  value)
	{
		___U24U24fieldU2D52_42 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D53_43() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D53_43)); }
	inline U24ArrayTypeU241024_t1609428469  get_U24U24fieldU2D53_43() const { return ___U24U24fieldU2D53_43; }
	inline U24ArrayTypeU241024_t1609428469 * get_address_of_U24U24fieldU2D53_43() { return &___U24U24fieldU2D53_43; }
	inline void set_U24U24fieldU2D53_43(U24ArrayTypeU241024_t1609428469  value)
	{
		___U24U24fieldU2D53_43 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D54_44() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D54_44)); }
	inline U24ArrayTypeU241024_t1609428469  get_U24U24fieldU2D54_44() const { return ___U24U24fieldU2D54_44; }
	inline U24ArrayTypeU241024_t1609428469 * get_address_of_U24U24fieldU2D54_44() { return &___U24U24fieldU2D54_44; }
	inline void set_U24U24fieldU2D54_44(U24ArrayTypeU241024_t1609428469  value)
	{
		___U24U24fieldU2D54_44 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D55_45() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D55_45)); }
	inline U24ArrayTypeU241024_t1609428469  get_U24U24fieldU2D55_45() const { return ___U24U24fieldU2D55_45; }
	inline U24ArrayTypeU241024_t1609428469 * get_address_of_U24U24fieldU2D55_45() { return &___U24U24fieldU2D55_45; }
	inline void set_U24U24fieldU2D55_45(U24ArrayTypeU241024_t1609428469  value)
	{
		___U24U24fieldU2D55_45 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D56_46() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D56_46)); }
	inline U24ArrayTypeU24256_t3535968740  get_U24U24fieldU2D56_46() const { return ___U24U24fieldU2D56_46; }
	inline U24ArrayTypeU24256_t3535968740 * get_address_of_U24U24fieldU2D56_46() { return &___U24U24fieldU2D56_46; }
	inline void set_U24U24fieldU2D56_46(U24ArrayTypeU24256_t3535968740  value)
	{
		___U24U24fieldU2D56_46 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D57_47() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D57_47)); }
	inline U24ArrayTypeU24640_t3342558379  get_U24U24fieldU2D57_47() const { return ___U24U24fieldU2D57_47; }
	inline U24ArrayTypeU24640_t3342558379 * get_address_of_U24U24fieldU2D57_47() { return &___U24U24fieldU2D57_47; }
	inline void set_U24U24fieldU2D57_47(U24ArrayTypeU24640_t3342558379  value)
	{
		___U24U24fieldU2D57_47 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D60_48() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D60_48)); }
	inline U24ArrayTypeU2412_t1299012761  get_U24U24fieldU2D60_48() const { return ___U24U24fieldU2D60_48; }
	inline U24ArrayTypeU2412_t1299012761 * get_address_of_U24U24fieldU2D60_48() { return &___U24U24fieldU2D60_48; }
	inline void set_U24U24fieldU2D60_48(U24ArrayTypeU2412_t1299012761  value)
	{
		___U24U24fieldU2D60_48 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D62_49() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D62_49)); }
	inline U24ArrayTypeU24128_t1235336854  get_U24U24fieldU2D62_49() const { return ___U24U24fieldU2D62_49; }
	inline U24ArrayTypeU24128_t1235336854 * get_address_of_U24U24fieldU2D62_49() { return &___U24U24fieldU2D62_49; }
	inline void set_U24U24fieldU2D62_49(U24ArrayTypeU24128_t1235336854  value)
	{
		___U24U24fieldU2D62_49 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D63_50() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D63_50)); }
	inline U24ArrayTypeU24256_t3535968740  get_U24U24fieldU2D63_50() const { return ___U24U24fieldU2D63_50; }
	inline U24ArrayTypeU24256_t3535968740 * get_address_of_U24U24fieldU2D63_50() { return &___U24U24fieldU2D63_50; }
	inline void set_U24U24fieldU2D63_50(U24ArrayTypeU24256_t3535968740  value)
	{
		___U24U24fieldU2D63_50 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D64_51() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D64_51)); }
	inline U24ArrayTypeU2452_t900058358  get_U24U24fieldU2D64_51() const { return ___U24U24fieldU2D64_51; }
	inline U24ArrayTypeU2452_t900058358 * get_address_of_U24U24fieldU2D64_51() { return &___U24U24fieldU2D64_51; }
	inline void set_U24U24fieldU2D64_51(U24ArrayTypeU2452_t900058358  value)
	{
		___U24U24fieldU2D64_51 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D65_52() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields, ___U24U24fieldU2D65_52)); }
	inline U24ArrayTypeU2452_t900058358  get_U24U24fieldU2D65_52() const { return ___U24U24fieldU2D65_52; }
	inline U24ArrayTypeU2452_t900058358 * get_address_of_U24U24fieldU2D65_52() { return &___U24U24fieldU2D65_52; }
	inline void set_U24U24fieldU2D65_52(U24ArrayTypeU2452_t900058358  value)
	{
		___U24U24fieldU2D65_52 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2227229331_H
#ifndef UNITYSERIALIZATIONHOLDER_T3329187650_H
#define UNITYSERIALIZATIONHOLDER_T3329187650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder
struct  UnitySerializationHolder_t3329187650  : public RuntimeObject
{
public:
	// System.String System.UnitySerializationHolder::_data
	String_t* ____data_0;
	// System.UnitySerializationHolder/UnityType System.UnitySerializationHolder::_unityType
	uint8_t ____unityType_1;
	// System.String System.UnitySerializationHolder::_assemblyName
	String_t* ____assemblyName_2;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t3329187650, ____data_0)); }
	inline String_t* get__data_0() const { return ____data_0; }
	inline String_t** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(String_t* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((&____data_0), value);
	}

	inline static int32_t get_offset_of__unityType_1() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t3329187650, ____unityType_1)); }
	inline uint8_t get__unityType_1() const { return ____unityType_1; }
	inline uint8_t* get_address_of__unityType_1() { return &____unityType_1; }
	inline void set__unityType_1(uint8_t value)
	{
		____unityType_1 = value;
	}

	inline static int32_t get_offset_of__assemblyName_2() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t3329187650, ____assemblyName_2)); }
	inline String_t* get__assemblyName_2() const { return ____assemblyName_2; }
	inline String_t** get_address_of__assemblyName_2() { return &____assemblyName_2; }
	inline void set__assemblyName_2(String_t* value)
	{
		____assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&____assemblyName_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSERIALIZATIONHOLDER_T3329187650_H
#ifndef X509CHAIN_T2808519783_H
#define X509CHAIN_T2808519783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Chain
struct  X509Chain_t2808519783  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::roots
	X509CertificateCollection_t671522817 * ___roots_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::certs
	X509CertificateCollection_t671522817 * ___certs_1;
	// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::_root
	X509Certificate_t949223364 * ____root_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::_chain
	X509CertificateCollection_t671522817 * ____chain_3;
	// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::_status
	int32_t ____status_4;

public:
	inline static int32_t get_offset_of_roots_0() { return static_cast<int32_t>(offsetof(X509Chain_t2808519783, ___roots_0)); }
	inline X509CertificateCollection_t671522817 * get_roots_0() const { return ___roots_0; }
	inline X509CertificateCollection_t671522817 ** get_address_of_roots_0() { return &___roots_0; }
	inline void set_roots_0(X509CertificateCollection_t671522817 * value)
	{
		___roots_0 = value;
		Il2CppCodeGenWriteBarrier((&___roots_0), value);
	}

	inline static int32_t get_offset_of_certs_1() { return static_cast<int32_t>(offsetof(X509Chain_t2808519783, ___certs_1)); }
	inline X509CertificateCollection_t671522817 * get_certs_1() const { return ___certs_1; }
	inline X509CertificateCollection_t671522817 ** get_address_of_certs_1() { return &___certs_1; }
	inline void set_certs_1(X509CertificateCollection_t671522817 * value)
	{
		___certs_1 = value;
		Il2CppCodeGenWriteBarrier((&___certs_1), value);
	}

	inline static int32_t get_offset_of__root_2() { return static_cast<int32_t>(offsetof(X509Chain_t2808519783, ____root_2)); }
	inline X509Certificate_t949223364 * get__root_2() const { return ____root_2; }
	inline X509Certificate_t949223364 ** get_address_of__root_2() { return &____root_2; }
	inline void set__root_2(X509Certificate_t949223364 * value)
	{
		____root_2 = value;
		Il2CppCodeGenWriteBarrier((&____root_2), value);
	}

	inline static int32_t get_offset_of__chain_3() { return static_cast<int32_t>(offsetof(X509Chain_t2808519783, ____chain_3)); }
	inline X509CertificateCollection_t671522817 * get__chain_3() const { return ____chain_3; }
	inline X509CertificateCollection_t671522817 ** get_address_of__chain_3() { return &____chain_3; }
	inline void set__chain_3(X509CertificateCollection_t671522817 * value)
	{
		____chain_3 = value;
		Il2CppCodeGenWriteBarrier((&____chain_3), value);
	}

	inline static int32_t get_offset_of__status_4() { return static_cast<int32_t>(offsetof(X509Chain_t2808519783, ____status_4)); }
	inline int32_t get__status_4() const { return ____status_4; }
	inline int32_t* get_address_of__status_4() { return &____status_4; }
	inline void set__status_4(int32_t value)
	{
		____status_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAIN_T2808519783_H
#ifndef DATETIME_T1281661550_H
#define DATETIME_T1281661550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t1281661550 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t1164646297  ___ticks_10;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_11;

public:
	inline static int32_t get_offset_of_ticks_10() { return static_cast<int32_t>(offsetof(DateTime_t1281661550, ___ticks_10)); }
	inline TimeSpan_t1164646297  get_ticks_10() const { return ___ticks_10; }
	inline TimeSpan_t1164646297 * get_address_of_ticks_10() { return &___ticks_10; }
	inline void set_ticks_10(TimeSpan_t1164646297  value)
	{
		___ticks_10 = value;
	}

	inline static int32_t get_offset_of_kind_11() { return static_cast<int32_t>(offsetof(DateTime_t1281661550, ___kind_11)); }
	inline int32_t get_kind_11() const { return ___kind_11; }
	inline int32_t* get_address_of_kind_11() { return &___kind_11; }
	inline void set_kind_11(int32_t value)
	{
		___kind_11 = value;
	}
};

struct DateTime_t1281661550_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t1281661550  ___MaxValue_12;
	// System.DateTime System.DateTime::MinValue
	DateTime_t1281661550  ___MinValue_13;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1453726374* ___ParseTimeFormats_14;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1453726374* ___ParseYearDayMonthFormats_15;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1453726374* ___ParseYearMonthDayFormats_16;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1453726374* ___ParseDayMonthYearFormats_17;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1453726374* ___ParseMonthDayYearFormats_18;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1453726374* ___MonthDayShortFormats_19;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1453726374* ___DayMonthShortFormats_20;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t2907286259* ___daysmonth_21;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t2907286259* ___daysmonthleap_22;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_23;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_24;

public:
	inline static int32_t get_offset_of_MaxValue_12() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___MaxValue_12)); }
	inline DateTime_t1281661550  get_MaxValue_12() const { return ___MaxValue_12; }
	inline DateTime_t1281661550 * get_address_of_MaxValue_12() { return &___MaxValue_12; }
	inline void set_MaxValue_12(DateTime_t1281661550  value)
	{
		___MaxValue_12 = value;
	}

	inline static int32_t get_offset_of_MinValue_13() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___MinValue_13)); }
	inline DateTime_t1281661550  get_MinValue_13() const { return ___MinValue_13; }
	inline DateTime_t1281661550 * get_address_of_MinValue_13() { return &___MinValue_13; }
	inline void set_MinValue_13(DateTime_t1281661550  value)
	{
		___MinValue_13 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_14() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___ParseTimeFormats_14)); }
	inline StringU5BU5D_t1453726374* get_ParseTimeFormats_14() const { return ___ParseTimeFormats_14; }
	inline StringU5BU5D_t1453726374** get_address_of_ParseTimeFormats_14() { return &___ParseTimeFormats_14; }
	inline void set_ParseTimeFormats_14(StringU5BU5D_t1453726374* value)
	{
		___ParseTimeFormats_14 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_14), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_15() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___ParseYearDayMonthFormats_15)); }
	inline StringU5BU5D_t1453726374* get_ParseYearDayMonthFormats_15() const { return ___ParseYearDayMonthFormats_15; }
	inline StringU5BU5D_t1453726374** get_address_of_ParseYearDayMonthFormats_15() { return &___ParseYearDayMonthFormats_15; }
	inline void set_ParseYearDayMonthFormats_15(StringU5BU5D_t1453726374* value)
	{
		___ParseYearDayMonthFormats_15 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_15), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_16() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___ParseYearMonthDayFormats_16)); }
	inline StringU5BU5D_t1453726374* get_ParseYearMonthDayFormats_16() const { return ___ParseYearMonthDayFormats_16; }
	inline StringU5BU5D_t1453726374** get_address_of_ParseYearMonthDayFormats_16() { return &___ParseYearMonthDayFormats_16; }
	inline void set_ParseYearMonthDayFormats_16(StringU5BU5D_t1453726374* value)
	{
		___ParseYearMonthDayFormats_16 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_16), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_17() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___ParseDayMonthYearFormats_17)); }
	inline StringU5BU5D_t1453726374* get_ParseDayMonthYearFormats_17() const { return ___ParseDayMonthYearFormats_17; }
	inline StringU5BU5D_t1453726374** get_address_of_ParseDayMonthYearFormats_17() { return &___ParseDayMonthYearFormats_17; }
	inline void set_ParseDayMonthYearFormats_17(StringU5BU5D_t1453726374* value)
	{
		___ParseDayMonthYearFormats_17 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_17), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_18() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___ParseMonthDayYearFormats_18)); }
	inline StringU5BU5D_t1453726374* get_ParseMonthDayYearFormats_18() const { return ___ParseMonthDayYearFormats_18; }
	inline StringU5BU5D_t1453726374** get_address_of_ParseMonthDayYearFormats_18() { return &___ParseMonthDayYearFormats_18; }
	inline void set_ParseMonthDayYearFormats_18(StringU5BU5D_t1453726374* value)
	{
		___ParseMonthDayYearFormats_18 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_18), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_19() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___MonthDayShortFormats_19)); }
	inline StringU5BU5D_t1453726374* get_MonthDayShortFormats_19() const { return ___MonthDayShortFormats_19; }
	inline StringU5BU5D_t1453726374** get_address_of_MonthDayShortFormats_19() { return &___MonthDayShortFormats_19; }
	inline void set_MonthDayShortFormats_19(StringU5BU5D_t1453726374* value)
	{
		___MonthDayShortFormats_19 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_19), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_20() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___DayMonthShortFormats_20)); }
	inline StringU5BU5D_t1453726374* get_DayMonthShortFormats_20() const { return ___DayMonthShortFormats_20; }
	inline StringU5BU5D_t1453726374** get_address_of_DayMonthShortFormats_20() { return &___DayMonthShortFormats_20; }
	inline void set_DayMonthShortFormats_20(StringU5BU5D_t1453726374* value)
	{
		___DayMonthShortFormats_20 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_20), value);
	}

	inline static int32_t get_offset_of_daysmonth_21() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___daysmonth_21)); }
	inline Int32U5BU5D_t2907286259* get_daysmonth_21() const { return ___daysmonth_21; }
	inline Int32U5BU5D_t2907286259** get_address_of_daysmonth_21() { return &___daysmonth_21; }
	inline void set_daysmonth_21(Int32U5BU5D_t2907286259* value)
	{
		___daysmonth_21 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_21), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_22() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___daysmonthleap_22)); }
	inline Int32U5BU5D_t2907286259* get_daysmonthleap_22() const { return ___daysmonthleap_22; }
	inline Int32U5BU5D_t2907286259** get_address_of_daysmonthleap_22() { return &___daysmonthleap_22; }
	inline void set_daysmonthleap_22(Int32U5BU5D_t2907286259* value)
	{
		___daysmonthleap_22 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_22), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_23() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___to_local_time_span_object_23)); }
	inline RuntimeObject * get_to_local_time_span_object_23() const { return ___to_local_time_span_object_23; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_23() { return &___to_local_time_span_object_23; }
	inline void set_to_local_time_span_object_23(RuntimeObject * value)
	{
		___to_local_time_span_object_23 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_23), value);
	}

	inline static int32_t get_offset_of_last_now_24() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___last_now_24)); }
	inline int64_t get_last_now_24() const { return ___last_now_24; }
	inline int64_t* get_address_of_last_now_24() { return &___last_now_24; }
	inline void set_last_now_24(int64_t value)
	{
		___last_now_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T1281661550_H
#ifndef SYMMETRICALGORITHM_T154777005_H
#define SYMMETRICALGORITHM_T154777005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t154777005  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t3520677791* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t3520677791* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t1077440025* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t1077440025* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t154777005, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t154777005, ___IVValue_1)); }
	inline ByteU5BU5D_t3520677791* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t3520677791** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t3520677791* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t154777005, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t154777005, ___KeyValue_3)); }
	inline ByteU5BU5D_t3520677791* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t3520677791** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t3520677791* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t154777005, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t1077440025* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t1077440025** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t1077440025* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t154777005, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t1077440025* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t1077440025** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t1077440025* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t154777005, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t154777005, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t154777005, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t154777005, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T154777005_H
#ifndef MULTICASTDELEGATE_T2787063942_H
#define MULTICASTDELEGATE_T2787063942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t2787063942  : public Delegate_t1486180179
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t2787063942 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t2787063942 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2787063942, ___prev_9)); }
	inline MulticastDelegate_t2787063942 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t2787063942 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t2787063942 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2787063942, ___kpm_next_10)); }
	inline MulticastDelegate_t2787063942 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t2787063942 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t2787063942 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T2787063942_H
#ifndef RC4_T3725170660_H
#define RC4_T3725170660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RC4
struct  RC4_t3725170660  : public SymmetricAlgorithm_t154777005
{
public:

public:
};

struct RC4_t3725170660_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalBlockSizes
	KeySizesU5BU5D_t1077440025* ___s_legalBlockSizes_10;
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalKeySizes
	KeySizesU5BU5D_t1077440025* ___s_legalKeySizes_11;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_10() { return static_cast<int32_t>(offsetof(RC4_t3725170660_StaticFields, ___s_legalBlockSizes_10)); }
	inline KeySizesU5BU5D_t1077440025* get_s_legalBlockSizes_10() const { return ___s_legalBlockSizes_10; }
	inline KeySizesU5BU5D_t1077440025** get_address_of_s_legalBlockSizes_10() { return &___s_legalBlockSizes_10; }
	inline void set_s_legalBlockSizes_10(KeySizesU5BU5D_t1077440025* value)
	{
		___s_legalBlockSizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_10), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_11() { return static_cast<int32_t>(offsetof(RC4_t3725170660_StaticFields, ___s_legalKeySizes_11)); }
	inline KeySizesU5BU5D_t1077440025* get_s_legalKeySizes_11() const { return ___s_legalKeySizes_11; }
	inline KeySizesU5BU5D_t1077440025** get_address_of_s_legalKeySizes_11() { return &___s_legalKeySizes_11; }
	inline void set_s_legalKeySizes_11(KeySizesU5BU5D_t1077440025* value)
	{
		___s_legalKeySizes_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC4_T3725170660_H
#ifndef PRIMALITYTEST_T560706859_H
#define PRIMALITYTEST_T560706859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTest
struct  PrimalityTest_t560706859  : public MulticastDelegate_t2787063942
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTEST_T560706859_H
#ifndef MEMBERFILTER_T2935112866_H
#define MEMBERFILTER_T2935112866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberFilter
struct  MemberFilter_t2935112866  : public MulticastDelegate_t2787063942
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERFILTER_T2935112866_H
#ifndef TYPEFILTER_T2311996912_H
#define TYPEFILTER_T2311996912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeFilter
struct  TypeFilter_t2311996912  : public MulticastDelegate_t2787063942
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEFILTER_T2311996912_H
#ifndef CROSSCONTEXTDELEGATE_T2582950129_H
#define CROSSCONTEXTDELEGATE_T2582950129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.CrossContextDelegate
struct  CrossContextDelegate_t2582950129  : public MulticastDelegate_t2787063942
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSCONTEXTDELEGATE_T2582950129_H
#ifndef HEADERHANDLER_T4195860368_H
#define HEADERHANDLER_T4195860368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.HeaderHandler
struct  HeaderHandler_t4195860368  : public MulticastDelegate_t2787063942
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADERHANDLER_T4195860368_H
#ifndef SENDORPOSTCALLBACK_T1916518488_H
#define SENDORPOSTCALLBACK_T1916518488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SendOrPostCallback
struct  SendOrPostCallback_t1916518488  : public MulticastDelegate_t2787063942
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDORPOSTCALLBACK_T1916518488_H
#ifndef THREADSTART_T3826805759_H
#define THREADSTART_T3826805759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadStart
struct  ThreadStart_t3826805759  : public MulticastDelegate_t2787063942
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTART_T3826805759_H
#ifndef TIMERCALLBACK_T4070614020_H
#define TIMERCALLBACK_T4070614020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.TimerCallback
struct  TimerCallback_t4070614020  : public MulticastDelegate_t2787063942
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMERCALLBACK_T4070614020_H
#ifndef WAITCALLBACK_T3292671799_H
#define WAITCALLBACK_T3292671799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitCallback
struct  WaitCallback_t3292671799  : public MulticastDelegate_t2787063942
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITCALLBACK_T3292671799_H
#ifndef APPDOMAININITIALIZER_T2632965284_H
#define APPDOMAININITIALIZER_T2632965284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomainInitializer
struct  AppDomainInitializer_t2632965284  : public MulticastDelegate_t2787063942
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAININITIALIZER_T2632965284_H
#ifndef ASSEMBLYLOADEVENTHANDLER_T2761830666_H
#define ASSEMBLYLOADEVENTHANDLER_T2761830666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AssemblyLoadEventHandler
struct  AssemblyLoadEventHandler_t2761830666  : public MulticastDelegate_t2787063942
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYLOADEVENTHANDLER_T2761830666_H
#ifndef EVENTHANDLER_T55266864_H
#define EVENTHANDLER_T55266864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler
struct  EventHandler_t55266864  : public MulticastDelegate_t2787063942
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_T55266864_H
#ifndef X509CRLENTRY_T4061622036_H
#define X509CRLENTRY_T4061622036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Crl/X509CrlEntry
struct  X509CrlEntry_t4061622036  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::sn
	ByteU5BU5D_t3520677791* ___sn_0;
	// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::revocationDate
	DateTime_t1281661550  ___revocationDate_1;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::extensions
	X509ExtensionCollection_t2179390746 * ___extensions_2;

public:
	inline static int32_t get_offset_of_sn_0() { return static_cast<int32_t>(offsetof(X509CrlEntry_t4061622036, ___sn_0)); }
	inline ByteU5BU5D_t3520677791* get_sn_0() const { return ___sn_0; }
	inline ByteU5BU5D_t3520677791** get_address_of_sn_0() { return &___sn_0; }
	inline void set_sn_0(ByteU5BU5D_t3520677791* value)
	{
		___sn_0 = value;
		Il2CppCodeGenWriteBarrier((&___sn_0), value);
	}

	inline static int32_t get_offset_of_revocationDate_1() { return static_cast<int32_t>(offsetof(X509CrlEntry_t4061622036, ___revocationDate_1)); }
	inline DateTime_t1281661550  get_revocationDate_1() const { return ___revocationDate_1; }
	inline DateTime_t1281661550 * get_address_of_revocationDate_1() { return &___revocationDate_1; }
	inline void set_revocationDate_1(DateTime_t1281661550  value)
	{
		___revocationDate_1 = value;
	}

	inline static int32_t get_offset_of_extensions_2() { return static_cast<int32_t>(offsetof(X509CrlEntry_t4061622036, ___extensions_2)); }
	inline X509ExtensionCollection_t2179390746 * get_extensions_2() const { return ___extensions_2; }
	inline X509ExtensionCollection_t2179390746 ** get_address_of_extensions_2() { return &___extensions_2; }
	inline void set_extensions_2(X509ExtensionCollection_t2179390746 * value)
	{
		___extensions_2 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CRLENTRY_T4061622036_H
#ifndef X509CRL_T4243809916_H
#define X509CRL_T4243809916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Crl
struct  X509Crl_t4243809916  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Crl::issuer
	String_t* ___issuer_0;
	// System.Byte Mono.Security.X509.X509Crl::version
	uint8_t ___version_1;
	// System.DateTime Mono.Security.X509.X509Crl::thisUpdate
	DateTime_t1281661550  ___thisUpdate_2;
	// System.DateTime Mono.Security.X509.X509Crl::nextUpdate
	DateTime_t1281661550  ___nextUpdate_3;
	// System.Collections.ArrayList Mono.Security.X509.X509Crl::entries
	ArrayList_t3796796676 * ___entries_4;
	// System.String Mono.Security.X509.X509Crl::signatureOID
	String_t* ___signatureOID_5;
	// System.Byte[] Mono.Security.X509.X509Crl::signature
	ByteU5BU5D_t3520677791* ___signature_6;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::extensions
	X509ExtensionCollection_t2179390746 * ___extensions_7;
	// System.Byte[] Mono.Security.X509.X509Crl::encoded
	ByteU5BU5D_t3520677791* ___encoded_8;
	// System.Byte[] Mono.Security.X509.X509Crl::hash_value
	ByteU5BU5D_t3520677791* ___hash_value_9;

public:
	inline static int32_t get_offset_of_issuer_0() { return static_cast<int32_t>(offsetof(X509Crl_t4243809916, ___issuer_0)); }
	inline String_t* get_issuer_0() const { return ___issuer_0; }
	inline String_t** get_address_of_issuer_0() { return &___issuer_0; }
	inline void set_issuer_0(String_t* value)
	{
		___issuer_0 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(X509Crl_t4243809916, ___version_1)); }
	inline uint8_t get_version_1() const { return ___version_1; }
	inline uint8_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(uint8_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_thisUpdate_2() { return static_cast<int32_t>(offsetof(X509Crl_t4243809916, ___thisUpdate_2)); }
	inline DateTime_t1281661550  get_thisUpdate_2() const { return ___thisUpdate_2; }
	inline DateTime_t1281661550 * get_address_of_thisUpdate_2() { return &___thisUpdate_2; }
	inline void set_thisUpdate_2(DateTime_t1281661550  value)
	{
		___thisUpdate_2 = value;
	}

	inline static int32_t get_offset_of_nextUpdate_3() { return static_cast<int32_t>(offsetof(X509Crl_t4243809916, ___nextUpdate_3)); }
	inline DateTime_t1281661550  get_nextUpdate_3() const { return ___nextUpdate_3; }
	inline DateTime_t1281661550 * get_address_of_nextUpdate_3() { return &___nextUpdate_3; }
	inline void set_nextUpdate_3(DateTime_t1281661550  value)
	{
		___nextUpdate_3 = value;
	}

	inline static int32_t get_offset_of_entries_4() { return static_cast<int32_t>(offsetof(X509Crl_t4243809916, ___entries_4)); }
	inline ArrayList_t3796796676 * get_entries_4() const { return ___entries_4; }
	inline ArrayList_t3796796676 ** get_address_of_entries_4() { return &___entries_4; }
	inline void set_entries_4(ArrayList_t3796796676 * value)
	{
		___entries_4 = value;
		Il2CppCodeGenWriteBarrier((&___entries_4), value);
	}

	inline static int32_t get_offset_of_signatureOID_5() { return static_cast<int32_t>(offsetof(X509Crl_t4243809916, ___signatureOID_5)); }
	inline String_t* get_signatureOID_5() const { return ___signatureOID_5; }
	inline String_t** get_address_of_signatureOID_5() { return &___signatureOID_5; }
	inline void set_signatureOID_5(String_t* value)
	{
		___signatureOID_5 = value;
		Il2CppCodeGenWriteBarrier((&___signatureOID_5), value);
	}

	inline static int32_t get_offset_of_signature_6() { return static_cast<int32_t>(offsetof(X509Crl_t4243809916, ___signature_6)); }
	inline ByteU5BU5D_t3520677791* get_signature_6() const { return ___signature_6; }
	inline ByteU5BU5D_t3520677791** get_address_of_signature_6() { return &___signature_6; }
	inline void set_signature_6(ByteU5BU5D_t3520677791* value)
	{
		___signature_6 = value;
		Il2CppCodeGenWriteBarrier((&___signature_6), value);
	}

	inline static int32_t get_offset_of_extensions_7() { return static_cast<int32_t>(offsetof(X509Crl_t4243809916, ___extensions_7)); }
	inline X509ExtensionCollection_t2179390746 * get_extensions_7() const { return ___extensions_7; }
	inline X509ExtensionCollection_t2179390746 ** get_address_of_extensions_7() { return &___extensions_7; }
	inline void set_extensions_7(X509ExtensionCollection_t2179390746 * value)
	{
		___extensions_7 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_7), value);
	}

	inline static int32_t get_offset_of_encoded_8() { return static_cast<int32_t>(offsetof(X509Crl_t4243809916, ___encoded_8)); }
	inline ByteU5BU5D_t3520677791* get_encoded_8() const { return ___encoded_8; }
	inline ByteU5BU5D_t3520677791** get_address_of_encoded_8() { return &___encoded_8; }
	inline void set_encoded_8(ByteU5BU5D_t3520677791* value)
	{
		___encoded_8 = value;
		Il2CppCodeGenWriteBarrier((&___encoded_8), value);
	}

	inline static int32_t get_offset_of_hash_value_9() { return static_cast<int32_t>(offsetof(X509Crl_t4243809916, ___hash_value_9)); }
	inline ByteU5BU5D_t3520677791* get_hash_value_9() const { return ___hash_value_9; }
	inline ByteU5BU5D_t3520677791** get_address_of_hash_value_9() { return &___hash_value_9; }
	inline void set_hash_value_9(ByteU5BU5D_t3520677791* value)
	{
		___hash_value_9 = value;
		Il2CppCodeGenWriteBarrier((&___hash_value_9), value);
	}
};

struct X509Crl_t4243809916_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Crl::<>f__switch$map12
	Dictionary_2_t2164408312 * ___U3CU3Ef__switchU24map12_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Crl::<>f__switch$map13
	Dictionary_2_t2164408312 * ___U3CU3Ef__switchU24map13_11;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_10() { return static_cast<int32_t>(offsetof(X509Crl_t4243809916_StaticFields, ___U3CU3Ef__switchU24map12_10)); }
	inline Dictionary_2_t2164408312 * get_U3CU3Ef__switchU24map12_10() const { return ___U3CU3Ef__switchU24map12_10; }
	inline Dictionary_2_t2164408312 ** get_address_of_U3CU3Ef__switchU24map12_10() { return &___U3CU3Ef__switchU24map12_10; }
	inline void set_U3CU3Ef__switchU24map12_10(Dictionary_2_t2164408312 * value)
	{
		___U3CU3Ef__switchU24map12_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map12_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_11() { return static_cast<int32_t>(offsetof(X509Crl_t4243809916_StaticFields, ___U3CU3Ef__switchU24map13_11)); }
	inline Dictionary_2_t2164408312 * get_U3CU3Ef__switchU24map13_11() const { return ___U3CU3Ef__switchU24map13_11; }
	inline Dictionary_2_t2164408312 ** get_address_of_U3CU3Ef__switchU24map13_11() { return &___U3CU3Ef__switchU24map13_11; }
	inline void set_U3CU3Ef__switchU24map13_11(Dictionary_2_t2164408312 * value)
	{
		___U3CU3Ef__switchU24map13_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CRL_T4243809916_H
#ifndef KEYGENERATEDEVENTHANDLER_T1054481065_H
#define KEYGENERATEDEVENTHANDLER_T1054481065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct  KeyGeneratedEventHandler_t1054481065  : public MulticastDelegate_t2787063942
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYGENERATEDEVENTHANDLER_T1054481065_H
#ifndef X509CERTIFICATEBUILDER_T2258268421_H
#define X509CERTIFICATEBUILDER_T2258268421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateBuilder
struct  X509CertificateBuilder_t2258268421  : public X509Builder_t88911523
{
public:
	// System.Byte Mono.Security.X509.X509CertificateBuilder::version
	uint8_t ___version_3;
	// System.Byte[] Mono.Security.X509.X509CertificateBuilder::sn
	ByteU5BU5D_t3520677791* ___sn_4;
	// System.String Mono.Security.X509.X509CertificateBuilder::issuer
	String_t* ___issuer_5;
	// System.DateTime Mono.Security.X509.X509CertificateBuilder::notBefore
	DateTime_t1281661550  ___notBefore_6;
	// System.DateTime Mono.Security.X509.X509CertificateBuilder::notAfter
	DateTime_t1281661550  ___notAfter_7;
	// System.String Mono.Security.X509.X509CertificateBuilder::subject
	String_t* ___subject_8;
	// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.X509.X509CertificateBuilder::aa
	AsymmetricAlgorithm_t2859044483 * ___aa_9;
	// System.Byte[] Mono.Security.X509.X509CertificateBuilder::issuerUniqueID
	ByteU5BU5D_t3520677791* ___issuerUniqueID_10;
	// System.Byte[] Mono.Security.X509.X509CertificateBuilder::subjectUniqueID
	ByteU5BU5D_t3520677791* ___subjectUniqueID_11;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509CertificateBuilder::extensions
	X509ExtensionCollection_t2179390746 * ___extensions_12;

public:
	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t2258268421, ___version_3)); }
	inline uint8_t get_version_3() const { return ___version_3; }
	inline uint8_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(uint8_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_sn_4() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t2258268421, ___sn_4)); }
	inline ByteU5BU5D_t3520677791* get_sn_4() const { return ___sn_4; }
	inline ByteU5BU5D_t3520677791** get_address_of_sn_4() { return &___sn_4; }
	inline void set_sn_4(ByteU5BU5D_t3520677791* value)
	{
		___sn_4 = value;
		Il2CppCodeGenWriteBarrier((&___sn_4), value);
	}

	inline static int32_t get_offset_of_issuer_5() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t2258268421, ___issuer_5)); }
	inline String_t* get_issuer_5() const { return ___issuer_5; }
	inline String_t** get_address_of_issuer_5() { return &___issuer_5; }
	inline void set_issuer_5(String_t* value)
	{
		___issuer_5 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_5), value);
	}

	inline static int32_t get_offset_of_notBefore_6() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t2258268421, ___notBefore_6)); }
	inline DateTime_t1281661550  get_notBefore_6() const { return ___notBefore_6; }
	inline DateTime_t1281661550 * get_address_of_notBefore_6() { return &___notBefore_6; }
	inline void set_notBefore_6(DateTime_t1281661550  value)
	{
		___notBefore_6 = value;
	}

	inline static int32_t get_offset_of_notAfter_7() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t2258268421, ___notAfter_7)); }
	inline DateTime_t1281661550  get_notAfter_7() const { return ___notAfter_7; }
	inline DateTime_t1281661550 * get_address_of_notAfter_7() { return &___notAfter_7; }
	inline void set_notAfter_7(DateTime_t1281661550  value)
	{
		___notAfter_7 = value;
	}

	inline static int32_t get_offset_of_subject_8() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t2258268421, ___subject_8)); }
	inline String_t* get_subject_8() const { return ___subject_8; }
	inline String_t** get_address_of_subject_8() { return &___subject_8; }
	inline void set_subject_8(String_t* value)
	{
		___subject_8 = value;
		Il2CppCodeGenWriteBarrier((&___subject_8), value);
	}

	inline static int32_t get_offset_of_aa_9() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t2258268421, ___aa_9)); }
	inline AsymmetricAlgorithm_t2859044483 * get_aa_9() const { return ___aa_9; }
	inline AsymmetricAlgorithm_t2859044483 ** get_address_of_aa_9() { return &___aa_9; }
	inline void set_aa_9(AsymmetricAlgorithm_t2859044483 * value)
	{
		___aa_9 = value;
		Il2CppCodeGenWriteBarrier((&___aa_9), value);
	}

	inline static int32_t get_offset_of_issuerUniqueID_10() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t2258268421, ___issuerUniqueID_10)); }
	inline ByteU5BU5D_t3520677791* get_issuerUniqueID_10() const { return ___issuerUniqueID_10; }
	inline ByteU5BU5D_t3520677791** get_address_of_issuerUniqueID_10() { return &___issuerUniqueID_10; }
	inline void set_issuerUniqueID_10(ByteU5BU5D_t3520677791* value)
	{
		___issuerUniqueID_10 = value;
		Il2CppCodeGenWriteBarrier((&___issuerUniqueID_10), value);
	}

	inline static int32_t get_offset_of_subjectUniqueID_11() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t2258268421, ___subjectUniqueID_11)); }
	inline ByteU5BU5D_t3520677791* get_subjectUniqueID_11() const { return ___subjectUniqueID_11; }
	inline ByteU5BU5D_t3520677791** get_address_of_subjectUniqueID_11() { return &___subjectUniqueID_11; }
	inline void set_subjectUniqueID_11(ByteU5BU5D_t3520677791* value)
	{
		___subjectUniqueID_11 = value;
		Il2CppCodeGenWriteBarrier((&___subjectUniqueID_11), value);
	}

	inline static int32_t get_offset_of_extensions_12() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t2258268421, ___extensions_12)); }
	inline X509ExtensionCollection_t2179390746 * get_extensions_12() const { return ___extensions_12; }
	inline X509ExtensionCollection_t2179390746 ** get_address_of_extensions_12() { return &___extensions_12; }
	inline void set_extensions_12(X509ExtensionCollection_t2179390746 * value)
	{
		___extensions_12 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEBUILDER_T2258268421_H
#ifndef RESOLVEEVENTHANDLER_T3248261569_H
#define RESOLVEEVENTHANDLER_T3248261569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ResolveEventHandler
struct  ResolveEventHandler_t3248261569  : public MulticastDelegate_t2787063942
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTHANDLER_T3248261569_H
#ifndef UNHANDLEDEXCEPTIONEVENTHANDLER_T3743233501_H
#define UNHANDLEDEXCEPTIONEVENTHANDLER_T3743233501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_t3743233501  : public MulticastDelegate_t2787063942
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTHANDLER_T3743233501_H
#ifndef PARAMETERIZEDTHREADSTART_T3711966829_H
#define PARAMETERIZEDTHREADSTART_T3711966829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ParameterizedThreadStart
struct  ParameterizedThreadStart_t3711966829  : public MulticastDelegate_t2787063942
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERIZEDTHREADSTART_T3711966829_H
#ifndef X509CERTIFICATE_T949223364_H
#define X509CERTIFICATE_T949223364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Certificate
struct  X509Certificate_t949223364  : public RuntimeObject
{
public:
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::decoder
	ASN1_t1825750942 * ___decoder_0;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_encodedcert
	ByteU5BU5D_t3520677791* ___m_encodedcert_1;
	// System.DateTime Mono.Security.X509.X509Certificate::m_from
	DateTime_t1281661550  ___m_from_2;
	// System.DateTime Mono.Security.X509.X509Certificate::m_until
	DateTime_t1281661550  ___m_until_3;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::issuer
	ASN1_t1825750942 * ___issuer_4;
	// System.String Mono.Security.X509.X509Certificate::m_issuername
	String_t* ___m_issuername_5;
	// System.String Mono.Security.X509.X509Certificate::m_keyalgo
	String_t* ___m_keyalgo_6;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_keyalgoparams
	ByteU5BU5D_t3520677791* ___m_keyalgoparams_7;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::subject
	ASN1_t1825750942 * ___subject_8;
	// System.String Mono.Security.X509.X509Certificate::m_subject
	String_t* ___m_subject_9;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_publickey
	ByteU5BU5D_t3520677791* ___m_publickey_10;
	// System.Byte[] Mono.Security.X509.X509Certificate::signature
	ByteU5BU5D_t3520677791* ___signature_11;
	// System.String Mono.Security.X509.X509Certificate::m_signaturealgo
	String_t* ___m_signaturealgo_12;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_signaturealgoparams
	ByteU5BU5D_t3520677791* ___m_signaturealgoparams_13;
	// System.Byte[] Mono.Security.X509.X509Certificate::certhash
	ByteU5BU5D_t3520677791* ___certhash_14;
	// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::_rsa
	RSA_t401729117 * ____rsa_15;
	// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::_dsa
	DSA_t948809611 * ____dsa_16;
	// System.Int32 Mono.Security.X509.X509Certificate::version
	int32_t ___version_17;
	// System.Byte[] Mono.Security.X509.X509Certificate::serialnumber
	ByteU5BU5D_t3520677791* ___serialnumber_18;
	// System.Byte[] Mono.Security.X509.X509Certificate::issuerUniqueID
	ByteU5BU5D_t3520677791* ___issuerUniqueID_19;
	// System.Byte[] Mono.Security.X509.X509Certificate::subjectUniqueID
	ByteU5BU5D_t3520677791* ___subjectUniqueID_20;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::extensions
	X509ExtensionCollection_t2179390746 * ___extensions_21;

public:
	inline static int32_t get_offset_of_decoder_0() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364, ___decoder_0)); }
	inline ASN1_t1825750942 * get_decoder_0() const { return ___decoder_0; }
	inline ASN1_t1825750942 ** get_address_of_decoder_0() { return &___decoder_0; }
	inline void set_decoder_0(ASN1_t1825750942 * value)
	{
		___decoder_0 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_0), value);
	}

	inline static int32_t get_offset_of_m_encodedcert_1() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364, ___m_encodedcert_1)); }
	inline ByteU5BU5D_t3520677791* get_m_encodedcert_1() const { return ___m_encodedcert_1; }
	inline ByteU5BU5D_t3520677791** get_address_of_m_encodedcert_1() { return &___m_encodedcert_1; }
	inline void set_m_encodedcert_1(ByteU5BU5D_t3520677791* value)
	{
		___m_encodedcert_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_encodedcert_1), value);
	}

	inline static int32_t get_offset_of_m_from_2() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364, ___m_from_2)); }
	inline DateTime_t1281661550  get_m_from_2() const { return ___m_from_2; }
	inline DateTime_t1281661550 * get_address_of_m_from_2() { return &___m_from_2; }
	inline void set_m_from_2(DateTime_t1281661550  value)
	{
		___m_from_2 = value;
	}

	inline static int32_t get_offset_of_m_until_3() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364, ___m_until_3)); }
	inline DateTime_t1281661550  get_m_until_3() const { return ___m_until_3; }
	inline DateTime_t1281661550 * get_address_of_m_until_3() { return &___m_until_3; }
	inline void set_m_until_3(DateTime_t1281661550  value)
	{
		___m_until_3 = value;
	}

	inline static int32_t get_offset_of_issuer_4() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364, ___issuer_4)); }
	inline ASN1_t1825750942 * get_issuer_4() const { return ___issuer_4; }
	inline ASN1_t1825750942 ** get_address_of_issuer_4() { return &___issuer_4; }
	inline void set_issuer_4(ASN1_t1825750942 * value)
	{
		___issuer_4 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_4), value);
	}

	inline static int32_t get_offset_of_m_issuername_5() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364, ___m_issuername_5)); }
	inline String_t* get_m_issuername_5() const { return ___m_issuername_5; }
	inline String_t** get_address_of_m_issuername_5() { return &___m_issuername_5; }
	inline void set_m_issuername_5(String_t* value)
	{
		___m_issuername_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_issuername_5), value);
	}

	inline static int32_t get_offset_of_m_keyalgo_6() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364, ___m_keyalgo_6)); }
	inline String_t* get_m_keyalgo_6() const { return ___m_keyalgo_6; }
	inline String_t** get_address_of_m_keyalgo_6() { return &___m_keyalgo_6; }
	inline void set_m_keyalgo_6(String_t* value)
	{
		___m_keyalgo_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgo_6), value);
	}

	inline static int32_t get_offset_of_m_keyalgoparams_7() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364, ___m_keyalgoparams_7)); }
	inline ByteU5BU5D_t3520677791* get_m_keyalgoparams_7() const { return ___m_keyalgoparams_7; }
	inline ByteU5BU5D_t3520677791** get_address_of_m_keyalgoparams_7() { return &___m_keyalgoparams_7; }
	inline void set_m_keyalgoparams_7(ByteU5BU5D_t3520677791* value)
	{
		___m_keyalgoparams_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgoparams_7), value);
	}

	inline static int32_t get_offset_of_subject_8() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364, ___subject_8)); }
	inline ASN1_t1825750942 * get_subject_8() const { return ___subject_8; }
	inline ASN1_t1825750942 ** get_address_of_subject_8() { return &___subject_8; }
	inline void set_subject_8(ASN1_t1825750942 * value)
	{
		___subject_8 = value;
		Il2CppCodeGenWriteBarrier((&___subject_8), value);
	}

	inline static int32_t get_offset_of_m_subject_9() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364, ___m_subject_9)); }
	inline String_t* get_m_subject_9() const { return ___m_subject_9; }
	inline String_t** get_address_of_m_subject_9() { return &___m_subject_9; }
	inline void set_m_subject_9(String_t* value)
	{
		___m_subject_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_subject_9), value);
	}

	inline static int32_t get_offset_of_m_publickey_10() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364, ___m_publickey_10)); }
	inline ByteU5BU5D_t3520677791* get_m_publickey_10() const { return ___m_publickey_10; }
	inline ByteU5BU5D_t3520677791** get_address_of_m_publickey_10() { return &___m_publickey_10; }
	inline void set_m_publickey_10(ByteU5BU5D_t3520677791* value)
	{
		___m_publickey_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_publickey_10), value);
	}

	inline static int32_t get_offset_of_signature_11() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364, ___signature_11)); }
	inline ByteU5BU5D_t3520677791* get_signature_11() const { return ___signature_11; }
	inline ByteU5BU5D_t3520677791** get_address_of_signature_11() { return &___signature_11; }
	inline void set_signature_11(ByteU5BU5D_t3520677791* value)
	{
		___signature_11 = value;
		Il2CppCodeGenWriteBarrier((&___signature_11), value);
	}

	inline static int32_t get_offset_of_m_signaturealgo_12() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364, ___m_signaturealgo_12)); }
	inline String_t* get_m_signaturealgo_12() const { return ___m_signaturealgo_12; }
	inline String_t** get_address_of_m_signaturealgo_12() { return &___m_signaturealgo_12; }
	inline void set_m_signaturealgo_12(String_t* value)
	{
		___m_signaturealgo_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgo_12), value);
	}

	inline static int32_t get_offset_of_m_signaturealgoparams_13() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364, ___m_signaturealgoparams_13)); }
	inline ByteU5BU5D_t3520677791* get_m_signaturealgoparams_13() const { return ___m_signaturealgoparams_13; }
	inline ByteU5BU5D_t3520677791** get_address_of_m_signaturealgoparams_13() { return &___m_signaturealgoparams_13; }
	inline void set_m_signaturealgoparams_13(ByteU5BU5D_t3520677791* value)
	{
		___m_signaturealgoparams_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgoparams_13), value);
	}

	inline static int32_t get_offset_of_certhash_14() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364, ___certhash_14)); }
	inline ByteU5BU5D_t3520677791* get_certhash_14() const { return ___certhash_14; }
	inline ByteU5BU5D_t3520677791** get_address_of_certhash_14() { return &___certhash_14; }
	inline void set_certhash_14(ByteU5BU5D_t3520677791* value)
	{
		___certhash_14 = value;
		Il2CppCodeGenWriteBarrier((&___certhash_14), value);
	}

	inline static int32_t get_offset_of__rsa_15() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364, ____rsa_15)); }
	inline RSA_t401729117 * get__rsa_15() const { return ____rsa_15; }
	inline RSA_t401729117 ** get_address_of__rsa_15() { return &____rsa_15; }
	inline void set__rsa_15(RSA_t401729117 * value)
	{
		____rsa_15 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_15), value);
	}

	inline static int32_t get_offset_of__dsa_16() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364, ____dsa_16)); }
	inline DSA_t948809611 * get__dsa_16() const { return ____dsa_16; }
	inline DSA_t948809611 ** get_address_of__dsa_16() { return &____dsa_16; }
	inline void set__dsa_16(DSA_t948809611 * value)
	{
		____dsa_16 = value;
		Il2CppCodeGenWriteBarrier((&____dsa_16), value);
	}

	inline static int32_t get_offset_of_version_17() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364, ___version_17)); }
	inline int32_t get_version_17() const { return ___version_17; }
	inline int32_t* get_address_of_version_17() { return &___version_17; }
	inline void set_version_17(int32_t value)
	{
		___version_17 = value;
	}

	inline static int32_t get_offset_of_serialnumber_18() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364, ___serialnumber_18)); }
	inline ByteU5BU5D_t3520677791* get_serialnumber_18() const { return ___serialnumber_18; }
	inline ByteU5BU5D_t3520677791** get_address_of_serialnumber_18() { return &___serialnumber_18; }
	inline void set_serialnumber_18(ByteU5BU5D_t3520677791* value)
	{
		___serialnumber_18 = value;
		Il2CppCodeGenWriteBarrier((&___serialnumber_18), value);
	}

	inline static int32_t get_offset_of_issuerUniqueID_19() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364, ___issuerUniqueID_19)); }
	inline ByteU5BU5D_t3520677791* get_issuerUniqueID_19() const { return ___issuerUniqueID_19; }
	inline ByteU5BU5D_t3520677791** get_address_of_issuerUniqueID_19() { return &___issuerUniqueID_19; }
	inline void set_issuerUniqueID_19(ByteU5BU5D_t3520677791* value)
	{
		___issuerUniqueID_19 = value;
		Il2CppCodeGenWriteBarrier((&___issuerUniqueID_19), value);
	}

	inline static int32_t get_offset_of_subjectUniqueID_20() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364, ___subjectUniqueID_20)); }
	inline ByteU5BU5D_t3520677791* get_subjectUniqueID_20() const { return ___subjectUniqueID_20; }
	inline ByteU5BU5D_t3520677791** get_address_of_subjectUniqueID_20() { return &___subjectUniqueID_20; }
	inline void set_subjectUniqueID_20(ByteU5BU5D_t3520677791* value)
	{
		___subjectUniqueID_20 = value;
		Il2CppCodeGenWriteBarrier((&___subjectUniqueID_20), value);
	}

	inline static int32_t get_offset_of_extensions_21() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364, ___extensions_21)); }
	inline X509ExtensionCollection_t2179390746 * get_extensions_21() const { return ___extensions_21; }
	inline X509ExtensionCollection_t2179390746 ** get_address_of_extensions_21() { return &___extensions_21; }
	inline void set_extensions_21(X509ExtensionCollection_t2179390746 * value)
	{
		___extensions_21 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_21), value);
	}
};

struct X509Certificate_t949223364_StaticFields
{
public:
	// System.String Mono.Security.X509.X509Certificate::encoding_error
	String_t* ___encoding_error_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$mapF
	Dictionary_2_t2164408312 * ___U3CU3Ef__switchU24mapF_23;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map10
	Dictionary_2_t2164408312 * ___U3CU3Ef__switchU24map10_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map11
	Dictionary_2_t2164408312 * ___U3CU3Ef__switchU24map11_25;

public:
	inline static int32_t get_offset_of_encoding_error_22() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364_StaticFields, ___encoding_error_22)); }
	inline String_t* get_encoding_error_22() const { return ___encoding_error_22; }
	inline String_t** get_address_of_encoding_error_22() { return &___encoding_error_22; }
	inline void set_encoding_error_22(String_t* value)
	{
		___encoding_error_22 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_error_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapF_23() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364_StaticFields, ___U3CU3Ef__switchU24mapF_23)); }
	inline Dictionary_2_t2164408312 * get_U3CU3Ef__switchU24mapF_23() const { return ___U3CU3Ef__switchU24mapF_23; }
	inline Dictionary_2_t2164408312 ** get_address_of_U3CU3Ef__switchU24mapF_23() { return &___U3CU3Ef__switchU24mapF_23; }
	inline void set_U3CU3Ef__switchU24mapF_23(Dictionary_2_t2164408312 * value)
	{
		___U3CU3Ef__switchU24mapF_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapF_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map10_24() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364_StaticFields, ___U3CU3Ef__switchU24map10_24)); }
	inline Dictionary_2_t2164408312 * get_U3CU3Ef__switchU24map10_24() const { return ___U3CU3Ef__switchU24map10_24; }
	inline Dictionary_2_t2164408312 ** get_address_of_U3CU3Ef__switchU24map10_24() { return &___U3CU3Ef__switchU24map10_24; }
	inline void set_U3CU3Ef__switchU24map10_24(Dictionary_2_t2164408312 * value)
	{
		___U3CU3Ef__switchU24map10_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map10_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map11_25() { return static_cast<int32_t>(offsetof(X509Certificate_t949223364_StaticFields, ___U3CU3Ef__switchU24map11_25)); }
	inline Dictionary_2_t2164408312 * get_U3CU3Ef__switchU24map11_25() const { return ___U3CU3Ef__switchU24map11_25; }
	inline Dictionary_2_t2164408312 ** get_address_of_U3CU3Ef__switchU24map11_25() { return &___U3CU3Ef__switchU24map11_25; }
	inline void set_U3CU3Ef__switchU24map11_25(Dictionary_2_t2164408312 * value)
	{
		___U3CU3Ef__switchU24map11_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map11_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T949223364_H
#ifndef ARC4MANAGED_T1762877524_H
#define ARC4MANAGED_T1762877524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.ARC4Managed
struct  ARC4Managed_t1762877524  : public RC4_t3725170660
{
public:
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::key
	ByteU5BU5D_t3520677791* ___key_12;
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::state
	ByteU5BU5D_t3520677791* ___state_13;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::x
	uint8_t ___x_14;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::y
	uint8_t ___y_15;
	// System.Boolean Mono.Security.Cryptography.ARC4Managed::m_disposed
	bool ___m_disposed_16;

public:
	inline static int32_t get_offset_of_key_12() { return static_cast<int32_t>(offsetof(ARC4Managed_t1762877524, ___key_12)); }
	inline ByteU5BU5D_t3520677791* get_key_12() const { return ___key_12; }
	inline ByteU5BU5D_t3520677791** get_address_of_key_12() { return &___key_12; }
	inline void set_key_12(ByteU5BU5D_t3520677791* value)
	{
		___key_12 = value;
		Il2CppCodeGenWriteBarrier((&___key_12), value);
	}

	inline static int32_t get_offset_of_state_13() { return static_cast<int32_t>(offsetof(ARC4Managed_t1762877524, ___state_13)); }
	inline ByteU5BU5D_t3520677791* get_state_13() const { return ___state_13; }
	inline ByteU5BU5D_t3520677791** get_address_of_state_13() { return &___state_13; }
	inline void set_state_13(ByteU5BU5D_t3520677791* value)
	{
		___state_13 = value;
		Il2CppCodeGenWriteBarrier((&___state_13), value);
	}

	inline static int32_t get_offset_of_x_14() { return static_cast<int32_t>(offsetof(ARC4Managed_t1762877524, ___x_14)); }
	inline uint8_t get_x_14() const { return ___x_14; }
	inline uint8_t* get_address_of_x_14() { return &___x_14; }
	inline void set_x_14(uint8_t value)
	{
		___x_14 = value;
	}

	inline static int32_t get_offset_of_y_15() { return static_cast<int32_t>(offsetof(ARC4Managed_t1762877524, ___y_15)); }
	inline uint8_t get_y_15() const { return ___y_15; }
	inline uint8_t* get_address_of_y_15() { return &___y_15; }
	inline void set_y_15(uint8_t value)
	{
		___y_15 = value;
	}

	inline static int32_t get_offset_of_m_disposed_16() { return static_cast<int32_t>(offsetof(ARC4Managed_t1762877524, ___m_disposed_16)); }
	inline bool get_m_disposed_16() const { return ___m_disposed_16; }
	inline bool* get_address_of_m_disposed_16() { return &___m_disposed_16; }
	inline void set_m_disposed_16(bool value)
	{
		___m_disposed_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARC4MANAGED_T1762877524_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize900 = { sizeof (UnhandledExceptionEventArgs_t2189253772), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable900[2] = 
{
	UnhandledExceptionEventArgs_t2189253772::get_offset_of_exception_1(),
	UnhandledExceptionEventArgs_t2189253772::get_offset_of_m_isTerminating_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize901 = { sizeof (UnitySerializationHolder_t3329187650), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable901[3] = 
{
	UnitySerializationHolder_t3329187650::get_offset_of__data_0(),
	UnitySerializationHolder_t3329187650::get_offset_of__unityType_1(),
	UnitySerializationHolder_t3329187650::get_offset_of__assemblyName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize902 = { sizeof (UnityType_t1525977742)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable902[5] = 
{
	UnityType_t1525977742::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize903 = { sizeof (Version_t2743731698), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable903[5] = 
{
	0,
	Version_t2743731698::get_offset_of__Major_1(),
	Version_t2743731698::get_offset_of__Minor_2(),
	Version_t2743731698::get_offset_of__Build_3(),
	Version_t2743731698::get_offset_of__Revision_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize904 = { sizeof (WeakReference_t90516665), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable904[2] = 
{
	WeakReference_t90516665::get_offset_of_isLongReference_0(),
	WeakReference_t90516665::get_offset_of_gcHandle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize905 = { sizeof (PrimalityTest_t560706859), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize906 = { sizeof (MemberFilter_t2935112866), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize907 = { sizeof (TypeFilter_t2311996912), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize908 = { sizeof (CrossContextDelegate_t2582950129), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize909 = { sizeof (HeaderHandler_t4195860368), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize910 = { sizeof (ParameterizedThreadStart_t3711966829), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize911 = { sizeof (SendOrPostCallback_t1916518488), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize912 = { sizeof (ThreadStart_t3826805759), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize913 = { sizeof (TimerCallback_t4070614020), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize914 = { sizeof (WaitCallback_t3292671799), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize915 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize916 = { sizeof (AppDomainInitializer_t2632965284), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize917 = { sizeof (AssemblyLoadEventHandler_t2761830666), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize918 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize919 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize920 = { sizeof (EventHandler_t55266864), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize921 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize922 = { sizeof (ResolveEventHandler_t3248261569), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize923 = { sizeof (UnhandledExceptionEventHandler_t3743233501), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize924 = { sizeof (U3CPrivateImplementationDetailsU3E_t2227229331), -1, sizeof(U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable924[53] = 
{
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D1_1(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D2_2(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D3_3(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D4_4(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D5_5(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D6_6(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D15_7(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D16_8(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D17_9(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D18_10(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D19_11(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D20_12(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D21_13(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D22_14(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D23_15(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D24_16(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D25_17(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D26_18(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D27_19(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D30_20(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D31_21(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D32_22(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D33_23(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D34_24(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D35_25(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D36_26(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D37_27(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D38_28(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D39_29(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D40_30(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D41_31(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D42_32(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D43_33(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D44_34(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D45_35(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D46_36(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D47_37(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D48_38(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D49_39(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D50_40(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D51_41(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D52_42(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D53_43(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D54_44(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D55_45(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D56_46(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D57_47(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D60_48(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D62_49(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D63_50(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D64_51(),
	U3CPrivateImplementationDetailsU3E_t2227229331_StaticFields::get_offset_of_U24U24fieldU2D65_52(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize925 = { sizeof (U24ArrayTypeU2456_t239899001)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2456_t239899001 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize926 = { sizeof (U24ArrayTypeU2424_t2624162912)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2424_t2624162912 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize927 = { sizeof (U24ArrayTypeU2416_t3380194243)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2416_t3380194243 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize928 = { sizeof (U24ArrayTypeU24120_t1413270009)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24120_t1413270009 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize929 = { sizeof (U24ArrayTypeU243132_t1888951863)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU243132_t1888951863 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize930 = { sizeof (U24ArrayTypeU2420_t1159733451)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2420_t1159733451 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize931 = { sizeof (U24ArrayTypeU2432_t2039541092)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2432_t2039541092 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize932 = { sizeof (U24ArrayTypeU2448_t1074680674)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2448_t1074680674 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize933 = { sizeof (U24ArrayTypeU2464_t2623078705)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2464_t2623078705 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize934 = { sizeof (U24ArrayTypeU2412_t1299012761)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2412_t1299012761 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize935 = { sizeof (U24ArrayTypeU24136_t1971499818)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24136_t1971499818 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize936 = { sizeof (U24ArrayTypeU248_t3835539436)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU248_t3835539436 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize937 = { sizeof (U24ArrayTypeU2472_t3179949102)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2472_t3179949102 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize938 = { sizeof (U24ArrayTypeU24124_t1967030645)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24124_t1967030645 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize939 = { sizeof (U24ArrayTypeU2496_t4150189610)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2496_t4150189610 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize940 = { sizeof (U24ArrayTypeU242048_t3961179899)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU242048_t3961179899 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize941 = { sizeof (U24ArrayTypeU24256_t3535968740)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t3535968740 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize942 = { sizeof (U24ArrayTypeU241024_t1609428469)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU241024_t1609428469 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize943 = { sizeof (U24ArrayTypeU24640_t3342558379)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24640_t3342558379 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize944 = { sizeof (U24ArrayTypeU24128_t1235336854)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24128_t1235336854 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize945 = { sizeof (U24ArrayTypeU2452_t900058358)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2452_t900058358 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize946 = { sizeof (Il2CppComObject), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize947 = { sizeof (__Il2CppComDelegate_t1202828922), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize948 = { sizeof (U3CModuleU3E_t1940706082), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize949 = { sizeof (Locale_t205405272), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize950 = { sizeof (BigInteger_t2840320901), -1, sizeof(BigInteger_t2840320901_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable950[4] = 
{
	BigInteger_t2840320901::get_offset_of_length_0(),
	BigInteger_t2840320901::get_offset_of_data_1(),
	BigInteger_t2840320901_StaticFields::get_offset_of_smallPrimes_2(),
	BigInteger_t2840320901_StaticFields::get_offset_of_rng_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize951 = { sizeof (Sign_t2001255325)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable951[4] = 
{
	Sign_t2001255325::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize952 = { sizeof (ModulusRing_t4084302345), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable952[2] = 
{
	ModulusRing_t4084302345::get_offset_of_mod_0(),
	ModulusRing_t4084302345::get_offset_of_constant_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize953 = { sizeof (Kernel_t3006765331), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize954 = { sizeof (ConfidenceFactor_t87125201)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable954[7] = 
{
	ConfidenceFactor_t87125201::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize955 = { sizeof (PrimalityTests_t2473390572), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize956 = { sizeof (PrimeGeneratorBase_t372813111), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize957 = { sizeof (SequentialSearchPrimeGeneratorBase_t2591969681), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize958 = { sizeof (ASN1_t1825750942), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable958[3] = 
{
	ASN1_t1825750942::get_offset_of_m_nTag_0(),
	ASN1_t1825750942::get_offset_of_m_aValue_1(),
	ASN1_t1825750942::get_offset_of_elist_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize959 = { sizeof (ASN1Convert_t1742440628), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize960 = { sizeof (BitConverterLE_t4204741695), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize961 = { sizeof (PKCS7_t2339435917), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize962 = { sizeof (ContentInfo_t1222972373), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable962[2] = 
{
	ContentInfo_t1222972373::get_offset_of_contentType_0(),
	ContentInfo_t1222972373::get_offset_of_content_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize963 = { sizeof (EncryptedData_t1746547686), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable963[4] = 
{
	EncryptedData_t1746547686::get_offset_of__version_0(),
	EncryptedData_t1746547686::get_offset_of__content_1(),
	EncryptedData_t1746547686::get_offset_of__encryptionAlgorithm_2(),
	EncryptedData_t1746547686::get_offset_of__encrypted_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize964 = { sizeof (PrivateKey_t3810315688), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable964[4] = 
{
	PrivateKey_t3810315688::get_offset_of_encrypted_0(),
	PrivateKey_t3810315688::get_offset_of_rsa_1(),
	PrivateKey_t3810315688::get_offset_of_weak_2(),
	PrivateKey_t3810315688::get_offset_of_keyType_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize965 = { sizeof (ARC4Managed_t1762877524), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable965[5] = 
{
	ARC4Managed_t1762877524::get_offset_of_key_12(),
	ARC4Managed_t1762877524::get_offset_of_state_13(),
	ARC4Managed_t1762877524::get_offset_of_x_14(),
	ARC4Managed_t1762877524::get_offset_of_y_15(),
	ARC4Managed_t1762877524::get_offset_of_m_disposed_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize966 = { sizeof (CryptoConvert_t3058864859), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize967 = { sizeof (KeyBuilder_t1522895459), -1, sizeof(KeyBuilder_t1522895459_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable967[1] = 
{
	KeyBuilder_t1522895459_StaticFields::get_offset_of_rng_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize968 = { sizeof (MD2_t494816239), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize969 = { sizeof (MD2Managed_t1560317356), -1, sizeof(MD2Managed_t1560317356_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable969[6] = 
{
	MD2Managed_t1560317356::get_offset_of_state_4(),
	MD2Managed_t1560317356::get_offset_of_checksum_5(),
	MD2Managed_t1560317356::get_offset_of_buffer_6(),
	MD2Managed_t1560317356::get_offset_of_count_7(),
	MD2Managed_t1560317356::get_offset_of_x_8(),
	MD2Managed_t1560317356_StaticFields::get_offset_of_PI_SUBST_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize970 = { sizeof (MD4_t442451773), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize971 = { sizeof (MD4Managed_t2280579529), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable971[5] = 
{
	MD4Managed_t2280579529::get_offset_of_state_4(),
	MD4Managed_t2280579529::get_offset_of_buffer_5(),
	MD4Managed_t2280579529::get_offset_of_count_6(),
	MD4Managed_t2280579529::get_offset_of_x_7(),
	MD4Managed_t2280579529::get_offset_of_digest_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize972 = { sizeof (PKCS1_t3083961623), -1, sizeof(PKCS1_t3083961623_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable972[4] = 
{
	PKCS1_t3083961623_StaticFields::get_offset_of_emptySHA1_0(),
	PKCS1_t3083961623_StaticFields::get_offset_of_emptySHA256_1(),
	PKCS1_t3083961623_StaticFields::get_offset_of_emptySHA384_2(),
	PKCS1_t3083961623_StaticFields::get_offset_of_emptySHA512_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize973 = { sizeof (PKCS8_t1712231073), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize974 = { sizeof (PrivateKeyInfo_t54500118), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable974[4] = 
{
	PrivateKeyInfo_t54500118::get_offset_of__version_0(),
	PrivateKeyInfo_t54500118::get_offset_of__algorithm_1(),
	PrivateKeyInfo_t54500118::get_offset_of__key_2(),
	PrivateKeyInfo_t54500118::get_offset_of__list_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize975 = { sizeof (EncryptedPrivateKeyInfo_t407094643), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable975[4] = 
{
	EncryptedPrivateKeyInfo_t407094643::get_offset_of__algorithm_0(),
	EncryptedPrivateKeyInfo_t407094643::get_offset_of__salt_1(),
	EncryptedPrivateKeyInfo_t407094643::get_offset_of__iterations_2(),
	EncryptedPrivateKeyInfo_t407094643::get_offset_of__data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize976 = { sizeof (RC4_t3725170660), -1, sizeof(RC4_t3725170660_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable976[2] = 
{
	RC4_t3725170660_StaticFields::get_offset_of_s_legalBlockSizes_10(),
	RC4_t3725170660_StaticFields::get_offset_of_s_legalKeySizes_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize977 = { sizeof (RSAManaged_t1367527829), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable977[13] = 
{
	RSAManaged_t1367527829::get_offset_of_isCRTpossible_2(),
	RSAManaged_t1367527829::get_offset_of_keyBlinding_3(),
	RSAManaged_t1367527829::get_offset_of_keypairGenerated_4(),
	RSAManaged_t1367527829::get_offset_of_m_disposed_5(),
	RSAManaged_t1367527829::get_offset_of_d_6(),
	RSAManaged_t1367527829::get_offset_of_p_7(),
	RSAManaged_t1367527829::get_offset_of_q_8(),
	RSAManaged_t1367527829::get_offset_of_dp_9(),
	RSAManaged_t1367527829::get_offset_of_dq_10(),
	RSAManaged_t1367527829::get_offset_of_qInv_11(),
	RSAManaged_t1367527829::get_offset_of_n_12(),
	RSAManaged_t1367527829::get_offset_of_e_13(),
	RSAManaged_t1367527829::get_offset_of_KeyGenerated_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize978 = { sizeof (KeyGeneratedEventHandler_t1054481065), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize979 = { sizeof (PKCS5_t3364872932), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable979[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize980 = { sizeof (PKCS9_t1352108399), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable980[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize981 = { sizeof (SafeBag_t2043874717), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable981[2] = 
{
	SafeBag_t2043874717::get_offset_of__bagOID_0(),
	SafeBag_t2043874717::get_offset_of__asn1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize982 = { sizeof (PKCS12_t3753670934), -1, sizeof(PKCS12_t3753670934_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable982[36] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	PKCS12_t3753670934_StaticFields::get_offset_of_recommendedIterationCount_16(),
	PKCS12_t3753670934::get_offset_of__password_17(),
	PKCS12_t3753670934::get_offset_of__keyBags_18(),
	PKCS12_t3753670934::get_offset_of__secretBags_19(),
	PKCS12_t3753670934::get_offset_of__certs_20(),
	PKCS12_t3753670934::get_offset_of__keyBagsChanged_21(),
	PKCS12_t3753670934::get_offset_of__secretBagsChanged_22(),
	PKCS12_t3753670934::get_offset_of__certsChanged_23(),
	PKCS12_t3753670934::get_offset_of__iterations_24(),
	PKCS12_t3753670934::get_offset_of__safeBags_25(),
	PKCS12_t3753670934::get_offset_of__rng_26(),
	PKCS12_t3753670934_StaticFields::get_offset_of_password_max_length_27(),
	PKCS12_t3753670934_StaticFields::get_offset_of_U3CU3Ef__switchU24map5_28(),
	PKCS12_t3753670934_StaticFields::get_offset_of_U3CU3Ef__switchU24map6_29(),
	PKCS12_t3753670934_StaticFields::get_offset_of_U3CU3Ef__switchU24map7_30(),
	PKCS12_t3753670934_StaticFields::get_offset_of_U3CU3Ef__switchU24map8_31(),
	PKCS12_t3753670934_StaticFields::get_offset_of_U3CU3Ef__switchU24map9_32(),
	PKCS12_t3753670934_StaticFields::get_offset_of_U3CU3Ef__switchU24mapA_33(),
	PKCS12_t3753670934_StaticFields::get_offset_of_U3CU3Ef__switchU24mapB_34(),
	PKCS12_t3753670934_StaticFields::get_offset_of_U3CU3Ef__switchU24mapC_35(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize983 = { sizeof (DeriveBytes_t418925586), -1, sizeof(DeriveBytes_t418925586_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable983[7] = 
{
	DeriveBytes_t418925586_StaticFields::get_offset_of_keyDiversifier_0(),
	DeriveBytes_t418925586_StaticFields::get_offset_of_ivDiversifier_1(),
	DeriveBytes_t418925586_StaticFields::get_offset_of_macDiversifier_2(),
	DeriveBytes_t418925586::get_offset_of__hashName_3(),
	DeriveBytes_t418925586::get_offset_of__iterations_4(),
	DeriveBytes_t418925586::get_offset_of__password_5(),
	DeriveBytes_t418925586::get_offset_of__salt_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize984 = { sizeof (Purpose_t2403021809)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable984[4] = 
{
	Purpose_t2403021809::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize985 = { sizeof (X501_t585421765), -1, sizeof(X501_t585421765_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable985[16] = 
{
	X501_t585421765_StaticFields::get_offset_of_countryName_0(),
	X501_t585421765_StaticFields::get_offset_of_organizationName_1(),
	X501_t585421765_StaticFields::get_offset_of_organizationalUnitName_2(),
	X501_t585421765_StaticFields::get_offset_of_commonName_3(),
	X501_t585421765_StaticFields::get_offset_of_localityName_4(),
	X501_t585421765_StaticFields::get_offset_of_stateOrProvinceName_5(),
	X501_t585421765_StaticFields::get_offset_of_streetAddress_6(),
	X501_t585421765_StaticFields::get_offset_of_domainComponent_7(),
	X501_t585421765_StaticFields::get_offset_of_userid_8(),
	X501_t585421765_StaticFields::get_offset_of_email_9(),
	X501_t585421765_StaticFields::get_offset_of_dnQualifier_10(),
	X501_t585421765_StaticFields::get_offset_of_title_11(),
	X501_t585421765_StaticFields::get_offset_of_surname_12(),
	X501_t585421765_StaticFields::get_offset_of_givenName_13(),
	X501_t585421765_StaticFields::get_offset_of_initial_14(),
	X501_t585421765_StaticFields::get_offset_of_U3CU3Ef__switchU24mapD_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize986 = { sizeof (X509Builder_t88911523), -1, sizeof(X509Builder_t88911523_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable986[3] = 
{
	0,
	X509Builder_t88911523::get_offset_of_hashName_1(),
	X509Builder_t88911523_StaticFields::get_offset_of_U3CU3Ef__switchU24mapE_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize987 = { sizeof (X509Certificate_t949223364), -1, sizeof(X509Certificate_t949223364_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable987[26] = 
{
	X509Certificate_t949223364::get_offset_of_decoder_0(),
	X509Certificate_t949223364::get_offset_of_m_encodedcert_1(),
	X509Certificate_t949223364::get_offset_of_m_from_2(),
	X509Certificate_t949223364::get_offset_of_m_until_3(),
	X509Certificate_t949223364::get_offset_of_issuer_4(),
	X509Certificate_t949223364::get_offset_of_m_issuername_5(),
	X509Certificate_t949223364::get_offset_of_m_keyalgo_6(),
	X509Certificate_t949223364::get_offset_of_m_keyalgoparams_7(),
	X509Certificate_t949223364::get_offset_of_subject_8(),
	X509Certificate_t949223364::get_offset_of_m_subject_9(),
	X509Certificate_t949223364::get_offset_of_m_publickey_10(),
	X509Certificate_t949223364::get_offset_of_signature_11(),
	X509Certificate_t949223364::get_offset_of_m_signaturealgo_12(),
	X509Certificate_t949223364::get_offset_of_m_signaturealgoparams_13(),
	X509Certificate_t949223364::get_offset_of_certhash_14(),
	X509Certificate_t949223364::get_offset_of__rsa_15(),
	X509Certificate_t949223364::get_offset_of__dsa_16(),
	X509Certificate_t949223364::get_offset_of_version_17(),
	X509Certificate_t949223364::get_offset_of_serialnumber_18(),
	X509Certificate_t949223364::get_offset_of_issuerUniqueID_19(),
	X509Certificate_t949223364::get_offset_of_subjectUniqueID_20(),
	X509Certificate_t949223364::get_offset_of_extensions_21(),
	X509Certificate_t949223364_StaticFields::get_offset_of_encoding_error_22(),
	X509Certificate_t949223364_StaticFields::get_offset_of_U3CU3Ef__switchU24mapF_23(),
	X509Certificate_t949223364_StaticFields::get_offset_of_U3CU3Ef__switchU24map10_24(),
	X509Certificate_t949223364_StaticFields::get_offset_of_U3CU3Ef__switchU24map11_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize988 = { sizeof (X509CertificateCollection_t671522817), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize989 = { sizeof (X509CertificateEnumerator_t3326071014), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable989[1] = 
{
	X509CertificateEnumerator_t3326071014::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize990 = { sizeof (X509CertificateBuilder_t2258268421), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable990[10] = 
{
	X509CertificateBuilder_t2258268421::get_offset_of_version_3(),
	X509CertificateBuilder_t2258268421::get_offset_of_sn_4(),
	X509CertificateBuilder_t2258268421::get_offset_of_issuer_5(),
	X509CertificateBuilder_t2258268421::get_offset_of_notBefore_6(),
	X509CertificateBuilder_t2258268421::get_offset_of_notAfter_7(),
	X509CertificateBuilder_t2258268421::get_offset_of_subject_8(),
	X509CertificateBuilder_t2258268421::get_offset_of_aa_9(),
	X509CertificateBuilder_t2258268421::get_offset_of_issuerUniqueID_10(),
	X509CertificateBuilder_t2258268421::get_offset_of_subjectUniqueID_11(),
	X509CertificateBuilder_t2258268421::get_offset_of_extensions_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize991 = { sizeof (X509Chain_t2808519783), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable991[5] = 
{
	X509Chain_t2808519783::get_offset_of_roots_0(),
	X509Chain_t2808519783::get_offset_of_certs_1(),
	X509Chain_t2808519783::get_offset_of__root_2(),
	X509Chain_t2808519783::get_offset_of__chain_3(),
	X509Chain_t2808519783::get_offset_of__status_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize992 = { sizeof (X509ChainStatusFlags_t2563343606)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable992[8] = 
{
	X509ChainStatusFlags_t2563343606::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize993 = { sizeof (X509Crl_t4243809916), -1, sizeof(X509Crl_t4243809916_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable993[12] = 
{
	X509Crl_t4243809916::get_offset_of_issuer_0(),
	X509Crl_t4243809916::get_offset_of_version_1(),
	X509Crl_t4243809916::get_offset_of_thisUpdate_2(),
	X509Crl_t4243809916::get_offset_of_nextUpdate_3(),
	X509Crl_t4243809916::get_offset_of_entries_4(),
	X509Crl_t4243809916::get_offset_of_signatureOID_5(),
	X509Crl_t4243809916::get_offset_of_signature_6(),
	X509Crl_t4243809916::get_offset_of_extensions_7(),
	X509Crl_t4243809916::get_offset_of_encoded_8(),
	X509Crl_t4243809916::get_offset_of_hash_value_9(),
	X509Crl_t4243809916_StaticFields::get_offset_of_U3CU3Ef__switchU24map12_10(),
	X509Crl_t4243809916_StaticFields::get_offset_of_U3CU3Ef__switchU24map13_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize994 = { sizeof (X509CrlEntry_t4061622036), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable994[3] = 
{
	X509CrlEntry_t4061622036::get_offset_of_sn_0(),
	X509CrlEntry_t4061622036::get_offset_of_revocationDate_1(),
	X509CrlEntry_t4061622036::get_offset_of_extensions_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize995 = { sizeof (X509Extension_t2372217941), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable995[3] = 
{
	X509Extension_t2372217941::get_offset_of_extnOid_0(),
	X509Extension_t2372217941::get_offset_of_extnCritical_1(),
	X509Extension_t2372217941::get_offset_of_extnValue_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize996 = { sizeof (X509ExtensionCollection_t2179390746), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable996[1] = 
{
	X509ExtensionCollection_t2179390746::get_offset_of_readOnly_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize997 = { sizeof (X509Store_t647118203), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable997[5] = 
{
	X509Store_t647118203::get_offset_of__storePath_0(),
	X509Store_t647118203::get_offset_of__certificates_1(),
	X509Store_t647118203::get_offset_of__crls_2(),
	X509Store_t647118203::get_offset_of__crl_3(),
	X509Store_t647118203::get_offset_of__name_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize998 = { sizeof (X509StoreManager_t1478984319), -1, sizeof(X509StoreManager_t1478984319_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable998[2] = 
{
	X509StoreManager_t1478984319_StaticFields::get_offset_of__userStore_0(),
	X509StoreManager_t1478984319_StaticFields::get_offset_of__machineStore_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize999 = { sizeof (X509Stores_t3427924730), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable999[6] = 
{
	X509Stores_t3427924730::get_offset_of__storePath_0(),
	X509Stores_t3427924730::get_offset_of__personal_1(),
	X509Stores_t3427924730::get_offset_of__other_2(),
	X509Stores_t3427924730::get_offset_of__intermediate_3(),
	X509Stores_t3427924730::get_offset_of__trusted_4(),
	X509Stores_t3427924730::get_offset_of__untrusted_5(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
