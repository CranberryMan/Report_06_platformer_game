// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Report_6_Platformer/Public/NewMyMainGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewMyMainGameMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_ANewMyMainGameMode();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_ANewMyMainGameMode_NoRegister();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_UNewMoveStageWidget_NoRegister();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_UNewMyGameInstance_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Report_6_Platformer();
// End Cross Module References

// Begin Class ANewMyMainGameMode Function ShowFadeOutWidget
struct Z_Construct_UFunction_ANewMyMainGameMode_ShowFadeOutWidget_Statics
{
	struct NewMyMainGameMode_eventShowFadeOutWidget_Parms
	{
		FString StageName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NewMyMainGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StageName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANewMyMainGameMode_ShowFadeOutWidget_Statics::NewProp_StageName = { "StageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NewMyMainGameMode_eventShowFadeOutWidget_Parms, StageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StageName_MetaData), NewProp_StageName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANewMyMainGameMode_ShowFadeOutWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANewMyMainGameMode_ShowFadeOutWidget_Statics::NewProp_StageName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANewMyMainGameMode_ShowFadeOutWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANewMyMainGameMode_ShowFadeOutWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANewMyMainGameMode, nullptr, "ShowFadeOutWidget", nullptr, nullptr, Z_Construct_UFunction_ANewMyMainGameMode_ShowFadeOutWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewMyMainGameMode_ShowFadeOutWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANewMyMainGameMode_ShowFadeOutWidget_Statics::NewMyMainGameMode_eventShowFadeOutWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANewMyMainGameMode_ShowFadeOutWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANewMyMainGameMode_ShowFadeOutWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANewMyMainGameMode_ShowFadeOutWidget_Statics::NewMyMainGameMode_eventShowFadeOutWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANewMyMainGameMode_ShowFadeOutWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANewMyMainGameMode_ShowFadeOutWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANewMyMainGameMode::execShowFadeOutWidget)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StageName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowFadeOutWidget(Z_Param_StageName);
	P_NATIVE_END;
}
// End Class ANewMyMainGameMode Function ShowFadeOutWidget

// Begin Class ANewMyMainGameMode
void ANewMyMainGameMode::StaticRegisterNativesANewMyMainGameMode()
{
	UClass* Class = ANewMyMainGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ShowFadeOutWidget", &ANewMyMainGameMode::execShowFadeOutWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANewMyMainGameMode);
UClass* Z_Construct_UClass_ANewMyMainGameMode_NoRegister()
{
	return ANewMyMainGameMode::StaticClass();
}
struct Z_Construct_UClass_ANewMyMainGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NewMyMainGameMode.h" },
		{ "ModuleRelativePath", "Public/NewMyMainGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[] = {
		{ "Category", "NewMyMainGameMode" },
		{ "ModuleRelativePath", "Public/NewMyMainGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveStageWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NewMyMainGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyGameInstance_MetaData[] = {
		{ "Category", "NewMyMainGameMode" },
		{ "ModuleRelativePath", "Public/NewMyMainGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveStageWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyGameInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANewMyMainGameMode_ShowFadeOutWidget, "ShowFadeOutWidget" }, // 4218218995
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANewMyMainGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANewMyMainGameMode_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewMyMainGameMode, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetClass_MetaData), NewProp_WidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewMyMainGameMode_Statics::NewProp_MoveStageWidget = { "MoveStageWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewMyMainGameMode, MoveStageWidget), Z_Construct_UClass_UNewMoveStageWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveStageWidget_MetaData), NewProp_MoveStageWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewMyMainGameMode_Statics::NewProp_MyGameInstance = { "MyGameInstance", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewMyMainGameMode, MyGameInstance), Z_Construct_UClass_UNewMyGameInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyGameInstance_MetaData), NewProp_MyGameInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANewMyMainGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewMyMainGameMode_Statics::NewProp_WidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewMyMainGameMode_Statics::NewProp_MoveStageWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewMyMainGameMode_Statics::NewProp_MyGameInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANewMyMainGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANewMyMainGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Report_6_Platformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANewMyMainGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANewMyMainGameMode_Statics::ClassParams = {
	&ANewMyMainGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANewMyMainGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANewMyMainGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANewMyMainGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANewMyMainGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANewMyMainGameMode()
{
	if (!Z_Registration_Info_UClass_ANewMyMainGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANewMyMainGameMode.OuterSingleton, Z_Construct_UClass_ANewMyMainGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANewMyMainGameMode.OuterSingleton;
}
template<> REPORT_6_PLATFORMER_API UClass* StaticClass<ANewMyMainGameMode>()
{
	return ANewMyMainGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANewMyMainGameMode);
// End Class ANewMyMainGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Report_6_Platformer_Source_Report_6_Platformer_Public_NewMyMainGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANewMyMainGameMode, ANewMyMainGameMode::StaticClass, TEXT("ANewMyMainGameMode"), &Z_Registration_Info_UClass_ANewMyMainGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANewMyMainGameMode), 3765378862U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Report_6_Platformer_Source_Report_6_Platformer_Public_NewMyMainGameMode_h_3843814015(TEXT("/Script/Report_6_Platformer"),
	Z_CompiledInDeferFile_FID_Unreal_Project_Report_6_Platformer_Source_Report_6_Platformer_Public_NewMyMainGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Report_6_Platformer_Source_Report_6_Platformer_Public_NewMyMainGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
