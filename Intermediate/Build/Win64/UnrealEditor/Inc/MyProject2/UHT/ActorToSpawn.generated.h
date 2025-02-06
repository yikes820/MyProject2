// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorToSpawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT2_ActorToSpawn_generated_h
#error "ActorToSpawn.generated.h already included, missing '#pragma once' in ActorToSpawn.h"
#endif
#define MYPROJECT2_ActorToSpawn_generated_h

#define FID_MyProject2_Source_MyProject2_Public_ActorToSpawn_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAActorToSpawn(); \
	friend struct Z_Construct_UClass_AActorToSpawn_Statics; \
public: \
	DECLARE_CLASS(AActorToSpawn, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(AActorToSpawn)


#define FID_MyProject2_Source_MyProject2_Public_ActorToSpawn_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AActorToSpawn(AActorToSpawn&&); \
	AActorToSpawn(const AActorToSpawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActorToSpawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActorToSpawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AActorToSpawn) \
	NO_API virtual ~AActorToSpawn();


#define FID_MyProject2_Source_MyProject2_Public_ActorToSpawn_h_7_PROLOG
#define FID_MyProject2_Source_MyProject2_Public_ActorToSpawn_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject2_Source_MyProject2_Public_ActorToSpawn_h_10_INCLASS_NO_PURE_DECLS \
	FID_MyProject2_Source_MyProject2_Public_ActorToSpawn_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class AActorToSpawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject2_Source_MyProject2_Public_ActorToSpawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
