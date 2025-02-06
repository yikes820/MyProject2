// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyProject2GameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT2_MyProject2GameMode_generated_h
#error "MyProject2GameMode.generated.h already included, missing '#pragma once' in MyProject2GameMode.h"
#endif
#define MYPROJECT2_MyProject2GameMode_generated_h

#define FID_MyProject2_Source_MyProject2_MyProject2GameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProject2GameMode(); \
	friend struct Z_Construct_UClass_AMyProject2GameMode_Statics; \
public: \
	DECLARE_CLASS(AMyProject2GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), MYPROJECT2_API) \
	DECLARE_SERIALIZER(AMyProject2GameMode)


#define FID_MyProject2_Source_MyProject2_MyProject2GameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyProject2GameMode(AMyProject2GameMode&&); \
	AMyProject2GameMode(const AMyProject2GameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT2_API, AMyProject2GameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject2GameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProject2GameMode) \
	MYPROJECT2_API virtual ~AMyProject2GameMode();


#define FID_MyProject2_Source_MyProject2_MyProject2GameMode_h_9_PROLOG
#define FID_MyProject2_Source_MyProject2_MyProject2GameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject2_Source_MyProject2_MyProject2GameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_MyProject2_Source_MyProject2_MyProject2GameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class AMyProject2GameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject2_Source_MyProject2_MyProject2GameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
