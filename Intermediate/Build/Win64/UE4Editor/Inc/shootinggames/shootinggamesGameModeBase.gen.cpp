// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "shootinggames/shootinggamesGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeshootinggamesGameModeBase() {}
// Cross Module References
	SHOOTINGGAMES_API UClass* Z_Construct_UClass_AshootinggamesGameModeBase_NoRegister();
	SHOOTINGGAMES_API UClass* Z_Construct_UClass_AshootinggamesGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_shootinggames();
// End Cross Module References
	void AshootinggamesGameModeBase::StaticRegisterNativesAshootinggamesGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AshootinggamesGameModeBase_NoRegister()
	{
		return AshootinggamesGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AshootinggamesGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AshootinggamesGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_shootinggames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AshootinggamesGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "shootinggamesGameModeBase.h" },
		{ "ModuleRelativePath", "shootinggamesGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AshootinggamesGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AshootinggamesGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AshootinggamesGameModeBase_Statics::ClassParams = {
		&AshootinggamesGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AshootinggamesGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AshootinggamesGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AshootinggamesGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AshootinggamesGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AshootinggamesGameModeBase, 3105113006);
	template<> SHOOTINGGAMES_API UClass* StaticClass<AshootinggamesGameModeBase>()
	{
		return AshootinggamesGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AshootinggamesGameModeBase(Z_Construct_UClass_AshootinggamesGameModeBase, &AshootinggamesGameModeBase::StaticClass, TEXT("/Script/shootinggames"), TEXT("AshootinggamesGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AshootinggamesGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
