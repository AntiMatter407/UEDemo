// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnLuaManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicBlueprintBinding;
class UObject;
struct FKey;
#ifdef UNLUA_UnLuaManager_generated_h
#error "UnLuaManager.generated.h already included, missing '#pragma once' in UnLuaManager.h"
#endif
#define UNLUA_UnLuaManager_generated_h

#define FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_SPARSE_DATA
#define FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnLatentActionCompleted); \
	DECLARE_FUNCTION(execOverride); \
	DECLARE_FUNCTION(execGetOrAddBindingObject);


#define FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnLatentActionCompleted); \
	DECLARE_FUNCTION(execOverride); \
	DECLARE_FUNCTION(execGetOrAddBindingObject);


#define FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_ACCESSORS
#define FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_CALLBACK_WRAPPERS
#define FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnLuaManager(); \
	friend struct Z_Construct_UClass_UUnLuaManager_Statics; \
public: \
	DECLARE_CLASS(UUnLuaManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLua"), NO_API) \
	DECLARE_SERIALIZER(UUnLuaManager)


#define FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUUnLuaManager(); \
	friend struct Z_Construct_UClass_UUnLuaManager_Statics; \
public: \
	DECLARE_CLASS(UUnLuaManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLua"), NO_API) \
	DECLARE_SERIALIZER(UUnLuaManager)


#define FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnLuaManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnLuaManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnLuaManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnLuaManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnLuaManager(UUnLuaManager&&); \
	NO_API UUnLuaManager(const UUnLuaManager&); \
public: \
	NO_API virtual ~UUnLuaManager();


#define FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnLuaManager(UUnLuaManager&&); \
	NO_API UUnLuaManager(const UUnLuaManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnLuaManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnLuaManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUnLuaManager) \
	NO_API virtual ~UUnLuaManager();


#define FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_28_PROLOG
#define FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_SPARSE_DATA \
	FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_RPC_WRAPPERS \
	FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_ACCESSORS \
	FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_CALLBACK_WRAPPERS \
	FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_INCLASS \
	FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_SPARSE_DATA \
	FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_ACCESSORS \
	FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_CALLBACK_WRAPPERS \
	FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_INCLASS_NO_PURE_DECLS \
	FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNLUA_API UClass* StaticClass<class UUnLuaManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
