// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/UnLuaFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnLuaFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UNLUA_API UClass* Z_Construct_UClass_UUnLuaFunctionLibrary();
	UNLUA_API UClass* Z_Construct_UClass_UUnLuaFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnLua();
// End Cross Module References
	DEFINE_FUNCTION(UUnLuaFunctionLibrary::execHotReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UUnLuaFunctionLibrary::HotReload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnLuaFunctionLibrary::execGetFileLastModifiedTimestamp)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UUnLuaFunctionLibrary::GetFileLastModifiedTimestamp(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnLuaFunctionLibrary::execGetScriptRootPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUnLuaFunctionLibrary::GetScriptRootPath();
		P_NATIVE_END;
	}
	void UUnLuaFunctionLibrary::StaticRegisterNativesUUnLuaFunctionLibrary()
	{
		UClass* Class = UUnLuaFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFileLastModifiedTimestamp", &UUnLuaFunctionLibrary::execGetFileLastModifiedTimestamp },
			{ "GetScriptRootPath", &UUnLuaFunctionLibrary::execGetScriptRootPath },
			{ "HotReload", &UUnLuaFunctionLibrary::execHotReload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics
	{
		struct UnLuaFunctionLibrary_eventGetFileLastModifiedTimestamp_Parms
		{
			FString Path;
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UnLuaFunctionLibrary_eventGetFileLastModifiedTimestamp_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UnLuaFunctionLibrary_eventGetFileLastModifiedTimestamp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnLuaFunctionLibrary, nullptr, "GetFileLastModifiedTimestamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::UnLuaFunctionLibrary_eventGetFileLastModifiedTimestamp_Parms), Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath_Statics
	{
		struct UnLuaFunctionLibrary_eventGetScriptRootPath_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UnLuaFunctionLibrary_eventGetScriptRootPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnLuaFunctionLibrary, nullptr, "GetScriptRootPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath_Statics::UnLuaFunctionLibrary_eventGetScriptRootPath_Parms), Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnLuaFunctionLibrary_HotReload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnLuaFunctionLibrary_HotReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaFunctionLibrary_HotReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnLuaFunctionLibrary, nullptr, "HotReload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnLuaFunctionLibrary_HotReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaFunctionLibrary_HotReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnLuaFunctionLibrary_HotReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnLuaFunctionLibrary_HotReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnLuaFunctionLibrary);
	UClass* Z_Construct_UClass_UUnLuaFunctionLibrary_NoRegister()
	{
		return UUnLuaFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUnLuaFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnLuaFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLua,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUnLuaFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp, "GetFileLastModifiedTimestamp" }, // 2112632658
		{ &Z_Construct_UFunction_UUnLuaFunctionLibrary_GetScriptRootPath, "GetScriptRootPath" }, // 2432836680
		{ &Z_Construct_UFunction_UUnLuaFunctionLibrary_HotReload, "HotReload" }, // 2817853910
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnLuaFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UnLuaFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/UnLuaFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnLuaFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnLuaFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnLuaFunctionLibrary_Statics::ClassParams = {
		&UUnLuaFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUnLuaFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnLuaFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UUnLuaFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnLuaFunctionLibrary.OuterSingleton, Z_Construct_UClass_UUnLuaFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnLuaFunctionLibrary.OuterSingleton;
	}
	template<> UNLUA_API UClass* StaticClass<UUnLuaFunctionLibrary>()
	{
		return UUnLuaFunctionLibrary::StaticClass();
	}
	UUnLuaFunctionLibrary::UUnLuaFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnLuaFunctionLibrary);
	UUnLuaFunctionLibrary::~UUnLuaFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUnLuaFunctionLibrary, UUnLuaFunctionLibrary::StaticClass, TEXT("UUnLuaFunctionLibrary"), &Z_Registration_Info_UClass_UUnLuaFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnLuaFunctionLibrary), 2683078374U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaFunctionLibrary_h_1471857680(TEXT("/Script/UnLua"),
		Z_CompiledInDeferFile_FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AIProject_Plugins_UnLua_Source_UnLua_Public_UnLuaFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
