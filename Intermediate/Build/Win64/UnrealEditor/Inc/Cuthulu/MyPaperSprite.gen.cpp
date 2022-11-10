// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cuthulu/MyPaperSprite.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPaperSprite() {}
// Cross Module References
	CUTHULU_API UClass* Z_Construct_UClass_UMyPaperSprite_NoRegister();
	CUTHULU_API UClass* Z_Construct_UClass_UMyPaperSprite();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite();
	UPackage* Z_Construct_UPackage__Script_Cuthulu();
// End Cross Module References
	void UMyPaperSprite::StaticRegisterNativesUMyPaperSprite()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyPaperSprite);
	UClass* Z_Construct_UClass_UMyPaperSprite_NoRegister()
	{
		return UMyPaperSprite::StaticClass();
	}
	struct Z_Construct_UClass_UMyPaperSprite_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyPaperSprite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPaperSprite,
		(UObject* (*)())Z_Construct_UPackage__Script_Cuthulu,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPaperSprite_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyPaperSprite.h" },
		{ "ModuleRelativePath", "MyPaperSprite.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyPaperSprite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyPaperSprite>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyPaperSprite_Statics::ClassParams = {
		&UMyPaperSprite::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyPaperSprite_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPaperSprite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyPaperSprite()
	{
		if (!Z_Registration_Info_UClass_UMyPaperSprite.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyPaperSprite.OuterSingleton, Z_Construct_UClass_UMyPaperSprite_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyPaperSprite.OuterSingleton;
	}
	template<> CUTHULU_API UClass* StaticClass<UMyPaperSprite>()
	{
		return UMyPaperSprite::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyPaperSprite);
	struct Z_CompiledInDeferFile_FID_Cuthulu_Source_Cuthulu_MyPaperSprite_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cuthulu_Source_Cuthulu_MyPaperSprite_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyPaperSprite, UMyPaperSprite::StaticClass, TEXT("UMyPaperSprite"), &Z_Registration_Info_UClass_UMyPaperSprite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyPaperSprite), 367054743U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cuthulu_Source_Cuthulu_MyPaperSprite_h_1983095204(TEXT("/Script/Cuthulu"),
		Z_CompiledInDeferFile_FID_Cuthulu_Source_Cuthulu_MyPaperSprite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cuthulu_Source_Cuthulu_MyPaperSprite_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
