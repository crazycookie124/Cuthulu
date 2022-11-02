// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cuthulu/CuthuluGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCuthuluGameModeBase() {}
// Cross Module References
	CUTHULU_API UClass* Z_Construct_UClass_ACuthuluGameModeBase_NoRegister();
	CUTHULU_API UClass* Z_Construct_UClass_ACuthuluGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Cuthulu();
// End Cross Module References
	void ACuthuluGameModeBase::StaticRegisterNativesACuthuluGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACuthuluGameModeBase);
	UClass* Z_Construct_UClass_ACuthuluGameModeBase_NoRegister()
	{
		return ACuthuluGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACuthuluGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACuthuluGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Cuthulu,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACuthuluGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CuthuluGameModeBase.h" },
		{ "ModuleRelativePath", "CuthuluGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACuthuluGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACuthuluGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACuthuluGameModeBase_Statics::ClassParams = {
		&ACuthuluGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACuthuluGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACuthuluGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACuthuluGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ACuthuluGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACuthuluGameModeBase.OuterSingleton, Z_Construct_UClass_ACuthuluGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACuthuluGameModeBase.OuterSingleton;
	}
	template<> CUTHULU_API UClass* StaticClass<ACuthuluGameModeBase>()
	{
		return ACuthuluGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACuthuluGameModeBase);
	struct Z_CompiledInDeferFile_FID_Cuthulu_Source_Cuthulu_CuthuluGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cuthulu_Source_Cuthulu_CuthuluGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACuthuluGameModeBase, ACuthuluGameModeBase::StaticClass, TEXT("ACuthuluGameModeBase"), &Z_Registration_Info_UClass_ACuthuluGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACuthuluGameModeBase), 3841463126U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cuthulu_Source_Cuthulu_CuthuluGameModeBase_h_2957362170(TEXT("/Script/Cuthulu"),
		Z_CompiledInDeferFile_FID_Cuthulu_Source_Cuthulu_CuthuluGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cuthulu_Source_Cuthulu_CuthuluGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
