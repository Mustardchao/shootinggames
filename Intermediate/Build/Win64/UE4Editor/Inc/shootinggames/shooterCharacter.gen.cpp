// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "shootinggames/shooterCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeshooterCharacter() {}
// Cross Module References
	SHOOTINGGAMES_API UClass* Z_Construct_UClass_AshooterCharacter_NoRegister();
	SHOOTINGGAMES_API UClass* Z_Construct_UClass_AshooterCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_shootinggames();
// End Cross Module References
	void AshooterCharacter::StaticRegisterNativesAshooterCharacter()
	{
	}
	UClass* Z_Construct_UClass_AshooterCharacter_NoRegister()
	{
		return AshooterCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AshooterCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AshooterCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_shootinggames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AshooterCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "shooterCharacter.h" },
		{ "ModuleRelativePath", "shooterCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AshooterCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AshooterCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AshooterCharacter_Statics::ClassParams = {
		&AshooterCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AshooterCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AshooterCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AshooterCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AshooterCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AshooterCharacter, 3057372000);
	template<> SHOOTINGGAMES_API UClass* StaticClass<AshooterCharacter>()
	{
		return AshooterCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AshooterCharacter(Z_Construct_UClass_AshooterCharacter, &AshooterCharacter::StaticClass, TEXT("/Script/shootinggames"), TEXT("AshooterCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AshooterCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
