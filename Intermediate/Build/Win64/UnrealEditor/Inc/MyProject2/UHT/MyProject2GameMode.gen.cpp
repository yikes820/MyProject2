// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/MyProject2GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProject2GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MYPROJECT2_API UClass* Z_Construct_UClass_AMyProject2GameMode();
MYPROJECT2_API UClass* Z_Construct_UClass_AMyProject2GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References

// Begin Class AMyProject2GameMode
void AMyProject2GameMode::StaticRegisterNativesAMyProject2GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyProject2GameMode);
UClass* Z_Construct_UClass_AMyProject2GameMode_NoRegister()
{
	return AMyProject2GameMode::StaticClass();
}
struct Z_Construct_UClass_AMyProject2GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyProject2GameMode.h" },
		{ "ModuleRelativePath", "MyProject2GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProject2GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyProject2GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyProject2GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyProject2GameMode_Statics::ClassParams = {
	&AMyProject2GameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyProject2GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyProject2GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyProject2GameMode()
{
	if (!Z_Registration_Info_UClass_AMyProject2GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyProject2GameMode.OuterSingleton, Z_Construct_UClass_AMyProject2GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyProject2GameMode.OuterSingleton;
}
template<> MYPROJECT2_API UClass* StaticClass<AMyProject2GameMode>()
{
	return AMyProject2GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProject2GameMode);
AMyProject2GameMode::~AMyProject2GameMode() {}
// End Class AMyProject2GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_MyProject2GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyProject2GameMode, AMyProject2GameMode::StaticClass, TEXT("AMyProject2GameMode"), &Z_Registration_Info_UClass_AMyProject2GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyProject2GameMode), 1503753681U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_MyProject2GameMode_h_2998163736(TEXT("/Script/MyProject2"),
	Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_MyProject2GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_MyProject2GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
