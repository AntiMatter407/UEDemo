// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Registries/PropertyRegistry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyRegistry() {}
// Cross Module References
	UNLUA_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyCollector();
	UPackage* Z_Construct_UPackage__Script_UnLua();
// End Cross Module References
	struct Z_Construct_UScriptStruct_FPropertyCollector_Statics
	{
		struct FPropertyCollector
		{
		};

#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyCollector_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Registries/PropertyRegistry.h" },
	};
#endif
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyCollector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnLua,
		nullptr,
		nullptr,
		"PropertyCollector",
		sizeof(FPropertyCollector),
		alignof(FPropertyCollector),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyCollector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyCollector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyCollector()
	{
		static UScriptStruct* ReturnStruct = nullptr;
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPropertyCollector_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
