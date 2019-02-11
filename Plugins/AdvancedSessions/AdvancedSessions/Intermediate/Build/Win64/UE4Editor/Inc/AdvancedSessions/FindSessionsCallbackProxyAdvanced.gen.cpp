// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Classes/FindSessionsCallbackProxyAdvanced.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindSessionsCallbackProxyAdvanced() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_NoRegister();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSessionsSearchSetting();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature();
// End Cross Module References
	void UFindSessionsCallbackProxyAdvanced::StaticRegisterNativesUFindSessionsCallbackProxyAdvanced()
	{
		UClass* Class = UFindSessionsCallbackProxyAdvanced::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FilterSessionResults", &UFindSessionsCallbackProxyAdvanced::execFilterSessionResults },
			{ "FindSessionsAdvanced", &UFindSessionsCallbackProxyAdvanced::execFindSessionsAdvanced },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics
	{
		struct FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms
		{
			TArray<FBlueprintSessionResult> SessionResults;
			TArray<FSessionsSearchSetting> Filters;
			TArray<FBlueprintSessionResult> FilteredResults;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FilteredResults;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilteredResults_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Filters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SessionResults;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionResults_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_FilteredResults = { UE4CodeGen_Private::EPropertyClass::Array, "FilteredResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms, FilteredResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_FilteredResults_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FilteredResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_Filters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_Filters = { UE4CodeGen_Private::EPropertyClass::Array, "Filters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms, Filters), METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_Filters_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_Filters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_Filters_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Filters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSessionsSearchSetting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_SessionResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_SessionResults = { UE4CodeGen_Private::EPropertyClass::Array, "SessionResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms, SessionResults), METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_SessionResults_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_SessionResults_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_SessionResults_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SessionResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_FilteredResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_FilteredResults_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_Filters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_Filters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_SessionResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_SessionResults_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxyAdvanced.h" },
		{ "ToolTip", "Filters an array of session results by the given search parameters, returns a new array with the filtered results" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced, "FilterSessionResults", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms), Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics
	{
		struct FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			int32 MaxResults;
			bool bUseLAN;
			EBPServerPresenceSearchType ServerTypeToSearch;
			TArray<FSessionsSearchSetting> Filters;
			bool bEmptyServersOnly;
			bool bNonEmptyServersOnly;
			bool bSecureServersOnly;
			int32 MinSlotsAvailable;
			UFindSessionsCallbackProxyAdvanced* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MinSlotsAvailable;
		static void NewProp_bSecureServersOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSecureServersOnly;
		static void NewProp_bNonEmptyServersOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNonEmptyServersOnly;
		static void NewProp_bEmptyServersOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEmptyServersOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Filters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filters_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ServerTypeToSearch;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ServerTypeToSearch_Underlying;
		static void NewProp_bUseLAN_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLAN;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, ReturnValue), Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_MinSlotsAvailable = { UE4CodeGen_Private::EPropertyClass::Int, "MinSlotsAvailable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, MinSlotsAvailable), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bSecureServersOnly_SetBit(void* Obj)
	{
		((FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms*)Obj)->bSecureServersOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bSecureServersOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bSecureServersOnly", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), &Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bSecureServersOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bNonEmptyServersOnly_SetBit(void* Obj)
	{
		((FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms*)Obj)->bNonEmptyServersOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bNonEmptyServersOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bNonEmptyServersOnly", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), &Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bNonEmptyServersOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bEmptyServersOnly_SetBit(void* Obj)
	{
		((FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms*)Obj)->bEmptyServersOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bEmptyServersOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bEmptyServersOnly", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), &Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bEmptyServersOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_Filters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_Filters = { UE4CodeGen_Private::EPropertyClass::Array, "Filters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, Filters), METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_Filters_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_Filters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_Filters_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Filters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSessionsSearchSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_ServerTypeToSearch = { UE4CodeGen_Private::EPropertyClass::Enum, "ServerTypeToSearch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, ServerTypeToSearch), Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_ServerTypeToSearch_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bUseLAN_SetBit(void* Obj)
	{
		((FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms*)Obj)->bUseLAN = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bUseLAN = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseLAN", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), &Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bUseLAN_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_MaxResults = { UE4CodeGen_Private::EPropertyClass::Int, "MaxResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_PlayerController = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_MinSlotsAvailable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bSecureServersOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bNonEmptyServersOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bEmptyServersOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_Filters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_Filters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_ServerTypeToSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_ServerTypeToSearch_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bUseLAN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_MaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Filters" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|AdvancedSessions" },
		{ "CPP_Default_bEmptyServersOnly", "false" },
		{ "CPP_Default_bNonEmptyServersOnly", "false" },
		{ "CPP_Default_bSecureServersOnly", "false" },
		{ "CPP_Default_MinSlotsAvailable", "0" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxyAdvanced.h" },
		{ "ToolTip", "Searches for advertised sessions with the default online subsystem and includes an array of filters" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced, "FindSessionsAdvanced", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_NoRegister()
	{
		return UFindSessionsCallbackProxyAdvanced::StaticClass();
	}
	struct Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults, "FilterSessionResults" }, // 3698119211
		{ &Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced, "FindSessionsAdvanced" }, // 1861455329
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FindSessionsCallbackProxyAdvanced.h" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxyAdvanced.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxyAdvanced.h" },
		{ "ToolTip", "Called when there is an unsuccessful query" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::NewProp_OnFailure = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnFailure", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFindSessionsCallbackProxyAdvanced, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::NewProp_OnFailure_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxyAdvanced.h" },
		{ "ToolTip", "Called when there is a successful query" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::NewProp_OnSuccess = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFindSessionsCallbackProxyAdvanced, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::NewProp_OnSuccess_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::NewProp_OnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFindSessionsCallbackProxyAdvanced>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::ClassParams = {
		&UFindSessionsCallbackProxyAdvanced::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008800A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFindSessionsCallbackProxyAdvanced, 1003562435);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFindSessionsCallbackProxyAdvanced(Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced, &UFindSessionsCallbackProxyAdvanced::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UFindSessionsCallbackProxyAdvanced"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFindSessionsCallbackProxyAdvanced);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
