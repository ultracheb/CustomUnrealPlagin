// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidAPITemplate/Classes/AndroidAPITemplateFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidAPITemplateFunctions() {}
// Cross Module References
	ANDROIDAPITEMPLATE_API UClass* Z_Construct_UClass_UAndroidAPITemplateFunctions_NoRegister();
	ANDROIDAPITEMPLATE_API UClass* Z_Construct_UClass_UAndroidAPITemplateFunctions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AndroidAPITemplate();
	ANDROIDAPITEMPLATE_API UFunction* Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_GetLastLightMeasure();
	ANDROIDAPITEMPLATE_API UFunction* Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_ShowToast();
// End Cross Module References
	void UAndroidAPITemplateFunctions::StaticRegisterNativesUAndroidAPITemplateFunctions()
	{
		UClass* Class = UAndroidAPITemplateFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AndroidAPITemplate_GetLastLightMeasure", &UAndroidAPITemplateFunctions::execAndroidAPITemplate_GetLastLightMeasure },
			{ "AndroidAPITemplate_ShowToast", &UAndroidAPITemplateFunctions::execAndroidAPITemplate_ShowToast },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_GetLastLightMeasure_Statics
	{
		struct AndroidAPITemplateFunctions_eventAndroidAPITemplate_GetLastLightMeasure_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_GetLastLightMeasure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AndroidAPITemplateFunctions_eventAndroidAPITemplate_GetLastLightMeasure_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_GetLastLightMeasure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_GetLastLightMeasure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_GetLastLightMeasure_Statics::Function_MetaDataParams[] = {
		{ "Category", "AndroidAPI" },
		{ "DisplayName", "Get Last Light Measure" },
		{ "Keywords", "AndroidAPI" },
		{ "ModuleRelativePath", "Classes/AndroidAPITemplateFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_GetLastLightMeasure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAndroidAPITemplateFunctions, nullptr, "AndroidAPITemplate_GetLastLightMeasure", nullptr, nullptr, sizeof(AndroidAPITemplateFunctions_eventAndroidAPITemplate_GetLastLightMeasure_Parms), Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_GetLastLightMeasure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_GetLastLightMeasure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_GetLastLightMeasure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_GetLastLightMeasure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_GetLastLightMeasure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_GetLastLightMeasure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_ShowToast_Statics
	{
		struct AndroidAPITemplateFunctions_eventAndroidAPITemplate_ShowToast_Parms
		{
			FString Content;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_ShowToast_Statics::NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_ShowToast_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AndroidAPITemplateFunctions_eventAndroidAPITemplate_ShowToast_Parms, Content), METADATA_PARAMS(Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_ShowToast_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_ShowToast_Statics::NewProp_Content_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_ShowToast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_ShowToast_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_ShowToast_Statics::Function_MetaDataParams[] = {
		{ "Category", "AndroidAPI" },
		{ "Comment", "/**\n\x09 * Displays a toast text on the screen\n\x09 */" },
		{ "DisplayName", "Show Toast" },
		{ "Keywords", "AndroidAPI" },
		{ "ModuleRelativePath", "Classes/AndroidAPITemplateFunctions.h" },
		{ "ToolTip", "Displays a toast text on the screen" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_ShowToast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAndroidAPITemplateFunctions, nullptr, "AndroidAPITemplate_ShowToast", nullptr, nullptr, sizeof(AndroidAPITemplateFunctions_eventAndroidAPITemplate_ShowToast_Parms), Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_ShowToast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_ShowToast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_ShowToast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_ShowToast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_ShowToast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_ShowToast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAndroidAPITemplateFunctions_NoRegister()
	{
		return UAndroidAPITemplateFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UAndroidAPITemplateFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAndroidAPITemplateFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidAPITemplate,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAndroidAPITemplateFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_GetLastLightMeasure, "AndroidAPITemplate_GetLastLightMeasure" }, // 485529373
		{ &Z_Construct_UFunction_UAndroidAPITemplateFunctions_AndroidAPITemplate_ShowToast, "AndroidAPITemplate_ShowToast" }, // 2096788049
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidAPITemplateFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AndroidAPITemplateFunctions.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/AndroidAPITemplateFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAndroidAPITemplateFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidAPITemplateFunctions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAndroidAPITemplateFunctions_Statics::ClassParams = {
		&UAndroidAPITemplateFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAndroidAPITemplateFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidAPITemplateFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAndroidAPITemplateFunctions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAndroidAPITemplateFunctions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAndroidAPITemplateFunctions, 1033899927);
	template<> ANDROIDAPITEMPLATE_API UClass* StaticClass<UAndroidAPITemplateFunctions>()
	{
		return UAndroidAPITemplateFunctions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAndroidAPITemplateFunctions(Z_Construct_UClass_UAndroidAPITemplateFunctions, &UAndroidAPITemplateFunctions::StaticClass, TEXT("/Script/AndroidAPITemplate"), TEXT("UAndroidAPITemplateFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidAPITemplateFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
