class CfgPatches {
	class DayZExpansionMarketEnhancements {
		requiredAddons[]={
			"DZ_Scripts",
			"DayZExpansion_Core",
            "DayZExpansion_Market_Scripts"
		};
	};
};

class CfgAddons {
	class PreloadBanks {};
	class PreloadAddons {
		class DayZ {
			list[]={
                "DayZExpansion_Core",
                "DayZExpansion_Market_Scripts"
            };
        };
    };
};

class CfgMods {
	class DayZExpansionMarketEnhancements {
		dir="DayZExpansionMarketEnhancements";
		author="@Lewk_io";
		type="mod";
		dependencies[]={
			"Game",
			"World",
			"Mission"
		};
		class defs {
			class gameScriptModule {
				value="";
				files[]={
					"DayZExpansionMarketEnhancements/Scripts/3_Game"
				};
			};
			class missionScriptModule {
				value="";
				files[]={
					"DayZExpansionMarketEnhancements/Scripts/5_Mission"
				};
			};
        };
    };
};