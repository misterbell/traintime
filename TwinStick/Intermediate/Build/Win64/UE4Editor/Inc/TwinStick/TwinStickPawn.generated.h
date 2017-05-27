// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TWINSTICK_TwinStickPawn_generated_h
#error "TwinStickPawn.generated.h already included, missing '#pragma once' in TwinStickPawn.h"
#endif
#define TWINSTICK_TwinStickPawn_generated_h

#define TwinStick_Source_TwinStick_TwinStickPawn_h_12_RPC_WRAPPERS
#define TwinStick_Source_TwinStick_TwinStickPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TwinStick_Source_TwinStick_TwinStickPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATwinStickPawn(); \
	friend TWINSTICK_API class UClass* Z_Construct_UClass_ATwinStickPawn(); \
public: \
	DECLARE_CLASS(ATwinStickPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TwinStick"), NO_API) \
	DECLARE_SERIALIZER(ATwinStickPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TwinStick_Source_TwinStick_TwinStickPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATwinStickPawn(); \
	friend TWINSTICK_API class UClass* Z_Construct_UClass_ATwinStickPawn(); \
public: \
	DECLARE_CLASS(ATwinStickPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TwinStick"), NO_API) \
	DECLARE_SERIALIZER(ATwinStickPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TwinStick_Source_TwinStick_TwinStickPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATwinStickPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATwinStickPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATwinStickPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATwinStickPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATwinStickPawn(ATwinStickPawn&&); \
	NO_API ATwinStickPawn(const ATwinStickPawn&); \
public:


#define TwinStick_Source_TwinStick_TwinStickPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATwinStickPawn(ATwinStickPawn&&); \
	NO_API ATwinStickPawn(const ATwinStickPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATwinStickPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATwinStickPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATwinStickPawn)


#define TwinStick_Source_TwinStick_TwinStickPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(ATwinStickPawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(ATwinStickPawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATwinStickPawn, CameraBoom); }


#define TwinStick_Source_TwinStick_TwinStickPawn_h_9_PROLOG
#define TwinStick_Source_TwinStick_TwinStickPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinStick_Source_TwinStick_TwinStickPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	TwinStick_Source_TwinStick_TwinStickPawn_h_12_RPC_WRAPPERS \
	TwinStick_Source_TwinStick_TwinStickPawn_h_12_INCLASS \
	TwinStick_Source_TwinStick_TwinStickPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinStick_Source_TwinStick_TwinStickPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinStick_Source_TwinStick_TwinStickPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	TwinStick_Source_TwinStick_TwinStickPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinStick_Source_TwinStick_TwinStickPawn_h_12_INCLASS_NO_PURE_DECLS \
	TwinStick_Source_TwinStick_TwinStickPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinStick_Source_TwinStick_TwinStickPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
