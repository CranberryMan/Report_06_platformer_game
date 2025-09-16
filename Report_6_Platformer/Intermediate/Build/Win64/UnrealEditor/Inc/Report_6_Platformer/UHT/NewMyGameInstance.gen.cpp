// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Report_6_Platformer/Public/NewMyGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewMyGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_UNewMyGameInstance();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_UNewMyGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Report_6_Platformer();
// End Cross Module References

// Begin Class UNewMyGameInstance Function GetCurrentStage
struct Z_Construct_UFunction_UNewMyGameInstance_GetCurrentStage_Statics
{
	struct NewMyGameInstance_eventGetCurrentStage_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Data" },
		{ "ModuleRelativePath", "Public/NewMyGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNewMyGameInstance_GetCurrentStage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NewMyGameInstance_eventGetCurrentStage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNewMyGameInstance_GetCurrentStage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNewMyGameInstance_GetCurrentStage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNewMyGameInstance_GetCurrentStage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewMyGameInstance_GetCurrentStage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewMyGameInstance, nullptr, "GetCurrentStage", nullptr, nullptr, Z_Construct_UFunction_UNewMyGameInstance_GetCurrentStage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewMyGameInstance_GetCurrentStage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNewMyGameInstance_GetCurrentStage_Statics::NewMyGameInstance_eventGetCurrentStage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNewMyGameInstance_GetCurrentStage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNewMyGameInstance_GetCurrentStage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNewMyGameInstance_GetCurrentStage_Statics::NewMyGameInstance_eventGetCurrentStage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNewMyGameInstance_GetCurrentStage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNewMyGameInstance_GetCurrentStage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNewMyGameInstance::execGetCurrentStage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentStage();
	P_NATIVE_END;
}
// End Class UNewMyGameInstance Function GetCurrentStage

// Begin Class UNewMyGameInstance Function SetCurrentStage
struct Z_Construct_UFunction_UNewMyGameInstance_SetCurrentStage_Statics
{
	struct NewMyGameInstance_eventSetCurrentStage_Parms
	{
		int32 NewStage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Data" },
		{ "ModuleRelativePath", "Public/NewMyGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewStage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNewMyGameInstance_SetCurrentStage_Statics::NewProp_NewStage = { "NewStage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NewMyGameInstance_eventSetCurrentStage_Parms, NewStage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNewMyGameInstance_SetCurrentStage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNewMyGameInstance_SetCurrentStage_Statics::NewProp_NewStage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNewMyGameInstance_SetCurrentStage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewMyGameInstance_SetCurrentStage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewMyGameInstance, nullptr, "SetCurrentStage", nullptr, nullptr, Z_Construct_UFunction_UNewMyGameInstance_SetCurrentStage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewMyGameInstance_SetCurrentStage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNewMyGameInstance_SetCurrentStage_Statics::NewMyGameInstance_eventSetCurrentStage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNewMyGameInstance_SetCurrentStage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNewMyGameInstance_SetCurrentStage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNewMyGameInstance_SetCurrentStage_Statics::NewMyGameInstance_eventSetCurrentStage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNewMyGameInstance_SetCurrentStage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNewMyGameInstance_SetCurrentStage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNewMyGameInstance::execSetCurrentStage)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewStage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentStage(Z_Param_NewStage);
	P_NATIVE_END;
}
// End Class UNewMyGameInstance Function SetCurrentStage

// Begin Class UNewMyGameInstance
void UNewMyGameInstance::StaticRegisterNativesUNewMyGameInstance()
{
	UClass* Class = UNewMyGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentStage", &UNewMyGameInstance::execGetCurrentStage },
		{ "SetCurrentStage", &UNewMyGameInstance::execSetCurrentStage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNewMyGameInstance);
UClass* Z_Construct_UClass_UNewMyGameInstance_NoRegister()
{
	return UNewMyGameInstance::StaticClass();
}
struct Z_Construct_UClass_UNewMyGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "NewMyGameInstance.h" },
		{ "ModuleRelativePath", "Public/NewMyGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStage_MetaData[] = {
		{ "Category", "Game Data" },
		{ "ModuleRelativePath", "Public/NewMyGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentStage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNewMyGameInstance_GetCurrentStage, "GetCurrentStage" }, // 3226201983
		{ &Z_Construct_UFunction_UNewMyGameInstance_SetCurrentStage, "SetCurrentStage" }, // 1253038484
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewMyGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNewMyGameInstance_Statics::NewProp_CurrentStage = { "CurrentStage", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNewMyGameInstance, CurrentStage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStage_MetaData), NewProp_CurrentStage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNewMyGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewMyGameInstance_Statics::NewProp_CurrentStage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNewMyGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNewMyGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Report_6_Platformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNewMyGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNewMyGameInstance_Statics::ClassParams = {
	&UNewMyGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNewMyGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNewMyGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNewMyGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UNewMyGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNewMyGameInstance()
{
	if (!Z_Registration_Info_UClass_UNewMyGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNewMyGameInstance.OuterSingleton, Z_Construct_UClass_UNewMyGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNewMyGameInstance.OuterSingleton;
}
template<> REPORT_6_PLATFORMER_API UClass* StaticClass<UNewMyGameInstance>()
{
	return UNewMyGameInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNewMyGameInstance);
// End Class UNewMyGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_NewMyGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNewMyGameInstance, UNewMyGameInstance::StaticClass, TEXT("UNewMyGameInstance"), &Z_Registration_Info_UClass_UNewMyGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNewMyGameInstance), 3281590697U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_NewMyGameInstance_h_2689753851(TEXT("/Script/Report_6_Platformer"),
	Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_NewMyGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_NewMyGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
