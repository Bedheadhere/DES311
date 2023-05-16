// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionCombatDemo/ActionCombatDemoGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionCombatDemoGameModeBase() {}
// Cross Module References
	ACTIONCOMBATDEMO_API UClass* Z_Construct_UClass_AActionCombatDemoGameModeBase_NoRegister();
	ACTIONCOMBATDEMO_API UClass* Z_Construct_UClass_AActionCombatDemoGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ActionCombatDemo();
// End Cross Module References
	void AActionCombatDemoGameModeBase::StaticRegisterNativesAActionCombatDemoGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActionCombatDemoGameModeBase);
	UClass* Z_Construct_UClass_AActionCombatDemoGameModeBase_NoRegister()
	{
		return AActionCombatDemoGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AActionCombatDemoGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActionCombatDemoGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionCombatDemo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActionCombatDemoGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ActionCombatDemoGameModeBase.h" },
		{ "ModuleRelativePath", "ActionCombatDemoGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActionCombatDemoGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActionCombatDemoGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AActionCombatDemoGameModeBase_Statics::ClassParams = {
		&AActionCombatDemoGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AActionCombatDemoGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActionCombatDemoGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActionCombatDemoGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AActionCombatDemoGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActionCombatDemoGameModeBase.OuterSingleton, Z_Construct_UClass_AActionCombatDemoGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AActionCombatDemoGameModeBase.OuterSingleton;
	}
	template<> ACTIONCOMBATDEMO_API UClass* StaticClass<AActionCombatDemoGameModeBase>()
	{
		return AActionCombatDemoGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActionCombatDemoGameModeBase);
	struct Z_CompiledInDeferFile_FID_ActionCombatDemo_Source_ActionCombatDemo_ActionCombatDemoGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionCombatDemo_Source_ActionCombatDemo_ActionCombatDemoGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AActionCombatDemoGameModeBase, AActionCombatDemoGameModeBase::StaticClass, TEXT("AActionCombatDemoGameModeBase"), &Z_Registration_Info_UClass_AActionCombatDemoGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActionCombatDemoGameModeBase), 2234324333U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionCombatDemo_Source_ActionCombatDemo_ActionCombatDemoGameModeBase_h_1306789048(TEXT("/Script/ActionCombatDemo"),
		Z_CompiledInDeferFile_FID_ActionCombatDemo_Source_ActionCombatDemo_ActionCombatDemoGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionCombatDemo_Source_ActionCombatDemo_ActionCombatDemoGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
