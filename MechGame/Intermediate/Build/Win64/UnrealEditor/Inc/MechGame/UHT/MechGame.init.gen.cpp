// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MechGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MechGame()
	{
		if (!Z_Registration_Info_UPackage__Script_MechGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MechGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xA720C581,
				0x4A774B6A,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MechGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MechGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MechGame(Z_Construct_UPackage__Script_MechGame, TEXT("/Script/MechGame"), Z_Registration_Info_UPackage__Script_MechGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA720C581, 0x4A774B6A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
