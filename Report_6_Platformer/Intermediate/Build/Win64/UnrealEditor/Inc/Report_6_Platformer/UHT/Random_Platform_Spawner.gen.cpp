// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Report_6_Platformer/Public/Random_Platform_Spawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandom_Platform_Spawner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_ARandom_Platform_Spawner();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_ARandom_Platform_Spawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_Report_6_Platformer();
// End Cross Module References

// Begin Class ARandom_Platform_Spawner
void ARandom_Platform_Spawner::StaticRegisterNativesARandom_Platform_Spawner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARandom_Platform_Spawner);
UClass* Z_Construct_UClass_ARandom_Platform_Spawner_NoRegister()
{
	return ARandom_Platform_Spawner::StaticClass();
}
struct Z_Construct_UClass_ARandom_Platform_Spawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Random_Platform_Spawner.h" },
		{ "ModuleRelativePath", "Public/Random_Platform_Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawn_MetaData[] = {
		{ "Category", "Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Random_Platform_Spawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfActorsToSpawn_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Random_Platform_Spawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XRange_MetaData[] = {
		{ "Category", "Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd x, y \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd +-x, +-y)\n" },
#endif
		{ "ModuleRelativePath", "Public/Random_Platform_Spawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd x, y \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd +-x, +-y)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YRange_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/Random_Platform_Spawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorToSpawn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfActorsToSpawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_XRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARandom_Platform_Spawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARandom_Platform_Spawner_Statics::NewProp_ActorToSpawn = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandom_Platform_Spawner, ActorToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorToSpawn_MetaData), NewProp_ActorToSpawn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARandom_Platform_Spawner_Statics::NewProp_NumberOfActorsToSpawn = { "NumberOfActorsToSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandom_Platform_Spawner, NumberOfActorsToSpawn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfActorsToSpawn_MetaData), NewProp_NumberOfActorsToSpawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARandom_Platform_Spawner_Statics::NewProp_XRange = { "XRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandom_Platform_Spawner, XRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XRange_MetaData), NewProp_XRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARandom_Platform_Spawner_Statics::NewProp_YRange = { "YRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandom_Platform_Spawner, YRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YRange_MetaData), NewProp_YRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARandom_Platform_Spawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandom_Platform_Spawner_Statics::NewProp_ActorToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandom_Platform_Spawner_Statics::NewProp_NumberOfActorsToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandom_Platform_Spawner_Statics::NewProp_XRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandom_Platform_Spawner_Statics::NewProp_YRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARandom_Platform_Spawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARandom_Platform_Spawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Report_6_Platformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARandom_Platform_Spawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARandom_Platform_Spawner_Statics::ClassParams = {
	&ARandom_Platform_Spawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARandom_Platform_Spawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARandom_Platform_Spawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARandom_Platform_Spawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ARandom_Platform_Spawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARandom_Platform_Spawner()
{
	if (!Z_Registration_Info_UClass_ARandom_Platform_Spawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARandom_Platform_Spawner.OuterSingleton, Z_Construct_UClass_ARandom_Platform_Spawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARandom_Platform_Spawner.OuterSingleton;
}
template<> REPORT_6_PLATFORMER_API UClass* StaticClass<ARandom_Platform_Spawner>()
{
	return ARandom_Platform_Spawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARandom_Platform_Spawner);
ARandom_Platform_Spawner::~ARandom_Platform_Spawner() {}
// End Class ARandom_Platform_Spawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_Random_Platform_Spawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARandom_Platform_Spawner, ARandom_Platform_Spawner::StaticClass, TEXT("ARandom_Platform_Spawner"), &Z_Registration_Info_UClass_ARandom_Platform_Spawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARandom_Platform_Spawner), 2370910577U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_Random_Platform_Spawner_h_3832139079(TEXT("/Script/Report_6_Platformer"),
	Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_Random_Platform_Spawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_Random_Platform_Spawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
