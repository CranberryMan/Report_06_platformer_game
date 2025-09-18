// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Report_6_Platformer/Public/StartGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartGameMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_AStartGameMode();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_AStartGameMode_NoRegister();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_UNewMyGameInstance_NoRegister();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_UStartUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Report_6_Platformer();
// End Cross Module References

// Begin Class AStartGameMode
void AStartGameMode::StaticRegisterNativesAStartGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStartGameMode);
UClass* Z_Construct_UClass_AStartGameMode_NoRegister()
{
	return AStartGameMode::StaticClass();
}
struct Z_Construct_UClass_AStartGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "StartGameMode.h" },
		{ "ModuleRelativePath", "Public/StartGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartUIClass_MetaData[] = {
		{ "Category", "StartGameMode" },
		{ "ModuleRelativePath", "Public/StartGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StartGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyGameInstance_MetaData[] = {
		{ "Category", "StartGameMode" },
		{ "ModuleRelativePath", "Public/StartGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_StartUIClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartUI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyGameInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStartGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStartGameMode_Statics::NewProp_StartUIClass = { "StartUIClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStartGameMode, StartUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartUIClass_MetaData), NewProp_StartUIClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStartGameMode_Statics::NewProp_StartUI = { "StartUI", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStartGameMode, StartUI), Z_Construct_UClass_UStartUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartUI_MetaData), NewProp_StartUI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStartGameMode_Statics::NewProp_MyGameInstance = { "MyGameInstance", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStartGameMode, MyGameInstance), Z_Construct_UClass_UNewMyGameInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyGameInstance_MetaData), NewProp_MyGameInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStartGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStartGameMode_Statics::NewProp_StartUIClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStartGameMode_Statics::NewProp_StartUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStartGameMode_Statics::NewProp_MyGameInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStartGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AStartGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Report_6_Platformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStartGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStartGameMode_Statics::ClassParams = {
	&AStartGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AStartGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AStartGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStartGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AStartGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStartGameMode()
{
	if (!Z_Registration_Info_UClass_AStartGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStartGameMode.OuterSingleton, Z_Construct_UClass_AStartGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStartGameMode.OuterSingleton;
}
template<> REPORT_6_PLATFORMER_API UClass* StaticClass<AStartGameMode>()
{
	return AStartGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStartGameMode);
AStartGameMode::~AStartGameMode() {}
// End Class AStartGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_StartGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStartGameMode, AStartGameMode::StaticClass, TEXT("AStartGameMode"), &Z_Registration_Info_UClass_AStartGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStartGameMode), 1908442263U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_StartGameMode_h_544064740(TEXT("/Script/Report_6_Platformer"),
	Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_StartGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_StartGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
