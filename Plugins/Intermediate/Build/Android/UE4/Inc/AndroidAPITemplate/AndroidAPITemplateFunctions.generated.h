// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANDROIDAPITEMPLATE_AndroidAPITemplateFunctions_generated_h
#error "AndroidAPITemplateFunctions.generated.h already included, missing '#pragma once' in AndroidAPITemplateFunctions.h"
#endif
#define ANDROIDAPITEMPLATE_AndroidAPITemplateFunctions_generated_h

#define CovidProject_Plugins_AndroidAPITemplate_Source_AndroidAPITemplate_Classes_AndroidAPITemplateFunctions_h_9_SPARSE_DATA
#define CovidProject_Plugins_AndroidAPITemplate_Source_AndroidAPITemplate_Classes_AndroidAPITemplateFunctions_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAndroidAPITemplate_GetLastLightMeasure) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UAndroidAPITemplateFunctions::AndroidAPITemplate_GetLastLightMeasure(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAndroidAPITemplate_ShowToast) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAndroidAPITemplateFunctions::AndroidAPITemplate_ShowToast(Z_Param_Content); \
		P_NATIVE_END; \
	}


#define CovidProject_Plugins_AndroidAPITemplate_Source_AndroidAPITemplate_Classes_AndroidAPITemplateFunctions_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAndroidAPITemplate_GetLastLightMeasure) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UAndroidAPITemplateFunctions::AndroidAPITemplate_GetLastLightMeasure(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAndroidAPITemplate_ShowToast) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAndroidAPITemplateFunctions::AndroidAPITemplate_ShowToast(Z_Param_Content); \
		P_NATIVE_END; \
	}


#define CovidProject_Plugins_AndroidAPITemplate_Source_AndroidAPITemplate_Classes_AndroidAPITemplateFunctions_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidAPITemplateFunctions(); \
	friend struct Z_Construct_UClass_UAndroidAPITemplateFunctions_Statics; \
public: \
	DECLARE_CLASS(UAndroidAPITemplateFunctions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidAPITemplate"), NO_API) \
	DECLARE_SERIALIZER(UAndroidAPITemplateFunctions)


#define CovidProject_Plugins_AndroidAPITemplate_Source_AndroidAPITemplate_Classes_AndroidAPITemplateFunctions_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUAndroidAPITemplateFunctions(); \
	friend struct Z_Construct_UClass_UAndroidAPITemplateFunctions_Statics; \
public: \
	DECLARE_CLASS(UAndroidAPITemplateFunctions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidAPITemplate"), NO_API) \
	DECLARE_SERIALIZER(UAndroidAPITemplateFunctions)


#define CovidProject_Plugins_AndroidAPITemplate_Source_AndroidAPITemplate_Classes_AndroidAPITemplateFunctions_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidAPITemplateFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidAPITemplateFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidAPITemplateFunctions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidAPITemplateFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAndroidAPITemplateFunctions(UAndroidAPITemplateFunctions&&); \
	NO_API UAndroidAPITemplateFunctions(const UAndroidAPITemplateFunctions&); \
public:


#define CovidProject_Plugins_AndroidAPITemplate_Source_AndroidAPITemplate_Classes_AndroidAPITemplateFunctions_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidAPITemplateFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAndroidAPITemplateFunctions(UAndroidAPITemplateFunctions&&); \
	NO_API UAndroidAPITemplateFunctions(const UAndroidAPITemplateFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidAPITemplateFunctions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidAPITemplateFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidAPITemplateFunctions)


#define CovidProject_Plugins_AndroidAPITemplate_Source_AndroidAPITemplate_Classes_AndroidAPITemplateFunctions_h_9_PRIVATE_PROPERTY_OFFSET
#define CovidProject_Plugins_AndroidAPITemplate_Source_AndroidAPITemplate_Classes_AndroidAPITemplateFunctions_h_7_PROLOG
#define CovidProject_Plugins_AndroidAPITemplate_Source_AndroidAPITemplate_Classes_AndroidAPITemplateFunctions_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CovidProject_Plugins_AndroidAPITemplate_Source_AndroidAPITemplate_Classes_AndroidAPITemplateFunctions_h_9_PRIVATE_PROPERTY_OFFSET \
	CovidProject_Plugins_AndroidAPITemplate_Source_AndroidAPITemplate_Classes_AndroidAPITemplateFunctions_h_9_SPARSE_DATA \
	CovidProject_Plugins_AndroidAPITemplate_Source_AndroidAPITemplate_Classes_AndroidAPITemplateFunctions_h_9_RPC_WRAPPERS \
	CovidProject_Plugins_AndroidAPITemplate_Source_AndroidAPITemplate_Classes_AndroidAPITemplateFunctions_h_9_INCLASS \
	CovidProject_Plugins_AndroidAPITemplate_Source_AndroidAPITemplate_Classes_AndroidAPITemplateFunctions_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CovidProject_Plugins_AndroidAPITemplate_Source_AndroidAPITemplate_Classes_AndroidAPITemplateFunctions_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CovidProject_Plugins_AndroidAPITemplate_Source_AndroidAPITemplate_Classes_AndroidAPITemplateFunctions_h_9_PRIVATE_PROPERTY_OFFSET \
	CovidProject_Plugins_AndroidAPITemplate_Source_AndroidAPITemplate_Classes_AndroidAPITemplateFunctions_h_9_SPARSE_DATA \
	CovidProject_Plugins_AndroidAPITemplate_Source_AndroidAPITemplate_Classes_AndroidAPITemplateFunctions_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	CovidProject_Plugins_AndroidAPITemplate_Source_AndroidAPITemplate_Classes_AndroidAPITemplateFunctions_h_9_INCLASS_NO_PURE_DECLS \
	CovidProject_Plugins_AndroidAPITemplate_Source_AndroidAPITemplate_Classes_AndroidAPITemplateFunctions_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANDROIDAPITEMPLATE_API UClass* StaticClass<class UAndroidAPITemplateFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CovidProject_Plugins_AndroidAPITemplate_Source_AndroidAPITemplate_Classes_AndroidAPITemplateFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
