// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TWINSTICK_TwinStickProjectile_generated_h
#error "TwinStickProjectile.generated.h already included, missing '#pragma once' in TwinStickProjectile.h"
#endif
#define TWINSTICK_TwinStickProjectile_generated_h

#define TwinStick_Source_TwinStick_TwinStickProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define TwinStick_Source_TwinStick_TwinStickProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define TwinStick_Source_TwinStick_TwinStickProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATwinStickProjectile(); \
	friend TWINSTICK_API class UClass* Z_Construct_UClass_ATwinStickProjectile(); \
public: \
	DECLARE_CLASS(ATwinStickProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TwinStick"), NO_API) \
	DECLARE_SERIALIZER(ATwinStickProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TwinStick_Source_TwinStick_TwinStickProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATwinStickProjectile(); \
	friend TWINSTICK_API class UClass* Z_Construct_UClass_ATwinStickProjectile(); \
public: \
	DECLARE_CLASS(ATwinStickProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TwinStick"), NO_API) \
	DECLARE_SERIALIZER(ATwinStickProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TwinStick_Source_TwinStick_TwinStickProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATwinStickProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATwinStickProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATwinStickProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATwinStickProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATwinStickProjectile(ATwinStickProjectile&&); \
	NO_API ATwinStickProjectile(const ATwinStickProjectile&); \
public:


#define TwinStick_Source_TwinStick_TwinStickProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATwinStickProjectile(ATwinStickProjectile&&); \
	NO_API ATwinStickProjectile(const ATwinStickProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATwinStickProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATwinStickProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATwinStickProjectile)


#define TwinStick_Source_TwinStick_TwinStickProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(ATwinStickProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ATwinStickProjectile, ProjectileMovement); }


#define TwinStick_Source_TwinStick_TwinStickProjectile_h_12_PROLOG
#define TwinStick_Source_TwinStick_TwinStickProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinStick_Source_TwinStick_TwinStickProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	TwinStick_Source_TwinStick_TwinStickProjectile_h_15_RPC_WRAPPERS \
	TwinStick_Source_TwinStick_TwinStickProjectile_h_15_INCLASS \
	TwinStick_Source_TwinStick_TwinStickProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinStick_Source_TwinStick_TwinStickProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinStick_Source_TwinStick_TwinStickProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	TwinStick_Source_TwinStick_TwinStickProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinStick_Source_TwinStick_TwinStickProjectile_h_15_INCLASS_NO_PURE_DECLS \
	TwinStick_Source_TwinStick_TwinStickProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinStick_Source_TwinStick_TwinStickProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
