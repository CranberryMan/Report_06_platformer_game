// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Report_6_Platformer/Public/NewLevelTransferVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewLevelTransferVolume() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_ANewLevelTransferVolume();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_ANewLevelTransferVolume_NoRegister();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_UNewMyGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Report_6_Platformer();
// End Cross Module References

// Begin Class ANewLevelTransferVolume
void ANewLevelTransferVolume::StaticRegisterNativesANewLevelTransferVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANewLevelTransferVolume);
UClass* Z_Construct_UClass_ANewLevelTransferVolume_NoRegister()
{
	return ANewLevelTransferVolume::StaticClass();
}
struct Z_Construct_UClass_ANewLevelTransferVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NewLevelTransferVolume.h" },
		{ "ModuleRelativePath", "Public/NewLevelTransferVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_myCharacter_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "Public/NewLevelTransferVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransferLevelName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NewLevelTransferVolume" },
		{ "ModuleRelativePath", "Public/NewLevelTransferVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransferVolume_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NewLevelTransferVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StageIndex_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NewLevelTransferVolume" },
		{ "ModuleRelativePath", "Public/NewLevelTransferVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_showStage_MetaData[] = {
		{ "Category", "Stage" },
		{ "ModuleRelativePath", "Public/NewLevelTransferVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyGameInstanceRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewLevelTransferVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraEffectComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NewLevelTransferVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_myCharacter;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TransferLevelName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransferVolume;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StageIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_showStage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyGameInstanceRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraEffectComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANewLevelTransferVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANewLevelTransferVolume_Statics::NewProp_myCharacter = { "myCharacter", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewLevelTransferVolume, myCharacter), Z_Construct_UClass_UClass, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_myCharacter_MetaData), NewProp_myCharacter_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANewLevelTransferVolume_Statics::NewProp_TransferLevelName = { "TransferLevelName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewLevelTransferVolume, TransferLevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransferLevelName_MetaData), NewProp_TransferLevelName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewLevelTransferVolume_Statics::NewProp_TransferVolume = { "TransferVolume", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewLevelTransferVolume, TransferVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransferVolume_MetaData), NewProp_TransferVolume_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANewLevelTransferVolume_Statics::NewProp_StageIndex = { "StageIndex", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewLevelTransferVolume, StageIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StageIndex_MetaData), NewProp_StageIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANewLevelTransferVolume_Statics::NewProp_showStage = { "showStage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewLevelTransferVolume, showStage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_showStage_MetaData), NewProp_showStage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewLevelTransferVolume_Statics::NewProp_MyGameInstanceRef = { "MyGameInstanceRef", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewLevelTransferVolume, MyGameInstanceRef), Z_Construct_UClass_UNewMyGameInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyGameInstanceRef_MetaData), NewProp_MyGameInstanceRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewLevelTransferVolume_Statics::NewProp_NiagaraEffectComponent = { "NiagaraEffectComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewLevelTransferVolume, NiagaraEffectComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraEffectComponent_MetaData), NewProp_NiagaraEffectComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANewLevelTransferVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewLevelTransferVolume_Statics::NewProp_myCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewLevelTransferVolume_Statics::NewProp_TransferLevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewLevelTransferVolume_Statics::NewProp_TransferVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewLevelTransferVolume_Statics::NewProp_StageIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewLevelTransferVolume_Statics::NewProp_showStage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewLevelTransferVolume_Statics::NewProp_MyGameInstanceRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewLevelTransferVolume_Statics::NewProp_NiagaraEffectComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANewLevelTransferVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANewLevelTransferVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Report_6_Platformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANewLevelTransferVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANewLevelTransferVolume_Statics::ClassParams = {
	&ANewLevelTransferVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANewLevelTransferVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANewLevelTransferVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANewLevelTransferVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ANewLevelTransferVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANewLevelTransferVolume()
{
	if (!Z_Registration_Info_UClass_ANewLevelTransferVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANewLevelTransferVolume.OuterSingleton, Z_Construct_UClass_ANewLevelTransferVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANewLevelTransferVolume.OuterSingleton;
}
template<> REPORT_6_PLATFORMER_API UClass* StaticClass<ANewLevelTransferVolume>()
{
	return ANewLevelTransferVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANewLevelTransferVolume);
ANewLevelTransferVolume::~ANewLevelTransferVolume() {}
// End Class ANewLevelTransferVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_NewLevelTransferVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANewLevelTransferVolume, ANewLevelTransferVolume::StaticClass, TEXT("ANewLevelTransferVolume"), &Z_Registration_Info_UClass_ANewLevelTransferVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANewLevelTransferVolume), 2552090761U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_NewLevelTransferVolume_h_814337917(TEXT("/Script/Report_6_Platformer"),
	Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_NewLevelTransferVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_NewLevelTransferVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
