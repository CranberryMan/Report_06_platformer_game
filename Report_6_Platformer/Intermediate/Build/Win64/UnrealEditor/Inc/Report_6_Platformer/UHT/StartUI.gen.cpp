// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Report_6_Platformer/Public/StartUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartUI() {}

// Begin Cross Module References
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_UStartUI();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_UStartUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Report_6_Platformer();
// End Cross Module References

// Begin Class UStartUI Function OnExit
struct Z_Construct_UFunction_UStartUI_OnExit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StartUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStartUI_OnExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStartUI, nullptr, "OnExit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStartUI_OnExit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStartUI_OnExit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStartUI_OnExit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStartUI_OnExit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStartUI::execOnExit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnExit();
	P_NATIVE_END;
}
// End Class UStartUI Function OnExit

// Begin Class UStartUI Function OnGameStart
struct Z_Construct_UFunction_UStartUI_OnGameStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StartUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStartUI_OnGameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStartUI, nullptr, "OnGameStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStartUI_OnGameStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStartUI_OnGameStart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStartUI_OnGameStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStartUI_OnGameStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStartUI::execOnGameStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGameStart();
	P_NATIVE_END;
}
// End Class UStartUI Function OnGameStart

// Begin Class UStartUI
void UStartUI::StaticRegisterNativesUStartUI()
{
	UClass* Class = UStartUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnExit", &UStartUI::execOnExit },
		{ "OnGameStart", &UStartUI::execOnGameStart },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStartUI);
UClass* Z_Construct_UClass_UStartUI_NoRegister()
{
	return UStartUI::StaticClass();
}
struct Z_Construct_UClass_UStartUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StartUI.h" },
		{ "ModuleRelativePath", "Public/StartUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StartUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Exit_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StartUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Exit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStartUI_OnExit, "OnExit" }, // 2851033873
		{ &Z_Construct_UFunction_UStartUI_OnGameStart, "OnGameStart" }, // 1909552591
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStartUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStartUI_Statics::NewProp_StartButton = { "StartButton", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStartUI, StartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartButton_MetaData), NewProp_StartButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStartUI_Statics::NewProp_Exit = { "Exit", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStartUI, Exit), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Exit_MetaData), NewProp_Exit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStartUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStartUI_Statics::NewProp_StartButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStartUI_Statics::NewProp_Exit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStartUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStartUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Report_6_Platformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStartUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStartUI_Statics::ClassParams = {
	&UStartUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStartUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStartUI_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStartUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UStartUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStartUI()
{
	if (!Z_Registration_Info_UClass_UStartUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStartUI.OuterSingleton, Z_Construct_UClass_UStartUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStartUI.OuterSingleton;
}
template<> REPORT_6_PLATFORMER_API UClass* StaticClass<UStartUI>()
{
	return UStartUI::StaticClass();
}
UStartUI::UStartUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStartUI);
UStartUI::~UStartUI() {}
// End Class UStartUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_StartUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStartUI, UStartUI::StaticClass, TEXT("UStartUI"), &Z_Registration_Info_UClass_UStartUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStartUI), 2036013695U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_StartUI_h_554483512(TEXT("/Script/Report_6_Platformer"),
	Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_StartUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_StartUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
