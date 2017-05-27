// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TwinStick.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1TwinStick() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_APawn();
	ENGINE_API class UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();

	TWINSTICK_API class UClass* Z_Construct_UClass_ATwinStickGameMode_NoRegister();
	TWINSTICK_API class UClass* Z_Construct_UClass_ATwinStickGameMode();
	TWINSTICK_API class UClass* Z_Construct_UClass_ATwinStickPawn_NoRegister();
	TWINSTICK_API class UClass* Z_Construct_UClass_ATwinStickPawn();
	TWINSTICK_API class UFunction* Z_Construct_UFunction_ATwinStickProjectile_OnHit();
	TWINSTICK_API class UClass* Z_Construct_UClass_ATwinStickProjectile_NoRegister();
	TWINSTICK_API class UClass* Z_Construct_UClass_ATwinStickProjectile();
	TWINSTICK_API class UPackage* Z_Construct_UPackage__Script_TwinStick();
	void ATwinStickGameMode::StaticRegisterNativesATwinStickGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATwinStickGameMode_NoRegister()
	{
		return ATwinStickGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ATwinStickGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_TwinStick();
			OuterClass = ATwinStickGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20880288;


				static TCppClassTypeInfo<TCppClassTypeTraits<ATwinStickGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TwinStickGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("TwinStickGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATwinStickGameMode, 3348864438);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATwinStickGameMode(Z_Construct_UClass_ATwinStickGameMode, &ATwinStickGameMode::StaticClass, TEXT("/Script/TwinStick"), TEXT("ATwinStickGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATwinStickGameMode);
	void ATwinStickPawn::StaticRegisterNativesATwinStickPawn()
	{
	}
	UClass* Z_Construct_UClass_ATwinStickPawn_NoRegister()
	{
		return ATwinStickPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_ATwinStickPawn()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_TwinStick();
			OuterClass = ATwinStickPawn::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_FireSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FireSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FireSound, ATwinStickPawn), 0x0010000000000005, Z_Construct_UClass_USoundBase_NoRegister());
				UProperty* NewProp_MoveSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MoveSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MoveSpeed, ATwinStickPawn), 0x0010000000000005);
				UProperty* NewProp_FireRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FireRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FireRate, ATwinStickPawn), 0x0010000000000005);
				UProperty* NewProp_GunOffset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GunOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GunOffset, ATwinStickPawn), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, ATwinStickPawn), 0x00400000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
				UProperty* NewProp_CameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraComponent, ATwinStickPawn), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_ShipMeshComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ShipMeshComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ShipMeshComponent, ATwinStickPawn), 0x00400000000b001d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<ATwinStickPawn> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TwinStickPawn.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("TwinStickPawn.h"));
				MetaData->SetValue(NewProp_FireSound, TEXT("Category"), TEXT("Audio"));
				MetaData->SetValue(NewProp_FireSound, TEXT("ModuleRelativePath"), TEXT("TwinStickPawn.h"));
				MetaData->SetValue(NewProp_FireSound, TEXT("ToolTip"), TEXT("Sound to play each time we fire"));
				MetaData->SetValue(NewProp_MoveSpeed, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_MoveSpeed, TEXT("ModuleRelativePath"), TEXT("TwinStickPawn.h"));
				MetaData->SetValue(NewProp_MoveSpeed, TEXT("ToolTip"), TEXT("The speed our ship moves around the level"));
				MetaData->SetValue(NewProp_FireRate, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_FireRate, TEXT("ModuleRelativePath"), TEXT("TwinStickPawn.h"));
				MetaData->SetValue(NewProp_FireRate, TEXT("ToolTip"), TEXT("How fast the weapon will fire"));
				MetaData->SetValue(NewProp_GunOffset, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_GunOffset, TEXT("ModuleRelativePath"), TEXT("TwinStickPawn.h"));
				MetaData->SetValue(NewProp_GunOffset, TEXT("ToolTip"), TEXT("Offset from the ships location to spawn projectiles"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("TwinStickPawn.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ToolTip"), TEXT("Camera boom positioning the camera above the character"));
				MetaData->SetValue(NewProp_CameraComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraComponent, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraComponent, TEXT("ModuleRelativePath"), TEXT("TwinStickPawn.h"));
				MetaData->SetValue(NewProp_CameraComponent, TEXT("ToolTip"), TEXT("The camera"));
				MetaData->SetValue(NewProp_ShipMeshComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_ShipMeshComponent, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_ShipMeshComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ShipMeshComponent, TEXT("ModuleRelativePath"), TEXT("TwinStickPawn.h"));
				MetaData->SetValue(NewProp_ShipMeshComponent, TEXT("ToolTip"), TEXT("The mesh component"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATwinStickPawn, 274988795);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATwinStickPawn(Z_Construct_UClass_ATwinStickPawn, &ATwinStickPawn::StaticClass, TEXT("/Script/TwinStick"), TEXT("ATwinStickPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATwinStickPawn);
	void ATwinStickProjectile::StaticRegisterNativesATwinStickProjectile()
	{
		UClass* Class = ATwinStickProjectile::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnHit", (Native)&ATwinStickProjectile::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_ATwinStickProjectile_OnHit()
	{
		struct TwinStickProjectile_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer=Z_Construct_UClass_ATwinStickProjectile();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00C20401, 65535, sizeof(TwinStickProjectile_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, TwinStickProjectile_eventOnHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, TwinStickProjectile_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, TwinStickProjectile_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, TwinStickProjectile_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComp, TwinStickProjectile_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("TwinStickProjectile.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Function to handle the projectile hitting something"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATwinStickProjectile_NoRegister()
	{
		return ATwinStickProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_ATwinStickProjectile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_TwinStick();
			OuterClass = ATwinStickProjectile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;

				OuterClass->LinkChild(Z_Construct_UFunction_ATwinStickProjectile_OnHit());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ProjectileMovement = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileMovement"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ProjectileMovement, ATwinStickProjectile), 0x00400000000a001d, Z_Construct_UClass_UProjectileMovementComponent_NoRegister());
				UProperty* NewProp_ProjectileMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ProjectileMesh, ATwinStickProjectile), 0x00400000000a001d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATwinStickProjectile_OnHit(), "OnHit"); // 2765876156
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ATwinStickProjectile> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TwinStickProjectile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("TwinStickProjectile.h"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("Category"), TEXT("Movement"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("ModuleRelativePath"), TEXT("TwinStickProjectile.h"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("ToolTip"), TEXT("Projectile movement component"));
				MetaData->SetValue(NewProp_ProjectileMesh, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_ProjectileMesh, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_ProjectileMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ProjectileMesh, TEXT("ModuleRelativePath"), TEXT("TwinStickProjectile.h"));
				MetaData->SetValue(NewProp_ProjectileMesh, TEXT("ToolTip"), TEXT("Sphere collision component"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATwinStickProjectile, 707199209);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATwinStickProjectile(Z_Construct_UClass_ATwinStickProjectile, &ATwinStickProjectile::StaticClass, TEXT("/Script/TwinStick"), TEXT("ATwinStickProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATwinStickProjectile);
	UPackage* Z_Construct_UPackage__Script_TwinStick()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/TwinStick")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xB4A4D30C;
			Guid.B = 0x8E2A6581;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
