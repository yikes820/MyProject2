// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/Public/RandomPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomPlatform() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
MYPROJECT2_API UClass* Z_Construct_UClass_ARandomPlatform();
MYPROJECT2_API UClass* Z_Construct_UClass_ARandomPlatform_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References

// Begin Class ARandomPlatform
void ARandomPlatform::StaticRegisterNativesARandomPlatform()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARandomPlatform);
UClass* Z_Construct_UClass_ARandomPlatform_NoRegister()
{
	return ARandomPlatform::StaticClass();
}
struct Z_Construct_UClass_ARandomPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RandomPlatform.h" },
		{ "ModuleRelativePath", "Public/RandomPlatform.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARandomPlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARandomPlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomPlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARandomPlatform_Statics::ClassParams = {
	&ARandomPlatform::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_ARandomPlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARandomPlatform()
{
	if (!Z_Registration_Info_UClass_ARandomPlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARandomPlatform.OuterSingleton, Z_Construct_UClass_ARandomPlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARandomPlatform.OuterSingleton;
}
template<> MYPROJECT2_API UClass* StaticClass<ARandomPlatform>()
{
	return ARandomPlatform::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARandomPlatform);
ARandomPlatform::~ARandomPlatform() {}
// End Class ARandomPlatform

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_RandomPlatform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARandomPlatform, ARandomPlatform::StaticClass, TEXT("ARandomPlatform"), &Z_Registration_Info_UClass_ARandomPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARandomPlatform), 431782463U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_RandomPlatform_h_3341601067(TEXT("/Script/MyProject2"),
	Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_RandomPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_RandomPlatform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
