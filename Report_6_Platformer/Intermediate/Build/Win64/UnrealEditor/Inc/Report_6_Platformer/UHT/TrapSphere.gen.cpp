// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Report_6_Platformer/Public/TrapSphere.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrapSphere() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_ATrapSphere();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_ATrapSphere_NoRegister();
UPackage* Z_Construct_UPackage__Script_Report_6_Platformer();
// End Cross Module References

// Begin Class ATrapSphere
void ATrapSphere::StaticRegisterNativesATrapSphere()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATrapSphere);
UClass* Z_Construct_UClass_ATrapSphere_NoRegister()
{
	return ATrapSphere::StaticClass();
}
struct Z_Construct_UClass_ATrapSphere_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TrapSphere.h" },
		{ "ModuleRelativePath", "Public/TrapSphere.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "ATrapSphere_Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TrapSphere.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_myCharacter_MetaData[] = {
		{ "Category", "ATrapSphere_Settings" },
		{ "ModuleRelativePath", "Public/TrapSphere.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitPower_MetaData[] = {
		{ "Category", "ATrapSphere_Settings" },
		{ "ModuleRelativePath", "Public/TrapSphere.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSphere_MetaData[] = {
		{ "Category", "ATrapSphere_Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TrapSphere.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyRadius_MetaData[] = {
		{ "Category", "ATrapSphere_Settings" },
		{ "ModuleRelativePath", "Public/TrapSphere.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_myCharacter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitPower;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionSphere;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MyRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrapSphere>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrapSphere_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrapSphere, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATrapSphere_Statics::NewProp_myCharacter = { "myCharacter", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrapSphere, myCharacter), Z_Construct_UClass_UClass, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_myCharacter_MetaData), NewProp_myCharacter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrapSphere_Statics::NewProp_HitPower = { "HitPower", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrapSphere, HitPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitPower_MetaData), NewProp_HitPower_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrapSphere_Statics::NewProp_CollisionSphere = { "CollisionSphere", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrapSphere, CollisionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSphere_MetaData), NewProp_CollisionSphere_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrapSphere_Statics::NewProp_MyRadius = { "MyRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrapSphere, MyRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyRadius_MetaData), NewProp_MyRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrapSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrapSphere_Statics::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrapSphere_Statics::NewProp_myCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrapSphere_Statics::NewProp_HitPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrapSphere_Statics::NewProp_CollisionSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrapSphere_Statics::NewProp_MyRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrapSphere_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATrapSphere_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Report_6_Platformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrapSphere_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrapSphere_Statics::ClassParams = {
	&ATrapSphere::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATrapSphere_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATrapSphere_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrapSphere_Statics::Class_MetaDataParams), Z_Construct_UClass_ATrapSphere_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATrapSphere()
{
	if (!Z_Registration_Info_UClass_ATrapSphere.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrapSphere.OuterSingleton, Z_Construct_UClass_ATrapSphere_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATrapSphere.OuterSingleton;
}
template<> REPORT_6_PLATFORMER_API UClass* StaticClass<ATrapSphere>()
{
	return ATrapSphere::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATrapSphere);
ATrapSphere::~ATrapSphere() {}
// End Class ATrapSphere

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_TrapSphere_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATrapSphere, ATrapSphere::StaticClass, TEXT("ATrapSphere"), &Z_Registration_Info_UClass_ATrapSphere, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrapSphere), 2244856476U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_TrapSphere_h_1269099244(TEXT("/Script/Report_6_Platformer"),
	Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_TrapSphere_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_TrapSphere_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
