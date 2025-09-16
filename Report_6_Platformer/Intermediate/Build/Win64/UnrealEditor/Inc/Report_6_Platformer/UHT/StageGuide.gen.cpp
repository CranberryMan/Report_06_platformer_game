// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Report_6_Platformer/Public/StageGuide.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStageGuide() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_AStageGuide();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_AStageGuide_NoRegister();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_UNewMyGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Report_6_Platformer();
// End Cross Module References

// Begin Class AStageGuide
void AStageGuide::StaticRegisterNativesAStageGuide()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStageGuide);
UClass* Z_Construct_UClass_AStageGuide_NoRegister()
{
	return AStageGuide::StaticClass();
}
struct Z_Construct_UClass_AStageGuide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StageGuide.h" },
		{ "ModuleRelativePath", "Public/StageGuide.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StageGuide.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_showStage_MetaData[] = {
		{ "Category", "Stage" },
		{ "ModuleRelativePath", "Public/StageGuide.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyGameInstanceRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/StageGuide.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_showStage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyGameInstanceRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStageGuide>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStageGuide_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStageGuide, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AStageGuide_Statics::NewProp_showStage = { "showStage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStageGuide, showStage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_showStage_MetaData), NewProp_showStage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStageGuide_Statics::NewProp_MyGameInstanceRef = { "MyGameInstanceRef", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStageGuide, MyGameInstanceRef), Z_Construct_UClass_UNewMyGameInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyGameInstanceRef_MetaData), NewProp_MyGameInstanceRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStageGuide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStageGuide_Statics::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStageGuide_Statics::NewProp_showStage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStageGuide_Statics::NewProp_MyGameInstanceRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStageGuide_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AStageGuide_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Report_6_Platformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStageGuide_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStageGuide_Statics::ClassParams = {
	&AStageGuide::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AStageGuide_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AStageGuide_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStageGuide_Statics::Class_MetaDataParams), Z_Construct_UClass_AStageGuide_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStageGuide()
{
	if (!Z_Registration_Info_UClass_AStageGuide.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStageGuide.OuterSingleton, Z_Construct_UClass_AStageGuide_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStageGuide.OuterSingleton;
}
template<> REPORT_6_PLATFORMER_API UClass* StaticClass<AStageGuide>()
{
	return AStageGuide::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStageGuide);
AStageGuide::~AStageGuide() {}
// End Class AStageGuide

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_StageGuide_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStageGuide, AStageGuide::StaticClass, TEXT("AStageGuide"), &Z_Registration_Info_UClass_AStageGuide, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStageGuide), 3965621324U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_StageGuide_h_1666106260(TEXT("/Script/Report_6_Platformer"),
	Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_StageGuide_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_StageGuide_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
