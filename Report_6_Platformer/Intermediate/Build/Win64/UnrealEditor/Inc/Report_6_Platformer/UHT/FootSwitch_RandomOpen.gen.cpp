// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Report_6_Platformer/Public/FootSwitch_RandomOpen.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootSwitch_RandomOpen() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_AFootSwitch();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_AFootSwitch_RandomOpen();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_AFootSwitch_RandomOpen_NoRegister();
UPackage* Z_Construct_UPackage__Script_Report_6_Platformer();
// End Cross Module References

// Begin Class AFootSwitch_RandomOpen
void AFootSwitch_RandomOpen::StaticRegisterNativesAFootSwitch_RandomOpen()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFootSwitch_RandomOpen);
UClass* Z_Construct_UClass_AFootSwitch_RandomOpen_NoRegister()
{
	return AFootSwitch_RandomOpen::StaticClass();
}
struct Z_Construct_UClass_AFootSwitch_RandomOpen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FootSwitch_RandomOpen.h" },
		{ "ModuleRelativePath", "Public/FootSwitch_RandomOpen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomGenerator_MetaData[] = {
		{ "Category", "Random_FootSwitch" },
		{ "ModuleRelativePath", "Public/FootSwitch_RandomOpen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LEFT_RIGHT_MetaData[] = {
		{ "Category", "Random_FootSwitch" },
		{ "ModuleRelativePath", "Public/FootSwitch_RandomOpen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RandomGenerator;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LEFT_RIGHT;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFootSwitch_RandomOpen>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFootSwitch_RandomOpen_Statics::NewProp_RandomGenerator = { "RandomGenerator", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFootSwitch_RandomOpen, RandomGenerator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomGenerator_MetaData), NewProp_RandomGenerator_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFootSwitch_RandomOpen_Statics::NewProp_LEFT_RIGHT = { "LEFT_RIGHT", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFootSwitch_RandomOpen, LEFT_RIGHT), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LEFT_RIGHT_MetaData), NewProp_LEFT_RIGHT_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFootSwitch_RandomOpen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootSwitch_RandomOpen_Statics::NewProp_RandomGenerator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootSwitch_RandomOpen_Statics::NewProp_LEFT_RIGHT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFootSwitch_RandomOpen_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFootSwitch_RandomOpen_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AFootSwitch,
	(UObject* (*)())Z_Construct_UPackage__Script_Report_6_Platformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFootSwitch_RandomOpen_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFootSwitch_RandomOpen_Statics::ClassParams = {
	&AFootSwitch_RandomOpen::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFootSwitch_RandomOpen_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFootSwitch_RandomOpen_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFootSwitch_RandomOpen_Statics::Class_MetaDataParams), Z_Construct_UClass_AFootSwitch_RandomOpen_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFootSwitch_RandomOpen()
{
	if (!Z_Registration_Info_UClass_AFootSwitch_RandomOpen.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFootSwitch_RandomOpen.OuterSingleton, Z_Construct_UClass_AFootSwitch_RandomOpen_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFootSwitch_RandomOpen.OuterSingleton;
}
template<> REPORT_6_PLATFORMER_API UClass* StaticClass<AFootSwitch_RandomOpen>()
{
	return AFootSwitch_RandomOpen::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFootSwitch_RandomOpen);
AFootSwitch_RandomOpen::~AFootSwitch_RandomOpen() {}
// End Class AFootSwitch_RandomOpen

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_FootSwitch_RandomOpen_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFootSwitch_RandomOpen, AFootSwitch_RandomOpen::StaticClass, TEXT("AFootSwitch_RandomOpen"), &Z_Registration_Info_UClass_AFootSwitch_RandomOpen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFootSwitch_RandomOpen), 2881602711U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_FootSwitch_RandomOpen_h_2535651559(TEXT("/Script/Report_6_Platformer"),
	Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_FootSwitch_RandomOpen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_FootSwitch_RandomOpen_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
