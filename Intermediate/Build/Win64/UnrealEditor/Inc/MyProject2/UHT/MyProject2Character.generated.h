// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyProject2Character.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT2_MyProject2Character_generated_h
#error "MyProject2Character.generated.h already included, missing '#pragma once' in MyProject2Character.h"
#endif
#define MYPROJECT2_MyProject2Character_generated_h

#define FID_MyProject2_Source_MyProject2_MyProject2Character_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProject2Character(); \
	friend struct Z_Construct_UClass_AMyProject2Character_Statics; \
public: \
	DECLARE_CLASS(AMyProject2Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(AMyProject2Character)


#define FID_MyProject2_Source_MyProject2_MyProject2Character_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyProject2Character(AMyProject2Character&&); \
	AMyProject2Character(const AMyProject2Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject2Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject2Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProject2Character) \
	NO_API virtual ~AMyProject2Character();


#define FID_MyProject2_Source_MyProject2_MyProject2Character_h_18_PROLOG
#define FID_MyProject2_Source_MyProject2_MyProject2Character_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject2_Source_MyProject2_MyProject2Character_h_21_INCLASS_NO_PURE_DECLS \
	FID_MyProject2_Source_MyProject2_MyProject2Character_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class AMyProject2Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject2_Source_MyProject2_MyProject2Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
