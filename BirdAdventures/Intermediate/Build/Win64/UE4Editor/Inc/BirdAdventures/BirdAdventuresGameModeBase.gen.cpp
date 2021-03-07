// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BirdAdventures/BirdAdventuresGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBirdAdventuresGameModeBase() {}
// Cross Module References
	BIRDADVENTURES_API UClass* Z_Construct_UClass_ABirdAdventuresGameModeBase_NoRegister();
	BIRDADVENTURES_API UClass* Z_Construct_UClass_ABirdAdventuresGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BirdAdventures();
// End Cross Module References
	void ABirdAdventuresGameModeBase::StaticRegisterNativesABirdAdventuresGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABirdAdventuresGameModeBase_NoRegister()
	{
		return ABirdAdventuresGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABirdAdventuresGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABirdAdventuresGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BirdAdventures,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABirdAdventuresGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BirdAdventuresGameModeBase.h" },
		{ "ModuleRelativePath", "BirdAdventuresGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABirdAdventuresGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABirdAdventuresGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABirdAdventuresGameModeBase_Statics::ClassParams = {
		&ABirdAdventuresGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABirdAdventuresGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABirdAdventuresGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABirdAdventuresGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABirdAdventuresGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABirdAdventuresGameModeBase, 3374809925);
	template<> BIRDADVENTURES_API UClass* StaticClass<ABirdAdventuresGameModeBase>()
	{
		return ABirdAdventuresGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABirdAdventuresGameModeBase(Z_Construct_UClass_ABirdAdventuresGameModeBase, &ABirdAdventuresGameModeBase::StaticClass, TEXT("/Script/BirdAdventures"), TEXT("ABirdAdventuresGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABirdAdventuresGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
