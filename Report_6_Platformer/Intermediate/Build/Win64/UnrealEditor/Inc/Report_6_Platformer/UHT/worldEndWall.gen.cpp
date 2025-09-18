// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Report_6_Platformer/Public/worldEndWall.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeworldEndWall() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_AworldEndWall();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_AworldEndWall_NoRegister();
UPackage* Z_Construct_UPackage__Script_Report_6_Platformer();
// End Cross Module References

// Begin Class AworldEndWall
void AworldEndWall::StaticRegisterNativesAworldEndWall()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AworldEndWall);
UClass* Z_Construct_UClass_AworldEndWall_NoRegister()
{
	return AworldEndWall::StaticClass();
}
struct Z_Construct_UClass_AworldEndWall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "worldEndWall.h" },
		{ "ModuleRelativePath", "Public/worldEndWall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[] = {
		{ "Category", "WALL_COMPONENTS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/worldEndWall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_myCharacter_MetaData[] = {
		{ "Category", "ATrapSphere_Settings" },
		{ "ModuleRelativePath", "Public/worldEndWall.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
	static const UECodeGen_Private::FClassPropertyParams NewProp_myCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AworldEndWall>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AworldEndWall_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AworldEndWall, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerBox_MetaData), NewProp_TriggerBox_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AworldEndWall_Statics::NewProp_myCharacter = { "myCharacter", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AworldEndWall, myCharacter), Z_Construct_UClass_UClass, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_myCharacter_MetaData), NewProp_myCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AworldEndWall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AworldEndWall_Statics::NewProp_TriggerBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AworldEndWall_Statics::NewProp_myCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AworldEndWall_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AworldEndWall_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Report_6_Platformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AworldEndWall_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AworldEndWall_Statics::ClassParams = {
	&AworldEndWall::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AworldEndWall_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AworldEndWall_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AworldEndWall_Statics::Class_MetaDataParams), Z_Construct_UClass_AworldEndWall_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AworldEndWall()
{
	if (!Z_Registration_Info_UClass_AworldEndWall.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AworldEndWall.OuterSingleton, Z_Construct_UClass_AworldEndWall_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AworldEndWall.OuterSingleton;
}
template<> REPORT_6_PLATFORMER_API UClass* StaticClass<AworldEndWall>()
{
	return AworldEndWall::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AworldEndWall);
AworldEndWall::~AworldEndWall() {}
// End Class AworldEndWall

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_worldEndWall_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AworldEndWall, AworldEndWall::StaticClass, TEXT("AworldEndWall"), &Z_Registration_Info_UClass_AworldEndWall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AworldEndWall), 2971882066U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_worldEndWall_h_1104402414(TEXT("/Script/Report_6_Platformer"),
	Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_worldEndWall_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_worldEndWall_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
