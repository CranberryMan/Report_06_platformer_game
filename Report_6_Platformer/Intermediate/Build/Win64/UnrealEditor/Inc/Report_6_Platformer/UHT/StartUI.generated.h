// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StartUI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REPORT_6_PLATFORMER_StartUI_generated_h
#error "StartUI.generated.h already included, missing '#pragma once' in StartUI.h"
#endif
#define REPORT_6_PLATFORMER_StartUI_generated_h

#define FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_StartUI_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnExit); \
	DECLARE_FUNCTION(execOnGameStart);


#define FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_StartUI_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStartUI(); \
	friend struct Z_Construct_UClass_UStartUI_Statics; \
public: \
	DECLARE_CLASS(UStartUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Report_6_Platformer"), NO_API) \
	DECLARE_SERIALIZER(UStartUI)


#define FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_StartUI_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStartUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStartUI(UStartUI&&); \
	UStartUI(const UStartUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStartUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStartUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStartUI) \
	NO_API virtual ~UStartUI();


#define FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_StartUI_h_12_PROLOG
#define FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_StartUI_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_StartUI_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_StartUI_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_StartUI_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REPORT_6_PLATFORMER_API UClass* StaticClass<class UStartUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_git_Report_06_Report_6_Platformer_Source_Report_6_Platformer_Public_StartUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
