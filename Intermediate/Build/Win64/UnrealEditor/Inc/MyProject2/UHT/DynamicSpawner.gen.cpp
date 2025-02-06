// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/Public/DynamicSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicSpawner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
MYPROJECT2_API UClass* Z_Construct_UClass_ADynamicSpawner();
MYPROJECT2_API UClass* Z_Construct_UClass_ADynamicSpawner_NoRegister();
MYPROJECT2_API UClass* Z_Construct_UClass_ARandomPlatform_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References

// Begin Class ADynamicSpawner
void ADynamicSpawner::StaticRegisterNativesADynamicSpawner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADynamicSpawner);
UClass* Z_Construct_UClass_ADynamicSpawner_NoRegister()
{
	return ADynamicSpawner::StaticClass();
}
struct Z_Construct_UClass_ADynamicSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DynamicSpawner.h" },
		{ "ModuleRelativePath", "Public/DynamicSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomPlatformClass_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/DynamicSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumActorsToSpawn_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/DynamicSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInterval_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/DynamicSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocationMin_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/DynamicSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocationMax_MetaData[] = {
		{ "Category", "Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 \xef\xbf\xbd\xd6\xb4\xeb\xb0\xaa\n" },
#endif
		{ "ModuleRelativePath", "Public/DynamicSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 \xef\xbf\xbd\xd6\xb4\xeb\xb0\xaa" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLifetime_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/DynamicSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RandomPlatformClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumActorsToSpawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnInterval;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocationMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocationMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnLifetime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADynamicSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADynamicSpawner_Statics::NewProp_RandomPlatformClass = { "RandomPlatformClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicSpawner, RandomPlatformClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ARandomPlatform_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomPlatformClass_MetaData), NewProp_RandomPlatformClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADynamicSpawner_Statics::NewProp_NumActorsToSpawn = { "NumActorsToSpawn", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicSpawner, NumActorsToSpawn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumActorsToSpawn_MetaData), NewProp_NumActorsToSpawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADynamicSpawner_Statics::NewProp_SpawnInterval = { "SpawnInterval", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicSpawner, SpawnInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnInterval_MetaData), NewProp_SpawnInterval_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADynamicSpawner_Statics::NewProp_SpawnLocationMin = { "SpawnLocationMin", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicSpawner, SpawnLocationMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocationMin_MetaData), NewProp_SpawnLocationMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADynamicSpawner_Statics::NewProp_SpawnLocationMax = { "SpawnLocationMax", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicSpawner, SpawnLocationMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocationMax_MetaData), NewProp_SpawnLocationMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADynamicSpawner_Statics::NewProp_SpawnLifetime = { "SpawnLifetime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicSpawner, SpawnLifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLifetime_MetaData), NewProp_SpawnLifetime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADynamicSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicSpawner_Statics::NewProp_RandomPlatformClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicSpawner_Statics::NewProp_NumActorsToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicSpawner_Statics::NewProp_SpawnInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicSpawner_Statics::NewProp_SpawnLocationMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicSpawner_Statics::NewProp_SpawnLocationMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicSpawner_Statics::NewProp_SpawnLifetime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADynamicSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADynamicSpawner_Statics::ClassParams = {
	&ADynamicSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADynamicSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicSpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ADynamicSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADynamicSpawner()
{
	if (!Z_Registration_Info_UClass_ADynamicSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADynamicSpawner.OuterSingleton, Z_Construct_UClass_ADynamicSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADynamicSpawner.OuterSingleton;
}
template<> MYPROJECT2_API UClass* StaticClass<ADynamicSpawner>()
{
	return ADynamicSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADynamicSpawner);
ADynamicSpawner::~ADynamicSpawner() {}
// End Class ADynamicSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_DynamicSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADynamicSpawner, ADynamicSpawner::StaticClass, TEXT("ADynamicSpawner"), &Z_Registration_Info_UClass_ADynamicSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADynamicSpawner), 4145328365U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_DynamicSpawner_h_2576655635(TEXT("/Script/MyProject2"),
	Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_DynamicSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_DynamicSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
