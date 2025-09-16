// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Report_6_Platformer/Public/FootSwitch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootSwitch() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_AFootSwitch();
REPORT_6_PLATFORMER_API UClass* Z_Construct_UClass_AFootSwitch_NoRegister();
UPackage* Z_Construct_UPackage__Script_Report_6_Platformer();
// End Cross Module References

// Begin Class AFootSwitch
void AFootSwitch::StaticRegisterNativesAFootSwitch()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFootSwitch);
UClass* Z_Construct_UClass_AFootSwitch_NoRegister()
{
	return AFootSwitch::StaticClass();
}
struct Z_Construct_UClass_AFootSwitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FootSwitch.h" },
		{ "ModuleRelativePath", "Public/FootSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_myCharacter_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/FootSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FootSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransferVolume_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FootSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerOn_MetaData[] = {
		{ "ModuleRelativePath", "Public/FootSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd (cm/s)\n" },
#endif
		{ "ModuleRelativePath", "Public/FootSwitch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd (cm/s)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMoveDistance_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xc5\xb8\xef\xbf\xbd (cm)\n" },
#endif
		{ "ModuleRelativePath", "Public/FootSwitch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xc5\xb8\xef\xbf\xbd (cm)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFootstepSound_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/FootSwitch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffFootstepSound_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/FootSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Show\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd9\xb8\xef\xbf\xbd Actor\n" },
#endif
		{ "ModuleRelativePath", "Public/FootSwitch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Show\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd9\xb8\xef\xbf\xbd Actor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_myCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransferVolume;
	static void NewProp_PlayerOn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlayerOn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMoveDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnFootstepSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OffFootstepSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFootSwitch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFootSwitch_Statics::NewProp_myCharacter = { "myCharacter", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFootSwitch, myCharacter), Z_Construct_UClass_UClass, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_myCharacter_MetaData), NewProp_myCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFootSwitch_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFootSwitch, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFootSwitch_Statics::NewProp_TransferVolume = { "TransferVolume", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFootSwitch, TransferVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransferVolume_MetaData), NewProp_TransferVolume_MetaData) };
void Z_Construct_UClass_AFootSwitch_Statics::NewProp_PlayerOn_SetBit(void* Obj)
{
	((AFootSwitch*)Obj)->PlayerOn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFootSwitch_Statics::NewProp_PlayerOn = { "PlayerOn", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFootSwitch), &Z_Construct_UClass_AFootSwitch_Statics::NewProp_PlayerOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerOn_MetaData), NewProp_PlayerOn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFootSwitch_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFootSwitch, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFootSwitch_Statics::NewProp_MaxMoveDistance = { "MaxMoveDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFootSwitch, MaxMoveDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMoveDistance_MetaData), NewProp_MaxMoveDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFootSwitch_Statics::NewProp_OnFootstepSound = { "OnFootstepSound", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFootSwitch, OnFootstepSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFootstepSound_MetaData), NewProp_OnFootstepSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFootSwitch_Statics::NewProp_OffFootstepSound = { "OffFootstepSound", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFootSwitch, OffFootstepSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffFootstepSound_MetaData), NewProp_OffFootstepSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFootSwitch_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFootSwitch, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFootSwitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootSwitch_Statics::NewProp_myCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootSwitch_Statics::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootSwitch_Statics::NewProp_TransferVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootSwitch_Statics::NewProp_PlayerOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootSwitch_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootSwitch_Statics::NewProp_MaxMoveDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootSwitch_Statics::NewProp_OnFootstepSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootSwitch_Statics::NewProp_OffFootstepSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootSwitch_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFootSwitch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFootSwitch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Report_6_Platformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFootSwitch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFootSwitch_Statics::ClassParams = {
	&AFootSwitch::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFootSwitch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFootSwitch_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFootSwitch_Statics::Class_MetaDataParams), Z_Construct_UClass_AFootSwitch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFootSwitch()
{
	if (!Z_Registration_Info_UClass_AFootSwitch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFootSwitch.OuterSingleton, Z_Construct_UClass_AFootSwitch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFootSwitch.OuterSingleton;
}
template<> REPORT_6_PLATFORMER_API UClass* StaticClass<AFootSwitch>()
{
	return AFootSwitch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFootSwitch);
AFootSwitch::~AFootSwitch() {}
// End Class AFootSwitch

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Report_6_Platformer_Source_Report_6_Platformer_Public_FootSwitch_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFootSwitch, AFootSwitch::StaticClass, TEXT("AFootSwitch"), &Z_Registration_Info_UClass_AFootSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFootSwitch), 2345131083U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Report_6_Platformer_Source_Report_6_Platformer_Public_FootSwitch_h_1613607951(TEXT("/Script/Report_6_Platformer"),
	Z_CompiledInDeferFile_FID_Unreal_Project_Report_6_Platformer_Source_Report_6_Platformer_Public_FootSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Report_6_Platformer_Source_Report_6_Platformer_Public_FootSwitch_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
