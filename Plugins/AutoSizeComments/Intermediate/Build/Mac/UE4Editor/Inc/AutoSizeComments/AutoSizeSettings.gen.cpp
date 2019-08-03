// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSizeComments/Public/AutoSizeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoSizeSettings() {}
// Cross Module References
	AUTOSIZECOMMENTS_API UScriptStruct* Z_Construct_UScriptStruct_FPresetCommentStyle();
	UPackage* Z_Construct_UPackage__Script_AutoSizeComments();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	AUTOSIZECOMMENTS_API UClass* Z_Construct_UClass_UAutoSizeSettings_NoRegister();
	AUTOSIZECOMMENTS_API UClass* Z_Construct_UClass_UAutoSizeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FPresetCommentStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOSIZECOMMENTS_API uint32 Get_Z_Construct_UScriptStruct_FPresetCommentStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPresetCommentStyle, Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("PresetCommentStyle"), sizeof(FPresetCommentStyle), Get_Z_Construct_UScriptStruct_FPresetCommentStyle_Hash());
	}
	return Singleton;
}
template<> AUTOSIZECOMMENTS_API UScriptStruct* StaticStruct<FPresetCommentStyle>()
{
	return FPresetCommentStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPresetCommentStyle(FPresetCommentStyle::StaticStruct, TEXT("/Script/AutoSizeComments"), TEXT("PresetCommentStyle"), false, nullptr, nullptr);
static struct FScriptStruct_AutoSizeComments_StaticRegisterNativesFPresetCommentStyle
{
	FScriptStruct_AutoSizeComments_StaticRegisterNativesFPresetCommentStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PresetCommentStyle")),new UScriptStruct::TCppStructOps<FPresetCommentStyle>);
	}
} ScriptStruct_AutoSizeComments_StaticRegisterNativesFPresetCommentStyle;
	struct Z_Construct_UScriptStruct_FPresetCommentStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FontSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutoSizeSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPresetCommentStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_FontSize_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/AutoSizeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetCommentStyle, FontSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_FontSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_FontSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/AutoSizeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetCommentStyle, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_Color_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_Color_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_FontSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_Color,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSizeComments,
		nullptr,
		&NewStructOps,
		"PresetCommentStyle",
		sizeof(FPresetCommentStyle),
		alignof(FPresetCommentStyle),
		Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPresetCommentStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPresetCommentStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSizeComments();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PresetCommentStyle"), sizeof(FPresetCommentStyle), Get_Z_Construct_UScriptStruct_FPresetCommentStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPresetCommentStyle_Hash() { return 2772583171U; }
	void UAutoSizeSettings::StaticRegisterNativesUAutoSizeSettings()
	{
	}
	UClass* Z_Construct_UClass_UAutoSizeSettings_NoRegister()
	{
		return UAutoSizeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAutoSizeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGlobalShowBubbleWhenZoomed_MetaData[];
#endif
		static void NewProp_bGlobalShowBubbleWhenZoomed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGlobalShowBubbleWhenZoomed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGlobalColorBubble_MetaData[];
#endif
		static void NewProp_bGlobalColorBubble_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGlobalColorBubble;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptyCommentBoxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmptyCommentBoxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMoveEmptyCommentBoxes_MetaData[];
#endif
		static void NewProp_bMoveEmptyCommentBoxes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoveEmptyCommentBoxes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommentNodePadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CommentNodePadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresetStyles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PresetStyles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PresetStyles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeaderStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAggressivelyUseDefaultColor_MetaData[];
#endif
		static void NewProp_bAggressivelyUseDefaultColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAggressivelyUseDefaultColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRandomColor_MetaData[];
#endif
		static void NewProp_bUseRandomColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRandomColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCommentColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultCommentColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultFontSize_MetaData[];
#endif
		static void NewProp_bUseDefaultFontSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultFontSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFontSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DefaultFontSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoSizeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSizeComments,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AutoSizeSettings.h" },
		{ "ModuleRelativePath", "Public/AutoSizeSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bGlobalShowBubbleWhenZoomed_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/AutoSizeSettings.h" },
		{ "ToolTip", "Globally set \"Show Bubble When Zoomed\" for every comment box that is created or loaded" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bGlobalShowBubbleWhenZoomed_SetBit(void* Obj)
	{
		((UAutoSizeSettings*)Obj)->bGlobalShowBubbleWhenZoomed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bGlobalShowBubbleWhenZoomed = { "bGlobalShowBubbleWhenZoomed", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeSettings), &Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bGlobalShowBubbleWhenZoomed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bGlobalShowBubbleWhenZoomed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bGlobalShowBubbleWhenZoomed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bGlobalColorBubble_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/AutoSizeSettings.h" },
		{ "ToolTip", "Globally set \"Color Bubble\" for every comment box that is created or loaded" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bGlobalColorBubble_SetBit(void* Obj)
	{
		((UAutoSizeSettings*)Obj)->bGlobalColorBubble = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bGlobalColorBubble = { "bGlobalColorBubble", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeSettings), &Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bGlobalColorBubble_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bGlobalColorBubble_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bGlobalColorBubble_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_EmptyCommentBoxSpeed_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/AutoSizeSettings.h" },
		{ "ToolTip", "The speed at which empty comment boxes move" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_EmptyCommentBoxSpeed = { "EmptyCommentBoxSpeed", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeSettings, EmptyCommentBoxSpeed), METADATA_PARAMS(Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_EmptyCommentBoxSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_EmptyCommentBoxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bMoveEmptyCommentBoxes_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/AutoSizeSettings.h" },
		{ "ToolTip", "If enabled, empty comment boxes will move out of the way of other comment boxes" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bMoveEmptyCommentBoxes_SetBit(void* Obj)
	{
		((UAutoSizeSettings*)Obj)->bMoveEmptyCommentBoxes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bMoveEmptyCommentBoxes = { "bMoveEmptyCommentBoxes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeSettings), &Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bMoveEmptyCommentBoxes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bMoveEmptyCommentBoxes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bMoveEmptyCommentBoxes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_CommentNodePadding_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/AutoSizeSettings.h" },
		{ "ToolTip", "Amount of padding for around the contents of a comment node" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_CommentNodePadding = { "CommentNodePadding", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeSettings, CommentNodePadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_CommentNodePadding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_CommentNodePadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_PresetStyles_MetaData[] = {
		{ "Category", "Styles" },
		{ "ModuleRelativePath", "Public/AutoSizeSettings.h" },
		{ "ToolTip", "Preset styles (each style will have its own button on the comment box)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_PresetStyles = { "PresetStyles", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeSettings, PresetStyles), METADATA_PARAMS(Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_PresetStyles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_PresetStyles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_PresetStyles_Inner = { "PresetStyles", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPresetCommentStyle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_HeaderStyle_MetaData[] = {
		{ "Category", "Styles" },
		{ "ModuleRelativePath", "Public/AutoSizeSettings.h" },
		{ "ToolTip", "Style for header comment boxes" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_HeaderStyle = { "HeaderStyle", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeSettings, HeaderStyle), Z_Construct_UScriptStruct_FPresetCommentStyle, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_HeaderStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_HeaderStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bAggressivelyUseDefaultColor_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Public/AutoSizeSettings.h" },
		{ "ToolTip", "Set all nodes in the graph to the default color" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bAggressivelyUseDefaultColor_SetBit(void* Obj)
	{
		((UAutoSizeSettings*)Obj)->bAggressivelyUseDefaultColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bAggressivelyUseDefaultColor = { "bAggressivelyUseDefaultColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeSettings), &Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bAggressivelyUseDefaultColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bAggressivelyUseDefaultColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bAggressivelyUseDefaultColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bUseRandomColor_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Public/AutoSizeSettings.h" },
		{ "ToolTip", "If enabled, comment boxes will spawn with a random color. If disabled, use default color" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bUseRandomColor_SetBit(void* Obj)
	{
		((UAutoSizeSettings*)Obj)->bUseRandomColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bUseRandomColor = { "bUseRandomColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeSettings), &Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bUseRandomColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bUseRandomColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bUseRandomColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_DefaultCommentColor_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Public/AutoSizeSettings.h" },
		{ "ToolTip", "If Use Random Color is not enabled, comment boxes will spawn with this default color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_DefaultCommentColor = { "DefaultCommentColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeSettings, DefaultCommentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_DefaultCommentColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_DefaultCommentColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bUseDefaultFontSize_MetaData[] = {
		{ "Category", "FontSize" },
		{ "ModuleRelativePath", "Public/AutoSizeSettings.h" },
		{ "ToolTip", "If enabled, all nodes will be changed to the default font size (unless they are a preset or floating node)" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bUseDefaultFontSize_SetBit(void* Obj)
	{
		((UAutoSizeSettings*)Obj)->bUseDefaultFontSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bUseDefaultFontSize = { "bUseDefaultFontSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeSettings), &Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bUseDefaultFontSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bUseDefaultFontSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bUseDefaultFontSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_DefaultFontSize_MetaData[] = {
		{ "Category", "FontSize" },
		{ "ModuleRelativePath", "Public/AutoSizeSettings.h" },
		{ "ToolTip", "The default font size for comment boxes" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_DefaultFontSize = { "DefaultFontSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeSettings, DefaultFontSize), METADATA_PARAMS(Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_DefaultFontSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_DefaultFontSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoSizeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bGlobalShowBubbleWhenZoomed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bGlobalColorBubble,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_EmptyCommentBoxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bMoveEmptyCommentBoxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_CommentNodePadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_PresetStyles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_PresetStyles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_HeaderStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bAggressivelyUseDefaultColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bUseRandomColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_DefaultCommentColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_bUseDefaultFontSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeSettings_Statics::NewProp_DefaultFontSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoSizeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoSizeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutoSizeSettings_Statics::ClassParams = {
		&UAutoSizeSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAutoSizeSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAutoSizeSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAutoSizeSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAutoSizeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutoSizeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutoSizeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutoSizeSettings, 1938060096);
	template<> AUTOSIZECOMMENTS_API UClass* StaticClass<UAutoSizeSettings>()
	{
		return UAutoSizeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutoSizeSettings(Z_Construct_UClass_UAutoSizeSettings, &UAutoSizeSettings::StaticClass, TEXT("/Script/AutoSizeComments"), TEXT("UAutoSizeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoSizeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
