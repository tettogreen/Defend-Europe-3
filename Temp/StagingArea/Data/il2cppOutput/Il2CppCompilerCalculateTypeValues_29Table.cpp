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

// UnityEngine.PostProcessing.PostProcessingContext
struct PostProcessingContext_t816409584;
// UnityEngine.Mesh
struct Mesh_t4032156355;
// System.String
struct String_t;
// UnityEngine.PostProcessing.ChromaticAberrationModel
struct ChromaticAberrationModel_t2255405875;
// UnityEngine.Texture
struct Texture_t959848337;
// UnityEngine.PostProcessing.ColorGradingModel
struct ColorGradingModel_t2480248502;
// UnityEngine.PostProcessing.DitheringModel
struct DitheringModel_t2036076075;
// UnityEngine.PostProcessing.BuiltinDebugViewsModel
struct BuiltinDebugViewsModel_t861247509;
// UnityEngine.PostProcessing.AntialiasingModel/FxaaConsoleSettings[]
struct FxaaConsoleSettingsU5BU5D_t1431971981;
// UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings[]
struct FxaaQualitySettingsU5BU5D_t4238050188;
// UnityEngine.PostProcessing.DepthOfFieldModel
struct DepthOfFieldModel_t2862061773;
// UnityEngine.PostProcessing.VignetteModel
struct VignetteModel_t1261970478;
// UnityEngine.PostProcessing.AmbientOcclusionModel
struct AmbientOcclusionModel_t1547813591;
// UnityEngine.Texture2D
struct Texture2D_t1318399882;
// UnityEngine.PostProcessing.ScreenSpaceReflectionModel
struct ScreenSpaceReflectionModel_t1578619577;
// UnityEngine.PostProcessing.ColorGradingCurve
struct ColorGradingCurve_t2116856965;
// UnityEngine.PostProcessing.MotionBlurModel
struct MotionBlurModel_t267707277;
// UnityEngine.PostProcessing.AntialiasingModel
struct AntialiasingModel_t1366857901;
// UnityEngine.PostProcessing.FogModel
struct FogModel_t978448032;
// System.Char[]
struct CharU5BU5D_t3855443485;
// UnityEngine.PostProcessing.BloomModel
struct BloomModel_t2841477781;
// UnityEngine.PostProcessing.GrainModel
struct GrainModel_t247211776;
// UnityEngine.PostProcessing.UserLutModel
struct UserLutModel_t1661866152;
// UnityEngine.PostProcessing.EyeAdaptationModel
struct EyeAdaptationModel_t3438392253;
// UnityEngine.RenderTexture
struct RenderTexture_t3847872195;
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_t564583008;
// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame[]
struct FrameU5BU5D_t3444182529;
// System.String[]
struct StringU5BU5D_t1453726374;
// System.Int32[]
struct Int32U5BU5D_t2907286259;
// UnityEngine.PostProcessing.MotionBlurComponent/ReconstructionFilter
struct ReconstructionFilter_t4100126196;
// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter
struct FrameBlendingFilter_t2341498947;
// UnityEngine.RenderBuffer[]
struct RenderBufferU5BU5D_t3075786178;
// UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray
struct ArrowArray_t841951830;
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t4047959762;
// UnityEngine.Color[]
struct ColorU5BU5D_t4227943779;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t645463823;
// UnityEngine.ComputeShader
struct ComputeShader_t2206249425;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t4211178230;
// System.UInt32[]
struct UInt32U5BU5D_t155030608;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2164408312;
// System.Collections.Generic.Dictionary`2<System.String,System.UInt32>
struct Dictionary_2_t3537088031;
// System.Collections.Generic.List`1<System.String>
struct List_1_t859813222;
// System.Collections.Generic.Dictionary`2<System.String,PlayFab.PlayStreamModels.PlayerLocation>
struct Dictionary_2_t699674807;
// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.AdCampaignAttribution>
struct List_1_t3297642459;
// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.PushNotificationRegistration>
struct List_1_t1661627481;
// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.PlayerLinkedAccount>
struct List_1_t3353429270;
// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.PlayerStatistic>
struct List_1_t2312228244;
// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.ContactEmailInfo>
struct List_1_t3321572617;

struct RenderTargetIdentifier_t320054221 ;



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
#ifndef POSTPROCESSINGCOMPONENTBASE_T2502581840_H
#define POSTPROCESSINGCOMPONENTBASE_T2502581840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentBase
struct  PostProcessingComponentBase_t2502581840  : public RuntimeObject
{
public:
	// UnityEngine.PostProcessing.PostProcessingContext UnityEngine.PostProcessing.PostProcessingComponentBase::context
	PostProcessingContext_t816409584 * ___context_0;

public:
	inline static int32_t get_offset_of_context_0() { return static_cast<int32_t>(offsetof(PostProcessingComponentBase_t2502581840, ___context_0)); }
	inline PostProcessingContext_t816409584 * get_context_0() const { return ___context_0; }
	inline PostProcessingContext_t816409584 ** get_address_of_context_0() { return &___context_0; }
	inline void set_context_0(PostProcessingContext_t816409584 * value)
	{
		___context_0 = value;
		Il2CppCodeGenWriteBarrier((&___context_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTBASE_T2502581840_H
#ifndef UNIFORMS_T1404156410_H
#define UNIFORMS_T1404156410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BloomComponent/Uniforms
struct  Uniforms_t1404156410  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t1404156410_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_AutoExposure
	int32_t ____AutoExposure_0;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_Threshold
	int32_t ____Threshold_1;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_Curve
	int32_t ____Curve_2;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_PrefilterOffs
	int32_t ____PrefilterOffs_3;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_SampleScale
	int32_t ____SampleScale_4;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_BaseTex
	int32_t ____BaseTex_5;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_BloomTex
	int32_t ____BloomTex_6;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_Bloom_Settings
	int32_t ____Bloom_Settings_7;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_Bloom_DirtTex
	int32_t ____Bloom_DirtTex_8;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_Bloom_DirtIntensity
	int32_t ____Bloom_DirtIntensity_9;

public:
	inline static int32_t get_offset_of__AutoExposure_0() { return static_cast<int32_t>(offsetof(Uniforms_t1404156410_StaticFields, ____AutoExposure_0)); }
	inline int32_t get__AutoExposure_0() const { return ____AutoExposure_0; }
	inline int32_t* get_address_of__AutoExposure_0() { return &____AutoExposure_0; }
	inline void set__AutoExposure_0(int32_t value)
	{
		____AutoExposure_0 = value;
	}

	inline static int32_t get_offset_of__Threshold_1() { return static_cast<int32_t>(offsetof(Uniforms_t1404156410_StaticFields, ____Threshold_1)); }
	inline int32_t get__Threshold_1() const { return ____Threshold_1; }
	inline int32_t* get_address_of__Threshold_1() { return &____Threshold_1; }
	inline void set__Threshold_1(int32_t value)
	{
		____Threshold_1 = value;
	}

	inline static int32_t get_offset_of__Curve_2() { return static_cast<int32_t>(offsetof(Uniforms_t1404156410_StaticFields, ____Curve_2)); }
	inline int32_t get__Curve_2() const { return ____Curve_2; }
	inline int32_t* get_address_of__Curve_2() { return &____Curve_2; }
	inline void set__Curve_2(int32_t value)
	{
		____Curve_2 = value;
	}

	inline static int32_t get_offset_of__PrefilterOffs_3() { return static_cast<int32_t>(offsetof(Uniforms_t1404156410_StaticFields, ____PrefilterOffs_3)); }
	inline int32_t get__PrefilterOffs_3() const { return ____PrefilterOffs_3; }
	inline int32_t* get_address_of__PrefilterOffs_3() { return &____PrefilterOffs_3; }
	inline void set__PrefilterOffs_3(int32_t value)
	{
		____PrefilterOffs_3 = value;
	}

	inline static int32_t get_offset_of__SampleScale_4() { return static_cast<int32_t>(offsetof(Uniforms_t1404156410_StaticFields, ____SampleScale_4)); }
	inline int32_t get__SampleScale_4() const { return ____SampleScale_4; }
	inline int32_t* get_address_of__SampleScale_4() { return &____SampleScale_4; }
	inline void set__SampleScale_4(int32_t value)
	{
		____SampleScale_4 = value;
	}

	inline static int32_t get_offset_of__BaseTex_5() { return static_cast<int32_t>(offsetof(Uniforms_t1404156410_StaticFields, ____BaseTex_5)); }
	inline int32_t get__BaseTex_5() const { return ____BaseTex_5; }
	inline int32_t* get_address_of__BaseTex_5() { return &____BaseTex_5; }
	inline void set__BaseTex_5(int32_t value)
	{
		____BaseTex_5 = value;
	}

	inline static int32_t get_offset_of__BloomTex_6() { return static_cast<int32_t>(offsetof(Uniforms_t1404156410_StaticFields, ____BloomTex_6)); }
	inline int32_t get__BloomTex_6() const { return ____BloomTex_6; }
	inline int32_t* get_address_of__BloomTex_6() { return &____BloomTex_6; }
	inline void set__BloomTex_6(int32_t value)
	{
		____BloomTex_6 = value;
	}

	inline static int32_t get_offset_of__Bloom_Settings_7() { return static_cast<int32_t>(offsetof(Uniforms_t1404156410_StaticFields, ____Bloom_Settings_7)); }
	inline int32_t get__Bloom_Settings_7() const { return ____Bloom_Settings_7; }
	inline int32_t* get_address_of__Bloom_Settings_7() { return &____Bloom_Settings_7; }
	inline void set__Bloom_Settings_7(int32_t value)
	{
		____Bloom_Settings_7 = value;
	}

	inline static int32_t get_offset_of__Bloom_DirtTex_8() { return static_cast<int32_t>(offsetof(Uniforms_t1404156410_StaticFields, ____Bloom_DirtTex_8)); }
	inline int32_t get__Bloom_DirtTex_8() const { return ____Bloom_DirtTex_8; }
	inline int32_t* get_address_of__Bloom_DirtTex_8() { return &____Bloom_DirtTex_8; }
	inline void set__Bloom_DirtTex_8(int32_t value)
	{
		____Bloom_DirtTex_8 = value;
	}

	inline static int32_t get_offset_of__Bloom_DirtIntensity_9() { return static_cast<int32_t>(offsetof(Uniforms_t1404156410_StaticFields, ____Bloom_DirtIntensity_9)); }
	inline int32_t get__Bloom_DirtIntensity_9() const { return ____Bloom_DirtIntensity_9; }
	inline int32_t* get_address_of__Bloom_DirtIntensity_9() { return &____Bloom_DirtIntensity_9; }
	inline void set__Bloom_DirtIntensity_9(int32_t value)
	{
		____Bloom_DirtIntensity_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T1404156410_H
#ifndef UNIFORMS_T65387656_H
#define UNIFORMS_T65387656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Uniforms
struct  Uniforms_t65387656  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t65387656_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Uniforms::_DepthScale
	int32_t ____DepthScale_0;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Uniforms::_TempRT
	int32_t ____TempRT_1;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Uniforms::_Opacity
	int32_t ____Opacity_2;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Uniforms::_MainTex
	int32_t ____MainTex_3;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Uniforms::_TempRT2
	int32_t ____TempRT2_4;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Uniforms::_Amplitude
	int32_t ____Amplitude_5;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Uniforms::_Scale
	int32_t ____Scale_6;

public:
	inline static int32_t get_offset_of__DepthScale_0() { return static_cast<int32_t>(offsetof(Uniforms_t65387656_StaticFields, ____DepthScale_0)); }
	inline int32_t get__DepthScale_0() const { return ____DepthScale_0; }
	inline int32_t* get_address_of__DepthScale_0() { return &____DepthScale_0; }
	inline void set__DepthScale_0(int32_t value)
	{
		____DepthScale_0 = value;
	}

	inline static int32_t get_offset_of__TempRT_1() { return static_cast<int32_t>(offsetof(Uniforms_t65387656_StaticFields, ____TempRT_1)); }
	inline int32_t get__TempRT_1() const { return ____TempRT_1; }
	inline int32_t* get_address_of__TempRT_1() { return &____TempRT_1; }
	inline void set__TempRT_1(int32_t value)
	{
		____TempRT_1 = value;
	}

	inline static int32_t get_offset_of__Opacity_2() { return static_cast<int32_t>(offsetof(Uniforms_t65387656_StaticFields, ____Opacity_2)); }
	inline int32_t get__Opacity_2() const { return ____Opacity_2; }
	inline int32_t* get_address_of__Opacity_2() { return &____Opacity_2; }
	inline void set__Opacity_2(int32_t value)
	{
		____Opacity_2 = value;
	}

	inline static int32_t get_offset_of__MainTex_3() { return static_cast<int32_t>(offsetof(Uniforms_t65387656_StaticFields, ____MainTex_3)); }
	inline int32_t get__MainTex_3() const { return ____MainTex_3; }
	inline int32_t* get_address_of__MainTex_3() { return &____MainTex_3; }
	inline void set__MainTex_3(int32_t value)
	{
		____MainTex_3 = value;
	}

	inline static int32_t get_offset_of__TempRT2_4() { return static_cast<int32_t>(offsetof(Uniforms_t65387656_StaticFields, ____TempRT2_4)); }
	inline int32_t get__TempRT2_4() const { return ____TempRT2_4; }
	inline int32_t* get_address_of__TempRT2_4() { return &____TempRT2_4; }
	inline void set__TempRT2_4(int32_t value)
	{
		____TempRT2_4 = value;
	}

	inline static int32_t get_offset_of__Amplitude_5() { return static_cast<int32_t>(offsetof(Uniforms_t65387656_StaticFields, ____Amplitude_5)); }
	inline int32_t get__Amplitude_5() const { return ____Amplitude_5; }
	inline int32_t* get_address_of__Amplitude_5() { return &____Amplitude_5; }
	inline void set__Amplitude_5(int32_t value)
	{
		____Amplitude_5 = value;
	}

	inline static int32_t get_offset_of__Scale_6() { return static_cast<int32_t>(offsetof(Uniforms_t65387656_StaticFields, ____Scale_6)); }
	inline int32_t get__Scale_6() const { return ____Scale_6; }
	inline int32_t* get_address_of__Scale_6() { return &____Scale_6; }
	inline void set__Scale_6(int32_t value)
	{
		____Scale_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T65387656_H
#ifndef ARROWARRAY_T841951830_H
#define ARROWARRAY_T841951830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray
struct  ArrowArray_t841951830  : public RuntimeObject
{
public:
	// UnityEngine.Mesh UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray::<mesh>k__BackingField
	Mesh_t4032156355 * ___U3CmeshU3Ek__BackingField_0;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray::<columnCount>k__BackingField
	int32_t ___U3CcolumnCountU3Ek__BackingField_1;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray::<rowCount>k__BackingField
	int32_t ___U3CrowCountU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CmeshU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ArrowArray_t841951830, ___U3CmeshU3Ek__BackingField_0)); }
	inline Mesh_t4032156355 * get_U3CmeshU3Ek__BackingField_0() const { return ___U3CmeshU3Ek__BackingField_0; }
	inline Mesh_t4032156355 ** get_address_of_U3CmeshU3Ek__BackingField_0() { return &___U3CmeshU3Ek__BackingField_0; }
	inline void set_U3CmeshU3Ek__BackingField_0(Mesh_t4032156355 * value)
	{
		___U3CmeshU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmeshU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CcolumnCountU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ArrowArray_t841951830, ___U3CcolumnCountU3Ek__BackingField_1)); }
	inline int32_t get_U3CcolumnCountU3Ek__BackingField_1() const { return ___U3CcolumnCountU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CcolumnCountU3Ek__BackingField_1() { return &___U3CcolumnCountU3Ek__BackingField_1; }
	inline void set_U3CcolumnCountU3Ek__BackingField_1(int32_t value)
	{
		___U3CcolumnCountU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CrowCountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ArrowArray_t841951830, ___U3CrowCountU3Ek__BackingField_2)); }
	inline int32_t get_U3CrowCountU3Ek__BackingField_2() const { return ___U3CrowCountU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CrowCountU3Ek__BackingField_2() { return &___U3CrowCountU3Ek__BackingField_2; }
	inline void set_U3CrowCountU3Ek__BackingField_2(int32_t value)
	{
		___U3CrowCountU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARROWARRAY_T841951830_H
#ifndef UNIFORMS_T4292644687_H
#define UNIFORMS_T4292644687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.VignetteComponent/Uniforms
struct  Uniforms_t4292644687  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t4292644687_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.VignetteComponent/Uniforms::_Vignette_Color
	int32_t ____Vignette_Color_0;
	// System.Int32 UnityEngine.PostProcessing.VignetteComponent/Uniforms::_Vignette_Center
	int32_t ____Vignette_Center_1;
	// System.Int32 UnityEngine.PostProcessing.VignetteComponent/Uniforms::_Vignette_Settings
	int32_t ____Vignette_Settings_2;
	// System.Int32 UnityEngine.PostProcessing.VignetteComponent/Uniforms::_Vignette_Mask
	int32_t ____Vignette_Mask_3;
	// System.Int32 UnityEngine.PostProcessing.VignetteComponent/Uniforms::_Vignette_Opacity
	int32_t ____Vignette_Opacity_4;

public:
	inline static int32_t get_offset_of__Vignette_Color_0() { return static_cast<int32_t>(offsetof(Uniforms_t4292644687_StaticFields, ____Vignette_Color_0)); }
	inline int32_t get__Vignette_Color_0() const { return ____Vignette_Color_0; }
	inline int32_t* get_address_of__Vignette_Color_0() { return &____Vignette_Color_0; }
	inline void set__Vignette_Color_0(int32_t value)
	{
		____Vignette_Color_0 = value;
	}

	inline static int32_t get_offset_of__Vignette_Center_1() { return static_cast<int32_t>(offsetof(Uniforms_t4292644687_StaticFields, ____Vignette_Center_1)); }
	inline int32_t get__Vignette_Center_1() const { return ____Vignette_Center_1; }
	inline int32_t* get_address_of__Vignette_Center_1() { return &____Vignette_Center_1; }
	inline void set__Vignette_Center_1(int32_t value)
	{
		____Vignette_Center_1 = value;
	}

	inline static int32_t get_offset_of__Vignette_Settings_2() { return static_cast<int32_t>(offsetof(Uniforms_t4292644687_StaticFields, ____Vignette_Settings_2)); }
	inline int32_t get__Vignette_Settings_2() const { return ____Vignette_Settings_2; }
	inline int32_t* get_address_of__Vignette_Settings_2() { return &____Vignette_Settings_2; }
	inline void set__Vignette_Settings_2(int32_t value)
	{
		____Vignette_Settings_2 = value;
	}

	inline static int32_t get_offset_of__Vignette_Mask_3() { return static_cast<int32_t>(offsetof(Uniforms_t4292644687_StaticFields, ____Vignette_Mask_3)); }
	inline int32_t get__Vignette_Mask_3() const { return ____Vignette_Mask_3; }
	inline int32_t* get_address_of__Vignette_Mask_3() { return &____Vignette_Mask_3; }
	inline void set__Vignette_Mask_3(int32_t value)
	{
		____Vignette_Mask_3 = value;
	}

	inline static int32_t get_offset_of__Vignette_Opacity_4() { return static_cast<int32_t>(offsetof(Uniforms_t4292644687_StaticFields, ____Vignette_Opacity_4)); }
	inline int32_t get__Vignette_Opacity_4() const { return ____Vignette_Opacity_4; }
	inline int32_t* get_address_of__Vignette_Opacity_4() { return &____Vignette_Opacity_4; }
	inline void set__Vignette_Opacity_4(int32_t value)
	{
		____Vignette_Opacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T4292644687_H
#ifndef UNIFORMS_T2069288676_H
#define UNIFORMS_T2069288676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ChromaticAberrationComponent/Uniforms
struct  Uniforms_t2069288676  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t2069288676_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.ChromaticAberrationComponent/Uniforms::_ChromaticAberration_Amount
	int32_t ____ChromaticAberration_Amount_0;
	// System.Int32 UnityEngine.PostProcessing.ChromaticAberrationComponent/Uniforms::_ChromaticAberration_Spectrum
	int32_t ____ChromaticAberration_Spectrum_1;

public:
	inline static int32_t get_offset_of__ChromaticAberration_Amount_0() { return static_cast<int32_t>(offsetof(Uniforms_t2069288676_StaticFields, ____ChromaticAberration_Amount_0)); }
	inline int32_t get__ChromaticAberration_Amount_0() const { return ____ChromaticAberration_Amount_0; }
	inline int32_t* get_address_of__ChromaticAberration_Amount_0() { return &____ChromaticAberration_Amount_0; }
	inline void set__ChromaticAberration_Amount_0(int32_t value)
	{
		____ChromaticAberration_Amount_0 = value;
	}

	inline static int32_t get_offset_of__ChromaticAberration_Spectrum_1() { return static_cast<int32_t>(offsetof(Uniforms_t2069288676_StaticFields, ____ChromaticAberration_Spectrum_1)); }
	inline int32_t get__ChromaticAberration_Spectrum_1() const { return ____ChromaticAberration_Spectrum_1; }
	inline int32_t* get_address_of__ChromaticAberration_Spectrum_1() { return &____ChromaticAberration_Spectrum_1; }
	inline void set__ChromaticAberration_Spectrum_1(int32_t value)
	{
		____ChromaticAberration_Spectrum_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T2069288676_H
#ifndef UNIFORMS_T3938410866_H
#define UNIFORMS_T3938410866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingComponent/Uniforms
struct  Uniforms_t3938410866  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t3938410866_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_LutParams
	int32_t ____LutParams_0;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_NeutralTonemapperParams1
	int32_t ____NeutralTonemapperParams1_1;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_NeutralTonemapperParams2
	int32_t ____NeutralTonemapperParams2_2;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_HueShift
	int32_t ____HueShift_3;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Saturation
	int32_t ____Saturation_4;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Contrast
	int32_t ____Contrast_5;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Balance
	int32_t ____Balance_6;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Lift
	int32_t ____Lift_7;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_InvGamma
	int32_t ____InvGamma_8;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Gain
	int32_t ____Gain_9;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Slope
	int32_t ____Slope_10;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Power
	int32_t ____Power_11;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Offset
	int32_t ____Offset_12;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_ChannelMixerRed
	int32_t ____ChannelMixerRed_13;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_ChannelMixerGreen
	int32_t ____ChannelMixerGreen_14;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_ChannelMixerBlue
	int32_t ____ChannelMixerBlue_15;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Curves
	int32_t ____Curves_16;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_LogLut
	int32_t ____LogLut_17;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_LogLut_Params
	int32_t ____LogLut_Params_18;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_ExposureEV
	int32_t ____ExposureEV_19;

public:
	inline static int32_t get_offset_of__LutParams_0() { return static_cast<int32_t>(offsetof(Uniforms_t3938410866_StaticFields, ____LutParams_0)); }
	inline int32_t get__LutParams_0() const { return ____LutParams_0; }
	inline int32_t* get_address_of__LutParams_0() { return &____LutParams_0; }
	inline void set__LutParams_0(int32_t value)
	{
		____LutParams_0 = value;
	}

	inline static int32_t get_offset_of__NeutralTonemapperParams1_1() { return static_cast<int32_t>(offsetof(Uniforms_t3938410866_StaticFields, ____NeutralTonemapperParams1_1)); }
	inline int32_t get__NeutralTonemapperParams1_1() const { return ____NeutralTonemapperParams1_1; }
	inline int32_t* get_address_of__NeutralTonemapperParams1_1() { return &____NeutralTonemapperParams1_1; }
	inline void set__NeutralTonemapperParams1_1(int32_t value)
	{
		____NeutralTonemapperParams1_1 = value;
	}

	inline static int32_t get_offset_of__NeutralTonemapperParams2_2() { return static_cast<int32_t>(offsetof(Uniforms_t3938410866_StaticFields, ____NeutralTonemapperParams2_2)); }
	inline int32_t get__NeutralTonemapperParams2_2() const { return ____NeutralTonemapperParams2_2; }
	inline int32_t* get_address_of__NeutralTonemapperParams2_2() { return &____NeutralTonemapperParams2_2; }
	inline void set__NeutralTonemapperParams2_2(int32_t value)
	{
		____NeutralTonemapperParams2_2 = value;
	}

	inline static int32_t get_offset_of__HueShift_3() { return static_cast<int32_t>(offsetof(Uniforms_t3938410866_StaticFields, ____HueShift_3)); }
	inline int32_t get__HueShift_3() const { return ____HueShift_3; }
	inline int32_t* get_address_of__HueShift_3() { return &____HueShift_3; }
	inline void set__HueShift_3(int32_t value)
	{
		____HueShift_3 = value;
	}

	inline static int32_t get_offset_of__Saturation_4() { return static_cast<int32_t>(offsetof(Uniforms_t3938410866_StaticFields, ____Saturation_4)); }
	inline int32_t get__Saturation_4() const { return ____Saturation_4; }
	inline int32_t* get_address_of__Saturation_4() { return &____Saturation_4; }
	inline void set__Saturation_4(int32_t value)
	{
		____Saturation_4 = value;
	}

	inline static int32_t get_offset_of__Contrast_5() { return static_cast<int32_t>(offsetof(Uniforms_t3938410866_StaticFields, ____Contrast_5)); }
	inline int32_t get__Contrast_5() const { return ____Contrast_5; }
	inline int32_t* get_address_of__Contrast_5() { return &____Contrast_5; }
	inline void set__Contrast_5(int32_t value)
	{
		____Contrast_5 = value;
	}

	inline static int32_t get_offset_of__Balance_6() { return static_cast<int32_t>(offsetof(Uniforms_t3938410866_StaticFields, ____Balance_6)); }
	inline int32_t get__Balance_6() const { return ____Balance_6; }
	inline int32_t* get_address_of__Balance_6() { return &____Balance_6; }
	inline void set__Balance_6(int32_t value)
	{
		____Balance_6 = value;
	}

	inline static int32_t get_offset_of__Lift_7() { return static_cast<int32_t>(offsetof(Uniforms_t3938410866_StaticFields, ____Lift_7)); }
	inline int32_t get__Lift_7() const { return ____Lift_7; }
	inline int32_t* get_address_of__Lift_7() { return &____Lift_7; }
	inline void set__Lift_7(int32_t value)
	{
		____Lift_7 = value;
	}

	inline static int32_t get_offset_of__InvGamma_8() { return static_cast<int32_t>(offsetof(Uniforms_t3938410866_StaticFields, ____InvGamma_8)); }
	inline int32_t get__InvGamma_8() const { return ____InvGamma_8; }
	inline int32_t* get_address_of__InvGamma_8() { return &____InvGamma_8; }
	inline void set__InvGamma_8(int32_t value)
	{
		____InvGamma_8 = value;
	}

	inline static int32_t get_offset_of__Gain_9() { return static_cast<int32_t>(offsetof(Uniforms_t3938410866_StaticFields, ____Gain_9)); }
	inline int32_t get__Gain_9() const { return ____Gain_9; }
	inline int32_t* get_address_of__Gain_9() { return &____Gain_9; }
	inline void set__Gain_9(int32_t value)
	{
		____Gain_9 = value;
	}

	inline static int32_t get_offset_of__Slope_10() { return static_cast<int32_t>(offsetof(Uniforms_t3938410866_StaticFields, ____Slope_10)); }
	inline int32_t get__Slope_10() const { return ____Slope_10; }
	inline int32_t* get_address_of__Slope_10() { return &____Slope_10; }
	inline void set__Slope_10(int32_t value)
	{
		____Slope_10 = value;
	}

	inline static int32_t get_offset_of__Power_11() { return static_cast<int32_t>(offsetof(Uniforms_t3938410866_StaticFields, ____Power_11)); }
	inline int32_t get__Power_11() const { return ____Power_11; }
	inline int32_t* get_address_of__Power_11() { return &____Power_11; }
	inline void set__Power_11(int32_t value)
	{
		____Power_11 = value;
	}

	inline static int32_t get_offset_of__Offset_12() { return static_cast<int32_t>(offsetof(Uniforms_t3938410866_StaticFields, ____Offset_12)); }
	inline int32_t get__Offset_12() const { return ____Offset_12; }
	inline int32_t* get_address_of__Offset_12() { return &____Offset_12; }
	inline void set__Offset_12(int32_t value)
	{
		____Offset_12 = value;
	}

	inline static int32_t get_offset_of__ChannelMixerRed_13() { return static_cast<int32_t>(offsetof(Uniforms_t3938410866_StaticFields, ____ChannelMixerRed_13)); }
	inline int32_t get__ChannelMixerRed_13() const { return ____ChannelMixerRed_13; }
	inline int32_t* get_address_of__ChannelMixerRed_13() { return &____ChannelMixerRed_13; }
	inline void set__ChannelMixerRed_13(int32_t value)
	{
		____ChannelMixerRed_13 = value;
	}

	inline static int32_t get_offset_of__ChannelMixerGreen_14() { return static_cast<int32_t>(offsetof(Uniforms_t3938410866_StaticFields, ____ChannelMixerGreen_14)); }
	inline int32_t get__ChannelMixerGreen_14() const { return ____ChannelMixerGreen_14; }
	inline int32_t* get_address_of__ChannelMixerGreen_14() { return &____ChannelMixerGreen_14; }
	inline void set__ChannelMixerGreen_14(int32_t value)
	{
		____ChannelMixerGreen_14 = value;
	}

	inline static int32_t get_offset_of__ChannelMixerBlue_15() { return static_cast<int32_t>(offsetof(Uniforms_t3938410866_StaticFields, ____ChannelMixerBlue_15)); }
	inline int32_t get__ChannelMixerBlue_15() const { return ____ChannelMixerBlue_15; }
	inline int32_t* get_address_of__ChannelMixerBlue_15() { return &____ChannelMixerBlue_15; }
	inline void set__ChannelMixerBlue_15(int32_t value)
	{
		____ChannelMixerBlue_15 = value;
	}

	inline static int32_t get_offset_of__Curves_16() { return static_cast<int32_t>(offsetof(Uniforms_t3938410866_StaticFields, ____Curves_16)); }
	inline int32_t get__Curves_16() const { return ____Curves_16; }
	inline int32_t* get_address_of__Curves_16() { return &____Curves_16; }
	inline void set__Curves_16(int32_t value)
	{
		____Curves_16 = value;
	}

	inline static int32_t get_offset_of__LogLut_17() { return static_cast<int32_t>(offsetof(Uniforms_t3938410866_StaticFields, ____LogLut_17)); }
	inline int32_t get__LogLut_17() const { return ____LogLut_17; }
	inline int32_t* get_address_of__LogLut_17() { return &____LogLut_17; }
	inline void set__LogLut_17(int32_t value)
	{
		____LogLut_17 = value;
	}

	inline static int32_t get_offset_of__LogLut_Params_18() { return static_cast<int32_t>(offsetof(Uniforms_t3938410866_StaticFields, ____LogLut_Params_18)); }
	inline int32_t get__LogLut_Params_18() const { return ____LogLut_Params_18; }
	inline int32_t* get_address_of__LogLut_Params_18() { return &____LogLut_Params_18; }
	inline void set__LogLut_Params_18(int32_t value)
	{
		____LogLut_Params_18 = value;
	}

	inline static int32_t get_offset_of__ExposureEV_19() { return static_cast<int32_t>(offsetof(Uniforms_t3938410866_StaticFields, ____ExposureEV_19)); }
	inline int32_t get__ExposureEV_19() const { return ____ExposureEV_19; }
	inline int32_t* get_address_of__ExposureEV_19() { return &____ExposureEV_19; }
	inline void set__ExposureEV_19(int32_t value)
	{
		____ExposureEV_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T3938410866_H
#ifndef UNIFORMS_T1735547145_H
#define UNIFORMS_T1735547145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms
struct  Uniforms_t1735547145  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t1735547145_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_DepthOfFieldTex
	int32_t ____DepthOfFieldTex_0;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_DepthOfFieldCoCTex
	int32_t ____DepthOfFieldCoCTex_1;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_Distance
	int32_t ____Distance_2;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_LensCoeff
	int32_t ____LensCoeff_3;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_MaxCoC
	int32_t ____MaxCoC_4;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_RcpMaxCoC
	int32_t ____RcpMaxCoC_5;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_RcpAspect
	int32_t ____RcpAspect_6;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_MainTex
	int32_t ____MainTex_7;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_CoCTex
	int32_t ____CoCTex_8;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_TaaParams
	int32_t ____TaaParams_9;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_DepthOfFieldParams
	int32_t ____DepthOfFieldParams_10;

public:
	inline static int32_t get_offset_of__DepthOfFieldTex_0() { return static_cast<int32_t>(offsetof(Uniforms_t1735547145_StaticFields, ____DepthOfFieldTex_0)); }
	inline int32_t get__DepthOfFieldTex_0() const { return ____DepthOfFieldTex_0; }
	inline int32_t* get_address_of__DepthOfFieldTex_0() { return &____DepthOfFieldTex_0; }
	inline void set__DepthOfFieldTex_0(int32_t value)
	{
		____DepthOfFieldTex_0 = value;
	}

	inline static int32_t get_offset_of__DepthOfFieldCoCTex_1() { return static_cast<int32_t>(offsetof(Uniforms_t1735547145_StaticFields, ____DepthOfFieldCoCTex_1)); }
	inline int32_t get__DepthOfFieldCoCTex_1() const { return ____DepthOfFieldCoCTex_1; }
	inline int32_t* get_address_of__DepthOfFieldCoCTex_1() { return &____DepthOfFieldCoCTex_1; }
	inline void set__DepthOfFieldCoCTex_1(int32_t value)
	{
		____DepthOfFieldCoCTex_1 = value;
	}

	inline static int32_t get_offset_of__Distance_2() { return static_cast<int32_t>(offsetof(Uniforms_t1735547145_StaticFields, ____Distance_2)); }
	inline int32_t get__Distance_2() const { return ____Distance_2; }
	inline int32_t* get_address_of__Distance_2() { return &____Distance_2; }
	inline void set__Distance_2(int32_t value)
	{
		____Distance_2 = value;
	}

	inline static int32_t get_offset_of__LensCoeff_3() { return static_cast<int32_t>(offsetof(Uniforms_t1735547145_StaticFields, ____LensCoeff_3)); }
	inline int32_t get__LensCoeff_3() const { return ____LensCoeff_3; }
	inline int32_t* get_address_of__LensCoeff_3() { return &____LensCoeff_3; }
	inline void set__LensCoeff_3(int32_t value)
	{
		____LensCoeff_3 = value;
	}

	inline static int32_t get_offset_of__MaxCoC_4() { return static_cast<int32_t>(offsetof(Uniforms_t1735547145_StaticFields, ____MaxCoC_4)); }
	inline int32_t get__MaxCoC_4() const { return ____MaxCoC_4; }
	inline int32_t* get_address_of__MaxCoC_4() { return &____MaxCoC_4; }
	inline void set__MaxCoC_4(int32_t value)
	{
		____MaxCoC_4 = value;
	}

	inline static int32_t get_offset_of__RcpMaxCoC_5() { return static_cast<int32_t>(offsetof(Uniforms_t1735547145_StaticFields, ____RcpMaxCoC_5)); }
	inline int32_t get__RcpMaxCoC_5() const { return ____RcpMaxCoC_5; }
	inline int32_t* get_address_of__RcpMaxCoC_5() { return &____RcpMaxCoC_5; }
	inline void set__RcpMaxCoC_5(int32_t value)
	{
		____RcpMaxCoC_5 = value;
	}

	inline static int32_t get_offset_of__RcpAspect_6() { return static_cast<int32_t>(offsetof(Uniforms_t1735547145_StaticFields, ____RcpAspect_6)); }
	inline int32_t get__RcpAspect_6() const { return ____RcpAspect_6; }
	inline int32_t* get_address_of__RcpAspect_6() { return &____RcpAspect_6; }
	inline void set__RcpAspect_6(int32_t value)
	{
		____RcpAspect_6 = value;
	}

	inline static int32_t get_offset_of__MainTex_7() { return static_cast<int32_t>(offsetof(Uniforms_t1735547145_StaticFields, ____MainTex_7)); }
	inline int32_t get__MainTex_7() const { return ____MainTex_7; }
	inline int32_t* get_address_of__MainTex_7() { return &____MainTex_7; }
	inline void set__MainTex_7(int32_t value)
	{
		____MainTex_7 = value;
	}

	inline static int32_t get_offset_of__CoCTex_8() { return static_cast<int32_t>(offsetof(Uniforms_t1735547145_StaticFields, ____CoCTex_8)); }
	inline int32_t get__CoCTex_8() const { return ____CoCTex_8; }
	inline int32_t* get_address_of__CoCTex_8() { return &____CoCTex_8; }
	inline void set__CoCTex_8(int32_t value)
	{
		____CoCTex_8 = value;
	}

	inline static int32_t get_offset_of__TaaParams_9() { return static_cast<int32_t>(offsetof(Uniforms_t1735547145_StaticFields, ____TaaParams_9)); }
	inline int32_t get__TaaParams_9() const { return ____TaaParams_9; }
	inline int32_t* get_address_of__TaaParams_9() { return &____TaaParams_9; }
	inline void set__TaaParams_9(int32_t value)
	{
		____TaaParams_9 = value;
	}

	inline static int32_t get_offset_of__DepthOfFieldParams_10() { return static_cast<int32_t>(offsetof(Uniforms_t1735547145_StaticFields, ____DepthOfFieldParams_10)); }
	inline int32_t get__DepthOfFieldParams_10() const { return ____DepthOfFieldParams_10; }
	inline int32_t* get_address_of__DepthOfFieldParams_10() { return &____DepthOfFieldParams_10; }
	inline void set__DepthOfFieldParams_10(int32_t value)
	{
		____DepthOfFieldParams_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T1735547145_H
#ifndef UNIFORMS_T1234480551_H
#define UNIFORMS_T1234480551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.DitheringComponent/Uniforms
struct  Uniforms_t1234480551  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t1234480551_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.DitheringComponent/Uniforms::_DitheringTex
	int32_t ____DitheringTex_0;
	// System.Int32 UnityEngine.PostProcessing.DitheringComponent/Uniforms::_DitheringCoords
	int32_t ____DitheringCoords_1;

public:
	inline static int32_t get_offset_of__DitheringTex_0() { return static_cast<int32_t>(offsetof(Uniforms_t1234480551_StaticFields, ____DitheringTex_0)); }
	inline int32_t get__DitheringTex_0() const { return ____DitheringTex_0; }
	inline int32_t* get_address_of__DitheringTex_0() { return &____DitheringTex_0; }
	inline void set__DitheringTex_0(int32_t value)
	{
		____DitheringTex_0 = value;
	}

	inline static int32_t get_offset_of__DitheringCoords_1() { return static_cast<int32_t>(offsetof(Uniforms_t1234480551_StaticFields, ____DitheringCoords_1)); }
	inline int32_t get__DitheringCoords_1() const { return ____DitheringCoords_1; }
	inline int32_t* get_address_of__DitheringCoords_1() { return &____DitheringCoords_1; }
	inline void set__DitheringCoords_1(int32_t value)
	{
		____DitheringCoords_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T1234480551_H
#ifndef UNIFORMS_T143327145_H
#define UNIFORMS_T143327145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.FogComponent/Uniforms
struct  Uniforms_t143327145  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t143327145_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.FogComponent/Uniforms::_FogColor
	int32_t ____FogColor_0;
	// System.Int32 UnityEngine.PostProcessing.FogComponent/Uniforms::_Density
	int32_t ____Density_1;
	// System.Int32 UnityEngine.PostProcessing.FogComponent/Uniforms::_Start
	int32_t ____Start_2;
	// System.Int32 UnityEngine.PostProcessing.FogComponent/Uniforms::_End
	int32_t ____End_3;
	// System.Int32 UnityEngine.PostProcessing.FogComponent/Uniforms::_TempRT
	int32_t ____TempRT_4;

public:
	inline static int32_t get_offset_of__FogColor_0() { return static_cast<int32_t>(offsetof(Uniforms_t143327145_StaticFields, ____FogColor_0)); }
	inline int32_t get__FogColor_0() const { return ____FogColor_0; }
	inline int32_t* get_address_of__FogColor_0() { return &____FogColor_0; }
	inline void set__FogColor_0(int32_t value)
	{
		____FogColor_0 = value;
	}

	inline static int32_t get_offset_of__Density_1() { return static_cast<int32_t>(offsetof(Uniforms_t143327145_StaticFields, ____Density_1)); }
	inline int32_t get__Density_1() const { return ____Density_1; }
	inline int32_t* get_address_of__Density_1() { return &____Density_1; }
	inline void set__Density_1(int32_t value)
	{
		____Density_1 = value;
	}

	inline static int32_t get_offset_of__Start_2() { return static_cast<int32_t>(offsetof(Uniforms_t143327145_StaticFields, ____Start_2)); }
	inline int32_t get__Start_2() const { return ____Start_2; }
	inline int32_t* get_address_of__Start_2() { return &____Start_2; }
	inline void set__Start_2(int32_t value)
	{
		____Start_2 = value;
	}

	inline static int32_t get_offset_of__End_3() { return static_cast<int32_t>(offsetof(Uniforms_t143327145_StaticFields, ____End_3)); }
	inline int32_t get__End_3() const { return ____End_3; }
	inline int32_t* get_address_of__End_3() { return &____End_3; }
	inline void set__End_3(int32_t value)
	{
		____End_3 = value;
	}

	inline static int32_t get_offset_of__TempRT_4() { return static_cast<int32_t>(offsetof(Uniforms_t143327145_StaticFields, ____TempRT_4)); }
	inline int32_t get__TempRT_4() const { return ____TempRT_4; }
	inline int32_t* get_address_of__TempRT_4() { return &____TempRT_4; }
	inline void set__TempRT_4(int32_t value)
	{
		____TempRT_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T143327145_H
#ifndef UNIFORMS_T731612883_H
#define UNIFORMS_T731612883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.FxaaComponent/Uniforms
struct  Uniforms_t731612883  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t731612883_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.FxaaComponent/Uniforms::_QualitySettings
	int32_t ____QualitySettings_0;
	// System.Int32 UnityEngine.PostProcessing.FxaaComponent/Uniforms::_ConsoleSettings
	int32_t ____ConsoleSettings_1;

public:
	inline static int32_t get_offset_of__QualitySettings_0() { return static_cast<int32_t>(offsetof(Uniforms_t731612883_StaticFields, ____QualitySettings_0)); }
	inline int32_t get__QualitySettings_0() const { return ____QualitySettings_0; }
	inline int32_t* get_address_of__QualitySettings_0() { return &____QualitySettings_0; }
	inline void set__QualitySettings_0(int32_t value)
	{
		____QualitySettings_0 = value;
	}

	inline static int32_t get_offset_of__ConsoleSettings_1() { return static_cast<int32_t>(offsetof(Uniforms_t731612883_StaticFields, ____ConsoleSettings_1)); }
	inline int32_t get__ConsoleSettings_1() const { return ____ConsoleSettings_1; }
	inline int32_t* get_address_of__ConsoleSettings_1() { return &____ConsoleSettings_1; }
	inline void set__ConsoleSettings_1(int32_t value)
	{
		____ConsoleSettings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T731612883_H
#ifndef UNIFORMS_T4141834570_H
#define UNIFORMS_T4141834570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.GrainComponent/Uniforms
struct  Uniforms_t4141834570  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t4141834570_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.GrainComponent/Uniforms::_Grain_Params1
	int32_t ____Grain_Params1_0;
	// System.Int32 UnityEngine.PostProcessing.GrainComponent/Uniforms::_Grain_Params2
	int32_t ____Grain_Params2_1;
	// System.Int32 UnityEngine.PostProcessing.GrainComponent/Uniforms::_GrainTex
	int32_t ____GrainTex_2;
	// System.Int32 UnityEngine.PostProcessing.GrainComponent/Uniforms::_Phase
	int32_t ____Phase_3;

public:
	inline static int32_t get_offset_of__Grain_Params1_0() { return static_cast<int32_t>(offsetof(Uniforms_t4141834570_StaticFields, ____Grain_Params1_0)); }
	inline int32_t get__Grain_Params1_0() const { return ____Grain_Params1_0; }
	inline int32_t* get_address_of__Grain_Params1_0() { return &____Grain_Params1_0; }
	inline void set__Grain_Params1_0(int32_t value)
	{
		____Grain_Params1_0 = value;
	}

	inline static int32_t get_offset_of__Grain_Params2_1() { return static_cast<int32_t>(offsetof(Uniforms_t4141834570_StaticFields, ____Grain_Params2_1)); }
	inline int32_t get__Grain_Params2_1() const { return ____Grain_Params2_1; }
	inline int32_t* get_address_of__Grain_Params2_1() { return &____Grain_Params2_1; }
	inline void set__Grain_Params2_1(int32_t value)
	{
		____Grain_Params2_1 = value;
	}

	inline static int32_t get_offset_of__GrainTex_2() { return static_cast<int32_t>(offsetof(Uniforms_t4141834570_StaticFields, ____GrainTex_2)); }
	inline int32_t get__GrainTex_2() const { return ____GrainTex_2; }
	inline int32_t* get_address_of__GrainTex_2() { return &____GrainTex_2; }
	inline void set__GrainTex_2(int32_t value)
	{
		____GrainTex_2 = value;
	}

	inline static int32_t get_offset_of__Phase_3() { return static_cast<int32_t>(offsetof(Uniforms_t4141834570_StaticFields, ____Phase_3)); }
	inline int32_t get__Phase_3() const { return ____Phase_3; }
	inline int32_t* get_address_of__Phase_3() { return &____Phase_3; }
	inline void set__Phase_3(int32_t value)
	{
		____Phase_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T4141834570_H
#ifndef UNIFORMS_T739603470_H
#define UNIFORMS_T739603470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.MotionBlurComponent/Uniforms
struct  Uniforms_t739603470  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t739603470_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_VelocityScale
	int32_t ____VelocityScale_0;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_MaxBlurRadius
	int32_t ____MaxBlurRadius_1;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_RcpMaxBlurRadius
	int32_t ____RcpMaxBlurRadius_2;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_VelocityTex
	int32_t ____VelocityTex_3;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_MainTex
	int32_t ____MainTex_4;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_Tile2RT
	int32_t ____Tile2RT_5;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_Tile4RT
	int32_t ____Tile4RT_6;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_Tile8RT
	int32_t ____Tile8RT_7;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_TileMaxOffs
	int32_t ____TileMaxOffs_8;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_TileMaxLoop
	int32_t ____TileMaxLoop_9;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_TileVRT
	int32_t ____TileVRT_10;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_NeighborMaxTex
	int32_t ____NeighborMaxTex_11;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_LoopCount
	int32_t ____LoopCount_12;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_TempRT
	int32_t ____TempRT_13;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History1LumaTex
	int32_t ____History1LumaTex_14;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History2LumaTex
	int32_t ____History2LumaTex_15;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History3LumaTex
	int32_t ____History3LumaTex_16;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History4LumaTex
	int32_t ____History4LumaTex_17;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History1ChromaTex
	int32_t ____History1ChromaTex_18;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History2ChromaTex
	int32_t ____History2ChromaTex_19;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History3ChromaTex
	int32_t ____History3ChromaTex_20;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History4ChromaTex
	int32_t ____History4ChromaTex_21;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History1Weight
	int32_t ____History1Weight_22;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History2Weight
	int32_t ____History2Weight_23;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History3Weight
	int32_t ____History3Weight_24;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History4Weight
	int32_t ____History4Weight_25;

public:
	inline static int32_t get_offset_of__VelocityScale_0() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____VelocityScale_0)); }
	inline int32_t get__VelocityScale_0() const { return ____VelocityScale_0; }
	inline int32_t* get_address_of__VelocityScale_0() { return &____VelocityScale_0; }
	inline void set__VelocityScale_0(int32_t value)
	{
		____VelocityScale_0 = value;
	}

	inline static int32_t get_offset_of__MaxBlurRadius_1() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____MaxBlurRadius_1)); }
	inline int32_t get__MaxBlurRadius_1() const { return ____MaxBlurRadius_1; }
	inline int32_t* get_address_of__MaxBlurRadius_1() { return &____MaxBlurRadius_1; }
	inline void set__MaxBlurRadius_1(int32_t value)
	{
		____MaxBlurRadius_1 = value;
	}

	inline static int32_t get_offset_of__RcpMaxBlurRadius_2() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____RcpMaxBlurRadius_2)); }
	inline int32_t get__RcpMaxBlurRadius_2() const { return ____RcpMaxBlurRadius_2; }
	inline int32_t* get_address_of__RcpMaxBlurRadius_2() { return &____RcpMaxBlurRadius_2; }
	inline void set__RcpMaxBlurRadius_2(int32_t value)
	{
		____RcpMaxBlurRadius_2 = value;
	}

	inline static int32_t get_offset_of__VelocityTex_3() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____VelocityTex_3)); }
	inline int32_t get__VelocityTex_3() const { return ____VelocityTex_3; }
	inline int32_t* get_address_of__VelocityTex_3() { return &____VelocityTex_3; }
	inline void set__VelocityTex_3(int32_t value)
	{
		____VelocityTex_3 = value;
	}

	inline static int32_t get_offset_of__MainTex_4() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____MainTex_4)); }
	inline int32_t get__MainTex_4() const { return ____MainTex_4; }
	inline int32_t* get_address_of__MainTex_4() { return &____MainTex_4; }
	inline void set__MainTex_4(int32_t value)
	{
		____MainTex_4 = value;
	}

	inline static int32_t get_offset_of__Tile2RT_5() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____Tile2RT_5)); }
	inline int32_t get__Tile2RT_5() const { return ____Tile2RT_5; }
	inline int32_t* get_address_of__Tile2RT_5() { return &____Tile2RT_5; }
	inline void set__Tile2RT_5(int32_t value)
	{
		____Tile2RT_5 = value;
	}

	inline static int32_t get_offset_of__Tile4RT_6() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____Tile4RT_6)); }
	inline int32_t get__Tile4RT_6() const { return ____Tile4RT_6; }
	inline int32_t* get_address_of__Tile4RT_6() { return &____Tile4RT_6; }
	inline void set__Tile4RT_6(int32_t value)
	{
		____Tile4RT_6 = value;
	}

	inline static int32_t get_offset_of__Tile8RT_7() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____Tile8RT_7)); }
	inline int32_t get__Tile8RT_7() const { return ____Tile8RT_7; }
	inline int32_t* get_address_of__Tile8RT_7() { return &____Tile8RT_7; }
	inline void set__Tile8RT_7(int32_t value)
	{
		____Tile8RT_7 = value;
	}

	inline static int32_t get_offset_of__TileMaxOffs_8() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____TileMaxOffs_8)); }
	inline int32_t get__TileMaxOffs_8() const { return ____TileMaxOffs_8; }
	inline int32_t* get_address_of__TileMaxOffs_8() { return &____TileMaxOffs_8; }
	inline void set__TileMaxOffs_8(int32_t value)
	{
		____TileMaxOffs_8 = value;
	}

	inline static int32_t get_offset_of__TileMaxLoop_9() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____TileMaxLoop_9)); }
	inline int32_t get__TileMaxLoop_9() const { return ____TileMaxLoop_9; }
	inline int32_t* get_address_of__TileMaxLoop_9() { return &____TileMaxLoop_9; }
	inline void set__TileMaxLoop_9(int32_t value)
	{
		____TileMaxLoop_9 = value;
	}

	inline static int32_t get_offset_of__TileVRT_10() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____TileVRT_10)); }
	inline int32_t get__TileVRT_10() const { return ____TileVRT_10; }
	inline int32_t* get_address_of__TileVRT_10() { return &____TileVRT_10; }
	inline void set__TileVRT_10(int32_t value)
	{
		____TileVRT_10 = value;
	}

	inline static int32_t get_offset_of__NeighborMaxTex_11() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____NeighborMaxTex_11)); }
	inline int32_t get__NeighborMaxTex_11() const { return ____NeighborMaxTex_11; }
	inline int32_t* get_address_of__NeighborMaxTex_11() { return &____NeighborMaxTex_11; }
	inline void set__NeighborMaxTex_11(int32_t value)
	{
		____NeighborMaxTex_11 = value;
	}

	inline static int32_t get_offset_of__LoopCount_12() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____LoopCount_12)); }
	inline int32_t get__LoopCount_12() const { return ____LoopCount_12; }
	inline int32_t* get_address_of__LoopCount_12() { return &____LoopCount_12; }
	inline void set__LoopCount_12(int32_t value)
	{
		____LoopCount_12 = value;
	}

	inline static int32_t get_offset_of__TempRT_13() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____TempRT_13)); }
	inline int32_t get__TempRT_13() const { return ____TempRT_13; }
	inline int32_t* get_address_of__TempRT_13() { return &____TempRT_13; }
	inline void set__TempRT_13(int32_t value)
	{
		____TempRT_13 = value;
	}

	inline static int32_t get_offset_of__History1LumaTex_14() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____History1LumaTex_14)); }
	inline int32_t get__History1LumaTex_14() const { return ____History1LumaTex_14; }
	inline int32_t* get_address_of__History1LumaTex_14() { return &____History1LumaTex_14; }
	inline void set__History1LumaTex_14(int32_t value)
	{
		____History1LumaTex_14 = value;
	}

	inline static int32_t get_offset_of__History2LumaTex_15() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____History2LumaTex_15)); }
	inline int32_t get__History2LumaTex_15() const { return ____History2LumaTex_15; }
	inline int32_t* get_address_of__History2LumaTex_15() { return &____History2LumaTex_15; }
	inline void set__History2LumaTex_15(int32_t value)
	{
		____History2LumaTex_15 = value;
	}

	inline static int32_t get_offset_of__History3LumaTex_16() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____History3LumaTex_16)); }
	inline int32_t get__History3LumaTex_16() const { return ____History3LumaTex_16; }
	inline int32_t* get_address_of__History3LumaTex_16() { return &____History3LumaTex_16; }
	inline void set__History3LumaTex_16(int32_t value)
	{
		____History3LumaTex_16 = value;
	}

	inline static int32_t get_offset_of__History4LumaTex_17() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____History4LumaTex_17)); }
	inline int32_t get__History4LumaTex_17() const { return ____History4LumaTex_17; }
	inline int32_t* get_address_of__History4LumaTex_17() { return &____History4LumaTex_17; }
	inline void set__History4LumaTex_17(int32_t value)
	{
		____History4LumaTex_17 = value;
	}

	inline static int32_t get_offset_of__History1ChromaTex_18() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____History1ChromaTex_18)); }
	inline int32_t get__History1ChromaTex_18() const { return ____History1ChromaTex_18; }
	inline int32_t* get_address_of__History1ChromaTex_18() { return &____History1ChromaTex_18; }
	inline void set__History1ChromaTex_18(int32_t value)
	{
		____History1ChromaTex_18 = value;
	}

	inline static int32_t get_offset_of__History2ChromaTex_19() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____History2ChromaTex_19)); }
	inline int32_t get__History2ChromaTex_19() const { return ____History2ChromaTex_19; }
	inline int32_t* get_address_of__History2ChromaTex_19() { return &____History2ChromaTex_19; }
	inline void set__History2ChromaTex_19(int32_t value)
	{
		____History2ChromaTex_19 = value;
	}

	inline static int32_t get_offset_of__History3ChromaTex_20() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____History3ChromaTex_20)); }
	inline int32_t get__History3ChromaTex_20() const { return ____History3ChromaTex_20; }
	inline int32_t* get_address_of__History3ChromaTex_20() { return &____History3ChromaTex_20; }
	inline void set__History3ChromaTex_20(int32_t value)
	{
		____History3ChromaTex_20 = value;
	}

	inline static int32_t get_offset_of__History4ChromaTex_21() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____History4ChromaTex_21)); }
	inline int32_t get__History4ChromaTex_21() const { return ____History4ChromaTex_21; }
	inline int32_t* get_address_of__History4ChromaTex_21() { return &____History4ChromaTex_21; }
	inline void set__History4ChromaTex_21(int32_t value)
	{
		____History4ChromaTex_21 = value;
	}

	inline static int32_t get_offset_of__History1Weight_22() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____History1Weight_22)); }
	inline int32_t get__History1Weight_22() const { return ____History1Weight_22; }
	inline int32_t* get_address_of__History1Weight_22() { return &____History1Weight_22; }
	inline void set__History1Weight_22(int32_t value)
	{
		____History1Weight_22 = value;
	}

	inline static int32_t get_offset_of__History2Weight_23() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____History2Weight_23)); }
	inline int32_t get__History2Weight_23() const { return ____History2Weight_23; }
	inline int32_t* get_address_of__History2Weight_23() { return &____History2Weight_23; }
	inline void set__History2Weight_23(int32_t value)
	{
		____History2Weight_23 = value;
	}

	inline static int32_t get_offset_of__History3Weight_24() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____History3Weight_24)); }
	inline int32_t get__History3Weight_24() const { return ____History3Weight_24; }
	inline int32_t* get_address_of__History3Weight_24() { return &____History3Weight_24; }
	inline void set__History3Weight_24(int32_t value)
	{
		____History3Weight_24 = value;
	}

	inline static int32_t get_offset_of__History4Weight_25() { return static_cast<int32_t>(offsetof(Uniforms_t739603470_StaticFields, ____History4Weight_25)); }
	inline int32_t get__History4Weight_25() const { return ____History4Weight_25; }
	inline int32_t* get_address_of__History4Weight_25() { return &____History4Weight_25; }
	inline void set__History4Weight_25(int32_t value)
	{
		____History4Weight_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T739603470_H
#ifndef UNIFORMS_T3370298352_H
#define UNIFORMS_T3370298352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms
struct  Uniforms_t3370298352  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t3370298352_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_RayStepSize
	int32_t ____RayStepSize_0;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_AdditiveReflection
	int32_t ____AdditiveReflection_1;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_BilateralUpsampling
	int32_t ____BilateralUpsampling_2;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_TreatBackfaceHitAsMiss
	int32_t ____TreatBackfaceHitAsMiss_3;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_AllowBackwardsRays
	int32_t ____AllowBackwardsRays_4;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_TraceBehindObjects
	int32_t ____TraceBehindObjects_5;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_MaxSteps
	int32_t ____MaxSteps_6;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_FullResolutionFiltering
	int32_t ____FullResolutionFiltering_7;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_HalfResolution
	int32_t ____HalfResolution_8;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_HighlightSuppression
	int32_t ____HighlightSuppression_9;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_PixelsPerMeterAtOneMeter
	int32_t ____PixelsPerMeterAtOneMeter_10;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_ScreenEdgeFading
	int32_t ____ScreenEdgeFading_11;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_ReflectionBlur
	int32_t ____ReflectionBlur_12;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_MaxRayTraceDistance
	int32_t ____MaxRayTraceDistance_13;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_FadeDistance
	int32_t ____FadeDistance_14;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_LayerThickness
	int32_t ____LayerThickness_15;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_SSRMultiplier
	int32_t ____SSRMultiplier_16;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_FresnelFade
	int32_t ____FresnelFade_17;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_FresnelFadePower
	int32_t ____FresnelFadePower_18;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_ReflectionBufferSize
	int32_t ____ReflectionBufferSize_19;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_ScreenSize
	int32_t ____ScreenSize_20;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_InvScreenSize
	int32_t ____InvScreenSize_21;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_ProjInfo
	int32_t ____ProjInfo_22;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_CameraClipInfo
	int32_t ____CameraClipInfo_23;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_ProjectToPixelMatrix
	int32_t ____ProjectToPixelMatrix_24;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_WorldToCameraMatrix
	int32_t ____WorldToCameraMatrix_25;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_CameraToWorldMatrix
	int32_t ____CameraToWorldMatrix_26;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_Axis
	int32_t ____Axis_27;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_CurrentMipLevel
	int32_t ____CurrentMipLevel_28;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_NormalAndRoughnessTexture
	int32_t ____NormalAndRoughnessTexture_29;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_HitPointTexture
	int32_t ____HitPointTexture_30;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_BlurTexture
	int32_t ____BlurTexture_31;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_FilteredReflections
	int32_t ____FilteredReflections_32;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_FinalReflectionTexture
	int32_t ____FinalReflectionTexture_33;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_TempTexture
	int32_t ____TempTexture_34;

public:
	inline static int32_t get_offset_of__RayStepSize_0() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____RayStepSize_0)); }
	inline int32_t get__RayStepSize_0() const { return ____RayStepSize_0; }
	inline int32_t* get_address_of__RayStepSize_0() { return &____RayStepSize_0; }
	inline void set__RayStepSize_0(int32_t value)
	{
		____RayStepSize_0 = value;
	}

	inline static int32_t get_offset_of__AdditiveReflection_1() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____AdditiveReflection_1)); }
	inline int32_t get__AdditiveReflection_1() const { return ____AdditiveReflection_1; }
	inline int32_t* get_address_of__AdditiveReflection_1() { return &____AdditiveReflection_1; }
	inline void set__AdditiveReflection_1(int32_t value)
	{
		____AdditiveReflection_1 = value;
	}

	inline static int32_t get_offset_of__BilateralUpsampling_2() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____BilateralUpsampling_2)); }
	inline int32_t get__BilateralUpsampling_2() const { return ____BilateralUpsampling_2; }
	inline int32_t* get_address_of__BilateralUpsampling_2() { return &____BilateralUpsampling_2; }
	inline void set__BilateralUpsampling_2(int32_t value)
	{
		____BilateralUpsampling_2 = value;
	}

	inline static int32_t get_offset_of__TreatBackfaceHitAsMiss_3() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____TreatBackfaceHitAsMiss_3)); }
	inline int32_t get__TreatBackfaceHitAsMiss_3() const { return ____TreatBackfaceHitAsMiss_3; }
	inline int32_t* get_address_of__TreatBackfaceHitAsMiss_3() { return &____TreatBackfaceHitAsMiss_3; }
	inline void set__TreatBackfaceHitAsMiss_3(int32_t value)
	{
		____TreatBackfaceHitAsMiss_3 = value;
	}

	inline static int32_t get_offset_of__AllowBackwardsRays_4() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____AllowBackwardsRays_4)); }
	inline int32_t get__AllowBackwardsRays_4() const { return ____AllowBackwardsRays_4; }
	inline int32_t* get_address_of__AllowBackwardsRays_4() { return &____AllowBackwardsRays_4; }
	inline void set__AllowBackwardsRays_4(int32_t value)
	{
		____AllowBackwardsRays_4 = value;
	}

	inline static int32_t get_offset_of__TraceBehindObjects_5() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____TraceBehindObjects_5)); }
	inline int32_t get__TraceBehindObjects_5() const { return ____TraceBehindObjects_5; }
	inline int32_t* get_address_of__TraceBehindObjects_5() { return &____TraceBehindObjects_5; }
	inline void set__TraceBehindObjects_5(int32_t value)
	{
		____TraceBehindObjects_5 = value;
	}

	inline static int32_t get_offset_of__MaxSteps_6() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____MaxSteps_6)); }
	inline int32_t get__MaxSteps_6() const { return ____MaxSteps_6; }
	inline int32_t* get_address_of__MaxSteps_6() { return &____MaxSteps_6; }
	inline void set__MaxSteps_6(int32_t value)
	{
		____MaxSteps_6 = value;
	}

	inline static int32_t get_offset_of__FullResolutionFiltering_7() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____FullResolutionFiltering_7)); }
	inline int32_t get__FullResolutionFiltering_7() const { return ____FullResolutionFiltering_7; }
	inline int32_t* get_address_of__FullResolutionFiltering_7() { return &____FullResolutionFiltering_7; }
	inline void set__FullResolutionFiltering_7(int32_t value)
	{
		____FullResolutionFiltering_7 = value;
	}

	inline static int32_t get_offset_of__HalfResolution_8() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____HalfResolution_8)); }
	inline int32_t get__HalfResolution_8() const { return ____HalfResolution_8; }
	inline int32_t* get_address_of__HalfResolution_8() { return &____HalfResolution_8; }
	inline void set__HalfResolution_8(int32_t value)
	{
		____HalfResolution_8 = value;
	}

	inline static int32_t get_offset_of__HighlightSuppression_9() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____HighlightSuppression_9)); }
	inline int32_t get__HighlightSuppression_9() const { return ____HighlightSuppression_9; }
	inline int32_t* get_address_of__HighlightSuppression_9() { return &____HighlightSuppression_9; }
	inline void set__HighlightSuppression_9(int32_t value)
	{
		____HighlightSuppression_9 = value;
	}

	inline static int32_t get_offset_of__PixelsPerMeterAtOneMeter_10() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____PixelsPerMeterAtOneMeter_10)); }
	inline int32_t get__PixelsPerMeterAtOneMeter_10() const { return ____PixelsPerMeterAtOneMeter_10; }
	inline int32_t* get_address_of__PixelsPerMeterAtOneMeter_10() { return &____PixelsPerMeterAtOneMeter_10; }
	inline void set__PixelsPerMeterAtOneMeter_10(int32_t value)
	{
		____PixelsPerMeterAtOneMeter_10 = value;
	}

	inline static int32_t get_offset_of__ScreenEdgeFading_11() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____ScreenEdgeFading_11)); }
	inline int32_t get__ScreenEdgeFading_11() const { return ____ScreenEdgeFading_11; }
	inline int32_t* get_address_of__ScreenEdgeFading_11() { return &____ScreenEdgeFading_11; }
	inline void set__ScreenEdgeFading_11(int32_t value)
	{
		____ScreenEdgeFading_11 = value;
	}

	inline static int32_t get_offset_of__ReflectionBlur_12() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____ReflectionBlur_12)); }
	inline int32_t get__ReflectionBlur_12() const { return ____ReflectionBlur_12; }
	inline int32_t* get_address_of__ReflectionBlur_12() { return &____ReflectionBlur_12; }
	inline void set__ReflectionBlur_12(int32_t value)
	{
		____ReflectionBlur_12 = value;
	}

	inline static int32_t get_offset_of__MaxRayTraceDistance_13() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____MaxRayTraceDistance_13)); }
	inline int32_t get__MaxRayTraceDistance_13() const { return ____MaxRayTraceDistance_13; }
	inline int32_t* get_address_of__MaxRayTraceDistance_13() { return &____MaxRayTraceDistance_13; }
	inline void set__MaxRayTraceDistance_13(int32_t value)
	{
		____MaxRayTraceDistance_13 = value;
	}

	inline static int32_t get_offset_of__FadeDistance_14() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____FadeDistance_14)); }
	inline int32_t get__FadeDistance_14() const { return ____FadeDistance_14; }
	inline int32_t* get_address_of__FadeDistance_14() { return &____FadeDistance_14; }
	inline void set__FadeDistance_14(int32_t value)
	{
		____FadeDistance_14 = value;
	}

	inline static int32_t get_offset_of__LayerThickness_15() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____LayerThickness_15)); }
	inline int32_t get__LayerThickness_15() const { return ____LayerThickness_15; }
	inline int32_t* get_address_of__LayerThickness_15() { return &____LayerThickness_15; }
	inline void set__LayerThickness_15(int32_t value)
	{
		____LayerThickness_15 = value;
	}

	inline static int32_t get_offset_of__SSRMultiplier_16() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____SSRMultiplier_16)); }
	inline int32_t get__SSRMultiplier_16() const { return ____SSRMultiplier_16; }
	inline int32_t* get_address_of__SSRMultiplier_16() { return &____SSRMultiplier_16; }
	inline void set__SSRMultiplier_16(int32_t value)
	{
		____SSRMultiplier_16 = value;
	}

	inline static int32_t get_offset_of__FresnelFade_17() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____FresnelFade_17)); }
	inline int32_t get__FresnelFade_17() const { return ____FresnelFade_17; }
	inline int32_t* get_address_of__FresnelFade_17() { return &____FresnelFade_17; }
	inline void set__FresnelFade_17(int32_t value)
	{
		____FresnelFade_17 = value;
	}

	inline static int32_t get_offset_of__FresnelFadePower_18() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____FresnelFadePower_18)); }
	inline int32_t get__FresnelFadePower_18() const { return ____FresnelFadePower_18; }
	inline int32_t* get_address_of__FresnelFadePower_18() { return &____FresnelFadePower_18; }
	inline void set__FresnelFadePower_18(int32_t value)
	{
		____FresnelFadePower_18 = value;
	}

	inline static int32_t get_offset_of__ReflectionBufferSize_19() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____ReflectionBufferSize_19)); }
	inline int32_t get__ReflectionBufferSize_19() const { return ____ReflectionBufferSize_19; }
	inline int32_t* get_address_of__ReflectionBufferSize_19() { return &____ReflectionBufferSize_19; }
	inline void set__ReflectionBufferSize_19(int32_t value)
	{
		____ReflectionBufferSize_19 = value;
	}

	inline static int32_t get_offset_of__ScreenSize_20() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____ScreenSize_20)); }
	inline int32_t get__ScreenSize_20() const { return ____ScreenSize_20; }
	inline int32_t* get_address_of__ScreenSize_20() { return &____ScreenSize_20; }
	inline void set__ScreenSize_20(int32_t value)
	{
		____ScreenSize_20 = value;
	}

	inline static int32_t get_offset_of__InvScreenSize_21() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____InvScreenSize_21)); }
	inline int32_t get__InvScreenSize_21() const { return ____InvScreenSize_21; }
	inline int32_t* get_address_of__InvScreenSize_21() { return &____InvScreenSize_21; }
	inline void set__InvScreenSize_21(int32_t value)
	{
		____InvScreenSize_21 = value;
	}

	inline static int32_t get_offset_of__ProjInfo_22() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____ProjInfo_22)); }
	inline int32_t get__ProjInfo_22() const { return ____ProjInfo_22; }
	inline int32_t* get_address_of__ProjInfo_22() { return &____ProjInfo_22; }
	inline void set__ProjInfo_22(int32_t value)
	{
		____ProjInfo_22 = value;
	}

	inline static int32_t get_offset_of__CameraClipInfo_23() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____CameraClipInfo_23)); }
	inline int32_t get__CameraClipInfo_23() const { return ____CameraClipInfo_23; }
	inline int32_t* get_address_of__CameraClipInfo_23() { return &____CameraClipInfo_23; }
	inline void set__CameraClipInfo_23(int32_t value)
	{
		____CameraClipInfo_23 = value;
	}

	inline static int32_t get_offset_of__ProjectToPixelMatrix_24() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____ProjectToPixelMatrix_24)); }
	inline int32_t get__ProjectToPixelMatrix_24() const { return ____ProjectToPixelMatrix_24; }
	inline int32_t* get_address_of__ProjectToPixelMatrix_24() { return &____ProjectToPixelMatrix_24; }
	inline void set__ProjectToPixelMatrix_24(int32_t value)
	{
		____ProjectToPixelMatrix_24 = value;
	}

	inline static int32_t get_offset_of__WorldToCameraMatrix_25() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____WorldToCameraMatrix_25)); }
	inline int32_t get__WorldToCameraMatrix_25() const { return ____WorldToCameraMatrix_25; }
	inline int32_t* get_address_of__WorldToCameraMatrix_25() { return &____WorldToCameraMatrix_25; }
	inline void set__WorldToCameraMatrix_25(int32_t value)
	{
		____WorldToCameraMatrix_25 = value;
	}

	inline static int32_t get_offset_of__CameraToWorldMatrix_26() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____CameraToWorldMatrix_26)); }
	inline int32_t get__CameraToWorldMatrix_26() const { return ____CameraToWorldMatrix_26; }
	inline int32_t* get_address_of__CameraToWorldMatrix_26() { return &____CameraToWorldMatrix_26; }
	inline void set__CameraToWorldMatrix_26(int32_t value)
	{
		____CameraToWorldMatrix_26 = value;
	}

	inline static int32_t get_offset_of__Axis_27() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____Axis_27)); }
	inline int32_t get__Axis_27() const { return ____Axis_27; }
	inline int32_t* get_address_of__Axis_27() { return &____Axis_27; }
	inline void set__Axis_27(int32_t value)
	{
		____Axis_27 = value;
	}

	inline static int32_t get_offset_of__CurrentMipLevel_28() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____CurrentMipLevel_28)); }
	inline int32_t get__CurrentMipLevel_28() const { return ____CurrentMipLevel_28; }
	inline int32_t* get_address_of__CurrentMipLevel_28() { return &____CurrentMipLevel_28; }
	inline void set__CurrentMipLevel_28(int32_t value)
	{
		____CurrentMipLevel_28 = value;
	}

	inline static int32_t get_offset_of__NormalAndRoughnessTexture_29() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____NormalAndRoughnessTexture_29)); }
	inline int32_t get__NormalAndRoughnessTexture_29() const { return ____NormalAndRoughnessTexture_29; }
	inline int32_t* get_address_of__NormalAndRoughnessTexture_29() { return &____NormalAndRoughnessTexture_29; }
	inline void set__NormalAndRoughnessTexture_29(int32_t value)
	{
		____NormalAndRoughnessTexture_29 = value;
	}

	inline static int32_t get_offset_of__HitPointTexture_30() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____HitPointTexture_30)); }
	inline int32_t get__HitPointTexture_30() const { return ____HitPointTexture_30; }
	inline int32_t* get_address_of__HitPointTexture_30() { return &____HitPointTexture_30; }
	inline void set__HitPointTexture_30(int32_t value)
	{
		____HitPointTexture_30 = value;
	}

	inline static int32_t get_offset_of__BlurTexture_31() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____BlurTexture_31)); }
	inline int32_t get__BlurTexture_31() const { return ____BlurTexture_31; }
	inline int32_t* get_address_of__BlurTexture_31() { return &____BlurTexture_31; }
	inline void set__BlurTexture_31(int32_t value)
	{
		____BlurTexture_31 = value;
	}

	inline static int32_t get_offset_of__FilteredReflections_32() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____FilteredReflections_32)); }
	inline int32_t get__FilteredReflections_32() const { return ____FilteredReflections_32; }
	inline int32_t* get_address_of__FilteredReflections_32() { return &____FilteredReflections_32; }
	inline void set__FilteredReflections_32(int32_t value)
	{
		____FilteredReflections_32 = value;
	}

	inline static int32_t get_offset_of__FinalReflectionTexture_33() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____FinalReflectionTexture_33)); }
	inline int32_t get__FinalReflectionTexture_33() const { return ____FinalReflectionTexture_33; }
	inline int32_t* get_address_of__FinalReflectionTexture_33() { return &____FinalReflectionTexture_33; }
	inline void set__FinalReflectionTexture_33(int32_t value)
	{
		____FinalReflectionTexture_33 = value;
	}

	inline static int32_t get_offset_of__TempTexture_34() { return static_cast<int32_t>(offsetof(Uniforms_t3370298352_StaticFields, ____TempTexture_34)); }
	inline int32_t get__TempTexture_34() const { return ____TempTexture_34; }
	inline int32_t* get_address_of__TempTexture_34() { return &____TempTexture_34; }
	inline void set__TempTexture_34(int32_t value)
	{
		____TempTexture_34 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T3370298352_H
#ifndef UNIFORMS_T3142154269_H
#define UNIFORMS_T3142154269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.TaaComponent/Uniforms
struct  Uniforms_t3142154269  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t3142154269_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.TaaComponent/Uniforms::_Jitter
	int32_t ____Jitter_0;
	// System.Int32 UnityEngine.PostProcessing.TaaComponent/Uniforms::_SharpenParameters
	int32_t ____SharpenParameters_1;
	// System.Int32 UnityEngine.PostProcessing.TaaComponent/Uniforms::_FinalBlendParameters
	int32_t ____FinalBlendParameters_2;
	// System.Int32 UnityEngine.PostProcessing.TaaComponent/Uniforms::_HistoryTex
	int32_t ____HistoryTex_3;
	// System.Int32 UnityEngine.PostProcessing.TaaComponent/Uniforms::_MainTex
	int32_t ____MainTex_4;

public:
	inline static int32_t get_offset_of__Jitter_0() { return static_cast<int32_t>(offsetof(Uniforms_t3142154269_StaticFields, ____Jitter_0)); }
	inline int32_t get__Jitter_0() const { return ____Jitter_0; }
	inline int32_t* get_address_of__Jitter_0() { return &____Jitter_0; }
	inline void set__Jitter_0(int32_t value)
	{
		____Jitter_0 = value;
	}

	inline static int32_t get_offset_of__SharpenParameters_1() { return static_cast<int32_t>(offsetof(Uniforms_t3142154269_StaticFields, ____SharpenParameters_1)); }
	inline int32_t get__SharpenParameters_1() const { return ____SharpenParameters_1; }
	inline int32_t* get_address_of__SharpenParameters_1() { return &____SharpenParameters_1; }
	inline void set__SharpenParameters_1(int32_t value)
	{
		____SharpenParameters_1 = value;
	}

	inline static int32_t get_offset_of__FinalBlendParameters_2() { return static_cast<int32_t>(offsetof(Uniforms_t3142154269_StaticFields, ____FinalBlendParameters_2)); }
	inline int32_t get__FinalBlendParameters_2() const { return ____FinalBlendParameters_2; }
	inline int32_t* get_address_of__FinalBlendParameters_2() { return &____FinalBlendParameters_2; }
	inline void set__FinalBlendParameters_2(int32_t value)
	{
		____FinalBlendParameters_2 = value;
	}

	inline static int32_t get_offset_of__HistoryTex_3() { return static_cast<int32_t>(offsetof(Uniforms_t3142154269_StaticFields, ____HistoryTex_3)); }
	inline int32_t get__HistoryTex_3() const { return ____HistoryTex_3; }
	inline int32_t* get_address_of__HistoryTex_3() { return &____HistoryTex_3; }
	inline void set__HistoryTex_3(int32_t value)
	{
		____HistoryTex_3 = value;
	}

	inline static int32_t get_offset_of__MainTex_4() { return static_cast<int32_t>(offsetof(Uniforms_t3142154269_StaticFields, ____MainTex_4)); }
	inline int32_t get__MainTex_4() const { return ____MainTex_4; }
	inline int32_t* get_address_of__MainTex_4() { return &____MainTex_4; }
	inline void set__MainTex_4(int32_t value)
	{
		____MainTex_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T3142154269_H
#ifndef UNIFORMS_T3585227917_H
#define UNIFORMS_T3585227917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.EyeAdaptationComponent/Uniforms
struct  Uniforms_t3585227917  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t3585227917_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationComponent/Uniforms::_Params
	int32_t ____Params_0;
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationComponent/Uniforms::_Speed
	int32_t ____Speed_1;
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationComponent/Uniforms::_ScaleOffsetRes
	int32_t ____ScaleOffsetRes_2;
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationComponent/Uniforms::_ExposureCompensation
	int32_t ____ExposureCompensation_3;
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationComponent/Uniforms::_AutoExposure
	int32_t ____AutoExposure_4;
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationComponent/Uniforms::_DebugWidth
	int32_t ____DebugWidth_5;

public:
	inline static int32_t get_offset_of__Params_0() { return static_cast<int32_t>(offsetof(Uniforms_t3585227917_StaticFields, ____Params_0)); }
	inline int32_t get__Params_0() const { return ____Params_0; }
	inline int32_t* get_address_of__Params_0() { return &____Params_0; }
	inline void set__Params_0(int32_t value)
	{
		____Params_0 = value;
	}

	inline static int32_t get_offset_of__Speed_1() { return static_cast<int32_t>(offsetof(Uniforms_t3585227917_StaticFields, ____Speed_1)); }
	inline int32_t get__Speed_1() const { return ____Speed_1; }
	inline int32_t* get_address_of__Speed_1() { return &____Speed_1; }
	inline void set__Speed_1(int32_t value)
	{
		____Speed_1 = value;
	}

	inline static int32_t get_offset_of__ScaleOffsetRes_2() { return static_cast<int32_t>(offsetof(Uniforms_t3585227917_StaticFields, ____ScaleOffsetRes_2)); }
	inline int32_t get__ScaleOffsetRes_2() const { return ____ScaleOffsetRes_2; }
	inline int32_t* get_address_of__ScaleOffsetRes_2() { return &____ScaleOffsetRes_2; }
	inline void set__ScaleOffsetRes_2(int32_t value)
	{
		____ScaleOffsetRes_2 = value;
	}

	inline static int32_t get_offset_of__ExposureCompensation_3() { return static_cast<int32_t>(offsetof(Uniforms_t3585227917_StaticFields, ____ExposureCompensation_3)); }
	inline int32_t get__ExposureCompensation_3() const { return ____ExposureCompensation_3; }
	inline int32_t* get_address_of__ExposureCompensation_3() { return &____ExposureCompensation_3; }
	inline void set__ExposureCompensation_3(int32_t value)
	{
		____ExposureCompensation_3 = value;
	}

	inline static int32_t get_offset_of__AutoExposure_4() { return static_cast<int32_t>(offsetof(Uniforms_t3585227917_StaticFields, ____AutoExposure_4)); }
	inline int32_t get__AutoExposure_4() const { return ____AutoExposure_4; }
	inline int32_t* get_address_of__AutoExposure_4() { return &____AutoExposure_4; }
	inline void set__AutoExposure_4(int32_t value)
	{
		____AutoExposure_4 = value;
	}

	inline static int32_t get_offset_of__DebugWidth_5() { return static_cast<int32_t>(offsetof(Uniforms_t3585227917_StaticFields, ____DebugWidth_5)); }
	inline int32_t get__DebugWidth_5() const { return ____DebugWidth_5; }
	inline int32_t* get_address_of__DebugWidth_5() { return &____DebugWidth_5; }
	inline void set__DebugWidth_5(int32_t value)
	{
		____DebugWidth_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T3585227917_H
#ifndef UNIFORMS_T3099365572_H
#define UNIFORMS_T3099365572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AmbientOcclusionComponent/Uniforms
struct  Uniforms_t3099365572  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t3099365572_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.AmbientOcclusionComponent/Uniforms::_Intensity
	int32_t ____Intensity_0;
	// System.Int32 UnityEngine.PostProcessing.AmbientOcclusionComponent/Uniforms::_Radius
	int32_t ____Radius_1;
	// System.Int32 UnityEngine.PostProcessing.AmbientOcclusionComponent/Uniforms::_FogParams
	int32_t ____FogParams_2;
	// System.Int32 UnityEngine.PostProcessing.AmbientOcclusionComponent/Uniforms::_Downsample
	int32_t ____Downsample_3;
	// System.Int32 UnityEngine.PostProcessing.AmbientOcclusionComponent/Uniforms::_SampleCount
	int32_t ____SampleCount_4;
	// System.Int32 UnityEngine.PostProcessing.AmbientOcclusionComponent/Uniforms::_OcclusionTexture1
	int32_t ____OcclusionTexture1_5;
	// System.Int32 UnityEngine.PostProcessing.AmbientOcclusionComponent/Uniforms::_OcclusionTexture2
	int32_t ____OcclusionTexture2_6;
	// System.Int32 UnityEngine.PostProcessing.AmbientOcclusionComponent/Uniforms::_OcclusionTexture
	int32_t ____OcclusionTexture_7;
	// System.Int32 UnityEngine.PostProcessing.AmbientOcclusionComponent/Uniforms::_MainTex
	int32_t ____MainTex_8;
	// System.Int32 UnityEngine.PostProcessing.AmbientOcclusionComponent/Uniforms::_TempRT
	int32_t ____TempRT_9;

public:
	inline static int32_t get_offset_of__Intensity_0() { return static_cast<int32_t>(offsetof(Uniforms_t3099365572_StaticFields, ____Intensity_0)); }
	inline int32_t get__Intensity_0() const { return ____Intensity_0; }
	inline int32_t* get_address_of__Intensity_0() { return &____Intensity_0; }
	inline void set__Intensity_0(int32_t value)
	{
		____Intensity_0 = value;
	}

	inline static int32_t get_offset_of__Radius_1() { return static_cast<int32_t>(offsetof(Uniforms_t3099365572_StaticFields, ____Radius_1)); }
	inline int32_t get__Radius_1() const { return ____Radius_1; }
	inline int32_t* get_address_of__Radius_1() { return &____Radius_1; }
	inline void set__Radius_1(int32_t value)
	{
		____Radius_1 = value;
	}

	inline static int32_t get_offset_of__FogParams_2() { return static_cast<int32_t>(offsetof(Uniforms_t3099365572_StaticFields, ____FogParams_2)); }
	inline int32_t get__FogParams_2() const { return ____FogParams_2; }
	inline int32_t* get_address_of__FogParams_2() { return &____FogParams_2; }
	inline void set__FogParams_2(int32_t value)
	{
		____FogParams_2 = value;
	}

	inline static int32_t get_offset_of__Downsample_3() { return static_cast<int32_t>(offsetof(Uniforms_t3099365572_StaticFields, ____Downsample_3)); }
	inline int32_t get__Downsample_3() const { return ____Downsample_3; }
	inline int32_t* get_address_of__Downsample_3() { return &____Downsample_3; }
	inline void set__Downsample_3(int32_t value)
	{
		____Downsample_3 = value;
	}

	inline static int32_t get_offset_of__SampleCount_4() { return static_cast<int32_t>(offsetof(Uniforms_t3099365572_StaticFields, ____SampleCount_4)); }
	inline int32_t get__SampleCount_4() const { return ____SampleCount_4; }
	inline int32_t* get_address_of__SampleCount_4() { return &____SampleCount_4; }
	inline void set__SampleCount_4(int32_t value)
	{
		____SampleCount_4 = value;
	}

	inline static int32_t get_offset_of__OcclusionTexture1_5() { return static_cast<int32_t>(offsetof(Uniforms_t3099365572_StaticFields, ____OcclusionTexture1_5)); }
	inline int32_t get__OcclusionTexture1_5() const { return ____OcclusionTexture1_5; }
	inline int32_t* get_address_of__OcclusionTexture1_5() { return &____OcclusionTexture1_5; }
	inline void set__OcclusionTexture1_5(int32_t value)
	{
		____OcclusionTexture1_5 = value;
	}

	inline static int32_t get_offset_of__OcclusionTexture2_6() { return static_cast<int32_t>(offsetof(Uniforms_t3099365572_StaticFields, ____OcclusionTexture2_6)); }
	inline int32_t get__OcclusionTexture2_6() const { return ____OcclusionTexture2_6; }
	inline int32_t* get_address_of__OcclusionTexture2_6() { return &____OcclusionTexture2_6; }
	inline void set__OcclusionTexture2_6(int32_t value)
	{
		____OcclusionTexture2_6 = value;
	}

	inline static int32_t get_offset_of__OcclusionTexture_7() { return static_cast<int32_t>(offsetof(Uniforms_t3099365572_StaticFields, ____OcclusionTexture_7)); }
	inline int32_t get__OcclusionTexture_7() const { return ____OcclusionTexture_7; }
	inline int32_t* get_address_of__OcclusionTexture_7() { return &____OcclusionTexture_7; }
	inline void set__OcclusionTexture_7(int32_t value)
	{
		____OcclusionTexture_7 = value;
	}

	inline static int32_t get_offset_of__MainTex_8() { return static_cast<int32_t>(offsetof(Uniforms_t3099365572_StaticFields, ____MainTex_8)); }
	inline int32_t get__MainTex_8() const { return ____MainTex_8; }
	inline int32_t* get_address_of__MainTex_8() { return &____MainTex_8; }
	inline void set__MainTex_8(int32_t value)
	{
		____MainTex_8 = value;
	}

	inline static int32_t get_offset_of__TempRT_9() { return static_cast<int32_t>(offsetof(Uniforms_t3099365572_StaticFields, ____TempRT_9)); }
	inline int32_t get__TempRT_9() const { return ____TempRT_9; }
	inline int32_t* get_address_of__TempRT_9() { return &____TempRT_9; }
	inline void set__TempRT_9(int32_t value)
	{
		____TempRT_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T3099365572_H
#ifndef UNIFORMS_T3067272284_H
#define UNIFORMS_T3067272284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.UserLutComponent/Uniforms
struct  Uniforms_t3067272284  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t3067272284_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.UserLutComponent/Uniforms::_UserLut
	int32_t ____UserLut_0;
	// System.Int32 UnityEngine.PostProcessing.UserLutComponent/Uniforms::_UserLut_Params
	int32_t ____UserLut_Params_1;

public:
	inline static int32_t get_offset_of__UserLut_0() { return static_cast<int32_t>(offsetof(Uniforms_t3067272284_StaticFields, ____UserLut_0)); }
	inline int32_t get__UserLut_0() const { return ____UserLut_0; }
	inline int32_t* get_address_of__UserLut_0() { return &____UserLut_0; }
	inline void set__UserLut_0(int32_t value)
	{
		____UserLut_0 = value;
	}

	inline static int32_t get_offset_of__UserLut_Params_1() { return static_cast<int32_t>(offsetof(Uniforms_t3067272284_StaticFields, ____UserLut_Params_1)); }
	inline int32_t get__UserLut_Params_1() const { return ____UserLut_Params_1; }
	inline int32_t* get_address_of__UserLut_Params_1() { return &____UserLut_Params_1; }
	inline void set__UserLut_Params_1(int32_t value)
	{
		____UserLut_Params_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T3067272284_H
#ifndef NAMEID_T2777016614_H
#define NAMEID_T2777016614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.NameId
struct  NameId_t2777016614  : public RuntimeObject
{
public:
	// System.String PlayFab.PlayStreamModels.NameId::Name
	String_t* ___Name_0;
	// System.String PlayFab.PlayStreamModels.NameId::Id
	String_t* ___Id_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(NameId_t2777016614, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Id_1() { return static_cast<int32_t>(offsetof(NameId_t2777016614, ___Id_1)); }
	inline String_t* get_Id_1() const { return ___Id_1; }
	inline String_t** get_address_of_Id_1() { return &___Id_1; }
	inline void set_Id_1(String_t* value)
	{
		___Id_1 = value;
		Il2CppCodeGenWriteBarrier((&___Id_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEID_T2777016614_H
#ifndef NAMEIDENTIFIER_T2678357796_H
#define NAMEIDENTIFIER_T2678357796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.NameIdentifier
struct  NameIdentifier_t2678357796  : public RuntimeObject
{
public:
	// System.String PlayFab.PlayStreamModels.NameIdentifier::Name
	String_t* ___Name_0;
	// System.String PlayFab.PlayStreamModels.NameIdentifier::Id
	String_t* ___Id_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(NameIdentifier_t2678357796, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Id_1() { return static_cast<int32_t>(offsetof(NameIdentifier_t2678357796, ___Id_1)); }
	inline String_t* get_Id_1() const { return ___Id_1; }
	inline String_t** get_address_of_Id_1() { return &___Id_1; }
	inline void set_Id_1(String_t* value)
	{
		___Id_1 = value;
		Il2CppCodeGenWriteBarrier((&___Id_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEIDENTIFIER_T2678357796_H
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
#ifndef ATTRIBUTE_T2831635209_H
#define ATTRIBUTE_T2831635209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t2831635209  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T2831635209_H
#ifndef PLAYSTREAMEVENTHISTORY_T1985411227_H
#define PLAYSTREAMEVENTHISTORY_T1985411227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayStreamEventHistory
struct  PlayStreamEventHistory_t1985411227  : public RuntimeObject
{
public:
	// System.String PlayFab.PlayStreamModels.PlayStreamEventHistory::ParentTriggerId
	String_t* ___ParentTriggerId_0;
	// System.String PlayFab.PlayStreamModels.PlayStreamEventHistory::ParentEventId
	String_t* ___ParentEventId_1;
	// System.Boolean PlayFab.PlayStreamModels.PlayStreamEventHistory::TriggeredEvents
	bool ___TriggeredEvents_2;

public:
	inline static int32_t get_offset_of_ParentTriggerId_0() { return static_cast<int32_t>(offsetof(PlayStreamEventHistory_t1985411227, ___ParentTriggerId_0)); }
	inline String_t* get_ParentTriggerId_0() const { return ___ParentTriggerId_0; }
	inline String_t** get_address_of_ParentTriggerId_0() { return &___ParentTriggerId_0; }
	inline void set_ParentTriggerId_0(String_t* value)
	{
		___ParentTriggerId_0 = value;
		Il2CppCodeGenWriteBarrier((&___ParentTriggerId_0), value);
	}

	inline static int32_t get_offset_of_ParentEventId_1() { return static_cast<int32_t>(offsetof(PlayStreamEventHistory_t1985411227, ___ParentEventId_1)); }
	inline String_t* get_ParentEventId_1() const { return ___ParentEventId_1; }
	inline String_t** get_address_of_ParentEventId_1() { return &___ParentEventId_1; }
	inline void set_ParentEventId_1(String_t* value)
	{
		___ParentEventId_1 = value;
		Il2CppCodeGenWriteBarrier((&___ParentEventId_1), value);
	}

	inline static int32_t get_offset_of_TriggeredEvents_2() { return static_cast<int32_t>(offsetof(PlayStreamEventHistory_t1985411227, ___TriggeredEvents_2)); }
	inline bool get_TriggeredEvents_2() const { return ___TriggeredEvents_2; }
	inline bool* get_address_of_TriggeredEvents_2() { return &___TriggeredEvents_2; }
	inline void set_TriggeredEvents_2(bool value)
	{
		___TriggeredEvents_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTREAMEVENTHISTORY_T1985411227_H
#ifndef POSTPROCESSINGMODEL_T3467175713_H
#define POSTPROCESSINGMODEL_T3467175713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingModel
struct  PostProcessingModel_t3467175713  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.PostProcessing.PostProcessingModel::m_Enabled
	bool ___m_Enabled_0;

public:
	inline static int32_t get_offset_of_m_Enabled_0() { return static_cast<int32_t>(offsetof(PostProcessingModel_t3467175713, ___m_Enabled_0)); }
	inline bool get_m_Enabled_0() const { return ___m_Enabled_0; }
	inline bool* get_address_of_m_Enabled_0() { return &___m_Enabled_0; }
	inline void set_m_Enabled_0(bool value)
	{
		___m_Enabled_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGMODEL_T3467175713_H
#ifndef DEPTHSETTINGS_T3502633750_H
#define DEPTHSETTINGS_T3502633750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BuiltinDebugViewsModel/DepthSettings
struct  DepthSettings_t3502633750 
{
public:
	// System.Single UnityEngine.PostProcessing.BuiltinDebugViewsModel/DepthSettings::scale
	float ___scale_0;

public:
	inline static int32_t get_offset_of_scale_0() { return static_cast<int32_t>(offsetof(DepthSettings_t3502633750, ___scale_0)); }
	inline float get_scale_0() const { return ___scale_0; }
	inline float* get_address_of_scale_0() { return &___scale_0; }
	inline void set_scale_0(float value)
	{
		___scale_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEPTHSETTINGS_T3502633750_H
#ifndef POSTPROCESSINGCOMPONENT_1_T72021463_H
#define POSTPROCESSINGCOMPONENT_1_T72021463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.ChromaticAberrationModel>
struct  PostProcessingComponent_1_t72021463  : public PostProcessingComponentBase_t2502581840
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	ChromaticAberrationModel_t2255405875 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t72021463, ___U3CmodelU3Ek__BackingField_1)); }
	inline ChromaticAberrationModel_t2255405875 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline ChromaticAberrationModel_t2255405875 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(ChromaticAberrationModel_t2255405875 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T72021463_H
#ifndef LENSDIRTSETTINGS_T4014836744_H
#define LENSDIRTSETTINGS_T4014836744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BloomModel/LensDirtSettings
struct  LensDirtSettings_t4014836744 
{
public:
	// UnityEngine.Texture UnityEngine.PostProcessing.BloomModel/LensDirtSettings::texture
	Texture_t959848337 * ___texture_0;
	// System.Single UnityEngine.PostProcessing.BloomModel/LensDirtSettings::intensity
	float ___intensity_1;

public:
	inline static int32_t get_offset_of_texture_0() { return static_cast<int32_t>(offsetof(LensDirtSettings_t4014836744, ___texture_0)); }
	inline Texture_t959848337 * get_texture_0() const { return ___texture_0; }
	inline Texture_t959848337 ** get_address_of_texture_0() { return &___texture_0; }
	inline void set_texture_0(Texture_t959848337 * value)
	{
		___texture_0 = value;
		Il2CppCodeGenWriteBarrier((&___texture_0), value);
	}

	inline static int32_t get_offset_of_intensity_1() { return static_cast<int32_t>(offsetof(LensDirtSettings_t4014836744, ___intensity_1)); }
	inline float get_intensity_1() const { return ___intensity_1; }
	inline float* get_address_of_intensity_1() { return &___intensity_1; }
	inline void set_intensity_1(float value)
	{
		___intensity_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.BloomModel/LensDirtSettings
struct LensDirtSettings_t4014836744_marshaled_pinvoke
{
	Texture_t959848337 * ___texture_0;
	float ___intensity_1;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.BloomModel/LensDirtSettings
struct LensDirtSettings_t4014836744_marshaled_com
{
	Texture_t959848337 * ___texture_0;
	float ___intensity_1;
};
#endif // LENSDIRTSETTINGS_T4014836744_H
#ifndef POSTPROCESSINGCOMPONENT_1_T296864090_H
#define POSTPROCESSINGCOMPONENT_1_T296864090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.ColorGradingModel>
struct  PostProcessingComponent_1_t296864090  : public PostProcessingComponentBase_t2502581840
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	ColorGradingModel_t2480248502 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t296864090, ___U3CmodelU3Ek__BackingField_1)); }
	inline ColorGradingModel_t2480248502 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline ColorGradingModel_t2480248502 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(ColorGradingModel_t2480248502 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T296864090_H
#ifndef BLOOMSETTINGS_T390616924_H
#define BLOOMSETTINGS_T390616924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BloomModel/BloomSettings
struct  BloomSettings_t390616924 
{
public:
	// System.Single UnityEngine.PostProcessing.BloomModel/BloomSettings::intensity
	float ___intensity_0;
	// System.Single UnityEngine.PostProcessing.BloomModel/BloomSettings::threshold
	float ___threshold_1;
	// System.Single UnityEngine.PostProcessing.BloomModel/BloomSettings::softKnee
	float ___softKnee_2;
	// System.Single UnityEngine.PostProcessing.BloomModel/BloomSettings::radius
	float ___radius_3;
	// System.Boolean UnityEngine.PostProcessing.BloomModel/BloomSettings::antiFlicker
	bool ___antiFlicker_4;

public:
	inline static int32_t get_offset_of_intensity_0() { return static_cast<int32_t>(offsetof(BloomSettings_t390616924, ___intensity_0)); }
	inline float get_intensity_0() const { return ___intensity_0; }
	inline float* get_address_of_intensity_0() { return &___intensity_0; }
	inline void set_intensity_0(float value)
	{
		___intensity_0 = value;
	}

	inline static int32_t get_offset_of_threshold_1() { return static_cast<int32_t>(offsetof(BloomSettings_t390616924, ___threshold_1)); }
	inline float get_threshold_1() const { return ___threshold_1; }
	inline float* get_address_of_threshold_1() { return &___threshold_1; }
	inline void set_threshold_1(float value)
	{
		___threshold_1 = value;
	}

	inline static int32_t get_offset_of_softKnee_2() { return static_cast<int32_t>(offsetof(BloomSettings_t390616924, ___softKnee_2)); }
	inline float get_softKnee_2() const { return ___softKnee_2; }
	inline float* get_address_of_softKnee_2() { return &___softKnee_2; }
	inline void set_softKnee_2(float value)
	{
		___softKnee_2 = value;
	}

	inline static int32_t get_offset_of_radius_3() { return static_cast<int32_t>(offsetof(BloomSettings_t390616924, ___radius_3)); }
	inline float get_radius_3() const { return ___radius_3; }
	inline float* get_address_of_radius_3() { return &___radius_3; }
	inline void set_radius_3(float value)
	{
		___radius_3 = value;
	}

	inline static int32_t get_offset_of_antiFlicker_4() { return static_cast<int32_t>(offsetof(BloomSettings_t390616924, ___antiFlicker_4)); }
	inline bool get_antiFlicker_4() const { return ___antiFlicker_4; }
	inline bool* get_address_of_antiFlicker_4() { return &___antiFlicker_4; }
	inline void set_antiFlicker_4(bool value)
	{
		___antiFlicker_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.BloomModel/BloomSettings
struct BloomSettings_t390616924_marshaled_pinvoke
{
	float ___intensity_0;
	float ___threshold_1;
	float ___softKnee_2;
	float ___radius_3;
	int32_t ___antiFlicker_4;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.BloomModel/BloomSettings
struct BloomSettings_t390616924_marshaled_com
{
	float ___intensity_0;
	float ___threshold_1;
	float ___softKnee_2;
	float ___radius_3;
	int32_t ___antiFlicker_4;
};
#endif // BLOOMSETTINGS_T390616924_H
#ifndef POSTPROCESSINGCOMPONENT_1_T4147658959_H
#define POSTPROCESSINGCOMPONENT_1_T4147658959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.DitheringModel>
struct  PostProcessingComponent_1_t4147658959  : public PostProcessingComponentBase_t2502581840
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	DitheringModel_t2036076075 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t4147658959, ___U3CmodelU3Ek__BackingField_1)); }
	inline DitheringModel_t2036076075 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline DitheringModel_t2036076075 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(DitheringModel_t2036076075 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T4147658959_H
#ifndef NULLABLE_1_T464247827_H
#define NULLABLE_1_T464247827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.UInt32>
struct  Nullable_1_t464247827 
{
public:
	// T System.Nullable`1::value
	uint32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t464247827, ___value_0)); }
	inline uint32_t get_value_0() const { return ___value_0; }
	inline uint32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t464247827, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T464247827_H
#ifndef POSTPROCESSINGCOMPONENT_1_T2972830393_H
#define POSTPROCESSINGCOMPONENT_1_T2972830393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.BuiltinDebugViewsModel>
struct  PostProcessingComponent_1_t2972830393  : public PostProcessingComponentBase_t2502581840
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	BuiltinDebugViewsModel_t861247509 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t2972830393, ___U3CmodelU3Ek__BackingField_1)); }
	inline BuiltinDebugViewsModel_t861247509 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline BuiltinDebugViewsModel_t861247509 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(BuiltinDebugViewsModel_t861247509 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T2972830393_H
#ifndef FXAACONSOLESETTINGS_T1619399012_H
#define FXAACONSOLESETTINGS_T1619399012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AntialiasingModel/FxaaConsoleSettings
struct  FxaaConsoleSettings_t1619399012 
{
public:
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/FxaaConsoleSettings::subpixelSpreadAmount
	float ___subpixelSpreadAmount_0;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/FxaaConsoleSettings::edgeSharpnessAmount
	float ___edgeSharpnessAmount_1;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/FxaaConsoleSettings::edgeDetectionThreshold
	float ___edgeDetectionThreshold_2;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/FxaaConsoleSettings::minimumRequiredLuminance
	float ___minimumRequiredLuminance_3;

public:
	inline static int32_t get_offset_of_subpixelSpreadAmount_0() { return static_cast<int32_t>(offsetof(FxaaConsoleSettings_t1619399012, ___subpixelSpreadAmount_0)); }
	inline float get_subpixelSpreadAmount_0() const { return ___subpixelSpreadAmount_0; }
	inline float* get_address_of_subpixelSpreadAmount_0() { return &___subpixelSpreadAmount_0; }
	inline void set_subpixelSpreadAmount_0(float value)
	{
		___subpixelSpreadAmount_0 = value;
	}

	inline static int32_t get_offset_of_edgeSharpnessAmount_1() { return static_cast<int32_t>(offsetof(FxaaConsoleSettings_t1619399012, ___edgeSharpnessAmount_1)); }
	inline float get_edgeSharpnessAmount_1() const { return ___edgeSharpnessAmount_1; }
	inline float* get_address_of_edgeSharpnessAmount_1() { return &___edgeSharpnessAmount_1; }
	inline void set_edgeSharpnessAmount_1(float value)
	{
		___edgeSharpnessAmount_1 = value;
	}

	inline static int32_t get_offset_of_edgeDetectionThreshold_2() { return static_cast<int32_t>(offsetof(FxaaConsoleSettings_t1619399012, ___edgeDetectionThreshold_2)); }
	inline float get_edgeDetectionThreshold_2() const { return ___edgeDetectionThreshold_2; }
	inline float* get_address_of_edgeDetectionThreshold_2() { return &___edgeDetectionThreshold_2; }
	inline void set_edgeDetectionThreshold_2(float value)
	{
		___edgeDetectionThreshold_2 = value;
	}

	inline static int32_t get_offset_of_minimumRequiredLuminance_3() { return static_cast<int32_t>(offsetof(FxaaConsoleSettings_t1619399012, ___minimumRequiredLuminance_3)); }
	inline float get_minimumRequiredLuminance_3() const { return ___minimumRequiredLuminance_3; }
	inline float* get_address_of_minimumRequiredLuminance_3() { return &___minimumRequiredLuminance_3; }
	inline void set_minimumRequiredLuminance_3(float value)
	{
		___minimumRequiredLuminance_3 = value;
	}
};

struct FxaaConsoleSettings_t1619399012_StaticFields
{
public:
	// UnityEngine.PostProcessing.AntialiasingModel/FxaaConsoleSettings[] UnityEngine.PostProcessing.AntialiasingModel/FxaaConsoleSettings::presets
	FxaaConsoleSettingsU5BU5D_t1431971981* ___presets_4;

public:
	inline static int32_t get_offset_of_presets_4() { return static_cast<int32_t>(offsetof(FxaaConsoleSettings_t1619399012_StaticFields, ___presets_4)); }
	inline FxaaConsoleSettingsU5BU5D_t1431971981* get_presets_4() const { return ___presets_4; }
	inline FxaaConsoleSettingsU5BU5D_t1431971981** get_address_of_presets_4() { return &___presets_4; }
	inline void set_presets_4(FxaaConsoleSettingsU5BU5D_t1431971981* value)
	{
		___presets_4 = value;
		Il2CppCodeGenWriteBarrier((&___presets_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FXAACONSOLESETTINGS_T1619399012_H
#ifndef FXAAQUALITYSETTINGS_T2026309905_H
#define FXAAQUALITYSETTINGS_T2026309905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings
struct  FxaaQualitySettings_t2026309905 
{
public:
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings::subpixelAliasingRemovalAmount
	float ___subpixelAliasingRemovalAmount_0;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings::edgeDetectionThreshold
	float ___edgeDetectionThreshold_1;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings::minimumRequiredLuminance
	float ___minimumRequiredLuminance_2;

public:
	inline static int32_t get_offset_of_subpixelAliasingRemovalAmount_0() { return static_cast<int32_t>(offsetof(FxaaQualitySettings_t2026309905, ___subpixelAliasingRemovalAmount_0)); }
	inline float get_subpixelAliasingRemovalAmount_0() const { return ___subpixelAliasingRemovalAmount_0; }
	inline float* get_address_of_subpixelAliasingRemovalAmount_0() { return &___subpixelAliasingRemovalAmount_0; }
	inline void set_subpixelAliasingRemovalAmount_0(float value)
	{
		___subpixelAliasingRemovalAmount_0 = value;
	}

	inline static int32_t get_offset_of_edgeDetectionThreshold_1() { return static_cast<int32_t>(offsetof(FxaaQualitySettings_t2026309905, ___edgeDetectionThreshold_1)); }
	inline float get_edgeDetectionThreshold_1() const { return ___edgeDetectionThreshold_1; }
	inline float* get_address_of_edgeDetectionThreshold_1() { return &___edgeDetectionThreshold_1; }
	inline void set_edgeDetectionThreshold_1(float value)
	{
		___edgeDetectionThreshold_1 = value;
	}

	inline static int32_t get_offset_of_minimumRequiredLuminance_2() { return static_cast<int32_t>(offsetof(FxaaQualitySettings_t2026309905, ___minimumRequiredLuminance_2)); }
	inline float get_minimumRequiredLuminance_2() const { return ___minimumRequiredLuminance_2; }
	inline float* get_address_of_minimumRequiredLuminance_2() { return &___minimumRequiredLuminance_2; }
	inline void set_minimumRequiredLuminance_2(float value)
	{
		___minimumRequiredLuminance_2 = value;
	}
};

struct FxaaQualitySettings_t2026309905_StaticFields
{
public:
	// UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings[] UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings::presets
	FxaaQualitySettingsU5BU5D_t4238050188* ___presets_3;

public:
	inline static int32_t get_offset_of_presets_3() { return static_cast<int32_t>(offsetof(FxaaQualitySettings_t2026309905_StaticFields, ___presets_3)); }
	inline FxaaQualitySettingsU5BU5D_t4238050188* get_presets_3() const { return ___presets_3; }
	inline FxaaQualitySettingsU5BU5D_t4238050188** get_address_of_presets_3() { return &___presets_3; }
	inline void set_presets_3(FxaaQualitySettingsU5BU5D_t4238050188* value)
	{
		___presets_3 = value;
		Il2CppCodeGenWriteBarrier((&___presets_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FXAAQUALITYSETTINGS_T2026309905_H
#ifndef POSTPROCESSINGCOMPONENT_1_T678677361_H
#define POSTPROCESSINGCOMPONENT_1_T678677361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.DepthOfFieldModel>
struct  PostProcessingComponent_1_t678677361  : public PostProcessingComponentBase_t2502581840
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	DepthOfFieldModel_t2862061773 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t678677361, ___U3CmodelU3Ek__BackingField_1)); }
	inline DepthOfFieldModel_t2862061773 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline DepthOfFieldModel_t2862061773 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(DepthOfFieldModel_t2862061773 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T678677361_H
#ifndef POSTPROCESSINGCOMPONENT_1_T3373553362_H
#define POSTPROCESSINGCOMPONENT_1_T3373553362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.VignetteModel>
struct  PostProcessingComponent_1_t3373553362  : public PostProcessingComponentBase_t2502581840
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	VignetteModel_t1261970478 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t3373553362, ___U3CmodelU3Ek__BackingField_1)); }
	inline VignetteModel_t1261970478 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline VignetteModel_t1261970478 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(VignetteModel_t1261970478 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T3373553362_H
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
#ifndef TAASETTINGS_T4134617129_H
#define TAASETTINGS_T4134617129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AntialiasingModel/TaaSettings
struct  TaaSettings_t4134617129 
{
public:
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/TaaSettings::jitterSpread
	float ___jitterSpread_0;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/TaaSettings::sharpen
	float ___sharpen_1;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/TaaSettings::stationaryBlending
	float ___stationaryBlending_2;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/TaaSettings::motionBlending
	float ___motionBlending_3;

public:
	inline static int32_t get_offset_of_jitterSpread_0() { return static_cast<int32_t>(offsetof(TaaSettings_t4134617129, ___jitterSpread_0)); }
	inline float get_jitterSpread_0() const { return ___jitterSpread_0; }
	inline float* get_address_of_jitterSpread_0() { return &___jitterSpread_0; }
	inline void set_jitterSpread_0(float value)
	{
		___jitterSpread_0 = value;
	}

	inline static int32_t get_offset_of_sharpen_1() { return static_cast<int32_t>(offsetof(TaaSettings_t4134617129, ___sharpen_1)); }
	inline float get_sharpen_1() const { return ___sharpen_1; }
	inline float* get_address_of_sharpen_1() { return &___sharpen_1; }
	inline void set_sharpen_1(float value)
	{
		___sharpen_1 = value;
	}

	inline static int32_t get_offset_of_stationaryBlending_2() { return static_cast<int32_t>(offsetof(TaaSettings_t4134617129, ___stationaryBlending_2)); }
	inline float get_stationaryBlending_2() const { return ___stationaryBlending_2; }
	inline float* get_address_of_stationaryBlending_2() { return &___stationaryBlending_2; }
	inline void set_stationaryBlending_2(float value)
	{
		___stationaryBlending_2 = value;
	}

	inline static int32_t get_offset_of_motionBlending_3() { return static_cast<int32_t>(offsetof(TaaSettings_t4134617129, ___motionBlending_3)); }
	inline float get_motionBlending_3() const { return ___motionBlending_3; }
	inline float* get_address_of_motionBlending_3() { return &___motionBlending_3; }
	inline void set_motionBlending_3(float value)
	{
		___motionBlending_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAASETTINGS_T4134617129_H
#ifndef MOTIONVECTORSSETTINGS_T2781704084_H
#define MOTIONVECTORSSETTINGS_T2781704084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings
struct  MotionVectorsSettings_t2781704084 
{
public:
	// System.Single UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings::sourceOpacity
	float ___sourceOpacity_0;
	// System.Single UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings::motionImageOpacity
	float ___motionImageOpacity_1;
	// System.Single UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings::motionImageAmplitude
	float ___motionImageAmplitude_2;
	// System.Single UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings::motionVectorsOpacity
	float ___motionVectorsOpacity_3;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings::motionVectorsResolution
	int32_t ___motionVectorsResolution_4;
	// System.Single UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings::motionVectorsAmplitude
	float ___motionVectorsAmplitude_5;

public:
	inline static int32_t get_offset_of_sourceOpacity_0() { return static_cast<int32_t>(offsetof(MotionVectorsSettings_t2781704084, ___sourceOpacity_0)); }
	inline float get_sourceOpacity_0() const { return ___sourceOpacity_0; }
	inline float* get_address_of_sourceOpacity_0() { return &___sourceOpacity_0; }
	inline void set_sourceOpacity_0(float value)
	{
		___sourceOpacity_0 = value;
	}

	inline static int32_t get_offset_of_motionImageOpacity_1() { return static_cast<int32_t>(offsetof(MotionVectorsSettings_t2781704084, ___motionImageOpacity_1)); }
	inline float get_motionImageOpacity_1() const { return ___motionImageOpacity_1; }
	inline float* get_address_of_motionImageOpacity_1() { return &___motionImageOpacity_1; }
	inline void set_motionImageOpacity_1(float value)
	{
		___motionImageOpacity_1 = value;
	}

	inline static int32_t get_offset_of_motionImageAmplitude_2() { return static_cast<int32_t>(offsetof(MotionVectorsSettings_t2781704084, ___motionImageAmplitude_2)); }
	inline float get_motionImageAmplitude_2() const { return ___motionImageAmplitude_2; }
	inline float* get_address_of_motionImageAmplitude_2() { return &___motionImageAmplitude_2; }
	inline void set_motionImageAmplitude_2(float value)
	{
		___motionImageAmplitude_2 = value;
	}

	inline static int32_t get_offset_of_motionVectorsOpacity_3() { return static_cast<int32_t>(offsetof(MotionVectorsSettings_t2781704084, ___motionVectorsOpacity_3)); }
	inline float get_motionVectorsOpacity_3() const { return ___motionVectorsOpacity_3; }
	inline float* get_address_of_motionVectorsOpacity_3() { return &___motionVectorsOpacity_3; }
	inline void set_motionVectorsOpacity_3(float value)
	{
		___motionVectorsOpacity_3 = value;
	}

	inline static int32_t get_offset_of_motionVectorsResolution_4() { return static_cast<int32_t>(offsetof(MotionVectorsSettings_t2781704084, ___motionVectorsResolution_4)); }
	inline int32_t get_motionVectorsResolution_4() const { return ___motionVectorsResolution_4; }
	inline int32_t* get_address_of_motionVectorsResolution_4() { return &___motionVectorsResolution_4; }
	inline void set_motionVectorsResolution_4(int32_t value)
	{
		___motionVectorsResolution_4 = value;
	}

	inline static int32_t get_offset_of_motionVectorsAmplitude_5() { return static_cast<int32_t>(offsetof(MotionVectorsSettings_t2781704084, ___motionVectorsAmplitude_5)); }
	inline float get_motionVectorsAmplitude_5() const { return ___motionVectorsAmplitude_5; }
	inline float* get_address_of_motionVectorsAmplitude_5() { return &___motionVectorsAmplitude_5; }
	inline void set_motionVectorsAmplitude_5(float value)
	{
		___motionVectorsAmplitude_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOTIONVECTORSSETTINGS_T2781704084_H
#ifndef POSTPROCESSINGCOMPONENT_1_T3659396475_H
#define POSTPROCESSINGCOMPONENT_1_T3659396475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.AmbientOcclusionModel>
struct  PostProcessingComponent_1_t3659396475  : public PostProcessingComponentBase_t2502581840
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	AmbientOcclusionModel_t1547813591 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t3659396475, ___U3CmodelU3Ek__BackingField_1)); }
	inline AmbientOcclusionModel_t1547813591 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline AmbientOcclusionModel_t1547813591 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(AmbientOcclusionModel_t1547813591 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T3659396475_H
#ifndef SETTINGS_T1310207576_H
#define SETTINGS_T1310207576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ChromaticAberrationModel/Settings
struct  Settings_t1310207576 
{
public:
	// UnityEngine.Texture2D UnityEngine.PostProcessing.ChromaticAberrationModel/Settings::spectralTexture
	Texture2D_t1318399882 * ___spectralTexture_0;
	// System.Single UnityEngine.PostProcessing.ChromaticAberrationModel/Settings::intensity
	float ___intensity_1;

public:
	inline static int32_t get_offset_of_spectralTexture_0() { return static_cast<int32_t>(offsetof(Settings_t1310207576, ___spectralTexture_0)); }
	inline Texture2D_t1318399882 * get_spectralTexture_0() const { return ___spectralTexture_0; }
	inline Texture2D_t1318399882 ** get_address_of_spectralTexture_0() { return &___spectralTexture_0; }
	inline void set_spectralTexture_0(Texture2D_t1318399882 * value)
	{
		___spectralTexture_0 = value;
		Il2CppCodeGenWriteBarrier((&___spectralTexture_0), value);
	}

	inline static int32_t get_offset_of_intensity_1() { return static_cast<int32_t>(offsetof(Settings_t1310207576, ___intensity_1)); }
	inline float get_intensity_1() const { return ___intensity_1; }
	inline float* get_address_of_intensity_1() { return &___intensity_1; }
	inline void set_intensity_1(float value)
	{
		___intensity_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.ChromaticAberrationModel/Settings
struct Settings_t1310207576_marshaled_pinvoke
{
	Texture2D_t1318399882 * ___spectralTexture_0;
	float ___intensity_1;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.ChromaticAberrationModel/Settings
struct Settings_t1310207576_marshaled_com
{
	Texture2D_t1318399882 * ___spectralTexture_0;
	float ___intensity_1;
};
#endif // SETTINGS_T1310207576_H
#ifndef NULLABLE_1_T3386535404_H
#define NULLABLE_1_T3386535404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t3386535404 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3386535404, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3386535404, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3386535404_H
#ifndef POSTPROCESSINGCOMPONENT_1_T3690202461_H
#define POSTPROCESSINGCOMPONENT_1_T3690202461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.ScreenSpaceReflectionModel>
struct  PostProcessingComponent_1_t3690202461  : public PostProcessingComponentBase_t2502581840
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	ScreenSpaceReflectionModel_t1578619577 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t3690202461, ___U3CmodelU3Ek__BackingField_1)); }
	inline ScreenSpaceReflectionModel_t1578619577 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline ScreenSpaceReflectionModel_t1578619577 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(ScreenSpaceReflectionModel_t1578619577 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T3690202461_H
#ifndef BASICSETTINGS_T501872943_H
#define BASICSETTINGS_T501872943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel/BasicSettings
struct  BasicSettings_t501872943 
{
public:
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/BasicSettings::postExposure
	float ___postExposure_0;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/BasicSettings::temperature
	float ___temperature_1;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/BasicSettings::tint
	float ___tint_2;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/BasicSettings::hueShift
	float ___hueShift_3;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/BasicSettings::saturation
	float ___saturation_4;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/BasicSettings::contrast
	float ___contrast_5;

public:
	inline static int32_t get_offset_of_postExposure_0() { return static_cast<int32_t>(offsetof(BasicSettings_t501872943, ___postExposure_0)); }
	inline float get_postExposure_0() const { return ___postExposure_0; }
	inline float* get_address_of_postExposure_0() { return &___postExposure_0; }
	inline void set_postExposure_0(float value)
	{
		___postExposure_0 = value;
	}

	inline static int32_t get_offset_of_temperature_1() { return static_cast<int32_t>(offsetof(BasicSettings_t501872943, ___temperature_1)); }
	inline float get_temperature_1() const { return ___temperature_1; }
	inline float* get_address_of_temperature_1() { return &___temperature_1; }
	inline void set_temperature_1(float value)
	{
		___temperature_1 = value;
	}

	inline static int32_t get_offset_of_tint_2() { return static_cast<int32_t>(offsetof(BasicSettings_t501872943, ___tint_2)); }
	inline float get_tint_2() const { return ___tint_2; }
	inline float* get_address_of_tint_2() { return &___tint_2; }
	inline void set_tint_2(float value)
	{
		___tint_2 = value;
	}

	inline static int32_t get_offset_of_hueShift_3() { return static_cast<int32_t>(offsetof(BasicSettings_t501872943, ___hueShift_3)); }
	inline float get_hueShift_3() const { return ___hueShift_3; }
	inline float* get_address_of_hueShift_3() { return &___hueShift_3; }
	inline void set_hueShift_3(float value)
	{
		___hueShift_3 = value;
	}

	inline static int32_t get_offset_of_saturation_4() { return static_cast<int32_t>(offsetof(BasicSettings_t501872943, ___saturation_4)); }
	inline float get_saturation_4() const { return ___saturation_4; }
	inline float* get_address_of_saturation_4() { return &___saturation_4; }
	inline void set_saturation_4(float value)
	{
		___saturation_4 = value;
	}

	inline static int32_t get_offset_of_contrast_5() { return static_cast<int32_t>(offsetof(BasicSettings_t501872943, ___contrast_5)); }
	inline float get_contrast_5() const { return ___contrast_5; }
	inline float* get_address_of_contrast_5() { return &___contrast_5; }
	inline void set_contrast_5(float value)
	{
		___contrast_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASICSETTINGS_T501872943_H
#ifndef COLOR_T551127238_H
#define COLOR_T551127238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t551127238 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t551127238, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t551127238, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t551127238, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t551127238, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T551127238_H
#ifndef CURVESSETTINGS_T3938874345_H
#define CURVESSETTINGS_T3938874345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings
struct  CurvesSettings_t3938874345 
{
public:
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::master
	ColorGradingCurve_t2116856965 * ___master_0;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::red
	ColorGradingCurve_t2116856965 * ___red_1;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::green
	ColorGradingCurve_t2116856965 * ___green_2;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::blue
	ColorGradingCurve_t2116856965 * ___blue_3;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::hueVShue
	ColorGradingCurve_t2116856965 * ___hueVShue_4;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::hueVSsat
	ColorGradingCurve_t2116856965 * ___hueVSsat_5;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::satVSsat
	ColorGradingCurve_t2116856965 * ___satVSsat_6;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::lumVSsat
	ColorGradingCurve_t2116856965 * ___lumVSsat_7;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::e_CurrentEditingCurve
	int32_t ___e_CurrentEditingCurve_8;
	// System.Boolean UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::e_CurveY
	bool ___e_CurveY_9;
	// System.Boolean UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::e_CurveR
	bool ___e_CurveR_10;
	// System.Boolean UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::e_CurveG
	bool ___e_CurveG_11;
	// System.Boolean UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::e_CurveB
	bool ___e_CurveB_12;

public:
	inline static int32_t get_offset_of_master_0() { return static_cast<int32_t>(offsetof(CurvesSettings_t3938874345, ___master_0)); }
	inline ColorGradingCurve_t2116856965 * get_master_0() const { return ___master_0; }
	inline ColorGradingCurve_t2116856965 ** get_address_of_master_0() { return &___master_0; }
	inline void set_master_0(ColorGradingCurve_t2116856965 * value)
	{
		___master_0 = value;
		Il2CppCodeGenWriteBarrier((&___master_0), value);
	}

	inline static int32_t get_offset_of_red_1() { return static_cast<int32_t>(offsetof(CurvesSettings_t3938874345, ___red_1)); }
	inline ColorGradingCurve_t2116856965 * get_red_1() const { return ___red_1; }
	inline ColorGradingCurve_t2116856965 ** get_address_of_red_1() { return &___red_1; }
	inline void set_red_1(ColorGradingCurve_t2116856965 * value)
	{
		___red_1 = value;
		Il2CppCodeGenWriteBarrier((&___red_1), value);
	}

	inline static int32_t get_offset_of_green_2() { return static_cast<int32_t>(offsetof(CurvesSettings_t3938874345, ___green_2)); }
	inline ColorGradingCurve_t2116856965 * get_green_2() const { return ___green_2; }
	inline ColorGradingCurve_t2116856965 ** get_address_of_green_2() { return &___green_2; }
	inline void set_green_2(ColorGradingCurve_t2116856965 * value)
	{
		___green_2 = value;
		Il2CppCodeGenWriteBarrier((&___green_2), value);
	}

	inline static int32_t get_offset_of_blue_3() { return static_cast<int32_t>(offsetof(CurvesSettings_t3938874345, ___blue_3)); }
	inline ColorGradingCurve_t2116856965 * get_blue_3() const { return ___blue_3; }
	inline ColorGradingCurve_t2116856965 ** get_address_of_blue_3() { return &___blue_3; }
	inline void set_blue_3(ColorGradingCurve_t2116856965 * value)
	{
		___blue_3 = value;
		Il2CppCodeGenWriteBarrier((&___blue_3), value);
	}

	inline static int32_t get_offset_of_hueVShue_4() { return static_cast<int32_t>(offsetof(CurvesSettings_t3938874345, ___hueVShue_4)); }
	inline ColorGradingCurve_t2116856965 * get_hueVShue_4() const { return ___hueVShue_4; }
	inline ColorGradingCurve_t2116856965 ** get_address_of_hueVShue_4() { return &___hueVShue_4; }
	inline void set_hueVShue_4(ColorGradingCurve_t2116856965 * value)
	{
		___hueVShue_4 = value;
		Il2CppCodeGenWriteBarrier((&___hueVShue_4), value);
	}

	inline static int32_t get_offset_of_hueVSsat_5() { return static_cast<int32_t>(offsetof(CurvesSettings_t3938874345, ___hueVSsat_5)); }
	inline ColorGradingCurve_t2116856965 * get_hueVSsat_5() const { return ___hueVSsat_5; }
	inline ColorGradingCurve_t2116856965 ** get_address_of_hueVSsat_5() { return &___hueVSsat_5; }
	inline void set_hueVSsat_5(ColorGradingCurve_t2116856965 * value)
	{
		___hueVSsat_5 = value;
		Il2CppCodeGenWriteBarrier((&___hueVSsat_5), value);
	}

	inline static int32_t get_offset_of_satVSsat_6() { return static_cast<int32_t>(offsetof(CurvesSettings_t3938874345, ___satVSsat_6)); }
	inline ColorGradingCurve_t2116856965 * get_satVSsat_6() const { return ___satVSsat_6; }
	inline ColorGradingCurve_t2116856965 ** get_address_of_satVSsat_6() { return &___satVSsat_6; }
	inline void set_satVSsat_6(ColorGradingCurve_t2116856965 * value)
	{
		___satVSsat_6 = value;
		Il2CppCodeGenWriteBarrier((&___satVSsat_6), value);
	}

	inline static int32_t get_offset_of_lumVSsat_7() { return static_cast<int32_t>(offsetof(CurvesSettings_t3938874345, ___lumVSsat_7)); }
	inline ColorGradingCurve_t2116856965 * get_lumVSsat_7() const { return ___lumVSsat_7; }
	inline ColorGradingCurve_t2116856965 ** get_address_of_lumVSsat_7() { return &___lumVSsat_7; }
	inline void set_lumVSsat_7(ColorGradingCurve_t2116856965 * value)
	{
		___lumVSsat_7 = value;
		Il2CppCodeGenWriteBarrier((&___lumVSsat_7), value);
	}

	inline static int32_t get_offset_of_e_CurrentEditingCurve_8() { return static_cast<int32_t>(offsetof(CurvesSettings_t3938874345, ___e_CurrentEditingCurve_8)); }
	inline int32_t get_e_CurrentEditingCurve_8() const { return ___e_CurrentEditingCurve_8; }
	inline int32_t* get_address_of_e_CurrentEditingCurve_8() { return &___e_CurrentEditingCurve_8; }
	inline void set_e_CurrentEditingCurve_8(int32_t value)
	{
		___e_CurrentEditingCurve_8 = value;
	}

	inline static int32_t get_offset_of_e_CurveY_9() { return static_cast<int32_t>(offsetof(CurvesSettings_t3938874345, ___e_CurveY_9)); }
	inline bool get_e_CurveY_9() const { return ___e_CurveY_9; }
	inline bool* get_address_of_e_CurveY_9() { return &___e_CurveY_9; }
	inline void set_e_CurveY_9(bool value)
	{
		___e_CurveY_9 = value;
	}

	inline static int32_t get_offset_of_e_CurveR_10() { return static_cast<int32_t>(offsetof(CurvesSettings_t3938874345, ___e_CurveR_10)); }
	inline bool get_e_CurveR_10() const { return ___e_CurveR_10; }
	inline bool* get_address_of_e_CurveR_10() { return &___e_CurveR_10; }
	inline void set_e_CurveR_10(bool value)
	{
		___e_CurveR_10 = value;
	}

	inline static int32_t get_offset_of_e_CurveG_11() { return static_cast<int32_t>(offsetof(CurvesSettings_t3938874345, ___e_CurveG_11)); }
	inline bool get_e_CurveG_11() const { return ___e_CurveG_11; }
	inline bool* get_address_of_e_CurveG_11() { return &___e_CurveG_11; }
	inline void set_e_CurveG_11(bool value)
	{
		___e_CurveG_11 = value;
	}

	inline static int32_t get_offset_of_e_CurveB_12() { return static_cast<int32_t>(offsetof(CurvesSettings_t3938874345, ___e_CurveB_12)); }
	inline bool get_e_CurveB_12() const { return ___e_CurveB_12; }
	inline bool* get_address_of_e_CurveB_12() { return &___e_CurveB_12; }
	inline void set_e_CurveB_12(bool value)
	{
		___e_CurveB_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings
struct CurvesSettings_t3938874345_marshaled_pinvoke
{
	ColorGradingCurve_t2116856965 * ___master_0;
	ColorGradingCurve_t2116856965 * ___red_1;
	ColorGradingCurve_t2116856965 * ___green_2;
	ColorGradingCurve_t2116856965 * ___blue_3;
	ColorGradingCurve_t2116856965 * ___hueVShue_4;
	ColorGradingCurve_t2116856965 * ___hueVSsat_5;
	ColorGradingCurve_t2116856965 * ___satVSsat_6;
	ColorGradingCurve_t2116856965 * ___lumVSsat_7;
	int32_t ___e_CurrentEditingCurve_8;
	int32_t ___e_CurveY_9;
	int32_t ___e_CurveR_10;
	int32_t ___e_CurveG_11;
	int32_t ___e_CurveB_12;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings
struct CurvesSettings_t3938874345_marshaled_com
{
	ColorGradingCurve_t2116856965 * ___master_0;
	ColorGradingCurve_t2116856965 * ___red_1;
	ColorGradingCurve_t2116856965 * ___green_2;
	ColorGradingCurve_t2116856965 * ___blue_3;
	ColorGradingCurve_t2116856965 * ___hueVShue_4;
	ColorGradingCurve_t2116856965 * ___hueVSsat_5;
	ColorGradingCurve_t2116856965 * ___satVSsat_6;
	ColorGradingCurve_t2116856965 * ___lumVSsat_7;
	int32_t ___e_CurrentEditingCurve_8;
	int32_t ___e_CurveY_9;
	int32_t ___e_CurveR_10;
	int32_t ___e_CurveG_11;
	int32_t ___e_CurveB_12;
};
#endif // CURVESSETTINGS_T3938874345_H
#ifndef VECTOR3_T707611630_H
#define VECTOR3_T707611630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t707611630 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t707611630, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t707611630, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t707611630, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t707611630_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t707611630  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t707611630  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t707611630  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t707611630  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t707611630  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t707611630  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t707611630  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t707611630  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t707611630  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t707611630  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t707611630_StaticFields, ___zeroVector_4)); }
	inline Vector3_t707611630  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t707611630 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t707611630  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t707611630_StaticFields, ___oneVector_5)); }
	inline Vector3_t707611630  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t707611630 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t707611630  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t707611630_StaticFields, ___upVector_6)); }
	inline Vector3_t707611630  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t707611630 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t707611630  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t707611630_StaticFields, ___downVector_7)); }
	inline Vector3_t707611630  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t707611630 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t707611630  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t707611630_StaticFields, ___leftVector_8)); }
	inline Vector3_t707611630  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t707611630 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t707611630  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t707611630_StaticFields, ___rightVector_9)); }
	inline Vector3_t707611630  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t707611630 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t707611630  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t707611630_StaticFields, ___forwardVector_10)); }
	inline Vector3_t707611630  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t707611630 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t707611630  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t707611630_StaticFields, ___backVector_11)); }
	inline Vector3_t707611630  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t707611630 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t707611630  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t707611630_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t707611630  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t707611630 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t707611630  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t707611630_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t707611630  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t707611630 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t707611630  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T707611630_H
#ifndef POSTPROCESSINGCOMPONENT_1_T2379290161_H
#define POSTPROCESSINGCOMPONENT_1_T2379290161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.MotionBlurModel>
struct  PostProcessingComponent_1_t2379290161  : public PostProcessingComponentBase_t2502581840
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	MotionBlurModel_t267707277 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t2379290161, ___U3CmodelU3Ek__BackingField_1)); }
	inline MotionBlurModel_t267707277 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline MotionBlurModel_t267707277 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(MotionBlurModel_t267707277 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T2379290161_H
#ifndef VECTOR2_T1675759294_H
#define VECTOR2_T1675759294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t1675759294 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t1675759294, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t1675759294, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t1675759294_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1675759294  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1675759294  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1675759294  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1675759294  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1675759294  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1675759294  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1675759294  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1675759294  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t1675759294_StaticFields, ___zeroVector_2)); }
	inline Vector2_t1675759294  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t1675759294 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t1675759294  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t1675759294_StaticFields, ___oneVector_3)); }
	inline Vector2_t1675759294  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t1675759294 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t1675759294  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t1675759294_StaticFields, ___upVector_4)); }
	inline Vector2_t1675759294  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t1675759294 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t1675759294  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t1675759294_StaticFields, ___downVector_5)); }
	inline Vector2_t1675759294  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t1675759294 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t1675759294  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t1675759294_StaticFields, ___leftVector_6)); }
	inline Vector2_t1675759294  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t1675759294 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t1675759294  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t1675759294_StaticFields, ___rightVector_7)); }
	inline Vector2_t1675759294  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t1675759294 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t1675759294  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t1675759294_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t1675759294  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t1675759294 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t1675759294  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t1675759294_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t1675759294  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t1675759294 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t1675759294  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T1675759294_H
#ifndef SETTINGS_T3994248629_H
#define SETTINGS_T3994248629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.DitheringModel/Settings
struct  Settings_t3994248629 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Settings_t3994248629__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTINGS_T3994248629_H
#ifndef POSTPROCESSINGCOMPONENT_1_T3478440785_H
#define POSTPROCESSINGCOMPONENT_1_T3478440785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.AntialiasingModel>
struct  PostProcessingComponent_1_t3478440785  : public PostProcessingComponentBase_t2502581840
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	AntialiasingModel_t1366857901 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t3478440785, ___U3CmodelU3Ek__BackingField_1)); }
	inline AntialiasingModel_t1366857901 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline AntialiasingModel_t1366857901 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(AntialiasingModel_t1366857901 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T3478440785_H
#ifndef PROPERTYATTRIBUTE_T2400746134_H
#define PROPERTYATTRIBUTE_T2400746134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t2400746134  : public Attribute_t2831635209
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTE_T2400746134_H
#ifndef POSTPROCESSINGCOMPONENT_1_T3090030916_H
#define POSTPROCESSINGCOMPONENT_1_T3090030916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.FogModel>
struct  PostProcessingComponent_1_t3090030916  : public PostProcessingComponentBase_t2502581840
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	FogModel_t978448032 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t3090030916, ___U3CmodelU3Ek__BackingField_1)); }
	inline FogModel_t978448032 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline FogModel_t978448032 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(FogModel_t978448032 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T3090030916_H
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
#ifndef POSTPROCESSINGCOMPONENT_1_T658093369_H
#define POSTPROCESSINGCOMPONENT_1_T658093369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.BloomModel>
struct  PostProcessingComponent_1_t658093369  : public PostProcessingComponentBase_t2502581840
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	BloomModel_t2841477781 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t658093369, ___U3CmodelU3Ek__BackingField_1)); }
	inline BloomModel_t2841477781 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline BloomModel_t2841477781 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(BloomModel_t2841477781 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T658093369_H
#ifndef POSTPROCESSINGCOMPONENT_1_T2358794660_H
#define POSTPROCESSINGCOMPONENT_1_T2358794660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.GrainModel>
struct  PostProcessingComponent_1_t2358794660  : public PostProcessingComponentBase_t2502581840
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	GrainModel_t247211776 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t2358794660, ___U3CmodelU3Ek__BackingField_1)); }
	inline GrainModel_t247211776 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline GrainModel_t247211776 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(GrainModel_t247211776 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T2358794660_H
#ifndef POSTPROCESSINGCOMPONENT_1_T3773449036_H
#define POSTPROCESSINGCOMPONENT_1_T3773449036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.UserLutModel>
struct  PostProcessingComponent_1_t3773449036  : public PostProcessingComponentBase_t2502581840
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	UserLutModel_t1661866152 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t3773449036, ___U3CmodelU3Ek__BackingField_1)); }
	inline UserLutModel_t1661866152 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline UserLutModel_t1661866152 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(UserLutModel_t1661866152 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T3773449036_H
#ifndef POSTPROCESSINGCOMPONENT_1_T1255007841_H
#define POSTPROCESSINGCOMPONENT_1_T1255007841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.EyeAdaptationModel>
struct  PostProcessingComponent_1_t1255007841  : public PostProcessingComponentBase_t2502581840
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	EyeAdaptationModel_t3438392253 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t1255007841, ___U3CmodelU3Ek__BackingField_1)); }
	inline EyeAdaptationModel_t3438392253 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline EyeAdaptationModel_t3438392253 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(EyeAdaptationModel_t3438392253 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T1255007841_H
#ifndef FRAME_T209750528_H
#define FRAME_T209750528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame
struct  Frame_t209750528 
{
public:
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame::lumaTexture
	RenderTexture_t3847872195 * ___lumaTexture_0;
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame::chromaTexture
	RenderTexture_t3847872195 * ___chromaTexture_1;
	// System.Single UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame::m_Time
	float ___m_Time_2;
	// UnityEngine.Rendering.RenderTargetIdentifier[] UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame::m_MRT
	RenderTargetIdentifierU5BU5D_t564583008* ___m_MRT_3;

public:
	inline static int32_t get_offset_of_lumaTexture_0() { return static_cast<int32_t>(offsetof(Frame_t209750528, ___lumaTexture_0)); }
	inline RenderTexture_t3847872195 * get_lumaTexture_0() const { return ___lumaTexture_0; }
	inline RenderTexture_t3847872195 ** get_address_of_lumaTexture_0() { return &___lumaTexture_0; }
	inline void set_lumaTexture_0(RenderTexture_t3847872195 * value)
	{
		___lumaTexture_0 = value;
		Il2CppCodeGenWriteBarrier((&___lumaTexture_0), value);
	}

	inline static int32_t get_offset_of_chromaTexture_1() { return static_cast<int32_t>(offsetof(Frame_t209750528, ___chromaTexture_1)); }
	inline RenderTexture_t3847872195 * get_chromaTexture_1() const { return ___chromaTexture_1; }
	inline RenderTexture_t3847872195 ** get_address_of_chromaTexture_1() { return &___chromaTexture_1; }
	inline void set_chromaTexture_1(RenderTexture_t3847872195 * value)
	{
		___chromaTexture_1 = value;
		Il2CppCodeGenWriteBarrier((&___chromaTexture_1), value);
	}

	inline static int32_t get_offset_of_m_Time_2() { return static_cast<int32_t>(offsetof(Frame_t209750528, ___m_Time_2)); }
	inline float get_m_Time_2() const { return ___m_Time_2; }
	inline float* get_address_of_m_Time_2() { return &___m_Time_2; }
	inline void set_m_Time_2(float value)
	{
		___m_Time_2 = value;
	}

	inline static int32_t get_offset_of_m_MRT_3() { return static_cast<int32_t>(offsetof(Frame_t209750528, ___m_MRT_3)); }
	inline RenderTargetIdentifierU5BU5D_t564583008* get_m_MRT_3() const { return ___m_MRT_3; }
	inline RenderTargetIdentifierU5BU5D_t564583008** get_address_of_m_MRT_3() { return &___m_MRT_3; }
	inline void set_m_MRT_3(RenderTargetIdentifierU5BU5D_t564583008* value)
	{
		___m_MRT_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_MRT_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame
struct Frame_t209750528_marshaled_pinvoke
{
	RenderTexture_t3847872195 * ___lumaTexture_0;
	RenderTexture_t3847872195 * ___chromaTexture_1;
	float ___m_Time_2;
	RenderTargetIdentifier_t320054221 * ___m_MRT_3;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame
struct Frame_t209750528_marshaled_com
{
	RenderTexture_t3847872195 * ___lumaTexture_0;
	RenderTexture_t3847872195 * ___chromaTexture_1;
	float ___m_Time_2;
	RenderTargetIdentifier_t320054221 * ___m_MRT_3;
};
#endif // FRAME_T209750528_H
#ifndef TRACKBALLGROUPATTRIBUTE_T791406138_H
#define TRACKBALLGROUPATTRIBUTE_T791406138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.TrackballGroupAttribute
struct  TrackballGroupAttribute_t791406138  : public PropertyAttribute_t2400746134
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKBALLGROUPATTRIBUTE_T791406138_H
#ifndef TRACKBALLATTRIBUTE_T837274702_H
#define TRACKBALLATTRIBUTE_T837274702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.TrackballAttribute
struct  TrackballAttribute_t837274702  : public PropertyAttribute_t2400746134
{
public:
	// System.String UnityEngine.PostProcessing.TrackballAttribute::method
	String_t* ___method_0;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(TrackballAttribute_t837274702, ___method_0)); }
	inline String_t* get_method_0() const { return ___method_0; }
	inline String_t** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(String_t* value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier((&___method_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKBALLATTRIBUTE_T837274702_H
#ifndef MINATTRIBUTE_T2906852124_H
#define MINATTRIBUTE_T2906852124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.MinAttribute
struct  MinAttribute_t2906852124  : public PropertyAttribute_t2400746134
{
public:
	// System.Single UnityEngine.PostProcessing.MinAttribute::min
	float ___min_0;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(MinAttribute_t2906852124, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MINATTRIBUTE_T2906852124_H
#ifndef POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T2384518223_H
#define POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T2384518223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentCommandBuffer`1<UnityEngine.PostProcessing.AmbientOcclusionModel>
struct  PostProcessingComponentCommandBuffer_1_t2384518223  : public PostProcessingComponent_1_t3659396475
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T2384518223_H
#ifndef POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T4066888884_H
#define POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T4066888884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.BloomModel>
struct  PostProcessingComponentRenderTexture_1_t4066888884  : public PostProcessingComponent_1_t658093369
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T4066888884_H
#ifndef POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T1697952141_H
#define POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T1697952141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentCommandBuffer`1<UnityEngine.PostProcessing.BuiltinDebugViewsModel>
struct  PostProcessingComponentCommandBuffer_1_t1697952141  : public PostProcessingComponent_1_t2972830393
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T1697952141_H
#ifndef POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T1472622879_H
#define POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T1472622879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.GrainModel>
struct  PostProcessingComponentRenderTexture_1_t1472622879  : public PostProcessingComponent_1_t2358794660
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T1472622879_H
#ifndef POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T3480816978_H
#define POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T3480816978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.ChromaticAberrationModel>
struct  PostProcessingComponentRenderTexture_1_t3480816978  : public PostProcessingComponent_1_t72021463
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T3480816978_H
#ifndef POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T3705659605_H
#define POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T3705659605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.ColorGradingModel>
struct  PostProcessingComponentRenderTexture_1_t3705659605  : public PostProcessingComponent_1_t296864090
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T3705659605_H
#ifndef POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T4087472876_H
#define POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T4087472876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.DepthOfFieldModel>
struct  PostProcessingComponentRenderTexture_1_t4087472876  : public PostProcessingComponent_1_t678677361
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T4087472876_H
#ifndef POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T3261487178_H
#define POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T3261487178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.DitheringModel>
struct  PostProcessingComponentRenderTexture_1_t3261487178  : public PostProcessingComponent_1_t4147658959
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T3261487178_H
#ifndef POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T368836060_H
#define POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T368836060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.EyeAdaptationModel>
struct  PostProcessingComponentRenderTexture_1_t368836060  : public PostProcessingComponent_1_t1255007841
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T368836060_H
#ifndef POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T1815152664_H
#define POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T1815152664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentCommandBuffer`1<UnityEngine.PostProcessing.FogModel>
struct  PostProcessingComponentCommandBuffer_1_t1815152664  : public PostProcessingComponent_1_t3090030916
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T1815152664_H
#ifndef POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T2592269004_H
#define POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T2592269004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.AntialiasingModel>
struct  PostProcessingComponentRenderTexture_1_t2592269004  : public PostProcessingComponent_1_t3478440785
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T2592269004_H
#ifndef OCCLUSIONSOURCE_T44235136_H
#define OCCLUSIONSOURCE_T44235136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AmbientOcclusionComponent/OcclusionSource
struct  OcclusionSource_t44235136 
{
public:
	// System.Int32 UnityEngine.PostProcessing.AmbientOcclusionComponent/OcclusionSource::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OcclusionSource_t44235136, ___value___1)); }
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
#endif // OCCLUSIONSOURCE_T44235136_H
#ifndef POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T1104411909_H
#define POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T1104411909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentCommandBuffer`1<UnityEngine.PostProcessing.MotionBlurModel>
struct  PostProcessingComponentCommandBuffer_1_t1104411909  : public PostProcessingComponent_1_t2379290161
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T1104411909_H
#ifndef RENDERTEXTUREFORMAT_T1864458948_H
#define RENDERTEXTUREFORMAT_T1864458948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureFormat
struct  RenderTextureFormat_t1864458948 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t1864458948, ___value___1)); }
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
#endif // RENDERTEXTUREFORMAT_T1864458948_H
#ifndef GETSETATTRIBUTE_T232059092_H
#define GETSETATTRIBUTE_T232059092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.GetSetAttribute
struct  GetSetAttribute_t232059092  : public PropertyAttribute_t2400746134
{
public:
	// System.String UnityEngine.PostProcessing.GetSetAttribute::name
	String_t* ___name_0;
	// System.Boolean UnityEngine.PostProcessing.GetSetAttribute::dirty
	bool ___dirty_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(GetSetAttribute_t232059092, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_dirty_1() { return static_cast<int32_t>(offsetof(GetSetAttribute_t232059092, ___dirty_1)); }
	inline bool get_dirty_1() const { return ___dirty_1; }
	inline bool* get_address_of_dirty_1() { return &___dirty_1; }
	inline void set_dirty_1(bool value)
	{
		___dirty_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETSETATTRIBUTE_T232059092_H
#ifndef APISETTINGS_T3971419043_H
#define APISETTINGS_T3971419043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.APISettings
struct  APISettings_t3971419043  : public RuntimeObject
{
public:
	// System.Boolean PlayFab.PlayStreamModels.APISettings::AllowClientToAddVirtualCurrency
	bool ___AllowClientToAddVirtualCurrency_0;
	// System.Boolean PlayFab.PlayStreamModels.APISettings::AllowClientToSubtractVirtualCurrency
	bool ___AllowClientToSubtractVirtualCurrency_1;
	// System.Boolean PlayFab.PlayStreamModels.APISettings::AllowClientToPostPlayerStatistics
	bool ___AllowClientToPostPlayerStatistics_2;
	// System.Boolean PlayFab.PlayStreamModels.APISettings::AllowClientToStartGames
	bool ___AllowClientToStartGames_3;
	// System.Boolean PlayFab.PlayStreamModels.APISettings::AllowServerToDeleteUsers
	bool ___AllowServerToDeleteUsers_4;
	// System.Boolean PlayFab.PlayStreamModels.APISettings::UseSandboxPayments
	bool ___UseSandboxPayments_5;
	// System.Boolean PlayFab.PlayStreamModels.APISettings::UseExternalGameServerProvider
	bool ___UseExternalGameServerProvider_6;
	// System.Boolean PlayFab.PlayStreamModels.APISettings::AllowNonUniquePlayerDisplayNames
	bool ___AllowNonUniquePlayerDisplayNames_7;
	// System.Boolean PlayFab.PlayStreamModels.APISettings::EnableClientIPAddressObfuscation
	bool ___EnableClientIPAddressObfuscation_8;
	// System.Boolean PlayFab.PlayStreamModels.APISettings::RequireCustomDataJSONFormat
	bool ___RequireCustomDataJSONFormat_9;
	// System.Boolean PlayFab.PlayStreamModels.APISettings::DisableAPIAccess
	bool ___DisableAPIAccess_10;
	// System.Nullable`1<System.Int32> PlayFab.PlayStreamModels.APISettings::DisplayNameRandomSuffixLength
	Nullable_1_t3386535404  ___DisplayNameRandomSuffixLength_11;

public:
	inline static int32_t get_offset_of_AllowClientToAddVirtualCurrency_0() { return static_cast<int32_t>(offsetof(APISettings_t3971419043, ___AllowClientToAddVirtualCurrency_0)); }
	inline bool get_AllowClientToAddVirtualCurrency_0() const { return ___AllowClientToAddVirtualCurrency_0; }
	inline bool* get_address_of_AllowClientToAddVirtualCurrency_0() { return &___AllowClientToAddVirtualCurrency_0; }
	inline void set_AllowClientToAddVirtualCurrency_0(bool value)
	{
		___AllowClientToAddVirtualCurrency_0 = value;
	}

	inline static int32_t get_offset_of_AllowClientToSubtractVirtualCurrency_1() { return static_cast<int32_t>(offsetof(APISettings_t3971419043, ___AllowClientToSubtractVirtualCurrency_1)); }
	inline bool get_AllowClientToSubtractVirtualCurrency_1() const { return ___AllowClientToSubtractVirtualCurrency_1; }
	inline bool* get_address_of_AllowClientToSubtractVirtualCurrency_1() { return &___AllowClientToSubtractVirtualCurrency_1; }
	inline void set_AllowClientToSubtractVirtualCurrency_1(bool value)
	{
		___AllowClientToSubtractVirtualCurrency_1 = value;
	}

	inline static int32_t get_offset_of_AllowClientToPostPlayerStatistics_2() { return static_cast<int32_t>(offsetof(APISettings_t3971419043, ___AllowClientToPostPlayerStatistics_2)); }
	inline bool get_AllowClientToPostPlayerStatistics_2() const { return ___AllowClientToPostPlayerStatistics_2; }
	inline bool* get_address_of_AllowClientToPostPlayerStatistics_2() { return &___AllowClientToPostPlayerStatistics_2; }
	inline void set_AllowClientToPostPlayerStatistics_2(bool value)
	{
		___AllowClientToPostPlayerStatistics_2 = value;
	}

	inline static int32_t get_offset_of_AllowClientToStartGames_3() { return static_cast<int32_t>(offsetof(APISettings_t3971419043, ___AllowClientToStartGames_3)); }
	inline bool get_AllowClientToStartGames_3() const { return ___AllowClientToStartGames_3; }
	inline bool* get_address_of_AllowClientToStartGames_3() { return &___AllowClientToStartGames_3; }
	inline void set_AllowClientToStartGames_3(bool value)
	{
		___AllowClientToStartGames_3 = value;
	}

	inline static int32_t get_offset_of_AllowServerToDeleteUsers_4() { return static_cast<int32_t>(offsetof(APISettings_t3971419043, ___AllowServerToDeleteUsers_4)); }
	inline bool get_AllowServerToDeleteUsers_4() const { return ___AllowServerToDeleteUsers_4; }
	inline bool* get_address_of_AllowServerToDeleteUsers_4() { return &___AllowServerToDeleteUsers_4; }
	inline void set_AllowServerToDeleteUsers_4(bool value)
	{
		___AllowServerToDeleteUsers_4 = value;
	}

	inline static int32_t get_offset_of_UseSandboxPayments_5() { return static_cast<int32_t>(offsetof(APISettings_t3971419043, ___UseSandboxPayments_5)); }
	inline bool get_UseSandboxPayments_5() const { return ___UseSandboxPayments_5; }
	inline bool* get_address_of_UseSandboxPayments_5() { return &___UseSandboxPayments_5; }
	inline void set_UseSandboxPayments_5(bool value)
	{
		___UseSandboxPayments_5 = value;
	}

	inline static int32_t get_offset_of_UseExternalGameServerProvider_6() { return static_cast<int32_t>(offsetof(APISettings_t3971419043, ___UseExternalGameServerProvider_6)); }
	inline bool get_UseExternalGameServerProvider_6() const { return ___UseExternalGameServerProvider_6; }
	inline bool* get_address_of_UseExternalGameServerProvider_6() { return &___UseExternalGameServerProvider_6; }
	inline void set_UseExternalGameServerProvider_6(bool value)
	{
		___UseExternalGameServerProvider_6 = value;
	}

	inline static int32_t get_offset_of_AllowNonUniquePlayerDisplayNames_7() { return static_cast<int32_t>(offsetof(APISettings_t3971419043, ___AllowNonUniquePlayerDisplayNames_7)); }
	inline bool get_AllowNonUniquePlayerDisplayNames_7() const { return ___AllowNonUniquePlayerDisplayNames_7; }
	inline bool* get_address_of_AllowNonUniquePlayerDisplayNames_7() { return &___AllowNonUniquePlayerDisplayNames_7; }
	inline void set_AllowNonUniquePlayerDisplayNames_7(bool value)
	{
		___AllowNonUniquePlayerDisplayNames_7 = value;
	}

	inline static int32_t get_offset_of_EnableClientIPAddressObfuscation_8() { return static_cast<int32_t>(offsetof(APISettings_t3971419043, ___EnableClientIPAddressObfuscation_8)); }
	inline bool get_EnableClientIPAddressObfuscation_8() const { return ___EnableClientIPAddressObfuscation_8; }
	inline bool* get_address_of_EnableClientIPAddressObfuscation_8() { return &___EnableClientIPAddressObfuscation_8; }
	inline void set_EnableClientIPAddressObfuscation_8(bool value)
	{
		___EnableClientIPAddressObfuscation_8 = value;
	}

	inline static int32_t get_offset_of_RequireCustomDataJSONFormat_9() { return static_cast<int32_t>(offsetof(APISettings_t3971419043, ___RequireCustomDataJSONFormat_9)); }
	inline bool get_RequireCustomDataJSONFormat_9() const { return ___RequireCustomDataJSONFormat_9; }
	inline bool* get_address_of_RequireCustomDataJSONFormat_9() { return &___RequireCustomDataJSONFormat_9; }
	inline void set_RequireCustomDataJSONFormat_9(bool value)
	{
		___RequireCustomDataJSONFormat_9 = value;
	}

	inline static int32_t get_offset_of_DisableAPIAccess_10() { return static_cast<int32_t>(offsetof(APISettings_t3971419043, ___DisableAPIAccess_10)); }
	inline bool get_DisableAPIAccess_10() const { return ___DisableAPIAccess_10; }
	inline bool* get_address_of_DisableAPIAccess_10() { return &___DisableAPIAccess_10; }
	inline void set_DisableAPIAccess_10(bool value)
	{
		___DisableAPIAccess_10 = value;
	}

	inline static int32_t get_offset_of_DisplayNameRandomSuffixLength_11() { return static_cast<int32_t>(offsetof(APISettings_t3971419043, ___DisplayNameRandomSuffixLength_11)); }
	inline Nullable_1_t3386535404  get_DisplayNameRandomSuffixLength_11() const { return ___DisplayNameRandomSuffixLength_11; }
	inline Nullable_1_t3386535404 * get_address_of_DisplayNameRandomSuffixLength_11() { return &___DisplayNameRandomSuffixLength_11; }
	inline void set_DisplayNameRandomSuffixLength_11(Nullable_1_t3386535404  value)
	{
		___DisplayNameRandomSuffixLength_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APISETTINGS_T3971419043_H
#ifndef TASKINSTANCESTATUS_T3998601550_H
#define TASKINSTANCESTATUS_T3998601550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TaskInstanceStatus
struct  TaskInstanceStatus_t3998601550 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.TaskInstanceStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TaskInstanceStatus_t3998601550, ___value___1)); }
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
#endif // TASKINSTANCESTATUS_T3998601550_H
#ifndef STATISTICAGGREGATIONMETHOD_T691678656_H
#define STATISTICAGGREGATIONMETHOD_T691678656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.StatisticAggregationMethod
struct  StatisticAggregationMethod_t691678656 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.StatisticAggregationMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StatisticAggregationMethod_t691678656, ___value___1)); }
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
#endif // STATISTICAGGREGATIONMETHOD_T691678656_H
#ifndef REGION_T2935391263_H
#define REGION_T2935391263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.Region
struct  Region_t2935391263 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.Region::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Region_t2935391263, ___value___1)); }
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
#endif // REGION_T2935391263_H
#ifndef ALERTLEVEL_T1277682315_H
#define ALERTLEVEL_T1277682315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.AlertLevel
struct  AlertLevel_t1277682315 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.AlertLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AlertLevel_t1277682315, ___value___1)); }
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
#endif // ALERTLEVEL_T1277682315_H
#ifndef ALERTSTATES_T1046021142_H
#define ALERTSTATES_T1046021142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.AlertStates
struct  AlertStates_t1046021142 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.AlertStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AlertStates_t1046021142, ___value___1)); }
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
#endif // ALERTSTATES_T1046021142_H
#ifndef NEWSSTATUS_T1693451179_H
#define NEWSSTATUS_T1693451179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.NewsStatus
struct  NewsStatus_t1693451179 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.NewsStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NewsStatus_t1693451179, ___value___1)); }
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
#endif // NEWSSTATUS_T1693451179_H
#ifndef LOGINIDENTITYPROVIDER_T3372356463_H
#define LOGINIDENTITYPROVIDER_T3372356463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.LoginIdentityProvider
struct  LoginIdentityProvider_t3372356463 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.LoginIdentityProvider::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoginIdentityProvider_t3372356463, ___value___1)); }
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
#endif // LOGINIDENTITYPROVIDER_T3372356463_H
#ifndef METRICUNIT_T1334681998_H
#define METRICUNIT_T1334681998_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.MetricUnit
struct  MetricUnit_t1334681998 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.MetricUnit::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MetricUnit_t1334681998, ___value___1)); }
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
#endif // METRICUNIT_T1334681998_H
#ifndef STATISTICRESETINTERVALOPTION_T4041913334_H
#define STATISTICRESETINTERVALOPTION_T4041913334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.StatisticResetIntervalOption
struct  StatisticResetIntervalOption_t4041913334 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.StatisticResetIntervalOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StatisticResetIntervalOption_t4041913334, ___value___1)); }
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
#endif // STATISTICRESETINTERVALOPTION_T4041913334_H
#ifndef PHOTONSERVICESENUM_T477314747_H
#define PHOTONSERVICESENUM_T477314747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PhotonServicesEnum
struct  PhotonServicesEnum_t477314747 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.PhotonServicesEnum::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PhotonServicesEnum_t477314747, ___value___1)); }
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
#endif // PHOTONSERVICESENUM_T477314747_H
#ifndef POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T2487381581_H
#define POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T2487381581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.VignetteModel>
struct  PostProcessingComponentRenderTexture_1_t2487381581  : public PostProcessingComponent_1_t3373553362
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T2487381581_H
#ifndef POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T2887277255_H
#define POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T2887277255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.UserLutModel>
struct  PostProcessingComponentRenderTexture_1_t2887277255  : public PostProcessingComponent_1_t3773449036
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T2887277255_H
#ifndef SOURCETYPE_T2789550703_H
#define SOURCETYPE_T2789550703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.SourceType
struct  SourceType_t2789550703 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.SourceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SourceType_t2789550703, ___value___1)); }
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
#endif // SOURCETYPE_T2789550703_H
#ifndef POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T2415324209_H
#define POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T2415324209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentCommandBuffer`1<UnityEngine.PostProcessing.ScreenSpaceReflectionModel>
struct  PostProcessingComponentCommandBuffer_1_t2415324209  : public PostProcessingComponent_1_t3690202461
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T2415324209_H
#ifndef PASS_T3777200846_H
#define PASS_T3777200846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Pass
struct  Pass_t3777200846 
{
public:
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Pass::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Pass_t3777200846, ___value___1)); }
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
#endif // PASS_T3777200846_H
#ifndef DITHERINGMODEL_T2036076075_H
#define DITHERINGMODEL_T2036076075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.DitheringModel
struct  DitheringModel_t2036076075  : public PostProcessingModel_t3467175713
{
public:
	// UnityEngine.PostProcessing.DitheringModel/Settings UnityEngine.PostProcessing.DitheringModel::m_Settings
	Settings_t3994248629  ___m_Settings_1;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(DitheringModel_t2036076075, ___m_Settings_1)); }
	inline Settings_t3994248629  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t3994248629 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t3994248629  value)
	{
		___m_Settings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DITHERINGMODEL_T2036076075_H
#ifndef EYEADAPTATIONTYPE_T3698484466_H
#define EYEADAPTATIONTYPE_T3698484466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.EyeAdaptationModel/EyeAdaptationType
struct  EyeAdaptationType_t3698484466 
{
public:
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationModel/EyeAdaptationType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EyeAdaptationType_t3698484466, ___value___1)); }
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
#endif // EYEADAPTATIONTYPE_T3698484466_H
#ifndef KERNELSIZE_T1744797247_H
#define KERNELSIZE_T1744797247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.DepthOfFieldModel/KernelSize
struct  KernelSize_t1744797247 
{
public:
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldModel/KernelSize::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KernelSize_t1744797247, ___value___1)); }
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
#endif // KERNELSIZE_T1744797247_H
#ifndef SETTINGS_T811044873_H
#define SETTINGS_T811044873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BloomModel/Settings
struct  Settings_t811044873 
{
public:
	// UnityEngine.PostProcessing.BloomModel/BloomSettings UnityEngine.PostProcessing.BloomModel/Settings::bloom
	BloomSettings_t390616924  ___bloom_0;
	// UnityEngine.PostProcessing.BloomModel/LensDirtSettings UnityEngine.PostProcessing.BloomModel/Settings::lensDirt
	LensDirtSettings_t4014836744  ___lensDirt_1;

public:
	inline static int32_t get_offset_of_bloom_0() { return static_cast<int32_t>(offsetof(Settings_t811044873, ___bloom_0)); }
	inline BloomSettings_t390616924  get_bloom_0() const { return ___bloom_0; }
	inline BloomSettings_t390616924 * get_address_of_bloom_0() { return &___bloom_0; }
	inline void set_bloom_0(BloomSettings_t390616924  value)
	{
		___bloom_0 = value;
	}

	inline static int32_t get_offset_of_lensDirt_1() { return static_cast<int32_t>(offsetof(Settings_t811044873, ___lensDirt_1)); }
	inline LensDirtSettings_t4014836744  get_lensDirt_1() const { return ___lensDirt_1; }
	inline LensDirtSettings_t4014836744 * get_address_of_lensDirt_1() { return &___lensDirt_1; }
	inline void set_lensDirt_1(LensDirtSettings_t4014836744  value)
	{
		___lensDirt_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.BloomModel/Settings
struct Settings_t811044873_marshaled_pinvoke
{
	BloomSettings_t390616924_marshaled_pinvoke ___bloom_0;
	LensDirtSettings_t4014836744_marshaled_pinvoke ___lensDirt_1;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.BloomModel/Settings
struct Settings_t811044873_marshaled_com
{
	BloomSettings_t390616924_marshaled_com ___bloom_0;
	LensDirtSettings_t4014836744_marshaled_com ___lensDirt_1;
};
#endif // SETTINGS_T811044873_H
#ifndef CHROMATICABERRATIONMODEL_T2255405875_H
#define CHROMATICABERRATIONMODEL_T2255405875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ChromaticAberrationModel
struct  ChromaticAberrationModel_t2255405875  : public PostProcessingModel_t3467175713
{
public:
	// UnityEngine.PostProcessing.ChromaticAberrationModel/Settings UnityEngine.PostProcessing.ChromaticAberrationModel::m_Settings
	Settings_t1310207576  ___m_Settings_1;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(ChromaticAberrationModel_t2255405875, ___m_Settings_1)); }
	inline Settings_t1310207576  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t1310207576 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t1310207576  value)
	{
		___m_Settings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHROMATICABERRATIONMODEL_T2255405875_H
#ifndef PASS_T1656403883_H
#define PASS_T1656403883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.MotionBlurComponent/Pass
struct  Pass_t1656403883 
{
public:
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Pass::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Pass_t1656403883, ___value___1)); }
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
#endif // PASS_T1656403883_H
#ifndef TONEMAPPER_T236583493_H
#define TONEMAPPER_T236583493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel/Tonemapper
struct  Tonemapper_t236583493 
{
public:
	// System.Int32 UnityEngine.PostProcessing.ColorGradingModel/Tonemapper::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Tonemapper_t236583493, ___value___1)); }
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
#endif // TONEMAPPER_T236583493_H
#ifndef CHANNELMIXERSETTINGS_T2252873405_H
#define CHANNELMIXERSETTINGS_T2252873405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings
struct  ChannelMixerSettings_t2252873405 
{
public:
	// UnityEngine.Vector3 UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings::red
	Vector3_t707611630  ___red_0;
	// UnityEngine.Vector3 UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings::green
	Vector3_t707611630  ___green_1;
	// UnityEngine.Vector3 UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings::blue
	Vector3_t707611630  ___blue_2;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings::currentEditingChannel
	int32_t ___currentEditingChannel_3;

public:
	inline static int32_t get_offset_of_red_0() { return static_cast<int32_t>(offsetof(ChannelMixerSettings_t2252873405, ___red_0)); }
	inline Vector3_t707611630  get_red_0() const { return ___red_0; }
	inline Vector3_t707611630 * get_address_of_red_0() { return &___red_0; }
	inline void set_red_0(Vector3_t707611630  value)
	{
		___red_0 = value;
	}

	inline static int32_t get_offset_of_green_1() { return static_cast<int32_t>(offsetof(ChannelMixerSettings_t2252873405, ___green_1)); }
	inline Vector3_t707611630  get_green_1() const { return ___green_1; }
	inline Vector3_t707611630 * get_address_of_green_1() { return &___green_1; }
	inline void set_green_1(Vector3_t707611630  value)
	{
		___green_1 = value;
	}

	inline static int32_t get_offset_of_blue_2() { return static_cast<int32_t>(offsetof(ChannelMixerSettings_t2252873405, ___blue_2)); }
	inline Vector3_t707611630  get_blue_2() const { return ___blue_2; }
	inline Vector3_t707611630 * get_address_of_blue_2() { return &___blue_2; }
	inline void set_blue_2(Vector3_t707611630  value)
	{
		___blue_2 = value;
	}

	inline static int32_t get_offset_of_currentEditingChannel_3() { return static_cast<int32_t>(offsetof(ChannelMixerSettings_t2252873405, ___currentEditingChannel_3)); }
	inline int32_t get_currentEditingChannel_3() const { return ___currentEditingChannel_3; }
	inline int32_t* get_address_of_currentEditingChannel_3() { return &___currentEditingChannel_3; }
	inline void set_currentEditingChannel_3(int32_t value)
	{
		___currentEditingChannel_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELMIXERSETTINGS_T2252873405_H
#ifndef LOGWHEELSSETTINGS_T2859358507_H
#define LOGWHEELSSETTINGS_T2859358507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel/LogWheelsSettings
struct  LogWheelsSettings_t2859358507 
{
public:
	// UnityEngine.Color UnityEngine.PostProcessing.ColorGradingModel/LogWheelsSettings::slope
	Color_t551127238  ___slope_0;
	// UnityEngine.Color UnityEngine.PostProcessing.ColorGradingModel/LogWheelsSettings::power
	Color_t551127238  ___power_1;
	// UnityEngine.Color UnityEngine.PostProcessing.ColorGradingModel/LogWheelsSettings::offset
	Color_t551127238  ___offset_2;

public:
	inline static int32_t get_offset_of_slope_0() { return static_cast<int32_t>(offsetof(LogWheelsSettings_t2859358507, ___slope_0)); }
	inline Color_t551127238  get_slope_0() const { return ___slope_0; }
	inline Color_t551127238 * get_address_of_slope_0() { return &___slope_0; }
	inline void set_slope_0(Color_t551127238  value)
	{
		___slope_0 = value;
	}

	inline static int32_t get_offset_of_power_1() { return static_cast<int32_t>(offsetof(LogWheelsSettings_t2859358507, ___power_1)); }
	inline Color_t551127238  get_power_1() const { return ___power_1; }
	inline Color_t551127238 * get_address_of_power_1() { return &___power_1; }
	inline void set_power_1(Color_t551127238  value)
	{
		___power_1 = value;
	}

	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(LogWheelsSettings_t2859358507, ___offset_2)); }
	inline Color_t551127238  get_offset_2() const { return ___offset_2; }
	inline Color_t551127238 * get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(Color_t551127238  value)
	{
		___offset_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGWHEELSSETTINGS_T2859358507_H
#ifndef LINEARWHEELSSETTINGS_T3826391549_H
#define LINEARWHEELSSETTINGS_T3826391549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel/LinearWheelsSettings
struct  LinearWheelsSettings_t3826391549 
{
public:
	// UnityEngine.Color UnityEngine.PostProcessing.ColorGradingModel/LinearWheelsSettings::lift
	Color_t551127238  ___lift_0;
	// UnityEngine.Color UnityEngine.PostProcessing.ColorGradingModel/LinearWheelsSettings::gamma
	Color_t551127238  ___gamma_1;
	// UnityEngine.Color UnityEngine.PostProcessing.ColorGradingModel/LinearWheelsSettings::gain
	Color_t551127238  ___gain_2;

public:
	inline static int32_t get_offset_of_lift_0() { return static_cast<int32_t>(offsetof(LinearWheelsSettings_t3826391549, ___lift_0)); }
	inline Color_t551127238  get_lift_0() const { return ___lift_0; }
	inline Color_t551127238 * get_address_of_lift_0() { return &___lift_0; }
	inline void set_lift_0(Color_t551127238  value)
	{
		___lift_0 = value;
	}

	inline static int32_t get_offset_of_gamma_1() { return static_cast<int32_t>(offsetof(LinearWheelsSettings_t3826391549, ___gamma_1)); }
	inline Color_t551127238  get_gamma_1() const { return ___gamma_1; }
	inline Color_t551127238 * get_address_of_gamma_1() { return &___gamma_1; }
	inline void set_gamma_1(Color_t551127238  value)
	{
		___gamma_1 = value;
	}

	inline static int32_t get_offset_of_gain_2() { return static_cast<int32_t>(offsetof(LinearWheelsSettings_t3826391549, ___gain_2)); }
	inline Color_t551127238  get_gain_2() const { return ___gain_2; }
	inline Color_t551127238 * get_address_of_gain_2() { return &___gain_2; }
	inline void set_gain_2(Color_t551127238  value)
	{
		___gain_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINEARWHEELSSETTINGS_T3826391549_H
#ifndef MODE_T3286153585_H
#define MODE_T3286153585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BuiltinDebugViewsModel/Mode
struct  Mode_t3286153585 
{
public:
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsModel/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t3286153585, ___value___1)); }
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
#endif // MODE_T3286153585_H
#ifndef COLORWHEELMODE_T2900649119_H
#define COLORWHEELMODE_T2900649119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel/ColorWheelMode
struct  ColorWheelMode_t2900649119 
{
public:
	// System.Int32 UnityEngine.PostProcessing.ColorGradingModel/ColorWheelMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ColorWheelMode_t2900649119, ___value___1)); }
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
#endif // COLORWHEELMODE_T2900649119_H
#ifndef FXAAPRESET_T238916625_H
#define FXAAPRESET_T238916625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AntialiasingModel/FxaaPreset
struct  FxaaPreset_t238916625 
{
public:
	// System.Int32 UnityEngine.PostProcessing.AntialiasingModel/FxaaPreset::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FxaaPreset_t238916625, ___value___1)); }
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
#endif // FXAAPRESET_T238916625_H
#ifndef METHOD_T3959463313_H
#define METHOD_T3959463313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AntialiasingModel/Method
struct  Method_t3959463313 
{
public:
	// System.Int32 UnityEngine.PostProcessing.AntialiasingModel/Method::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Method_t3959463313, ___value___1)); }
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
#endif // METHOD_T3959463313_H
#ifndef PASSINDEX_T1705766621_H
#define PASSINDEX_T1705766621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/PassIndex
struct  PassIndex_t1705766621 
{
public:
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/PassIndex::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PassIndex_t1705766621, ___value___1)); }
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
#endif // PASSINDEX_T1705766621_H
#ifndef SAMPLECOUNT_T1593072766_H
#define SAMPLECOUNT_T1593072766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AmbientOcclusionModel/SampleCount
struct  SampleCount_t1593072766 
{
public:
	// System.Int32 UnityEngine.PostProcessing.AmbientOcclusionModel/SampleCount::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SampleCount_t1593072766, ___value___1)); }
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
#endif // SAMPLECOUNT_T1593072766_H
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
#ifndef FRAMEBLENDINGFILTER_T2341498947_H
#define FRAMEBLENDINGFILTER_T2341498947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter
struct  FrameBlendingFilter_t2341498947  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::m_UseCompression
	bool ___m_UseCompression_0;
	// UnityEngine.RenderTextureFormat UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::m_RawTextureFormat
	int32_t ___m_RawTextureFormat_1;
	// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame[] UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::m_FrameList
	FrameU5BU5D_t3444182529* ___m_FrameList_2;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::m_LastFrameCount
	int32_t ___m_LastFrameCount_3;

public:
	inline static int32_t get_offset_of_m_UseCompression_0() { return static_cast<int32_t>(offsetof(FrameBlendingFilter_t2341498947, ___m_UseCompression_0)); }
	inline bool get_m_UseCompression_0() const { return ___m_UseCompression_0; }
	inline bool* get_address_of_m_UseCompression_0() { return &___m_UseCompression_0; }
	inline void set_m_UseCompression_0(bool value)
	{
		___m_UseCompression_0 = value;
	}

	inline static int32_t get_offset_of_m_RawTextureFormat_1() { return static_cast<int32_t>(offsetof(FrameBlendingFilter_t2341498947, ___m_RawTextureFormat_1)); }
	inline int32_t get_m_RawTextureFormat_1() const { return ___m_RawTextureFormat_1; }
	inline int32_t* get_address_of_m_RawTextureFormat_1() { return &___m_RawTextureFormat_1; }
	inline void set_m_RawTextureFormat_1(int32_t value)
	{
		___m_RawTextureFormat_1 = value;
	}

	inline static int32_t get_offset_of_m_FrameList_2() { return static_cast<int32_t>(offsetof(FrameBlendingFilter_t2341498947, ___m_FrameList_2)); }
	inline FrameU5BU5D_t3444182529* get_m_FrameList_2() const { return ___m_FrameList_2; }
	inline FrameU5BU5D_t3444182529** get_address_of_m_FrameList_2() { return &___m_FrameList_2; }
	inline void set_m_FrameList_2(FrameU5BU5D_t3444182529* value)
	{
		___m_FrameList_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_FrameList_2), value);
	}

	inline static int32_t get_offset_of_m_LastFrameCount_3() { return static_cast<int32_t>(offsetof(FrameBlendingFilter_t2341498947, ___m_LastFrameCount_3)); }
	inline int32_t get_m_LastFrameCount_3() const { return ___m_LastFrameCount_3; }
	inline int32_t* get_address_of_m_LastFrameCount_3() { return &___m_LastFrameCount_3; }
	inline void set_m_LastFrameCount_3(int32_t value)
	{
		___m_LastFrameCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMEBLENDINGFILTER_T2341498947_H
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
#ifndef SCREENSPACEREFLECTIONCOMPONENT_T3857583838_H
#define SCREENSPACEREFLECTIONCOMPONENT_T3857583838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ScreenSpaceReflectionComponent
struct  ScreenSpaceReflectionComponent_t3857583838  : public PostProcessingComponentCommandBuffer_1_t2415324209
{
public:
	// System.Boolean UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::k_HighlightSuppression
	bool ___k_HighlightSuppression_2;
	// System.Boolean UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::k_TraceBehindObjects
	bool ___k_TraceBehindObjects_3;
	// System.Boolean UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::k_TreatBackfaceHitAsMiss
	bool ___k_TreatBackfaceHitAsMiss_4;
	// System.Boolean UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::k_BilateralUpsample
	bool ___k_BilateralUpsample_5;
	// System.Int32[] UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::m_ReflectionTextures
	Int32U5BU5D_t2907286259* ___m_ReflectionTextures_6;

public:
	inline static int32_t get_offset_of_k_HighlightSuppression_2() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionComponent_t3857583838, ___k_HighlightSuppression_2)); }
	inline bool get_k_HighlightSuppression_2() const { return ___k_HighlightSuppression_2; }
	inline bool* get_address_of_k_HighlightSuppression_2() { return &___k_HighlightSuppression_2; }
	inline void set_k_HighlightSuppression_2(bool value)
	{
		___k_HighlightSuppression_2 = value;
	}

	inline static int32_t get_offset_of_k_TraceBehindObjects_3() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionComponent_t3857583838, ___k_TraceBehindObjects_3)); }
	inline bool get_k_TraceBehindObjects_3() const { return ___k_TraceBehindObjects_3; }
	inline bool* get_address_of_k_TraceBehindObjects_3() { return &___k_TraceBehindObjects_3; }
	inline void set_k_TraceBehindObjects_3(bool value)
	{
		___k_TraceBehindObjects_3 = value;
	}

	inline static int32_t get_offset_of_k_TreatBackfaceHitAsMiss_4() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionComponent_t3857583838, ___k_TreatBackfaceHitAsMiss_4)); }
	inline bool get_k_TreatBackfaceHitAsMiss_4() const { return ___k_TreatBackfaceHitAsMiss_4; }
	inline bool* get_address_of_k_TreatBackfaceHitAsMiss_4() { return &___k_TreatBackfaceHitAsMiss_4; }
	inline void set_k_TreatBackfaceHitAsMiss_4(bool value)
	{
		___k_TreatBackfaceHitAsMiss_4 = value;
	}

	inline static int32_t get_offset_of_k_BilateralUpsample_5() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionComponent_t3857583838, ___k_BilateralUpsample_5)); }
	inline bool get_k_BilateralUpsample_5() const { return ___k_BilateralUpsample_5; }
	inline bool* get_address_of_k_BilateralUpsample_5() { return &___k_BilateralUpsample_5; }
	inline void set_k_BilateralUpsample_5(bool value)
	{
		___k_BilateralUpsample_5 = value;
	}

	inline static int32_t get_offset_of_m_ReflectionTextures_6() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionComponent_t3857583838, ___m_ReflectionTextures_6)); }
	inline Int32U5BU5D_t2907286259* get_m_ReflectionTextures_6() const { return ___m_ReflectionTextures_6; }
	inline Int32U5BU5D_t2907286259** get_address_of_m_ReflectionTextures_6() { return &___m_ReflectionTextures_6; }
	inline void set_m_ReflectionTextures_6(Int32U5BU5D_t2907286259* value)
	{
		___m_ReflectionTextures_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_ReflectionTextures_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENSPACEREFLECTIONCOMPONENT_T3857583838_H
#ifndef RECONSTRUCTIONFILTER_T4100126196_H
#define RECONSTRUCTIONFILTER_T4100126196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.MotionBlurComponent/ReconstructionFilter
struct  ReconstructionFilter_t4100126196  : public RuntimeObject
{
public:
	// UnityEngine.RenderTextureFormat UnityEngine.PostProcessing.MotionBlurComponent/ReconstructionFilter::m_VectorRTFormat
	int32_t ___m_VectorRTFormat_0;
	// UnityEngine.RenderTextureFormat UnityEngine.PostProcessing.MotionBlurComponent/ReconstructionFilter::m_PackedRTFormat
	int32_t ___m_PackedRTFormat_1;

public:
	inline static int32_t get_offset_of_m_VectorRTFormat_0() { return static_cast<int32_t>(offsetof(ReconstructionFilter_t4100126196, ___m_VectorRTFormat_0)); }
	inline int32_t get_m_VectorRTFormat_0() const { return ___m_VectorRTFormat_0; }
	inline int32_t* get_address_of_m_VectorRTFormat_0() { return &___m_VectorRTFormat_0; }
	inline void set_m_VectorRTFormat_0(int32_t value)
	{
		___m_VectorRTFormat_0 = value;
	}

	inline static int32_t get_offset_of_m_PackedRTFormat_1() { return static_cast<int32_t>(offsetof(ReconstructionFilter_t4100126196, ___m_PackedRTFormat_1)); }
	inline int32_t get_m_PackedRTFormat_1() const { return ___m_PackedRTFormat_1; }
	inline int32_t* get_address_of_m_PackedRTFormat_1() { return &___m_PackedRTFormat_1; }
	inline void set_m_PackedRTFormat_1(int32_t value)
	{
		___m_PackedRTFormat_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECONSTRUCTIONFILTER_T4100126196_H
#ifndef BLOOMMODEL_T2841477781_H
#define BLOOMMODEL_T2841477781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BloomModel
struct  BloomModel_t2841477781  : public PostProcessingModel_t3467175713
{
public:
	// UnityEngine.PostProcessing.BloomModel/Settings UnityEngine.PostProcessing.BloomModel::m_Settings
	Settings_t811044873  ___m_Settings_1;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(BloomModel_t2841477781, ___m_Settings_1)); }
	inline Settings_t811044873  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t811044873 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t811044873  value)
	{
		___m_Settings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOOMMODEL_T2841477781_H
#ifndef SETTINGS_T3232482888_H
#define SETTINGS_T3232482888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AmbientOcclusionModel/Settings
struct  Settings_t3232482888 
{
public:
	// System.Single UnityEngine.PostProcessing.AmbientOcclusionModel/Settings::intensity
	float ___intensity_0;
	// System.Single UnityEngine.PostProcessing.AmbientOcclusionModel/Settings::radius
	float ___radius_1;
	// UnityEngine.PostProcessing.AmbientOcclusionModel/SampleCount UnityEngine.PostProcessing.AmbientOcclusionModel/Settings::sampleCount
	int32_t ___sampleCount_2;
	// System.Boolean UnityEngine.PostProcessing.AmbientOcclusionModel/Settings::downsampling
	bool ___downsampling_3;
	// System.Boolean UnityEngine.PostProcessing.AmbientOcclusionModel/Settings::forceForwardCompatibility
	bool ___forceForwardCompatibility_4;
	// System.Boolean UnityEngine.PostProcessing.AmbientOcclusionModel/Settings::ambientOnly
	bool ___ambientOnly_5;
	// System.Boolean UnityEngine.PostProcessing.AmbientOcclusionModel/Settings::highPrecision
	bool ___highPrecision_6;

public:
	inline static int32_t get_offset_of_intensity_0() { return static_cast<int32_t>(offsetof(Settings_t3232482888, ___intensity_0)); }
	inline float get_intensity_0() const { return ___intensity_0; }
	inline float* get_address_of_intensity_0() { return &___intensity_0; }
	inline void set_intensity_0(float value)
	{
		___intensity_0 = value;
	}

	inline static int32_t get_offset_of_radius_1() { return static_cast<int32_t>(offsetof(Settings_t3232482888, ___radius_1)); }
	inline float get_radius_1() const { return ___radius_1; }
	inline float* get_address_of_radius_1() { return &___radius_1; }
	inline void set_radius_1(float value)
	{
		___radius_1 = value;
	}

	inline static int32_t get_offset_of_sampleCount_2() { return static_cast<int32_t>(offsetof(Settings_t3232482888, ___sampleCount_2)); }
	inline int32_t get_sampleCount_2() const { return ___sampleCount_2; }
	inline int32_t* get_address_of_sampleCount_2() { return &___sampleCount_2; }
	inline void set_sampleCount_2(int32_t value)
	{
		___sampleCount_2 = value;
	}

	inline static int32_t get_offset_of_downsampling_3() { return static_cast<int32_t>(offsetof(Settings_t3232482888, ___downsampling_3)); }
	inline bool get_downsampling_3() const { return ___downsampling_3; }
	inline bool* get_address_of_downsampling_3() { return &___downsampling_3; }
	inline void set_downsampling_3(bool value)
	{
		___downsampling_3 = value;
	}

	inline static int32_t get_offset_of_forceForwardCompatibility_4() { return static_cast<int32_t>(offsetof(Settings_t3232482888, ___forceForwardCompatibility_4)); }
	inline bool get_forceForwardCompatibility_4() const { return ___forceForwardCompatibility_4; }
	inline bool* get_address_of_forceForwardCompatibility_4() { return &___forceForwardCompatibility_4; }
	inline void set_forceForwardCompatibility_4(bool value)
	{
		___forceForwardCompatibility_4 = value;
	}

	inline static int32_t get_offset_of_ambientOnly_5() { return static_cast<int32_t>(offsetof(Settings_t3232482888, ___ambientOnly_5)); }
	inline bool get_ambientOnly_5() const { return ___ambientOnly_5; }
	inline bool* get_address_of_ambientOnly_5() { return &___ambientOnly_5; }
	inline void set_ambientOnly_5(bool value)
	{
		___ambientOnly_5 = value;
	}

	inline static int32_t get_offset_of_highPrecision_6() { return static_cast<int32_t>(offsetof(Settings_t3232482888, ___highPrecision_6)); }
	inline bool get_highPrecision_6() const { return ___highPrecision_6; }
	inline bool* get_address_of_highPrecision_6() { return &___highPrecision_6; }
	inline void set_highPrecision_6(bool value)
	{
		___highPrecision_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.AmbientOcclusionModel/Settings
struct Settings_t3232482888_marshaled_pinvoke
{
	float ___intensity_0;
	float ___radius_1;
	int32_t ___sampleCount_2;
	int32_t ___downsampling_3;
	int32_t ___forceForwardCompatibility_4;
	int32_t ___ambientOnly_5;
	int32_t ___highPrecision_6;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.AmbientOcclusionModel/Settings
struct Settings_t3232482888_marshaled_com
{
	float ___intensity_0;
	float ___radius_1;
	int32_t ___sampleCount_2;
	int32_t ___downsampling_3;
	int32_t ___forceForwardCompatibility_4;
	int32_t ___ambientOnly_5;
	int32_t ___highPrecision_6;
};
#endif // SETTINGS_T3232482888_H
#ifndef MOTIONBLURCOMPONENT_T3404858421_H
#define MOTIONBLURCOMPONENT_T3404858421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.MotionBlurComponent
struct  MotionBlurComponent_t3404858421  : public PostProcessingComponentCommandBuffer_1_t1104411909
{
public:
	// UnityEngine.PostProcessing.MotionBlurComponent/ReconstructionFilter UnityEngine.PostProcessing.MotionBlurComponent::m_ReconstructionFilter
	ReconstructionFilter_t4100126196 * ___m_ReconstructionFilter_2;
	// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter UnityEngine.PostProcessing.MotionBlurComponent::m_FrameBlendingFilter
	FrameBlendingFilter_t2341498947 * ___m_FrameBlendingFilter_3;
	// System.Boolean UnityEngine.PostProcessing.MotionBlurComponent::m_FirstFrame
	bool ___m_FirstFrame_4;

public:
	inline static int32_t get_offset_of_m_ReconstructionFilter_2() { return static_cast<int32_t>(offsetof(MotionBlurComponent_t3404858421, ___m_ReconstructionFilter_2)); }
	inline ReconstructionFilter_t4100126196 * get_m_ReconstructionFilter_2() const { return ___m_ReconstructionFilter_2; }
	inline ReconstructionFilter_t4100126196 ** get_address_of_m_ReconstructionFilter_2() { return &___m_ReconstructionFilter_2; }
	inline void set_m_ReconstructionFilter_2(ReconstructionFilter_t4100126196 * value)
	{
		___m_ReconstructionFilter_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ReconstructionFilter_2), value);
	}

	inline static int32_t get_offset_of_m_FrameBlendingFilter_3() { return static_cast<int32_t>(offsetof(MotionBlurComponent_t3404858421, ___m_FrameBlendingFilter_3)); }
	inline FrameBlendingFilter_t2341498947 * get_m_FrameBlendingFilter_3() const { return ___m_FrameBlendingFilter_3; }
	inline FrameBlendingFilter_t2341498947 ** get_address_of_m_FrameBlendingFilter_3() { return &___m_FrameBlendingFilter_3; }
	inline void set_m_FrameBlendingFilter_3(FrameBlendingFilter_t2341498947 * value)
	{
		___m_FrameBlendingFilter_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_FrameBlendingFilter_3), value);
	}

	inline static int32_t get_offset_of_m_FirstFrame_4() { return static_cast<int32_t>(offsetof(MotionBlurComponent_t3404858421, ___m_FirstFrame_4)); }
	inline bool get_m_FirstFrame_4() const { return ___m_FirstFrame_4; }
	inline bool* get_address_of_m_FirstFrame_4() { return &___m_FirstFrame_4; }
	inline void set_m_FirstFrame_4(bool value)
	{
		___m_FirstFrame_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOTIONBLURCOMPONENT_T3404858421_H
#ifndef TAACOMPONENT_T3531240320_H
#define TAACOMPONENT_T3531240320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.TaaComponent
struct  TaaComponent_t3531240320  : public PostProcessingComponentRenderTexture_1_t2592269004
{
public:
	// UnityEngine.RenderBuffer[] UnityEngine.PostProcessing.TaaComponent::m_MRT
	RenderBufferU5BU5D_t3075786178* ___m_MRT_4;
	// System.Int32 UnityEngine.PostProcessing.TaaComponent::m_SampleIndex
	int32_t ___m_SampleIndex_5;
	// System.Boolean UnityEngine.PostProcessing.TaaComponent::m_ResetHistory
	bool ___m_ResetHistory_6;
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.TaaComponent::m_HistoryTexture
	RenderTexture_t3847872195 * ___m_HistoryTexture_7;
	// UnityEngine.Vector2 UnityEngine.PostProcessing.TaaComponent::<jitterVector>k__BackingField
	Vector2_t1675759294  ___U3CjitterVectorU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_m_MRT_4() { return static_cast<int32_t>(offsetof(TaaComponent_t3531240320, ___m_MRT_4)); }
	inline RenderBufferU5BU5D_t3075786178* get_m_MRT_4() const { return ___m_MRT_4; }
	inline RenderBufferU5BU5D_t3075786178** get_address_of_m_MRT_4() { return &___m_MRT_4; }
	inline void set_m_MRT_4(RenderBufferU5BU5D_t3075786178* value)
	{
		___m_MRT_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_MRT_4), value);
	}

	inline static int32_t get_offset_of_m_SampleIndex_5() { return static_cast<int32_t>(offsetof(TaaComponent_t3531240320, ___m_SampleIndex_5)); }
	inline int32_t get_m_SampleIndex_5() const { return ___m_SampleIndex_5; }
	inline int32_t* get_address_of_m_SampleIndex_5() { return &___m_SampleIndex_5; }
	inline void set_m_SampleIndex_5(int32_t value)
	{
		___m_SampleIndex_5 = value;
	}

	inline static int32_t get_offset_of_m_ResetHistory_6() { return static_cast<int32_t>(offsetof(TaaComponent_t3531240320, ___m_ResetHistory_6)); }
	inline bool get_m_ResetHistory_6() const { return ___m_ResetHistory_6; }
	inline bool* get_address_of_m_ResetHistory_6() { return &___m_ResetHistory_6; }
	inline void set_m_ResetHistory_6(bool value)
	{
		___m_ResetHistory_6 = value;
	}

	inline static int32_t get_offset_of_m_HistoryTexture_7() { return static_cast<int32_t>(offsetof(TaaComponent_t3531240320, ___m_HistoryTexture_7)); }
	inline RenderTexture_t3847872195 * get_m_HistoryTexture_7() const { return ___m_HistoryTexture_7; }
	inline RenderTexture_t3847872195 ** get_address_of_m_HistoryTexture_7() { return &___m_HistoryTexture_7; }
	inline void set_m_HistoryTexture_7(RenderTexture_t3847872195 * value)
	{
		___m_HistoryTexture_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_HistoryTexture_7), value);
	}

	inline static int32_t get_offset_of_U3CjitterVectorU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TaaComponent_t3531240320, ___U3CjitterVectorU3Ek__BackingField_8)); }
	inline Vector2_t1675759294  get_U3CjitterVectorU3Ek__BackingField_8() const { return ___U3CjitterVectorU3Ek__BackingField_8; }
	inline Vector2_t1675759294 * get_address_of_U3CjitterVectorU3Ek__BackingField_8() { return &___U3CjitterVectorU3Ek__BackingField_8; }
	inline void set_U3CjitterVectorU3Ek__BackingField_8(Vector2_t1675759294  value)
	{
		___U3CjitterVectorU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAACOMPONENT_T3531240320_H
#ifndef FXAASETTINGS_T4212420705_H
#define FXAASETTINGS_T4212420705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AntialiasingModel/FxaaSettings
struct  FxaaSettings_t4212420705 
{
public:
	// UnityEngine.PostProcessing.AntialiasingModel/FxaaPreset UnityEngine.PostProcessing.AntialiasingModel/FxaaSettings::preset
	int32_t ___preset_0;

public:
	inline static int32_t get_offset_of_preset_0() { return static_cast<int32_t>(offsetof(FxaaSettings_t4212420705, ___preset_0)); }
	inline int32_t get_preset_0() const { return ___preset_0; }
	inline int32_t* get_address_of_preset_0() { return &___preset_0; }
	inline void set_preset_0(int32_t value)
	{
		___preset_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FXAASETTINGS_T4212420705_H
#ifndef SETTINGS_T3659777878_H
#define SETTINGS_T3659777878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BuiltinDebugViewsModel/Settings
struct  Settings_t3659777878 
{
public:
	// UnityEngine.PostProcessing.BuiltinDebugViewsModel/Mode UnityEngine.PostProcessing.BuiltinDebugViewsModel/Settings::mode
	int32_t ___mode_0;
	// UnityEngine.PostProcessing.BuiltinDebugViewsModel/DepthSettings UnityEngine.PostProcessing.BuiltinDebugViewsModel/Settings::depth
	DepthSettings_t3502633750  ___depth_1;
	// UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings UnityEngine.PostProcessing.BuiltinDebugViewsModel/Settings::motionVectors
	MotionVectorsSettings_t2781704084  ___motionVectors_2;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(Settings_t3659777878, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of_depth_1() { return static_cast<int32_t>(offsetof(Settings_t3659777878, ___depth_1)); }
	inline DepthSettings_t3502633750  get_depth_1() const { return ___depth_1; }
	inline DepthSettings_t3502633750 * get_address_of_depth_1() { return &___depth_1; }
	inline void set_depth_1(DepthSettings_t3502633750  value)
	{
		___depth_1 = value;
	}

	inline static int32_t get_offset_of_motionVectors_2() { return static_cast<int32_t>(offsetof(Settings_t3659777878, ___motionVectors_2)); }
	inline MotionVectorsSettings_t2781704084  get_motionVectors_2() const { return ___motionVectors_2; }
	inline MotionVectorsSettings_t2781704084 * get_address_of_motionVectors_2() { return &___motionVectors_2; }
	inline void set_motionVectors_2(MotionVectorsSettings_t2781704084  value)
	{
		___motionVectors_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTINGS_T3659777878_H
#ifndef FXAACOMPONENT_T3589011797_H
#define FXAACOMPONENT_T3589011797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.FxaaComponent
struct  FxaaComponent_t3589011797  : public PostProcessingComponentRenderTexture_1_t2592269004
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FXAACOMPONENT_T3589011797_H
#ifndef BUILTINDEBUGVIEWSCOMPONENT_T3353345216_H
#define BUILTINDEBUGVIEWSCOMPONENT_T3353345216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BuiltinDebugViewsComponent
struct  BuiltinDebugViewsComponent_t3353345216  : public PostProcessingComponentCommandBuffer_1_t1697952141
{
public:
	// UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray UnityEngine.PostProcessing.BuiltinDebugViewsComponent::m_Arrows
	ArrowArray_t841951830 * ___m_Arrows_3;

public:
	inline static int32_t get_offset_of_m_Arrows_3() { return static_cast<int32_t>(offsetof(BuiltinDebugViewsComponent_t3353345216, ___m_Arrows_3)); }
	inline ArrowArray_t841951830 * get_m_Arrows_3() const { return ___m_Arrows_3; }
	inline ArrowArray_t841951830 ** get_address_of_m_Arrows_3() { return &___m_Arrows_3; }
	inline void set_m_Arrows_3(ArrowArray_t841951830 * value)
	{
		___m_Arrows_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Arrows_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILTINDEBUGVIEWSCOMPONENT_T3353345216_H
#ifndef VIGNETTECOMPONENT_T3081512063_H
#define VIGNETTECOMPONENT_T3081512063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.VignetteComponent
struct  VignetteComponent_t3081512063  : public PostProcessingComponentRenderTexture_1_t2487381581
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIGNETTECOMPONENT_T3081512063_H
#ifndef SETTINGS_T1699529798_H
#define SETTINGS_T1699529798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.EyeAdaptationModel/Settings
struct  Settings_t1699529798 
{
public:
	// System.Single UnityEngine.PostProcessing.EyeAdaptationModel/Settings::lowPercent
	float ___lowPercent_0;
	// System.Single UnityEngine.PostProcessing.EyeAdaptationModel/Settings::highPercent
	float ___highPercent_1;
	// System.Single UnityEngine.PostProcessing.EyeAdaptationModel/Settings::minLuminance
	float ___minLuminance_2;
	// System.Single UnityEngine.PostProcessing.EyeAdaptationModel/Settings::maxLuminance
	float ___maxLuminance_3;
	// System.Single UnityEngine.PostProcessing.EyeAdaptationModel/Settings::keyValue
	float ___keyValue_4;
	// System.Boolean UnityEngine.PostProcessing.EyeAdaptationModel/Settings::dynamicKeyValue
	bool ___dynamicKeyValue_5;
	// UnityEngine.PostProcessing.EyeAdaptationModel/EyeAdaptationType UnityEngine.PostProcessing.EyeAdaptationModel/Settings::adaptationType
	int32_t ___adaptationType_6;
	// System.Single UnityEngine.PostProcessing.EyeAdaptationModel/Settings::speedUp
	float ___speedUp_7;
	// System.Single UnityEngine.PostProcessing.EyeAdaptationModel/Settings::speedDown
	float ___speedDown_8;
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationModel/Settings::logMin
	int32_t ___logMin_9;
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationModel/Settings::logMax
	int32_t ___logMax_10;

public:
	inline static int32_t get_offset_of_lowPercent_0() { return static_cast<int32_t>(offsetof(Settings_t1699529798, ___lowPercent_0)); }
	inline float get_lowPercent_0() const { return ___lowPercent_0; }
	inline float* get_address_of_lowPercent_0() { return &___lowPercent_0; }
	inline void set_lowPercent_0(float value)
	{
		___lowPercent_0 = value;
	}

	inline static int32_t get_offset_of_highPercent_1() { return static_cast<int32_t>(offsetof(Settings_t1699529798, ___highPercent_1)); }
	inline float get_highPercent_1() const { return ___highPercent_1; }
	inline float* get_address_of_highPercent_1() { return &___highPercent_1; }
	inline void set_highPercent_1(float value)
	{
		___highPercent_1 = value;
	}

	inline static int32_t get_offset_of_minLuminance_2() { return static_cast<int32_t>(offsetof(Settings_t1699529798, ___minLuminance_2)); }
	inline float get_minLuminance_2() const { return ___minLuminance_2; }
	inline float* get_address_of_minLuminance_2() { return &___minLuminance_2; }
	inline void set_minLuminance_2(float value)
	{
		___minLuminance_2 = value;
	}

	inline static int32_t get_offset_of_maxLuminance_3() { return static_cast<int32_t>(offsetof(Settings_t1699529798, ___maxLuminance_3)); }
	inline float get_maxLuminance_3() const { return ___maxLuminance_3; }
	inline float* get_address_of_maxLuminance_3() { return &___maxLuminance_3; }
	inline void set_maxLuminance_3(float value)
	{
		___maxLuminance_3 = value;
	}

	inline static int32_t get_offset_of_keyValue_4() { return static_cast<int32_t>(offsetof(Settings_t1699529798, ___keyValue_4)); }
	inline float get_keyValue_4() const { return ___keyValue_4; }
	inline float* get_address_of_keyValue_4() { return &___keyValue_4; }
	inline void set_keyValue_4(float value)
	{
		___keyValue_4 = value;
	}

	inline static int32_t get_offset_of_dynamicKeyValue_5() { return static_cast<int32_t>(offsetof(Settings_t1699529798, ___dynamicKeyValue_5)); }
	inline bool get_dynamicKeyValue_5() const { return ___dynamicKeyValue_5; }
	inline bool* get_address_of_dynamicKeyValue_5() { return &___dynamicKeyValue_5; }
	inline void set_dynamicKeyValue_5(bool value)
	{
		___dynamicKeyValue_5 = value;
	}

	inline static int32_t get_offset_of_adaptationType_6() { return static_cast<int32_t>(offsetof(Settings_t1699529798, ___adaptationType_6)); }
	inline int32_t get_adaptationType_6() const { return ___adaptationType_6; }
	inline int32_t* get_address_of_adaptationType_6() { return &___adaptationType_6; }
	inline void set_adaptationType_6(int32_t value)
	{
		___adaptationType_6 = value;
	}

	inline static int32_t get_offset_of_speedUp_7() { return static_cast<int32_t>(offsetof(Settings_t1699529798, ___speedUp_7)); }
	inline float get_speedUp_7() const { return ___speedUp_7; }
	inline float* get_address_of_speedUp_7() { return &___speedUp_7; }
	inline void set_speedUp_7(float value)
	{
		___speedUp_7 = value;
	}

	inline static int32_t get_offset_of_speedDown_8() { return static_cast<int32_t>(offsetof(Settings_t1699529798, ___speedDown_8)); }
	inline float get_speedDown_8() const { return ___speedDown_8; }
	inline float* get_address_of_speedDown_8() { return &___speedDown_8; }
	inline void set_speedDown_8(float value)
	{
		___speedDown_8 = value;
	}

	inline static int32_t get_offset_of_logMin_9() { return static_cast<int32_t>(offsetof(Settings_t1699529798, ___logMin_9)); }
	inline int32_t get_logMin_9() const { return ___logMin_9; }
	inline int32_t* get_address_of_logMin_9() { return &___logMin_9; }
	inline void set_logMin_9(int32_t value)
	{
		___logMin_9 = value;
	}

	inline static int32_t get_offset_of_logMax_10() { return static_cast<int32_t>(offsetof(Settings_t1699529798, ___logMax_10)); }
	inline int32_t get_logMax_10() const { return ___logMax_10; }
	inline int32_t* get_address_of_logMax_10() { return &___logMax_10; }
	inline void set_logMax_10(int32_t value)
	{
		___logMax_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.EyeAdaptationModel/Settings
struct Settings_t1699529798_marshaled_pinvoke
{
	float ___lowPercent_0;
	float ___highPercent_1;
	float ___minLuminance_2;
	float ___maxLuminance_3;
	float ___keyValue_4;
	int32_t ___dynamicKeyValue_5;
	int32_t ___adaptationType_6;
	float ___speedUp_7;
	float ___speedDown_8;
	int32_t ___logMin_9;
	int32_t ___logMax_10;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.EyeAdaptationModel/Settings
struct Settings_t1699529798_marshaled_com
{
	float ___lowPercent_0;
	float ___highPercent_1;
	float ___minLuminance_2;
	float ___maxLuminance_3;
	float ___keyValue_4;
	int32_t ___dynamicKeyValue_5;
	int32_t ___adaptationType_6;
	float ___speedUp_7;
	float ___speedDown_8;
	int32_t ___logMin_9;
	int32_t ___logMax_10;
};
#endif // SETTINGS_T1699529798_H
#ifndef BLOOMCOMPONENT_T614650019_H
#define BLOOMCOMPONENT_T614650019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BloomComponent
struct  BloomComponent_t614650019  : public PostProcessingComponentRenderTexture_1_t4066888884
{
public:
	// UnityEngine.RenderTexture[] UnityEngine.PostProcessing.BloomComponent::m_BlurBuffer1
	RenderTextureU5BU5D_t4047959762* ___m_BlurBuffer1_3;
	// UnityEngine.RenderTexture[] UnityEngine.PostProcessing.BloomComponent::m_BlurBuffer2
	RenderTextureU5BU5D_t4047959762* ___m_BlurBuffer2_4;

public:
	inline static int32_t get_offset_of_m_BlurBuffer1_3() { return static_cast<int32_t>(offsetof(BloomComponent_t614650019, ___m_BlurBuffer1_3)); }
	inline RenderTextureU5BU5D_t4047959762* get_m_BlurBuffer1_3() const { return ___m_BlurBuffer1_3; }
	inline RenderTextureU5BU5D_t4047959762** get_address_of_m_BlurBuffer1_3() { return &___m_BlurBuffer1_3; }
	inline void set_m_BlurBuffer1_3(RenderTextureU5BU5D_t4047959762* value)
	{
		___m_BlurBuffer1_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_BlurBuffer1_3), value);
	}

	inline static int32_t get_offset_of_m_BlurBuffer2_4() { return static_cast<int32_t>(offsetof(BloomComponent_t614650019, ___m_BlurBuffer2_4)); }
	inline RenderTextureU5BU5D_t4047959762* get_m_BlurBuffer2_4() const { return ___m_BlurBuffer2_4; }
	inline RenderTextureU5BU5D_t4047959762** get_address_of_m_BlurBuffer2_4() { return &___m_BlurBuffer2_4; }
	inline void set_m_BlurBuffer2_4(RenderTextureU5BU5D_t4047959762* value)
	{
		___m_BlurBuffer2_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_BlurBuffer2_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOOMCOMPONENT_T614650019_H
#ifndef NULLABLE_1_T2019201765_H
#define NULLABLE_1_T2019201765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.LoginIdentityProvider>
struct  Nullable_1_t2019201765 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2019201765, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2019201765, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2019201765_H
#ifndef CHROMATICABERRATIONCOMPONENT_T1590231792_H
#define CHROMATICABERRATIONCOMPONENT_T1590231792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ChromaticAberrationComponent
struct  ChromaticAberrationComponent_t1590231792  : public PostProcessingComponentRenderTexture_1_t3480816978
{
public:
	// UnityEngine.Texture2D UnityEngine.PostProcessing.ChromaticAberrationComponent::m_SpectrumLut
	Texture2D_t1318399882 * ___m_SpectrumLut_2;

public:
	inline static int32_t get_offset_of_m_SpectrumLut_2() { return static_cast<int32_t>(offsetof(ChromaticAberrationComponent_t1590231792, ___m_SpectrumLut_2)); }
	inline Texture2D_t1318399882 * get_m_SpectrumLut_2() const { return ___m_SpectrumLut_2; }
	inline Texture2D_t1318399882 ** get_address_of_m_SpectrumLut_2() { return &___m_SpectrumLut_2; }
	inline void set_m_SpectrumLut_2(Texture2D_t1318399882 * value)
	{
		___m_SpectrumLut_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SpectrumLut_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHROMATICABERRATIONCOMPONENT_T1590231792_H
#ifndef AMBIENTOCCLUSIONCOMPONENT_T792492015_H
#define AMBIENTOCCLUSIONCOMPONENT_T792492015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AmbientOcclusionComponent
struct  AmbientOcclusionComponent_t792492015  : public PostProcessingComponentCommandBuffer_1_t2384518223
{
public:
	// UnityEngine.Rendering.RenderTargetIdentifier[] UnityEngine.PostProcessing.AmbientOcclusionComponent::m_MRT
	RenderTargetIdentifierU5BU5D_t564583008* ___m_MRT_4;

public:
	inline static int32_t get_offset_of_m_MRT_4() { return static_cast<int32_t>(offsetof(AmbientOcclusionComponent_t792492015, ___m_MRT_4)); }
	inline RenderTargetIdentifierU5BU5D_t564583008* get_m_MRT_4() const { return ___m_MRT_4; }
	inline RenderTargetIdentifierU5BU5D_t564583008** get_address_of_m_MRT_4() { return &___m_MRT_4; }
	inline void set_m_MRT_4(RenderTargetIdentifierU5BU5D_t564583008* value)
	{
		___m_MRT_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_MRT_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AMBIENTOCCLUSIONCOMPONENT_T792492015_H
#ifndef COLORGRADINGCOMPONENT_T2002653710_H
#define COLORGRADINGCOMPONENT_T2002653710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingComponent
struct  ColorGradingComponent_t2002653710  : public PostProcessingComponentRenderTexture_1_t3705659605
{
public:
	// UnityEngine.Texture2D UnityEngine.PostProcessing.ColorGradingComponent::m_GradingCurves
	Texture2D_t1318399882 * ___m_GradingCurves_5;
	// UnityEngine.Color[] UnityEngine.PostProcessing.ColorGradingComponent::m_pixels
	ColorU5BU5D_t4227943779* ___m_pixels_6;

public:
	inline static int32_t get_offset_of_m_GradingCurves_5() { return static_cast<int32_t>(offsetof(ColorGradingComponent_t2002653710, ___m_GradingCurves_5)); }
	inline Texture2D_t1318399882 * get_m_GradingCurves_5() const { return ___m_GradingCurves_5; }
	inline Texture2D_t1318399882 ** get_address_of_m_GradingCurves_5() { return &___m_GradingCurves_5; }
	inline void set_m_GradingCurves_5(Texture2D_t1318399882 * value)
	{
		___m_GradingCurves_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_GradingCurves_5), value);
	}

	inline static int32_t get_offset_of_m_pixels_6() { return static_cast<int32_t>(offsetof(ColorGradingComponent_t2002653710, ___m_pixels_6)); }
	inline ColorU5BU5D_t4227943779* get_m_pixels_6() const { return ___m_pixels_6; }
	inline ColorU5BU5D_t4227943779** get_address_of_m_pixels_6() { return &___m_pixels_6; }
	inline void set_m_pixels_6(ColorU5BU5D_t4227943779* value)
	{
		___m_pixels_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_pixels_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORGRADINGCOMPONENT_T2002653710_H
#ifndef DEPTHOFFIELDCOMPONENT_T467343392_H
#define DEPTHOFFIELDCOMPONENT_T467343392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.DepthOfFieldComponent
struct  DepthOfFieldComponent_t467343392  : public PostProcessingComponentRenderTexture_1_t4087472876
{
public:
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.DepthOfFieldComponent::m_CoCHistory
	RenderTexture_t3847872195 * ___m_CoCHistory_3;

public:
	inline static int32_t get_offset_of_m_CoCHistory_3() { return static_cast<int32_t>(offsetof(DepthOfFieldComponent_t467343392, ___m_CoCHistory_3)); }
	inline RenderTexture_t3847872195 * get_m_CoCHistory_3() const { return ___m_CoCHistory_3; }
	inline RenderTexture_t3847872195 ** get_address_of_m_CoCHistory_3() { return &___m_CoCHistory_3; }
	inline void set_m_CoCHistory_3(RenderTexture_t3847872195 * value)
	{
		___m_CoCHistory_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CoCHistory_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEPTHOFFIELDCOMPONENT_T467343392_H
#ifndef COLORWHEELSSETTINGS_T3446908827_H
#define COLORWHEELSSETTINGS_T3446908827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel/ColorWheelsSettings
struct  ColorWheelsSettings_t3446908827 
{
public:
	// UnityEngine.PostProcessing.ColorGradingModel/ColorWheelMode UnityEngine.PostProcessing.ColorGradingModel/ColorWheelsSettings::mode
	int32_t ___mode_0;
	// UnityEngine.PostProcessing.ColorGradingModel/LogWheelsSettings UnityEngine.PostProcessing.ColorGradingModel/ColorWheelsSettings::log
	LogWheelsSettings_t2859358507  ___log_1;
	// UnityEngine.PostProcessing.ColorGradingModel/LinearWheelsSettings UnityEngine.PostProcessing.ColorGradingModel/ColorWheelsSettings::linear
	LinearWheelsSettings_t3826391549  ___linear_2;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(ColorWheelsSettings_t3446908827, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of_log_1() { return static_cast<int32_t>(offsetof(ColorWheelsSettings_t3446908827, ___log_1)); }
	inline LogWheelsSettings_t2859358507  get_log_1() const { return ___log_1; }
	inline LogWheelsSettings_t2859358507 * get_address_of_log_1() { return &___log_1; }
	inline void set_log_1(LogWheelsSettings_t2859358507  value)
	{
		___log_1 = value;
	}

	inline static int32_t get_offset_of_linear_2() { return static_cast<int32_t>(offsetof(ColorWheelsSettings_t3446908827, ___linear_2)); }
	inline LinearWheelsSettings_t3826391549  get_linear_2() const { return ___linear_2; }
	inline LinearWheelsSettings_t3826391549 * get_address_of_linear_2() { return &___linear_2; }
	inline void set_linear_2(LinearWheelsSettings_t3826391549  value)
	{
		___linear_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORWHEELSSETTINGS_T3446908827_H
#ifndef DITHERINGCOMPONENT_T958027570_H
#define DITHERINGCOMPONENT_T958027570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.DitheringComponent
struct  DitheringComponent_t958027570  : public PostProcessingComponentRenderTexture_1_t3261487178
{
public:
	// UnityEngine.Texture2D[] UnityEngine.PostProcessing.DitheringComponent::noiseTextures
	Texture2DU5BU5D_t645463823* ___noiseTextures_2;
	// System.Int32 UnityEngine.PostProcessing.DitheringComponent::textureIndex
	int32_t ___textureIndex_3;

public:
	inline static int32_t get_offset_of_noiseTextures_2() { return static_cast<int32_t>(offsetof(DitheringComponent_t958027570, ___noiseTextures_2)); }
	inline Texture2DU5BU5D_t645463823* get_noiseTextures_2() const { return ___noiseTextures_2; }
	inline Texture2DU5BU5D_t645463823** get_address_of_noiseTextures_2() { return &___noiseTextures_2; }
	inline void set_noiseTextures_2(Texture2DU5BU5D_t645463823* value)
	{
		___noiseTextures_2 = value;
		Il2CppCodeGenWriteBarrier((&___noiseTextures_2), value);
	}

	inline static int32_t get_offset_of_textureIndex_3() { return static_cast<int32_t>(offsetof(DitheringComponent_t958027570, ___textureIndex_3)); }
	inline int32_t get_textureIndex_3() const { return ___textureIndex_3; }
	inline int32_t* get_address_of_textureIndex_3() { return &___textureIndex_3; }
	inline void set_textureIndex_3(int32_t value)
	{
		___textureIndex_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DITHERINGCOMPONENT_T958027570_H
#ifndef TONEMAPPINGSETTINGS_T2586672451_H
#define TONEMAPPINGSETTINGS_T2586672451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings
struct  TonemappingSettings_t2586672451 
{
public:
	// UnityEngine.PostProcessing.ColorGradingModel/Tonemapper UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings::tonemapper
	int32_t ___tonemapper_0;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings::neutralBlackIn
	float ___neutralBlackIn_1;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings::neutralWhiteIn
	float ___neutralWhiteIn_2;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings::neutralBlackOut
	float ___neutralBlackOut_3;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings::neutralWhiteOut
	float ___neutralWhiteOut_4;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings::neutralWhiteLevel
	float ___neutralWhiteLevel_5;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings::neutralWhiteClip
	float ___neutralWhiteClip_6;

public:
	inline static int32_t get_offset_of_tonemapper_0() { return static_cast<int32_t>(offsetof(TonemappingSettings_t2586672451, ___tonemapper_0)); }
	inline int32_t get_tonemapper_0() const { return ___tonemapper_0; }
	inline int32_t* get_address_of_tonemapper_0() { return &___tonemapper_0; }
	inline void set_tonemapper_0(int32_t value)
	{
		___tonemapper_0 = value;
	}

	inline static int32_t get_offset_of_neutralBlackIn_1() { return static_cast<int32_t>(offsetof(TonemappingSettings_t2586672451, ___neutralBlackIn_1)); }
	inline float get_neutralBlackIn_1() const { return ___neutralBlackIn_1; }
	inline float* get_address_of_neutralBlackIn_1() { return &___neutralBlackIn_1; }
	inline void set_neutralBlackIn_1(float value)
	{
		___neutralBlackIn_1 = value;
	}

	inline static int32_t get_offset_of_neutralWhiteIn_2() { return static_cast<int32_t>(offsetof(TonemappingSettings_t2586672451, ___neutralWhiteIn_2)); }
	inline float get_neutralWhiteIn_2() const { return ___neutralWhiteIn_2; }
	inline float* get_address_of_neutralWhiteIn_2() { return &___neutralWhiteIn_2; }
	inline void set_neutralWhiteIn_2(float value)
	{
		___neutralWhiteIn_2 = value;
	}

	inline static int32_t get_offset_of_neutralBlackOut_3() { return static_cast<int32_t>(offsetof(TonemappingSettings_t2586672451, ___neutralBlackOut_3)); }
	inline float get_neutralBlackOut_3() const { return ___neutralBlackOut_3; }
	inline float* get_address_of_neutralBlackOut_3() { return &___neutralBlackOut_3; }
	inline void set_neutralBlackOut_3(float value)
	{
		___neutralBlackOut_3 = value;
	}

	inline static int32_t get_offset_of_neutralWhiteOut_4() { return static_cast<int32_t>(offsetof(TonemappingSettings_t2586672451, ___neutralWhiteOut_4)); }
	inline float get_neutralWhiteOut_4() const { return ___neutralWhiteOut_4; }
	inline float* get_address_of_neutralWhiteOut_4() { return &___neutralWhiteOut_4; }
	inline void set_neutralWhiteOut_4(float value)
	{
		___neutralWhiteOut_4 = value;
	}

	inline static int32_t get_offset_of_neutralWhiteLevel_5() { return static_cast<int32_t>(offsetof(TonemappingSettings_t2586672451, ___neutralWhiteLevel_5)); }
	inline float get_neutralWhiteLevel_5() const { return ___neutralWhiteLevel_5; }
	inline float* get_address_of_neutralWhiteLevel_5() { return &___neutralWhiteLevel_5; }
	inline void set_neutralWhiteLevel_5(float value)
	{
		___neutralWhiteLevel_5 = value;
	}

	inline static int32_t get_offset_of_neutralWhiteClip_6() { return static_cast<int32_t>(offsetof(TonemappingSettings_t2586672451, ___neutralWhiteClip_6)); }
	inline float get_neutralWhiteClip_6() const { return ___neutralWhiteClip_6; }
	inline float* get_address_of_neutralWhiteClip_6() { return &___neutralWhiteClip_6; }
	inline void set_neutralWhiteClip_6(float value)
	{
		___neutralWhiteClip_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TONEMAPPINGSETTINGS_T2586672451_H
#ifndef EYEADAPTATIONCOMPONENT_T3593042715_H
#define EYEADAPTATIONCOMPONENT_T3593042715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.EyeAdaptationComponent
struct  EyeAdaptationComponent_t3593042715  : public PostProcessingComponentRenderTexture_1_t368836060
{
public:
	// UnityEngine.ComputeShader UnityEngine.PostProcessing.EyeAdaptationComponent::m_EyeCompute
	ComputeShader_t2206249425 * ___m_EyeCompute_2;
	// UnityEngine.ComputeBuffer UnityEngine.PostProcessing.EyeAdaptationComponent::m_HistogramBuffer
	ComputeBuffer_t4211178230 * ___m_HistogramBuffer_3;
	// UnityEngine.RenderTexture[] UnityEngine.PostProcessing.EyeAdaptationComponent::m_AutoExposurePool
	RenderTextureU5BU5D_t4047959762* ___m_AutoExposurePool_4;
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationComponent::m_AutoExposurePingPing
	int32_t ___m_AutoExposurePingPing_5;
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.EyeAdaptationComponent::m_CurrentAutoExposure
	RenderTexture_t3847872195 * ___m_CurrentAutoExposure_6;
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.EyeAdaptationComponent::m_DebugHistogram
	RenderTexture_t3847872195 * ___m_DebugHistogram_7;
	// System.Boolean UnityEngine.PostProcessing.EyeAdaptationComponent::m_FirstFrame
	bool ___m_FirstFrame_9;

public:
	inline static int32_t get_offset_of_m_EyeCompute_2() { return static_cast<int32_t>(offsetof(EyeAdaptationComponent_t3593042715, ___m_EyeCompute_2)); }
	inline ComputeShader_t2206249425 * get_m_EyeCompute_2() const { return ___m_EyeCompute_2; }
	inline ComputeShader_t2206249425 ** get_address_of_m_EyeCompute_2() { return &___m_EyeCompute_2; }
	inline void set_m_EyeCompute_2(ComputeShader_t2206249425 * value)
	{
		___m_EyeCompute_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_EyeCompute_2), value);
	}

	inline static int32_t get_offset_of_m_HistogramBuffer_3() { return static_cast<int32_t>(offsetof(EyeAdaptationComponent_t3593042715, ___m_HistogramBuffer_3)); }
	inline ComputeBuffer_t4211178230 * get_m_HistogramBuffer_3() const { return ___m_HistogramBuffer_3; }
	inline ComputeBuffer_t4211178230 ** get_address_of_m_HistogramBuffer_3() { return &___m_HistogramBuffer_3; }
	inline void set_m_HistogramBuffer_3(ComputeBuffer_t4211178230 * value)
	{
		___m_HistogramBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_HistogramBuffer_3), value);
	}

	inline static int32_t get_offset_of_m_AutoExposurePool_4() { return static_cast<int32_t>(offsetof(EyeAdaptationComponent_t3593042715, ___m_AutoExposurePool_4)); }
	inline RenderTextureU5BU5D_t4047959762* get_m_AutoExposurePool_4() const { return ___m_AutoExposurePool_4; }
	inline RenderTextureU5BU5D_t4047959762** get_address_of_m_AutoExposurePool_4() { return &___m_AutoExposurePool_4; }
	inline void set_m_AutoExposurePool_4(RenderTextureU5BU5D_t4047959762* value)
	{
		___m_AutoExposurePool_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_AutoExposurePool_4), value);
	}

	inline static int32_t get_offset_of_m_AutoExposurePingPing_5() { return static_cast<int32_t>(offsetof(EyeAdaptationComponent_t3593042715, ___m_AutoExposurePingPing_5)); }
	inline int32_t get_m_AutoExposurePingPing_5() const { return ___m_AutoExposurePingPing_5; }
	inline int32_t* get_address_of_m_AutoExposurePingPing_5() { return &___m_AutoExposurePingPing_5; }
	inline void set_m_AutoExposurePingPing_5(int32_t value)
	{
		___m_AutoExposurePingPing_5 = value;
	}

	inline static int32_t get_offset_of_m_CurrentAutoExposure_6() { return static_cast<int32_t>(offsetof(EyeAdaptationComponent_t3593042715, ___m_CurrentAutoExposure_6)); }
	inline RenderTexture_t3847872195 * get_m_CurrentAutoExposure_6() const { return ___m_CurrentAutoExposure_6; }
	inline RenderTexture_t3847872195 ** get_address_of_m_CurrentAutoExposure_6() { return &___m_CurrentAutoExposure_6; }
	inline void set_m_CurrentAutoExposure_6(RenderTexture_t3847872195 * value)
	{
		___m_CurrentAutoExposure_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentAutoExposure_6), value);
	}

	inline static int32_t get_offset_of_m_DebugHistogram_7() { return static_cast<int32_t>(offsetof(EyeAdaptationComponent_t3593042715, ___m_DebugHistogram_7)); }
	inline RenderTexture_t3847872195 * get_m_DebugHistogram_7() const { return ___m_DebugHistogram_7; }
	inline RenderTexture_t3847872195 ** get_address_of_m_DebugHistogram_7() { return &___m_DebugHistogram_7; }
	inline void set_m_DebugHistogram_7(RenderTexture_t3847872195 * value)
	{
		___m_DebugHistogram_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_DebugHistogram_7), value);
	}

	inline static int32_t get_offset_of_m_FirstFrame_9() { return static_cast<int32_t>(offsetof(EyeAdaptationComponent_t3593042715, ___m_FirstFrame_9)); }
	inline bool get_m_FirstFrame_9() const { return ___m_FirstFrame_9; }
	inline bool* get_address_of_m_FirstFrame_9() { return &___m_FirstFrame_9; }
	inline void set_m_FirstFrame_9(bool value)
	{
		___m_FirstFrame_9 = value;
	}
};

struct EyeAdaptationComponent_t3593042715_StaticFields
{
public:
	// System.UInt32[] UnityEngine.PostProcessing.EyeAdaptationComponent::s_EmptyHistogramBuffer
	UInt32U5BU5D_t155030608* ___s_EmptyHistogramBuffer_8;

public:
	inline static int32_t get_offset_of_s_EmptyHistogramBuffer_8() { return static_cast<int32_t>(offsetof(EyeAdaptationComponent_t3593042715_StaticFields, ___s_EmptyHistogramBuffer_8)); }
	inline UInt32U5BU5D_t155030608* get_s_EmptyHistogramBuffer_8() const { return ___s_EmptyHistogramBuffer_8; }
	inline UInt32U5BU5D_t155030608** get_address_of_s_EmptyHistogramBuffer_8() { return &___s_EmptyHistogramBuffer_8; }
	inline void set_s_EmptyHistogramBuffer_8(UInt32U5BU5D_t155030608* value)
	{
		___s_EmptyHistogramBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((&___s_EmptyHistogramBuffer_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EYEADAPTATIONCOMPONENT_T3593042715_H
#ifndef FOGCOMPONENT_T3527720738_H
#define FOGCOMPONENT_T3527720738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.FogComponent
struct  FogComponent_t3527720738  : public PostProcessingComponentCommandBuffer_1_t1815152664
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOGCOMPONENT_T3527720738_H
#ifndef SETTINGS_T2371698414_H
#define SETTINGS_T2371698414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.DepthOfFieldModel/Settings
struct  Settings_t2371698414 
{
public:
	// System.Single UnityEngine.PostProcessing.DepthOfFieldModel/Settings::focusDistance
	float ___focusDistance_0;
	// System.Single UnityEngine.PostProcessing.DepthOfFieldModel/Settings::aperture
	float ___aperture_1;
	// System.Single UnityEngine.PostProcessing.DepthOfFieldModel/Settings::focalLength
	float ___focalLength_2;
	// System.Boolean UnityEngine.PostProcessing.DepthOfFieldModel/Settings::useCameraFov
	bool ___useCameraFov_3;
	// UnityEngine.PostProcessing.DepthOfFieldModel/KernelSize UnityEngine.PostProcessing.DepthOfFieldModel/Settings::kernelSize
	int32_t ___kernelSize_4;

public:
	inline static int32_t get_offset_of_focusDistance_0() { return static_cast<int32_t>(offsetof(Settings_t2371698414, ___focusDistance_0)); }
	inline float get_focusDistance_0() const { return ___focusDistance_0; }
	inline float* get_address_of_focusDistance_0() { return &___focusDistance_0; }
	inline void set_focusDistance_0(float value)
	{
		___focusDistance_0 = value;
	}

	inline static int32_t get_offset_of_aperture_1() { return static_cast<int32_t>(offsetof(Settings_t2371698414, ___aperture_1)); }
	inline float get_aperture_1() const { return ___aperture_1; }
	inline float* get_address_of_aperture_1() { return &___aperture_1; }
	inline void set_aperture_1(float value)
	{
		___aperture_1 = value;
	}

	inline static int32_t get_offset_of_focalLength_2() { return static_cast<int32_t>(offsetof(Settings_t2371698414, ___focalLength_2)); }
	inline float get_focalLength_2() const { return ___focalLength_2; }
	inline float* get_address_of_focalLength_2() { return &___focalLength_2; }
	inline void set_focalLength_2(float value)
	{
		___focalLength_2 = value;
	}

	inline static int32_t get_offset_of_useCameraFov_3() { return static_cast<int32_t>(offsetof(Settings_t2371698414, ___useCameraFov_3)); }
	inline bool get_useCameraFov_3() const { return ___useCameraFov_3; }
	inline bool* get_address_of_useCameraFov_3() { return &___useCameraFov_3; }
	inline void set_useCameraFov_3(bool value)
	{
		___useCameraFov_3 = value;
	}

	inline static int32_t get_offset_of_kernelSize_4() { return static_cast<int32_t>(offsetof(Settings_t2371698414, ___kernelSize_4)); }
	inline int32_t get_kernelSize_4() const { return ___kernelSize_4; }
	inline int32_t* get_address_of_kernelSize_4() { return &___kernelSize_4; }
	inline void set_kernelSize_4(int32_t value)
	{
		___kernelSize_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.DepthOfFieldModel/Settings
struct Settings_t2371698414_marshaled_pinvoke
{
	float ___focusDistance_0;
	float ___aperture_1;
	float ___focalLength_2;
	int32_t ___useCameraFov_3;
	int32_t ___kernelSize_4;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.DepthOfFieldModel/Settings
struct Settings_t2371698414_marshaled_com
{
	float ___focusDistance_0;
	float ___aperture_1;
	float ___focalLength_2;
	int32_t ___useCameraFov_3;
	int32_t ___kernelSize_4;
};
#endif // SETTINGS_T2371698414_H
#ifndef GRAINCOMPONENT_T3665544680_H
#define GRAINCOMPONENT_T3665544680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.GrainComponent
struct  GrainComponent_t3665544680  : public PostProcessingComponentRenderTexture_1_t1472622879
{
public:
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.GrainComponent::m_GrainLookupRT
	RenderTexture_t3847872195 * ___m_GrainLookupRT_2;

public:
	inline static int32_t get_offset_of_m_GrainLookupRT_2() { return static_cast<int32_t>(offsetof(GrainComponent_t3665544680, ___m_GrainLookupRT_2)); }
	inline RenderTexture_t3847872195 * get_m_GrainLookupRT_2() const { return ___m_GrainLookupRT_2; }
	inline RenderTexture_t3847872195 ** get_address_of_m_GrainLookupRT_2() { return &___m_GrainLookupRT_2; }
	inline void set_m_GrainLookupRT_2(RenderTexture_t3847872195 * value)
	{
		___m_GrainLookupRT_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_GrainLookupRT_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAINCOMPONENT_T3665544680_H
#ifndef USERLUTCOMPONENT_T942528204_H
#define USERLUTCOMPONENT_T942528204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.UserLutComponent
struct  UserLutComponent_t942528204  : public PostProcessingComponentRenderTexture_1_t2887277255
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERLUTCOMPONENT_T942528204_H
#ifndef BUILTINDEBUGVIEWSMODEL_T861247509_H
#define BUILTINDEBUGVIEWSMODEL_T861247509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BuiltinDebugViewsModel
struct  BuiltinDebugViewsModel_t861247509  : public PostProcessingModel_t3467175713
{
public:
	// UnityEngine.PostProcessing.BuiltinDebugViewsModel/Settings UnityEngine.PostProcessing.BuiltinDebugViewsModel::m_Settings
	Settings_t3659777878  ___m_Settings_1;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(BuiltinDebugViewsModel_t861247509, ___m_Settings_1)); }
	inline Settings_t3659777878  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t3659777878 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t3659777878  value)
	{
		___m_Settings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILTINDEBUGVIEWSMODEL_T861247509_H
#ifndef EYEADAPTATIONMODEL_T3438392253_H
#define EYEADAPTATIONMODEL_T3438392253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.EyeAdaptationModel
struct  EyeAdaptationModel_t3438392253  : public PostProcessingModel_t3467175713
{
public:
	// UnityEngine.PostProcessing.EyeAdaptationModel/Settings UnityEngine.PostProcessing.EyeAdaptationModel::m_Settings
	Settings_t1699529798  ___m_Settings_1;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(EyeAdaptationModel_t3438392253, ___m_Settings_1)); }
	inline Settings_t1699529798  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t1699529798 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t1699529798  value)
	{
		___m_Settings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EYEADAPTATIONMODEL_T3438392253_H
#ifndef DEPTHOFFIELDMODEL_T2862061773_H
#define DEPTHOFFIELDMODEL_T2862061773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.DepthOfFieldModel
struct  DepthOfFieldModel_t2862061773  : public PostProcessingModel_t3467175713
{
public:
	// UnityEngine.PostProcessing.DepthOfFieldModel/Settings UnityEngine.PostProcessing.DepthOfFieldModel::m_Settings
	Settings_t2371698414  ___m_Settings_1;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(DepthOfFieldModel_t2862061773, ___m_Settings_1)); }
	inline Settings_t2371698414  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t2371698414 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t2371698414  value)
	{
		___m_Settings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEPTHOFFIELDMODEL_T2862061773_H
#ifndef SETTINGS_T1847667170_H
#define SETTINGS_T1847667170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel/Settings
struct  Settings_t1847667170 
{
public:
	// UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings UnityEngine.PostProcessing.ColorGradingModel/Settings::tonemapping
	TonemappingSettings_t2586672451  ___tonemapping_0;
	// UnityEngine.PostProcessing.ColorGradingModel/BasicSettings UnityEngine.PostProcessing.ColorGradingModel/Settings::basic
	BasicSettings_t501872943  ___basic_1;
	// UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings UnityEngine.PostProcessing.ColorGradingModel/Settings::channelMixer
	ChannelMixerSettings_t2252873405  ___channelMixer_2;
	// UnityEngine.PostProcessing.ColorGradingModel/ColorWheelsSettings UnityEngine.PostProcessing.ColorGradingModel/Settings::colorWheels
	ColorWheelsSettings_t3446908827  ___colorWheels_3;
	// UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings UnityEngine.PostProcessing.ColorGradingModel/Settings::curves
	CurvesSettings_t3938874345  ___curves_4;

public:
	inline static int32_t get_offset_of_tonemapping_0() { return static_cast<int32_t>(offsetof(Settings_t1847667170, ___tonemapping_0)); }
	inline TonemappingSettings_t2586672451  get_tonemapping_0() const { return ___tonemapping_0; }
	inline TonemappingSettings_t2586672451 * get_address_of_tonemapping_0() { return &___tonemapping_0; }
	inline void set_tonemapping_0(TonemappingSettings_t2586672451  value)
	{
		___tonemapping_0 = value;
	}

	inline static int32_t get_offset_of_basic_1() { return static_cast<int32_t>(offsetof(Settings_t1847667170, ___basic_1)); }
	inline BasicSettings_t501872943  get_basic_1() const { return ___basic_1; }
	inline BasicSettings_t501872943 * get_address_of_basic_1() { return &___basic_1; }
	inline void set_basic_1(BasicSettings_t501872943  value)
	{
		___basic_1 = value;
	}

	inline static int32_t get_offset_of_channelMixer_2() { return static_cast<int32_t>(offsetof(Settings_t1847667170, ___channelMixer_2)); }
	inline ChannelMixerSettings_t2252873405  get_channelMixer_2() const { return ___channelMixer_2; }
	inline ChannelMixerSettings_t2252873405 * get_address_of_channelMixer_2() { return &___channelMixer_2; }
	inline void set_channelMixer_2(ChannelMixerSettings_t2252873405  value)
	{
		___channelMixer_2 = value;
	}

	inline static int32_t get_offset_of_colorWheels_3() { return static_cast<int32_t>(offsetof(Settings_t1847667170, ___colorWheels_3)); }
	inline ColorWheelsSettings_t3446908827  get_colorWheels_3() const { return ___colorWheels_3; }
	inline ColorWheelsSettings_t3446908827 * get_address_of_colorWheels_3() { return &___colorWheels_3; }
	inline void set_colorWheels_3(ColorWheelsSettings_t3446908827  value)
	{
		___colorWheels_3 = value;
	}

	inline static int32_t get_offset_of_curves_4() { return static_cast<int32_t>(offsetof(Settings_t1847667170, ___curves_4)); }
	inline CurvesSettings_t3938874345  get_curves_4() const { return ___curves_4; }
	inline CurvesSettings_t3938874345 * get_address_of_curves_4() { return &___curves_4; }
	inline void set_curves_4(CurvesSettings_t3938874345  value)
	{
		___curves_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.ColorGradingModel/Settings
struct Settings_t1847667170_marshaled_pinvoke
{
	TonemappingSettings_t2586672451  ___tonemapping_0;
	BasicSettings_t501872943  ___basic_1;
	ChannelMixerSettings_t2252873405  ___channelMixer_2;
	ColorWheelsSettings_t3446908827  ___colorWheels_3;
	CurvesSettings_t3938874345_marshaled_pinvoke ___curves_4;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.ColorGradingModel/Settings
struct Settings_t1847667170_marshaled_com
{
	TonemappingSettings_t2586672451  ___tonemapping_0;
	BasicSettings_t501872943  ___basic_1;
	ChannelMixerSettings_t2252873405  ___channelMixer_2;
	ColorWheelsSettings_t3446908827  ___colorWheels_3;
	CurvesSettings_t3938874345_marshaled_com ___curves_4;
};
#endif // SETTINGS_T1847667170_H
#ifndef SETTINGS_T2429616275_H
#define SETTINGS_T2429616275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AntialiasingModel/Settings
struct  Settings_t2429616275 
{
public:
	// UnityEngine.PostProcessing.AntialiasingModel/Method UnityEngine.PostProcessing.AntialiasingModel/Settings::method
	int32_t ___method_0;
	// UnityEngine.PostProcessing.AntialiasingModel/FxaaSettings UnityEngine.PostProcessing.AntialiasingModel/Settings::fxaaSettings
	FxaaSettings_t4212420705  ___fxaaSettings_1;
	// UnityEngine.PostProcessing.AntialiasingModel/TaaSettings UnityEngine.PostProcessing.AntialiasingModel/Settings::taaSettings
	TaaSettings_t4134617129  ___taaSettings_2;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(Settings_t2429616275, ___method_0)); }
	inline int32_t get_method_0() const { return ___method_0; }
	inline int32_t* get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(int32_t value)
	{
		___method_0 = value;
	}

	inline static int32_t get_offset_of_fxaaSettings_1() { return static_cast<int32_t>(offsetof(Settings_t2429616275, ___fxaaSettings_1)); }
	inline FxaaSettings_t4212420705  get_fxaaSettings_1() const { return ___fxaaSettings_1; }
	inline FxaaSettings_t4212420705 * get_address_of_fxaaSettings_1() { return &___fxaaSettings_1; }
	inline void set_fxaaSettings_1(FxaaSettings_t4212420705  value)
	{
		___fxaaSettings_1 = value;
	}

	inline static int32_t get_offset_of_taaSettings_2() { return static_cast<int32_t>(offsetof(Settings_t2429616275, ___taaSettings_2)); }
	inline TaaSettings_t4134617129  get_taaSettings_2() const { return ___taaSettings_2; }
	inline TaaSettings_t4134617129 * get_address_of_taaSettings_2() { return &___taaSettings_2; }
	inline void set_taaSettings_2(TaaSettings_t4134617129  value)
	{
		___taaSettings_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTINGS_T2429616275_H
#ifndef AMBIENTOCCLUSIONMODEL_T1547813591_H
#define AMBIENTOCCLUSIONMODEL_T1547813591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AmbientOcclusionModel
struct  AmbientOcclusionModel_t1547813591  : public PostProcessingModel_t3467175713
{
public:
	// UnityEngine.PostProcessing.AmbientOcclusionModel/Settings UnityEngine.PostProcessing.AmbientOcclusionModel::m_Settings
	Settings_t3232482888  ___m_Settings_1;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(AmbientOcclusionModel_t1547813591, ___m_Settings_1)); }
	inline Settings_t3232482888  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t3232482888 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t3232482888  value)
	{
		___m_Settings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AMBIENTOCCLUSIONMODEL_T1547813591_H
#ifndef NULLABLE_1_T4223474148_H
#define NULLABLE_1_T4223474148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.DateTime>
struct  Nullable_1_t4223474148 
{
public:
	// T System.Nullable`1::value
	DateTime_t1281661550  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t4223474148, ___value_0)); }
	inline DateTime_t1281661550  get_value_0() const { return ___value_0; }
	inline DateTime_t1281661550 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_t1281661550  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t4223474148, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T4223474148_H
#ifndef COLORGRADINGMODEL_T2480248502_H
#define COLORGRADINGMODEL_T2480248502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel
struct  ColorGradingModel_t2480248502  : public PostProcessingModel_t3467175713
{
public:
	// UnityEngine.PostProcessing.ColorGradingModel/Settings UnityEngine.PostProcessing.ColorGradingModel::m_Settings
	Settings_t1847667170  ___m_Settings_1;
	// System.Boolean UnityEngine.PostProcessing.ColorGradingModel::<isDirty>k__BackingField
	bool ___U3CisDirtyU3Ek__BackingField_2;
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.ColorGradingModel::<bakedLut>k__BackingField
	RenderTexture_t3847872195 * ___U3CbakedLutU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(ColorGradingModel_t2480248502, ___m_Settings_1)); }
	inline Settings_t1847667170  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t1847667170 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t1847667170  value)
	{
		___m_Settings_1 = value;
	}

	inline static int32_t get_offset_of_U3CisDirtyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ColorGradingModel_t2480248502, ___U3CisDirtyU3Ek__BackingField_2)); }
	inline bool get_U3CisDirtyU3Ek__BackingField_2() const { return ___U3CisDirtyU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CisDirtyU3Ek__BackingField_2() { return &___U3CisDirtyU3Ek__BackingField_2; }
	inline void set_U3CisDirtyU3Ek__BackingField_2(bool value)
	{
		___U3CisDirtyU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CbakedLutU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ColorGradingModel_t2480248502, ___U3CbakedLutU3Ek__BackingField_3)); }
	inline RenderTexture_t3847872195 * get_U3CbakedLutU3Ek__BackingField_3() const { return ___U3CbakedLutU3Ek__BackingField_3; }
	inline RenderTexture_t3847872195 ** get_address_of_U3CbakedLutU3Ek__BackingField_3() { return &___U3CbakedLutU3Ek__BackingField_3; }
	inline void set_U3CbakedLutU3Ek__BackingField_3(RenderTexture_t3847872195 * value)
	{
		___U3CbakedLutU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CbakedLutU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORGRADINGMODEL_T2480248502_H
#ifndef ANTIALIASINGMODEL_T1366857901_H
#define ANTIALIASINGMODEL_T1366857901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AntialiasingModel
struct  AntialiasingModel_t1366857901  : public PostProcessingModel_t3467175713
{
public:
	// UnityEngine.PostProcessing.AntialiasingModel/Settings UnityEngine.PostProcessing.AntialiasingModel::m_Settings
	Settings_t2429616275  ___m_Settings_1;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(AntialiasingModel_t1366857901, ___m_Settings_1)); }
	inline Settings_t2429616275  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t2429616275 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t2429616275  value)
	{
		___m_Settings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANTIALIASINGMODEL_T1366857901_H
#ifndef PLAYERPROFILE_T256993481_H
#define PLAYERPROFILE_T256993481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerProfile
struct  PlayerProfile_t256993481  : public RuntimeObject
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerProfile::PlayerId
	String_t* ___PlayerId_0;
	// System.String PlayFab.PlayStreamModels.PlayerProfile::TitleId
	String_t* ___TitleId_1;
	// System.String PlayFab.PlayStreamModels.PlayerProfile::DisplayName
	String_t* ___DisplayName_2;
	// System.String PlayFab.PlayStreamModels.PlayerProfile::PublisherId
	String_t* ___PublisherId_3;
	// System.Nullable`1<PlayFab.PlayStreamModels.LoginIdentityProvider> PlayFab.PlayStreamModels.PlayerProfile::Origination
	Nullable_1_t2019201765  ___Origination_4;
	// System.Nullable`1<System.DateTime> PlayFab.PlayStreamModels.PlayerProfile::Created
	Nullable_1_t4223474148  ___Created_5;
	// System.Nullable`1<System.DateTime> PlayFab.PlayStreamModels.PlayerProfile::LastLogin
	Nullable_1_t4223474148  ___LastLogin_6;
	// System.Nullable`1<System.DateTime> PlayFab.PlayStreamModels.PlayerProfile::BannedUntil
	Nullable_1_t4223474148  ___BannedUntil_7;
	// System.String PlayFab.PlayStreamModels.PlayerProfile::AvatarUrl
	String_t* ___AvatarUrl_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayFab.PlayStreamModels.PlayerProfile::Statistics
	Dictionary_2_t2164408312 * ___Statistics_9;
	// System.Nullable`1<System.UInt32> PlayFab.PlayStreamModels.PlayerProfile::TotalValueToDateInUSD
	Nullable_1_t464247827  ___TotalValueToDateInUSD_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> PlayFab.PlayStreamModels.PlayerProfile::ValuesToDate
	Dictionary_2_t3537088031 * ___ValuesToDate_11;
	// System.Collections.Generic.List`1<System.String> PlayFab.PlayStreamModels.PlayerProfile::Tags
	List_1_t859813222 * ___Tags_12;
	// System.Collections.Generic.Dictionary`2<System.String,PlayFab.PlayStreamModels.PlayerLocation> PlayFab.PlayStreamModels.PlayerProfile::Locations
	Dictionary_2_t699674807 * ___Locations_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayFab.PlayStreamModels.PlayerProfile::VirtualCurrencyBalances
	Dictionary_2_t2164408312 * ___VirtualCurrencyBalances_14;
	// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.AdCampaignAttribution> PlayFab.PlayStreamModels.PlayerProfile::AdCampaignAttributions
	List_1_t3297642459 * ___AdCampaignAttributions_15;
	// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.PushNotificationRegistration> PlayFab.PlayStreamModels.PlayerProfile::PushNotificationRegistrations
	List_1_t1661627481 * ___PushNotificationRegistrations_16;
	// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.PlayerLinkedAccount> PlayFab.PlayStreamModels.PlayerProfile::LinkedAccounts
	List_1_t3353429270 * ___LinkedAccounts_17;
	// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.PlayerStatistic> PlayFab.PlayStreamModels.PlayerProfile::PlayerStatistics
	List_1_t2312228244 * ___PlayerStatistics_18;
	// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.ContactEmailInfo> PlayFab.PlayStreamModels.PlayerProfile::ContactEmailAddresses
	List_1_t3321572617 * ___ContactEmailAddresses_19;

public:
	inline static int32_t get_offset_of_PlayerId_0() { return static_cast<int32_t>(offsetof(PlayerProfile_t256993481, ___PlayerId_0)); }
	inline String_t* get_PlayerId_0() const { return ___PlayerId_0; }
	inline String_t** get_address_of_PlayerId_0() { return &___PlayerId_0; }
	inline void set_PlayerId_0(String_t* value)
	{
		___PlayerId_0 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerId_0), value);
	}

	inline static int32_t get_offset_of_TitleId_1() { return static_cast<int32_t>(offsetof(PlayerProfile_t256993481, ___TitleId_1)); }
	inline String_t* get_TitleId_1() const { return ___TitleId_1; }
	inline String_t** get_address_of_TitleId_1() { return &___TitleId_1; }
	inline void set_TitleId_1(String_t* value)
	{
		___TitleId_1 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_1), value);
	}

	inline static int32_t get_offset_of_DisplayName_2() { return static_cast<int32_t>(offsetof(PlayerProfile_t256993481, ___DisplayName_2)); }
	inline String_t* get_DisplayName_2() const { return ___DisplayName_2; }
	inline String_t** get_address_of_DisplayName_2() { return &___DisplayName_2; }
	inline void set_DisplayName_2(String_t* value)
	{
		___DisplayName_2 = value;
		Il2CppCodeGenWriteBarrier((&___DisplayName_2), value);
	}

	inline static int32_t get_offset_of_PublisherId_3() { return static_cast<int32_t>(offsetof(PlayerProfile_t256993481, ___PublisherId_3)); }
	inline String_t* get_PublisherId_3() const { return ___PublisherId_3; }
	inline String_t** get_address_of_PublisherId_3() { return &___PublisherId_3; }
	inline void set_PublisherId_3(String_t* value)
	{
		___PublisherId_3 = value;
		Il2CppCodeGenWriteBarrier((&___PublisherId_3), value);
	}

	inline static int32_t get_offset_of_Origination_4() { return static_cast<int32_t>(offsetof(PlayerProfile_t256993481, ___Origination_4)); }
	inline Nullable_1_t2019201765  get_Origination_4() const { return ___Origination_4; }
	inline Nullable_1_t2019201765 * get_address_of_Origination_4() { return &___Origination_4; }
	inline void set_Origination_4(Nullable_1_t2019201765  value)
	{
		___Origination_4 = value;
	}

	inline static int32_t get_offset_of_Created_5() { return static_cast<int32_t>(offsetof(PlayerProfile_t256993481, ___Created_5)); }
	inline Nullable_1_t4223474148  get_Created_5() const { return ___Created_5; }
	inline Nullable_1_t4223474148 * get_address_of_Created_5() { return &___Created_5; }
	inline void set_Created_5(Nullable_1_t4223474148  value)
	{
		___Created_5 = value;
	}

	inline static int32_t get_offset_of_LastLogin_6() { return static_cast<int32_t>(offsetof(PlayerProfile_t256993481, ___LastLogin_6)); }
	inline Nullable_1_t4223474148  get_LastLogin_6() const { return ___LastLogin_6; }
	inline Nullable_1_t4223474148 * get_address_of_LastLogin_6() { return &___LastLogin_6; }
	inline void set_LastLogin_6(Nullable_1_t4223474148  value)
	{
		___LastLogin_6 = value;
	}

	inline static int32_t get_offset_of_BannedUntil_7() { return static_cast<int32_t>(offsetof(PlayerProfile_t256993481, ___BannedUntil_7)); }
	inline Nullable_1_t4223474148  get_BannedUntil_7() const { return ___BannedUntil_7; }
	inline Nullable_1_t4223474148 * get_address_of_BannedUntil_7() { return &___BannedUntil_7; }
	inline void set_BannedUntil_7(Nullable_1_t4223474148  value)
	{
		___BannedUntil_7 = value;
	}

	inline static int32_t get_offset_of_AvatarUrl_8() { return static_cast<int32_t>(offsetof(PlayerProfile_t256993481, ___AvatarUrl_8)); }
	inline String_t* get_AvatarUrl_8() const { return ___AvatarUrl_8; }
	inline String_t** get_address_of_AvatarUrl_8() { return &___AvatarUrl_8; }
	inline void set_AvatarUrl_8(String_t* value)
	{
		___AvatarUrl_8 = value;
		Il2CppCodeGenWriteBarrier((&___AvatarUrl_8), value);
	}

	inline static int32_t get_offset_of_Statistics_9() { return static_cast<int32_t>(offsetof(PlayerProfile_t256993481, ___Statistics_9)); }
	inline Dictionary_2_t2164408312 * get_Statistics_9() const { return ___Statistics_9; }
	inline Dictionary_2_t2164408312 ** get_address_of_Statistics_9() { return &___Statistics_9; }
	inline void set_Statistics_9(Dictionary_2_t2164408312 * value)
	{
		___Statistics_9 = value;
		Il2CppCodeGenWriteBarrier((&___Statistics_9), value);
	}

	inline static int32_t get_offset_of_TotalValueToDateInUSD_10() { return static_cast<int32_t>(offsetof(PlayerProfile_t256993481, ___TotalValueToDateInUSD_10)); }
	inline Nullable_1_t464247827  get_TotalValueToDateInUSD_10() const { return ___TotalValueToDateInUSD_10; }
	inline Nullable_1_t464247827 * get_address_of_TotalValueToDateInUSD_10() { return &___TotalValueToDateInUSD_10; }
	inline void set_TotalValueToDateInUSD_10(Nullable_1_t464247827  value)
	{
		___TotalValueToDateInUSD_10 = value;
	}

	inline static int32_t get_offset_of_ValuesToDate_11() { return static_cast<int32_t>(offsetof(PlayerProfile_t256993481, ___ValuesToDate_11)); }
	inline Dictionary_2_t3537088031 * get_ValuesToDate_11() const { return ___ValuesToDate_11; }
	inline Dictionary_2_t3537088031 ** get_address_of_ValuesToDate_11() { return &___ValuesToDate_11; }
	inline void set_ValuesToDate_11(Dictionary_2_t3537088031 * value)
	{
		___ValuesToDate_11 = value;
		Il2CppCodeGenWriteBarrier((&___ValuesToDate_11), value);
	}

	inline static int32_t get_offset_of_Tags_12() { return static_cast<int32_t>(offsetof(PlayerProfile_t256993481, ___Tags_12)); }
	inline List_1_t859813222 * get_Tags_12() const { return ___Tags_12; }
	inline List_1_t859813222 ** get_address_of_Tags_12() { return &___Tags_12; }
	inline void set_Tags_12(List_1_t859813222 * value)
	{
		___Tags_12 = value;
		Il2CppCodeGenWriteBarrier((&___Tags_12), value);
	}

	inline static int32_t get_offset_of_Locations_13() { return static_cast<int32_t>(offsetof(PlayerProfile_t256993481, ___Locations_13)); }
	inline Dictionary_2_t699674807 * get_Locations_13() const { return ___Locations_13; }
	inline Dictionary_2_t699674807 ** get_address_of_Locations_13() { return &___Locations_13; }
	inline void set_Locations_13(Dictionary_2_t699674807 * value)
	{
		___Locations_13 = value;
		Il2CppCodeGenWriteBarrier((&___Locations_13), value);
	}

	inline static int32_t get_offset_of_VirtualCurrencyBalances_14() { return static_cast<int32_t>(offsetof(PlayerProfile_t256993481, ___VirtualCurrencyBalances_14)); }
	inline Dictionary_2_t2164408312 * get_VirtualCurrencyBalances_14() const { return ___VirtualCurrencyBalances_14; }
	inline Dictionary_2_t2164408312 ** get_address_of_VirtualCurrencyBalances_14() { return &___VirtualCurrencyBalances_14; }
	inline void set_VirtualCurrencyBalances_14(Dictionary_2_t2164408312 * value)
	{
		___VirtualCurrencyBalances_14 = value;
		Il2CppCodeGenWriteBarrier((&___VirtualCurrencyBalances_14), value);
	}

	inline static int32_t get_offset_of_AdCampaignAttributions_15() { return static_cast<int32_t>(offsetof(PlayerProfile_t256993481, ___AdCampaignAttributions_15)); }
	inline List_1_t3297642459 * get_AdCampaignAttributions_15() const { return ___AdCampaignAttributions_15; }
	inline List_1_t3297642459 ** get_address_of_AdCampaignAttributions_15() { return &___AdCampaignAttributions_15; }
	inline void set_AdCampaignAttributions_15(List_1_t3297642459 * value)
	{
		___AdCampaignAttributions_15 = value;
		Il2CppCodeGenWriteBarrier((&___AdCampaignAttributions_15), value);
	}

	inline static int32_t get_offset_of_PushNotificationRegistrations_16() { return static_cast<int32_t>(offsetof(PlayerProfile_t256993481, ___PushNotificationRegistrations_16)); }
	inline List_1_t1661627481 * get_PushNotificationRegistrations_16() const { return ___PushNotificationRegistrations_16; }
	inline List_1_t1661627481 ** get_address_of_PushNotificationRegistrations_16() { return &___PushNotificationRegistrations_16; }
	inline void set_PushNotificationRegistrations_16(List_1_t1661627481 * value)
	{
		___PushNotificationRegistrations_16 = value;
		Il2CppCodeGenWriteBarrier((&___PushNotificationRegistrations_16), value);
	}

	inline static int32_t get_offset_of_LinkedAccounts_17() { return static_cast<int32_t>(offsetof(PlayerProfile_t256993481, ___LinkedAccounts_17)); }
	inline List_1_t3353429270 * get_LinkedAccounts_17() const { return ___LinkedAccounts_17; }
	inline List_1_t3353429270 ** get_address_of_LinkedAccounts_17() { return &___LinkedAccounts_17; }
	inline void set_LinkedAccounts_17(List_1_t3353429270 * value)
	{
		___LinkedAccounts_17 = value;
		Il2CppCodeGenWriteBarrier((&___LinkedAccounts_17), value);
	}

	inline static int32_t get_offset_of_PlayerStatistics_18() { return static_cast<int32_t>(offsetof(PlayerProfile_t256993481, ___PlayerStatistics_18)); }
	inline List_1_t2312228244 * get_PlayerStatistics_18() const { return ___PlayerStatistics_18; }
	inline List_1_t2312228244 ** get_address_of_PlayerStatistics_18() { return &___PlayerStatistics_18; }
	inline void set_PlayerStatistics_18(List_1_t2312228244 * value)
	{
		___PlayerStatistics_18 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerStatistics_18), value);
	}

	inline static int32_t get_offset_of_ContactEmailAddresses_19() { return static_cast<int32_t>(offsetof(PlayerProfile_t256993481, ___ContactEmailAddresses_19)); }
	inline List_1_t3321572617 * get_ContactEmailAddresses_19() const { return ___ContactEmailAddresses_19; }
	inline List_1_t3321572617 ** get_address_of_ContactEmailAddresses_19() { return &___ContactEmailAddresses_19; }
	inline void set_ContactEmailAddresses_19(List_1_t3321572617 * value)
	{
		___ContactEmailAddresses_19 = value;
		Il2CppCodeGenWriteBarrier((&___ContactEmailAddresses_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERPROFILE_T256993481_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2900 = { sizeof (PlayerProfile_t256993481), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2900[20] = 
{
	PlayerProfile_t256993481::get_offset_of_PlayerId_0(),
	PlayerProfile_t256993481::get_offset_of_TitleId_1(),
	PlayerProfile_t256993481::get_offset_of_DisplayName_2(),
	PlayerProfile_t256993481::get_offset_of_PublisherId_3(),
	PlayerProfile_t256993481::get_offset_of_Origination_4(),
	PlayerProfile_t256993481::get_offset_of_Created_5(),
	PlayerProfile_t256993481::get_offset_of_LastLogin_6(),
	PlayerProfile_t256993481::get_offset_of_BannedUntil_7(),
	PlayerProfile_t256993481::get_offset_of_AvatarUrl_8(),
	PlayerProfile_t256993481::get_offset_of_Statistics_9(),
	PlayerProfile_t256993481::get_offset_of_TotalValueToDateInUSD_10(),
	PlayerProfile_t256993481::get_offset_of_ValuesToDate_11(),
	PlayerProfile_t256993481::get_offset_of_Tags_12(),
	PlayerProfile_t256993481::get_offset_of_Locations_13(),
	PlayerProfile_t256993481::get_offset_of_VirtualCurrencyBalances_14(),
	PlayerProfile_t256993481::get_offset_of_AdCampaignAttributions_15(),
	PlayerProfile_t256993481::get_offset_of_PushNotificationRegistrations_16(),
	PlayerProfile_t256993481::get_offset_of_LinkedAccounts_17(),
	PlayerProfile_t256993481::get_offset_of_PlayerStatistics_18(),
	PlayerProfile_t256993481::get_offset_of_ContactEmailAddresses_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2901 = { sizeof (NameIdentifier_t2678357796), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2901[2] = 
{
	NameIdentifier_t2678357796::get_offset_of_Name_0(),
	NameIdentifier_t2678357796::get_offset_of_Id_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2902 = { sizeof (APISettings_t3971419043), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2902[12] = 
{
	APISettings_t3971419043::get_offset_of_AllowClientToAddVirtualCurrency_0(),
	APISettings_t3971419043::get_offset_of_AllowClientToSubtractVirtualCurrency_1(),
	APISettings_t3971419043::get_offset_of_AllowClientToPostPlayerStatistics_2(),
	APISettings_t3971419043::get_offset_of_AllowClientToStartGames_3(),
	APISettings_t3971419043::get_offset_of_AllowServerToDeleteUsers_4(),
	APISettings_t3971419043::get_offset_of_UseSandboxPayments_5(),
	APISettings_t3971419043::get_offset_of_UseExternalGameServerProvider_6(),
	APISettings_t3971419043::get_offset_of_AllowNonUniquePlayerDisplayNames_7(),
	APISettings_t3971419043::get_offset_of_EnableClientIPAddressObfuscation_8(),
	APISettings_t3971419043::get_offset_of_RequireCustomDataJSONFormat_9(),
	APISettings_t3971419043::get_offset_of_DisableAPIAccess_10(),
	APISettings_t3971419043::get_offset_of_DisplayNameRandomSuffixLength_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2903 = { sizeof (TaskInstanceStatus_t3998601550)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2903[7] = 
{
	TaskInstanceStatus_t3998601550::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2904 = { sizeof (StatisticAggregationMethod_t691678656)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2904[5] = 
{
	StatisticAggregationMethod_t691678656::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2905 = { sizeof (Region_t2935391263)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2905[8] = 
{
	Region_t2935391263::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2906 = { sizeof (AlertLevel_t1277682315)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2906[4] = 
{
	AlertLevel_t1277682315::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2907 = { sizeof (AlertStates_t1046021142)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2907[4] = 
{
	AlertStates_t1046021142::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2908 = { sizeof (NewsStatus_t1693451179)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2908[5] = 
{
	NewsStatus_t1693451179::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2909 = { sizeof (MetricUnit_t1334681998)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2909[17] = 
{
	MetricUnit_t1334681998::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2910 = { sizeof (StatisticResetIntervalOption_t4041913334)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2910[6] = 
{
	StatisticResetIntervalOption_t4041913334::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2911 = { sizeof (NameId_t2777016614), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2911[2] = 
{
	NameId_t2777016614::get_offset_of_Name_0(),
	NameId_t2777016614::get_offset_of_Id_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2912 = { sizeof (PhotonServicesEnum_t477314747)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2912[4] = 
{
	PhotonServicesEnum_t477314747::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2913 = { sizeof (SourceType_t2789550703)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2913[6] = 
{
	SourceType_t2789550703::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2914 = { sizeof (PlayStreamEventHistory_t1985411227), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2914[3] = 
{
	PlayStreamEventHistory_t1985411227::get_offset_of_ParentTriggerId_0(),
	PlayStreamEventHistory_t1985411227::get_offset_of_ParentEventId_1(),
	PlayStreamEventHistory_t1985411227::get_offset_of_TriggeredEvents_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2915 = { sizeof (GetSetAttribute_t232059092), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2915[2] = 
{
	GetSetAttribute_t232059092::get_offset_of_name_0(),
	GetSetAttribute_t232059092::get_offset_of_dirty_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2916 = { sizeof (MinAttribute_t2906852124), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2916[1] = 
{
	MinAttribute_t2906852124::get_offset_of_min_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2917 = { sizeof (TrackballAttribute_t837274702), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2917[1] = 
{
	TrackballAttribute_t837274702::get_offset_of_method_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2918 = { sizeof (TrackballGroupAttribute_t791406138), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2919 = { sizeof (AmbientOcclusionComponent_t792492015), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2919[3] = 
{
	0,
	0,
	AmbientOcclusionComponent_t792492015::get_offset_of_m_MRT_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2920 = { sizeof (Uniforms_t3099365572), -1, sizeof(Uniforms_t3099365572_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2920[10] = 
{
	Uniforms_t3099365572_StaticFields::get_offset_of__Intensity_0(),
	Uniforms_t3099365572_StaticFields::get_offset_of__Radius_1(),
	Uniforms_t3099365572_StaticFields::get_offset_of__FogParams_2(),
	Uniforms_t3099365572_StaticFields::get_offset_of__Downsample_3(),
	Uniforms_t3099365572_StaticFields::get_offset_of__SampleCount_4(),
	Uniforms_t3099365572_StaticFields::get_offset_of__OcclusionTexture1_5(),
	Uniforms_t3099365572_StaticFields::get_offset_of__OcclusionTexture2_6(),
	Uniforms_t3099365572_StaticFields::get_offset_of__OcclusionTexture_7(),
	Uniforms_t3099365572_StaticFields::get_offset_of__MainTex_8(),
	Uniforms_t3099365572_StaticFields::get_offset_of__TempRT_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2921 = { sizeof (OcclusionSource_t44235136)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2921[4] = 
{
	OcclusionSource_t44235136::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2922 = { sizeof (BloomComponent_t614650019), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2922[3] = 
{
	0,
	BloomComponent_t614650019::get_offset_of_m_BlurBuffer1_3(),
	BloomComponent_t614650019::get_offset_of_m_BlurBuffer2_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2923 = { sizeof (Uniforms_t1404156410), -1, sizeof(Uniforms_t1404156410_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2923[10] = 
{
	Uniforms_t1404156410_StaticFields::get_offset_of__AutoExposure_0(),
	Uniforms_t1404156410_StaticFields::get_offset_of__Threshold_1(),
	Uniforms_t1404156410_StaticFields::get_offset_of__Curve_2(),
	Uniforms_t1404156410_StaticFields::get_offset_of__PrefilterOffs_3(),
	Uniforms_t1404156410_StaticFields::get_offset_of__SampleScale_4(),
	Uniforms_t1404156410_StaticFields::get_offset_of__BaseTex_5(),
	Uniforms_t1404156410_StaticFields::get_offset_of__BloomTex_6(),
	Uniforms_t1404156410_StaticFields::get_offset_of__Bloom_Settings_7(),
	Uniforms_t1404156410_StaticFields::get_offset_of__Bloom_DirtTex_8(),
	Uniforms_t1404156410_StaticFields::get_offset_of__Bloom_DirtIntensity_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2924 = { sizeof (BuiltinDebugViewsComponent_t3353345216), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2924[2] = 
{
	0,
	BuiltinDebugViewsComponent_t3353345216::get_offset_of_m_Arrows_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2925 = { sizeof (Uniforms_t65387656), -1, sizeof(Uniforms_t65387656_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2925[7] = 
{
	Uniforms_t65387656_StaticFields::get_offset_of__DepthScale_0(),
	Uniforms_t65387656_StaticFields::get_offset_of__TempRT_1(),
	Uniforms_t65387656_StaticFields::get_offset_of__Opacity_2(),
	Uniforms_t65387656_StaticFields::get_offset_of__MainTex_3(),
	Uniforms_t65387656_StaticFields::get_offset_of__TempRT2_4(),
	Uniforms_t65387656_StaticFields::get_offset_of__Amplitude_5(),
	Uniforms_t65387656_StaticFields::get_offset_of__Scale_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2926 = { sizeof (Pass_t3777200846)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2926[6] = 
{
	Pass_t3777200846::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2927 = { sizeof (ArrowArray_t841951830), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2927[3] = 
{
	ArrowArray_t841951830::get_offset_of_U3CmeshU3Ek__BackingField_0(),
	ArrowArray_t841951830::get_offset_of_U3CcolumnCountU3Ek__BackingField_1(),
	ArrowArray_t841951830::get_offset_of_U3CrowCountU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2928 = { sizeof (ChromaticAberrationComponent_t1590231792), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2928[1] = 
{
	ChromaticAberrationComponent_t1590231792::get_offset_of_m_SpectrumLut_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2929 = { sizeof (Uniforms_t2069288676), -1, sizeof(Uniforms_t2069288676_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2929[2] = 
{
	Uniforms_t2069288676_StaticFields::get_offset_of__ChromaticAberration_Amount_0(),
	Uniforms_t2069288676_StaticFields::get_offset_of__ChromaticAberration_Spectrum_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2930 = { sizeof (ColorGradingComponent_t2002653710), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2930[5] = 
{
	0,
	0,
	0,
	ColorGradingComponent_t2002653710::get_offset_of_m_GradingCurves_5(),
	ColorGradingComponent_t2002653710::get_offset_of_m_pixels_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2931 = { sizeof (Uniforms_t3938410866), -1, sizeof(Uniforms_t3938410866_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2931[20] = 
{
	Uniforms_t3938410866_StaticFields::get_offset_of__LutParams_0(),
	Uniforms_t3938410866_StaticFields::get_offset_of__NeutralTonemapperParams1_1(),
	Uniforms_t3938410866_StaticFields::get_offset_of__NeutralTonemapperParams2_2(),
	Uniforms_t3938410866_StaticFields::get_offset_of__HueShift_3(),
	Uniforms_t3938410866_StaticFields::get_offset_of__Saturation_4(),
	Uniforms_t3938410866_StaticFields::get_offset_of__Contrast_5(),
	Uniforms_t3938410866_StaticFields::get_offset_of__Balance_6(),
	Uniforms_t3938410866_StaticFields::get_offset_of__Lift_7(),
	Uniforms_t3938410866_StaticFields::get_offset_of__InvGamma_8(),
	Uniforms_t3938410866_StaticFields::get_offset_of__Gain_9(),
	Uniforms_t3938410866_StaticFields::get_offset_of__Slope_10(),
	Uniforms_t3938410866_StaticFields::get_offset_of__Power_11(),
	Uniforms_t3938410866_StaticFields::get_offset_of__Offset_12(),
	Uniforms_t3938410866_StaticFields::get_offset_of__ChannelMixerRed_13(),
	Uniforms_t3938410866_StaticFields::get_offset_of__ChannelMixerGreen_14(),
	Uniforms_t3938410866_StaticFields::get_offset_of__ChannelMixerBlue_15(),
	Uniforms_t3938410866_StaticFields::get_offset_of__Curves_16(),
	Uniforms_t3938410866_StaticFields::get_offset_of__LogLut_17(),
	Uniforms_t3938410866_StaticFields::get_offset_of__LogLut_Params_18(),
	Uniforms_t3938410866_StaticFields::get_offset_of__ExposureEV_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2932 = { sizeof (DepthOfFieldComponent_t467343392), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2932[3] = 
{
	0,
	DepthOfFieldComponent_t467343392::get_offset_of_m_CoCHistory_3(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2933 = { sizeof (Uniforms_t1735547145), -1, sizeof(Uniforms_t1735547145_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2933[11] = 
{
	Uniforms_t1735547145_StaticFields::get_offset_of__DepthOfFieldTex_0(),
	Uniforms_t1735547145_StaticFields::get_offset_of__DepthOfFieldCoCTex_1(),
	Uniforms_t1735547145_StaticFields::get_offset_of__Distance_2(),
	Uniforms_t1735547145_StaticFields::get_offset_of__LensCoeff_3(),
	Uniforms_t1735547145_StaticFields::get_offset_of__MaxCoC_4(),
	Uniforms_t1735547145_StaticFields::get_offset_of__RcpMaxCoC_5(),
	Uniforms_t1735547145_StaticFields::get_offset_of__RcpAspect_6(),
	Uniforms_t1735547145_StaticFields::get_offset_of__MainTex_7(),
	Uniforms_t1735547145_StaticFields::get_offset_of__CoCTex_8(),
	Uniforms_t1735547145_StaticFields::get_offset_of__TaaParams_9(),
	Uniforms_t1735547145_StaticFields::get_offset_of__DepthOfFieldParams_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2934 = { sizeof (DitheringComponent_t958027570), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2934[3] = 
{
	DitheringComponent_t958027570::get_offset_of_noiseTextures_2(),
	DitheringComponent_t958027570::get_offset_of_textureIndex_3(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2935 = { sizeof (Uniforms_t1234480551), -1, sizeof(Uniforms_t1234480551_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2935[2] = 
{
	Uniforms_t1234480551_StaticFields::get_offset_of__DitheringTex_0(),
	Uniforms_t1234480551_StaticFields::get_offset_of__DitheringCoords_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2936 = { sizeof (EyeAdaptationComponent_t3593042715), -1, sizeof(EyeAdaptationComponent_t3593042715_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2936[11] = 
{
	EyeAdaptationComponent_t3593042715::get_offset_of_m_EyeCompute_2(),
	EyeAdaptationComponent_t3593042715::get_offset_of_m_HistogramBuffer_3(),
	EyeAdaptationComponent_t3593042715::get_offset_of_m_AutoExposurePool_4(),
	EyeAdaptationComponent_t3593042715::get_offset_of_m_AutoExposurePingPing_5(),
	EyeAdaptationComponent_t3593042715::get_offset_of_m_CurrentAutoExposure_6(),
	EyeAdaptationComponent_t3593042715::get_offset_of_m_DebugHistogram_7(),
	EyeAdaptationComponent_t3593042715_StaticFields::get_offset_of_s_EmptyHistogramBuffer_8(),
	EyeAdaptationComponent_t3593042715::get_offset_of_m_FirstFrame_9(),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2937 = { sizeof (Uniforms_t3585227917), -1, sizeof(Uniforms_t3585227917_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2937[6] = 
{
	Uniforms_t3585227917_StaticFields::get_offset_of__Params_0(),
	Uniforms_t3585227917_StaticFields::get_offset_of__Speed_1(),
	Uniforms_t3585227917_StaticFields::get_offset_of__ScaleOffsetRes_2(),
	Uniforms_t3585227917_StaticFields::get_offset_of__ExposureCompensation_3(),
	Uniforms_t3585227917_StaticFields::get_offset_of__AutoExposure_4(),
	Uniforms_t3585227917_StaticFields::get_offset_of__DebugWidth_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2938 = { sizeof (FogComponent_t3527720738), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2938[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2939 = { sizeof (Uniforms_t143327145), -1, sizeof(Uniforms_t143327145_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2939[5] = 
{
	Uniforms_t143327145_StaticFields::get_offset_of__FogColor_0(),
	Uniforms_t143327145_StaticFields::get_offset_of__Density_1(),
	Uniforms_t143327145_StaticFields::get_offset_of__Start_2(),
	Uniforms_t143327145_StaticFields::get_offset_of__End_3(),
	Uniforms_t143327145_StaticFields::get_offset_of__TempRT_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2940 = { sizeof (FxaaComponent_t3589011797), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2941 = { sizeof (Uniforms_t731612883), -1, sizeof(Uniforms_t731612883_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2941[2] = 
{
	Uniforms_t731612883_StaticFields::get_offset_of__QualitySettings_0(),
	Uniforms_t731612883_StaticFields::get_offset_of__ConsoleSettings_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2942 = { sizeof (GrainComponent_t3665544680), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2942[1] = 
{
	GrainComponent_t3665544680::get_offset_of_m_GrainLookupRT_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2943 = { sizeof (Uniforms_t4141834570), -1, sizeof(Uniforms_t4141834570_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2943[4] = 
{
	Uniforms_t4141834570_StaticFields::get_offset_of__Grain_Params1_0(),
	Uniforms_t4141834570_StaticFields::get_offset_of__Grain_Params2_1(),
	Uniforms_t4141834570_StaticFields::get_offset_of__GrainTex_2(),
	Uniforms_t4141834570_StaticFields::get_offset_of__Phase_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2944 = { sizeof (MotionBlurComponent_t3404858421), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2944[3] = 
{
	MotionBlurComponent_t3404858421::get_offset_of_m_ReconstructionFilter_2(),
	MotionBlurComponent_t3404858421::get_offset_of_m_FrameBlendingFilter_3(),
	MotionBlurComponent_t3404858421::get_offset_of_m_FirstFrame_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2945 = { sizeof (Uniforms_t739603470), -1, sizeof(Uniforms_t739603470_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2945[26] = 
{
	Uniforms_t739603470_StaticFields::get_offset_of__VelocityScale_0(),
	Uniforms_t739603470_StaticFields::get_offset_of__MaxBlurRadius_1(),
	Uniforms_t739603470_StaticFields::get_offset_of__RcpMaxBlurRadius_2(),
	Uniforms_t739603470_StaticFields::get_offset_of__VelocityTex_3(),
	Uniforms_t739603470_StaticFields::get_offset_of__MainTex_4(),
	Uniforms_t739603470_StaticFields::get_offset_of__Tile2RT_5(),
	Uniforms_t739603470_StaticFields::get_offset_of__Tile4RT_6(),
	Uniforms_t739603470_StaticFields::get_offset_of__Tile8RT_7(),
	Uniforms_t739603470_StaticFields::get_offset_of__TileMaxOffs_8(),
	Uniforms_t739603470_StaticFields::get_offset_of__TileMaxLoop_9(),
	Uniforms_t739603470_StaticFields::get_offset_of__TileVRT_10(),
	Uniforms_t739603470_StaticFields::get_offset_of__NeighborMaxTex_11(),
	Uniforms_t739603470_StaticFields::get_offset_of__LoopCount_12(),
	Uniforms_t739603470_StaticFields::get_offset_of__TempRT_13(),
	Uniforms_t739603470_StaticFields::get_offset_of__History1LumaTex_14(),
	Uniforms_t739603470_StaticFields::get_offset_of__History2LumaTex_15(),
	Uniforms_t739603470_StaticFields::get_offset_of__History3LumaTex_16(),
	Uniforms_t739603470_StaticFields::get_offset_of__History4LumaTex_17(),
	Uniforms_t739603470_StaticFields::get_offset_of__History1ChromaTex_18(),
	Uniforms_t739603470_StaticFields::get_offset_of__History2ChromaTex_19(),
	Uniforms_t739603470_StaticFields::get_offset_of__History3ChromaTex_20(),
	Uniforms_t739603470_StaticFields::get_offset_of__History4ChromaTex_21(),
	Uniforms_t739603470_StaticFields::get_offset_of__History1Weight_22(),
	Uniforms_t739603470_StaticFields::get_offset_of__History2Weight_23(),
	Uniforms_t739603470_StaticFields::get_offset_of__History3Weight_24(),
	Uniforms_t739603470_StaticFields::get_offset_of__History4Weight_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2946 = { sizeof (Pass_t1656403883)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2946[10] = 
{
	Pass_t1656403883::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2947 = { sizeof (ReconstructionFilter_t4100126196), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2947[2] = 
{
	ReconstructionFilter_t4100126196::get_offset_of_m_VectorRTFormat_0(),
	ReconstructionFilter_t4100126196::get_offset_of_m_PackedRTFormat_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2948 = { sizeof (FrameBlendingFilter_t2341498947), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2948[4] = 
{
	FrameBlendingFilter_t2341498947::get_offset_of_m_UseCompression_0(),
	FrameBlendingFilter_t2341498947::get_offset_of_m_RawTextureFormat_1(),
	FrameBlendingFilter_t2341498947::get_offset_of_m_FrameList_2(),
	FrameBlendingFilter_t2341498947::get_offset_of_m_LastFrameCount_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2949 = { sizeof (Frame_t209750528)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2949[4] = 
{
	Frame_t209750528::get_offset_of_lumaTexture_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Frame_t209750528::get_offset_of_chromaTexture_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Frame_t209750528::get_offset_of_m_Time_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Frame_t209750528::get_offset_of_m_MRT_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2950 = { sizeof (ScreenSpaceReflectionComponent_t3857583838), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2950[5] = 
{
	ScreenSpaceReflectionComponent_t3857583838::get_offset_of_k_HighlightSuppression_2(),
	ScreenSpaceReflectionComponent_t3857583838::get_offset_of_k_TraceBehindObjects_3(),
	ScreenSpaceReflectionComponent_t3857583838::get_offset_of_k_TreatBackfaceHitAsMiss_4(),
	ScreenSpaceReflectionComponent_t3857583838::get_offset_of_k_BilateralUpsample_5(),
	ScreenSpaceReflectionComponent_t3857583838::get_offset_of_m_ReflectionTextures_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2951 = { sizeof (Uniforms_t3370298352), -1, sizeof(Uniforms_t3370298352_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2951[35] = 
{
	Uniforms_t3370298352_StaticFields::get_offset_of__RayStepSize_0(),
	Uniforms_t3370298352_StaticFields::get_offset_of__AdditiveReflection_1(),
	Uniforms_t3370298352_StaticFields::get_offset_of__BilateralUpsampling_2(),
	Uniforms_t3370298352_StaticFields::get_offset_of__TreatBackfaceHitAsMiss_3(),
	Uniforms_t3370298352_StaticFields::get_offset_of__AllowBackwardsRays_4(),
	Uniforms_t3370298352_StaticFields::get_offset_of__TraceBehindObjects_5(),
	Uniforms_t3370298352_StaticFields::get_offset_of__MaxSteps_6(),
	Uniforms_t3370298352_StaticFields::get_offset_of__FullResolutionFiltering_7(),
	Uniforms_t3370298352_StaticFields::get_offset_of__HalfResolution_8(),
	Uniforms_t3370298352_StaticFields::get_offset_of__HighlightSuppression_9(),
	Uniforms_t3370298352_StaticFields::get_offset_of__PixelsPerMeterAtOneMeter_10(),
	Uniforms_t3370298352_StaticFields::get_offset_of__ScreenEdgeFading_11(),
	Uniforms_t3370298352_StaticFields::get_offset_of__ReflectionBlur_12(),
	Uniforms_t3370298352_StaticFields::get_offset_of__MaxRayTraceDistance_13(),
	Uniforms_t3370298352_StaticFields::get_offset_of__FadeDistance_14(),
	Uniforms_t3370298352_StaticFields::get_offset_of__LayerThickness_15(),
	Uniforms_t3370298352_StaticFields::get_offset_of__SSRMultiplier_16(),
	Uniforms_t3370298352_StaticFields::get_offset_of__FresnelFade_17(),
	Uniforms_t3370298352_StaticFields::get_offset_of__FresnelFadePower_18(),
	Uniforms_t3370298352_StaticFields::get_offset_of__ReflectionBufferSize_19(),
	Uniforms_t3370298352_StaticFields::get_offset_of__ScreenSize_20(),
	Uniforms_t3370298352_StaticFields::get_offset_of__InvScreenSize_21(),
	Uniforms_t3370298352_StaticFields::get_offset_of__ProjInfo_22(),
	Uniforms_t3370298352_StaticFields::get_offset_of__CameraClipInfo_23(),
	Uniforms_t3370298352_StaticFields::get_offset_of__ProjectToPixelMatrix_24(),
	Uniforms_t3370298352_StaticFields::get_offset_of__WorldToCameraMatrix_25(),
	Uniforms_t3370298352_StaticFields::get_offset_of__CameraToWorldMatrix_26(),
	Uniforms_t3370298352_StaticFields::get_offset_of__Axis_27(),
	Uniforms_t3370298352_StaticFields::get_offset_of__CurrentMipLevel_28(),
	Uniforms_t3370298352_StaticFields::get_offset_of__NormalAndRoughnessTexture_29(),
	Uniforms_t3370298352_StaticFields::get_offset_of__HitPointTexture_30(),
	Uniforms_t3370298352_StaticFields::get_offset_of__BlurTexture_31(),
	Uniforms_t3370298352_StaticFields::get_offset_of__FilteredReflections_32(),
	Uniforms_t3370298352_StaticFields::get_offset_of__FinalReflectionTexture_33(),
	Uniforms_t3370298352_StaticFields::get_offset_of__TempTexture_34(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2952 = { sizeof (PassIndex_t1705766621)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2952[10] = 
{
	PassIndex_t1705766621::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2953 = { sizeof (TaaComponent_t3531240320), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2953[7] = 
{
	0,
	0,
	TaaComponent_t3531240320::get_offset_of_m_MRT_4(),
	TaaComponent_t3531240320::get_offset_of_m_SampleIndex_5(),
	TaaComponent_t3531240320::get_offset_of_m_ResetHistory_6(),
	TaaComponent_t3531240320::get_offset_of_m_HistoryTexture_7(),
	TaaComponent_t3531240320::get_offset_of_U3CjitterVectorU3Ek__BackingField_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2954 = { sizeof (Uniforms_t3142154269), -1, sizeof(Uniforms_t3142154269_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2954[5] = 
{
	Uniforms_t3142154269_StaticFields::get_offset_of__Jitter_0(),
	Uniforms_t3142154269_StaticFields::get_offset_of__SharpenParameters_1(),
	Uniforms_t3142154269_StaticFields::get_offset_of__FinalBlendParameters_2(),
	Uniforms_t3142154269_StaticFields::get_offset_of__HistoryTex_3(),
	Uniforms_t3142154269_StaticFields::get_offset_of__MainTex_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2955 = { sizeof (UserLutComponent_t942528204), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2956 = { sizeof (Uniforms_t3067272284), -1, sizeof(Uniforms_t3067272284_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2956[2] = 
{
	Uniforms_t3067272284_StaticFields::get_offset_of__UserLut_0(),
	Uniforms_t3067272284_StaticFields::get_offset_of__UserLut_Params_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2957 = { sizeof (VignetteComponent_t3081512063), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2958 = { sizeof (Uniforms_t4292644687), -1, sizeof(Uniforms_t4292644687_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2958[5] = 
{
	Uniforms_t4292644687_StaticFields::get_offset_of__Vignette_Color_0(),
	Uniforms_t4292644687_StaticFields::get_offset_of__Vignette_Center_1(),
	Uniforms_t4292644687_StaticFields::get_offset_of__Vignette_Settings_2(),
	Uniforms_t4292644687_StaticFields::get_offset_of__Vignette_Mask_3(),
	Uniforms_t4292644687_StaticFields::get_offset_of__Vignette_Opacity_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2959 = { sizeof (AmbientOcclusionModel_t1547813591), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2959[1] = 
{
	AmbientOcclusionModel_t1547813591::get_offset_of_m_Settings_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2960 = { sizeof (SampleCount_t1593072766)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2960[5] = 
{
	SampleCount_t1593072766::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2961 = { sizeof (Settings_t3232482888)+ sizeof (RuntimeObject), sizeof(Settings_t3232482888_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2961[7] = 
{
	Settings_t3232482888::get_offset_of_intensity_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t3232482888::get_offset_of_radius_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t3232482888::get_offset_of_sampleCount_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t3232482888::get_offset_of_downsampling_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t3232482888::get_offset_of_forceForwardCompatibility_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t3232482888::get_offset_of_ambientOnly_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t3232482888::get_offset_of_highPrecision_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2962 = { sizeof (AntialiasingModel_t1366857901), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2962[1] = 
{
	AntialiasingModel_t1366857901::get_offset_of_m_Settings_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2963 = { sizeof (Method_t3959463313)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2963[3] = 
{
	Method_t3959463313::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2964 = { sizeof (FxaaPreset_t238916625)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2964[6] = 
{
	FxaaPreset_t238916625::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2965 = { sizeof (FxaaQualitySettings_t2026309905)+ sizeof (RuntimeObject), sizeof(FxaaQualitySettings_t2026309905 ), sizeof(FxaaQualitySettings_t2026309905_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2965[4] = 
{
	FxaaQualitySettings_t2026309905::get_offset_of_subpixelAliasingRemovalAmount_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FxaaQualitySettings_t2026309905::get_offset_of_edgeDetectionThreshold_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FxaaQualitySettings_t2026309905::get_offset_of_minimumRequiredLuminance_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FxaaQualitySettings_t2026309905_StaticFields::get_offset_of_presets_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2966 = { sizeof (FxaaConsoleSettings_t1619399012)+ sizeof (RuntimeObject), sizeof(FxaaConsoleSettings_t1619399012 ), sizeof(FxaaConsoleSettings_t1619399012_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2966[5] = 
{
	FxaaConsoleSettings_t1619399012::get_offset_of_subpixelSpreadAmount_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FxaaConsoleSettings_t1619399012::get_offset_of_edgeSharpnessAmount_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FxaaConsoleSettings_t1619399012::get_offset_of_edgeDetectionThreshold_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FxaaConsoleSettings_t1619399012::get_offset_of_minimumRequiredLuminance_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FxaaConsoleSettings_t1619399012_StaticFields::get_offset_of_presets_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2967 = { sizeof (FxaaSettings_t4212420705)+ sizeof (RuntimeObject), sizeof(FxaaSettings_t4212420705 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2967[1] = 
{
	FxaaSettings_t4212420705::get_offset_of_preset_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2968 = { sizeof (TaaSettings_t4134617129)+ sizeof (RuntimeObject), sizeof(TaaSettings_t4134617129 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2968[4] = 
{
	TaaSettings_t4134617129::get_offset_of_jitterSpread_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TaaSettings_t4134617129::get_offset_of_sharpen_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TaaSettings_t4134617129::get_offset_of_stationaryBlending_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TaaSettings_t4134617129::get_offset_of_motionBlending_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2969 = { sizeof (Settings_t2429616275)+ sizeof (RuntimeObject), sizeof(Settings_t2429616275 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2969[3] = 
{
	Settings_t2429616275::get_offset_of_method_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t2429616275::get_offset_of_fxaaSettings_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t2429616275::get_offset_of_taaSettings_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2970 = { sizeof (BloomModel_t2841477781), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2970[1] = 
{
	BloomModel_t2841477781::get_offset_of_m_Settings_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2971 = { sizeof (BloomSettings_t390616924)+ sizeof (RuntimeObject), sizeof(BloomSettings_t390616924_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2971[5] = 
{
	BloomSettings_t390616924::get_offset_of_intensity_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BloomSettings_t390616924::get_offset_of_threshold_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BloomSettings_t390616924::get_offset_of_softKnee_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BloomSettings_t390616924::get_offset_of_radius_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BloomSettings_t390616924::get_offset_of_antiFlicker_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2972 = { sizeof (LensDirtSettings_t4014836744)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2972[2] = 
{
	LensDirtSettings_t4014836744::get_offset_of_texture_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LensDirtSettings_t4014836744::get_offset_of_intensity_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2973 = { sizeof (Settings_t811044873)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2973[2] = 
{
	Settings_t811044873::get_offset_of_bloom_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t811044873::get_offset_of_lensDirt_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2974 = { sizeof (BuiltinDebugViewsModel_t861247509), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2974[1] = 
{
	BuiltinDebugViewsModel_t861247509::get_offset_of_m_Settings_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2975 = { sizeof (DepthSettings_t3502633750)+ sizeof (RuntimeObject), sizeof(DepthSettings_t3502633750 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2975[1] = 
{
	DepthSettings_t3502633750::get_offset_of_scale_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2976 = { sizeof (MotionVectorsSettings_t2781704084)+ sizeof (RuntimeObject), sizeof(MotionVectorsSettings_t2781704084 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2976[6] = 
{
	MotionVectorsSettings_t2781704084::get_offset_of_sourceOpacity_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MotionVectorsSettings_t2781704084::get_offset_of_motionImageOpacity_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MotionVectorsSettings_t2781704084::get_offset_of_motionImageAmplitude_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MotionVectorsSettings_t2781704084::get_offset_of_motionVectorsOpacity_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MotionVectorsSettings_t2781704084::get_offset_of_motionVectorsResolution_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MotionVectorsSettings_t2781704084::get_offset_of_motionVectorsAmplitude_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2977 = { sizeof (Mode_t3286153585)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2977[11] = 
{
	Mode_t3286153585::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2978 = { sizeof (Settings_t3659777878)+ sizeof (RuntimeObject), sizeof(Settings_t3659777878 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2978[3] = 
{
	Settings_t3659777878::get_offset_of_mode_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t3659777878::get_offset_of_depth_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t3659777878::get_offset_of_motionVectors_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2979 = { sizeof (ChromaticAberrationModel_t2255405875), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2979[1] = 
{
	ChromaticAberrationModel_t2255405875::get_offset_of_m_Settings_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2980 = { sizeof (Settings_t1310207576)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2980[2] = 
{
	Settings_t1310207576::get_offset_of_spectralTexture_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1310207576::get_offset_of_intensity_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2981 = { sizeof (ColorGradingModel_t2480248502), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2981[3] = 
{
	ColorGradingModel_t2480248502::get_offset_of_m_Settings_1(),
	ColorGradingModel_t2480248502::get_offset_of_U3CisDirtyU3Ek__BackingField_2(),
	ColorGradingModel_t2480248502::get_offset_of_U3CbakedLutU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2982 = { sizeof (Tonemapper_t236583493)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2982[4] = 
{
	Tonemapper_t236583493::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2983 = { sizeof (TonemappingSettings_t2586672451)+ sizeof (RuntimeObject), sizeof(TonemappingSettings_t2586672451 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2983[7] = 
{
	TonemappingSettings_t2586672451::get_offset_of_tonemapper_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TonemappingSettings_t2586672451::get_offset_of_neutralBlackIn_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TonemappingSettings_t2586672451::get_offset_of_neutralWhiteIn_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TonemappingSettings_t2586672451::get_offset_of_neutralBlackOut_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TonemappingSettings_t2586672451::get_offset_of_neutralWhiteOut_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TonemappingSettings_t2586672451::get_offset_of_neutralWhiteLevel_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TonemappingSettings_t2586672451::get_offset_of_neutralWhiteClip_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2984 = { sizeof (BasicSettings_t501872943)+ sizeof (RuntimeObject), sizeof(BasicSettings_t501872943 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2984[6] = 
{
	BasicSettings_t501872943::get_offset_of_postExposure_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BasicSettings_t501872943::get_offset_of_temperature_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BasicSettings_t501872943::get_offset_of_tint_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BasicSettings_t501872943::get_offset_of_hueShift_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BasicSettings_t501872943::get_offset_of_saturation_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BasicSettings_t501872943::get_offset_of_contrast_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2985 = { sizeof (ChannelMixerSettings_t2252873405)+ sizeof (RuntimeObject), sizeof(ChannelMixerSettings_t2252873405 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2985[4] = 
{
	ChannelMixerSettings_t2252873405::get_offset_of_red_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ChannelMixerSettings_t2252873405::get_offset_of_green_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ChannelMixerSettings_t2252873405::get_offset_of_blue_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ChannelMixerSettings_t2252873405::get_offset_of_currentEditingChannel_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2986 = { sizeof (LogWheelsSettings_t2859358507)+ sizeof (RuntimeObject), sizeof(LogWheelsSettings_t2859358507 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2986[3] = 
{
	LogWheelsSettings_t2859358507::get_offset_of_slope_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LogWheelsSettings_t2859358507::get_offset_of_power_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LogWheelsSettings_t2859358507::get_offset_of_offset_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2987 = { sizeof (LinearWheelsSettings_t3826391549)+ sizeof (RuntimeObject), sizeof(LinearWheelsSettings_t3826391549 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2987[3] = 
{
	LinearWheelsSettings_t3826391549::get_offset_of_lift_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LinearWheelsSettings_t3826391549::get_offset_of_gamma_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LinearWheelsSettings_t3826391549::get_offset_of_gain_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2988 = { sizeof (ColorWheelMode_t2900649119)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2988[3] = 
{
	ColorWheelMode_t2900649119::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2989 = { sizeof (ColorWheelsSettings_t3446908827)+ sizeof (RuntimeObject), sizeof(ColorWheelsSettings_t3446908827 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2989[3] = 
{
	ColorWheelsSettings_t3446908827::get_offset_of_mode_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ColorWheelsSettings_t3446908827::get_offset_of_log_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ColorWheelsSettings_t3446908827::get_offset_of_linear_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2990 = { sizeof (CurvesSettings_t3938874345)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2990[13] = 
{
	CurvesSettings_t3938874345::get_offset_of_master_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CurvesSettings_t3938874345::get_offset_of_red_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CurvesSettings_t3938874345::get_offset_of_green_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CurvesSettings_t3938874345::get_offset_of_blue_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CurvesSettings_t3938874345::get_offset_of_hueVShue_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CurvesSettings_t3938874345::get_offset_of_hueVSsat_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CurvesSettings_t3938874345::get_offset_of_satVSsat_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CurvesSettings_t3938874345::get_offset_of_lumVSsat_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CurvesSettings_t3938874345::get_offset_of_e_CurrentEditingCurve_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CurvesSettings_t3938874345::get_offset_of_e_CurveY_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CurvesSettings_t3938874345::get_offset_of_e_CurveR_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CurvesSettings_t3938874345::get_offset_of_e_CurveG_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CurvesSettings_t3938874345::get_offset_of_e_CurveB_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2991 = { sizeof (Settings_t1847667170)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2991[5] = 
{
	Settings_t1847667170::get_offset_of_tonemapping_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1847667170::get_offset_of_basic_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1847667170::get_offset_of_channelMixer_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1847667170::get_offset_of_colorWheels_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1847667170::get_offset_of_curves_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2992 = { sizeof (DepthOfFieldModel_t2862061773), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2992[1] = 
{
	DepthOfFieldModel_t2862061773::get_offset_of_m_Settings_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2993 = { sizeof (KernelSize_t1744797247)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2993[5] = 
{
	KernelSize_t1744797247::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2994 = { sizeof (Settings_t2371698414)+ sizeof (RuntimeObject), sizeof(Settings_t2371698414_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2994[5] = 
{
	Settings_t2371698414::get_offset_of_focusDistance_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t2371698414::get_offset_of_aperture_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t2371698414::get_offset_of_focalLength_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t2371698414::get_offset_of_useCameraFov_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t2371698414::get_offset_of_kernelSize_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2995 = { sizeof (DitheringModel_t2036076075), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2995[1] = 
{
	DitheringModel_t2036076075::get_offset_of_m_Settings_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2996 = { sizeof (Settings_t3994248629)+ sizeof (RuntimeObject), sizeof(Settings_t3994248629 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2997 = { sizeof (EyeAdaptationModel_t3438392253), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2997[1] = 
{
	EyeAdaptationModel_t3438392253::get_offset_of_m_Settings_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2998 = { sizeof (EyeAdaptationType_t3698484466)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2998[3] = 
{
	EyeAdaptationType_t3698484466::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2999 = { sizeof (Settings_t1699529798)+ sizeof (RuntimeObject), sizeof(Settings_t1699529798_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2999[11] = 
{
	Settings_t1699529798::get_offset_of_lowPercent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1699529798::get_offset_of_highPercent_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1699529798::get_offset_of_minLuminance_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1699529798::get_offset_of_maxLuminance_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1699529798::get_offset_of_keyValue_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1699529798::get_offset_of_dynamicKeyValue_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1699529798::get_offset_of_adaptationType_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1699529798::get_offset_of_speedUp_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1699529798::get_offset_of_speedDown_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1699529798::get_offset_of_logMin_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1699529798::get_offset_of_logMax_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
