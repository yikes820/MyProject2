// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicSpawner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT2_DynamicSpawner_generated_h
#error "DynamicSpawner.generated.h already included, missing '#pragma once' in DynamicSpawner.h"
#endif
#define MYPROJECT2_DynamicSpawner_generated_h

#define FID_MyProject2_Source_MyProject2_Public_DynamicSpawner_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADynamicSpawner(); \
	friend struct Z_Construct_UClass_ADynamicSpawner_Statics; \
public: \
	DECLARE_CLASS(ADynamicSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(ADynamicSpawner)


#define FID_MyProject2_Source_MyProject2_Public_DynamicSpawner_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADynamicSpawner(ADynamicSpawner&&); \
	ADynamicSpawner(const ADynamicSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADynamicSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADynamicSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADynamicSpawner) \
	NO_API virtual ~ADynamicSpawner();


#define FID_MyProject2_Source_MyProject2_Public_DynamicSpawner_h_7_PROLOG
#define FID_MyProject2_Source_MyProject2_Public_DynamicSpawner_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject2_Source_MyProject2_Public_DynamicSpawner_h_10_INCLASS_NO_PURE_DECLS \
	FID_MyProject2_Source_MyProject2_Public_DynamicSpawner_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class ADynamicSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject2_Source_MyProject2_Public_DynamicSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
