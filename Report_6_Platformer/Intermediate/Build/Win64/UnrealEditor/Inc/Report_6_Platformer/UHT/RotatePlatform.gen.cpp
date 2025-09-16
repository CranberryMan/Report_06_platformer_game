// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Report_6_Platformer/Public/RotatePlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotatePlatform() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_ARotatePlatform();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_ARotatePlatform_NoRegister();
UPackage* Z_Construct_UPackage__Script_Report_6_Platformer();
// End Cross Module References

// Begin Class ARotatePlatform
void ARotatePlatform::StaticRegisterNativesARotatePlatform()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARotatePlatform);
UClass* Z_Construct_UClass_ARotatePlatform_NoRegister()
{
	return ARotatePlatform::StaticClass();
}
struct Z_Construct_UClass_ARotatePlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RotatePlatform.h" },
		{ "ModuleRelativePath", "Public/RotatePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RotatePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateDirection_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "ModuleRelativePath", "Public/RotatePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Platform Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Platform Settings\")\n//float MaxMoveDistance = 300.f; // \xef\xbf\xbd\xe2\xba\xbb\xef\xbf\xbd\xef\xbf\xbd 3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/RotatePlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Platform Settings\")\nfloat MaxMoveDistance = 300.f;  \xef\xbf\xbd\xe2\xba\xbb\xef\xbf\xbd\xef\xbf\xbd 3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotateDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotatePlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotatePlatform_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotatePlatform, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARotatePlatform_Statics::NewProp_RotateDirection = { "RotateDirection", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotatePlatform, RotateDirection), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateDirection_MetaData), NewProp_RotateDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotatePlatform_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotatePlatform, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotatePlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatePlatform_Statics::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatePlatform_Statics::NewProp_RotateDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatePlatform_Statics::NewProp_MoveSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatePlatform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARotatePlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Report_6_Platformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatePlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARotatePlatform_Statics::ClassParams = {
	&ARotatePlatform::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARotatePlatform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARotatePlatform_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatePlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_ARotatePlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARotatePlatform()
{
	if (!Z_Registration_Info_UClass_ARotatePlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARotatePlatform.OuterSingleton, Z_Construct_UClass_ARotatePlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARotatePlatform.OuterSingleton;
}
template<> REPORT_6_PLATFORMER_API UClass* StaticClass<ARotatePlatform>()
{
	return ARotatePlatform::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARotatePlatform);
ARotatePlatform::~ARotatePlatform() {}
// End Class ARotatePlatform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_RotatePlatform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARotatePlatform, ARotatePlatform::StaticClass, TEXT("ARotatePlatform"), &Z_Registration_Info_UClass_ARotatePlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotatePlatform), 2005778501U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_RotatePlatform_h_1506729271(TEXT("/Script/Report_6_Platformer"),
	Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_RotatePlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_RotatePlatform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
