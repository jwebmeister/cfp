#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
		units[] = {
			"C_Driver_1_black_F",
			"C_Driver_1_blue_F",
			"C_Driver_1_green_F",
			"C_Driver_1_red_F",
			"C_Driver_1_white_F",
			"C_Driver_1_yellow_F",
			"C_Driver_1_orange_F",
			"SP_0000_Standard_BattleDressUniform_Black",
			"SP_0000_Standard_BattleDressUniform_Green",
			"SP_0000_Standard_BattleDressUniform_Tan",
			"SP_0000_Standard_BattleDressUniform_Grey",
			"SP_0000_Standard_BattleDressUniform_BlueDark",
			"SP_0000_Standard_BattleDressUniform_BlueFrost",
			"SP_0000_Standard_BattleDressUniform_GreenOlive",
			"SP_0000_Standard_BattleDressUniform_Hunter",
			"SP_0000_Standard_BattleDressUniform_Hunter2",
			"SP_0000_Standard_BattleDressUniform_ATacsFG",
			"SP_0000_Standard_BattleDressUniform_NodUrban",
			"SP_0000_Standard_Coverall_Black",
			"SP_0000_Standard_Coverall_Green",
			"SP_0000_Standard_Coverall_Tan",
			"SP_0000_Standard_Coverall_Grey",
			"SP_0000_Standard_Coverall_BlueDark",
			"SP_0000_Standard_Coverall_BlueFrost",
			"SP_0000_Standard_Coverall_GreenOlive",
			"SP_0000_Standard_Coverall_White",
			"SP_0000_Standard_Coverall_Red",
			"SP_0000_Standard_Coverall_Yellow",
			"SP_0000_Standard_Coverall_Brown",
			"SP_0000_Standard_Coverall_Orange",
			"SP_0000_Standard_DiverUniform_Black",
			"SP_0000_Standard_DiverUniform_Green",
			"SP_0000_Standard_DiverUniform_Tan",
			"SP_0000_Standard_DiverUniform_Grey",
			"SP_0000_Standard_DiverUniform_BlueDark",
			"SP_0000_Standard_DiverUniform_BlueFrost",
			"SP_0000_Standard_DiverUniform_GreenOlive",
			"SP_0000_Standard_DiverUniform_Hunter",
			"SP_0000_Standard_DiverUniform_Hunter2",
			"SP_0000_Standard_DiverUniform_ATacsFG",
			"SP_0000_Standard_DiverUniform_NodUrban",
			"SP_0000_Standard_FieldUniform_Black",
			"SP_0000_Standard_FieldUniform_Black_SS",
			"SP_0000_Standard_FieldUniform_Green",
			"SP_0000_Standard_FieldUniform_Green_SS",
			"SP_0000_Standard_FieldUniform_Tan",
			"SP_0000_Standard_FieldUniform_Tan_SS",
			"SP_0000_Standard_FieldUniform_Grey",
			"SP_0000_Standard_FieldUniform_Grey_SS",
			"SP_0000_Standard_FieldUniform_BlueDark",
			"SP_0000_Standard_FieldUniform_BlueDark_SS",
			"SP_0000_Standard_FieldUniform_BlueFrost",
			"SP_0000_Standard_FieldUniform_BlueFrost_SS",
			"SP_0000_Standard_FieldUniform_GreenOlive",
			"SP_0000_Standard_FieldUniform_GreenOlive_SS",
			"SP_0000_Standard_FieldUniform_Hunter",
			"SP_0000_Standard_FieldUniform_Hunter_SS",
			"SP_0000_Standard_FieldUniform_Hunter2",
			"SP_0000_Standard_FieldUniform_Hunter2_SS",
			"SP_0000_Standard_FieldUniform_ATacsFG",
			"SP_0000_Standard_FieldUniform_ATacsFG_SS",
			"SP_0000_Standard_FieldUniform_NodUrban",
			"SP_0000_Standard_FieldUniform_NodUrban_SS",
			"SP_0000_Standard_PulloverUniform_Black",
			"SP_0000_Standard_PulloverUniform_Green",
			"SP_0000_Standard_PulloverUniform_Tan",
			"SP_0000_Standard_PulloverUniform_Grey",
			"SP_0000_Standard_PulloverUniform_BlueDark",
			"SP_0000_Standard_PulloverUniform_BlueFrost",
			"SP_0000_Standard_PulloverUniform_GreenOlive",
			"SP_0000_Standard_PulloverUniform_Hunter",
			"SP_0000_Standard_PulloverUniform_Hunter2",
			"SP_0000_Standard_PulloverUniform_ATacsFG",
			"SP_0000_Standard_PulloverUniform_NodUrban",
			"SP_0000_Standard_WorkUniform_Hunter",
			"SP_0000_Standard_WorkUniform_Hunter2",
			"SP_0000_Standard_WorkUniform_ATacsFG",
			"SP_0000_Standard_WorkUniform_NodUrban",
			"SP_0000_Standard_TacticalUniform_Black",
			"SP_0000_Standard_TacticalUniform_Black_SS",
			"SP_0000_Standard_TacticalUniform_Black_TS",
			"SP_0000_Standard_TacticalUniform_Green",
			"SP_0000_Standard_TacticalUniform_Green_SS",
			"SP_0000_Standard_TacticalUniform_Green_TS",
			"SP_0000_Standard_TacticalUniform_Tan",
			"SP_0000_Standard_TacticalUniform_Tan_SS",
			"SP_0000_Standard_TacticalUniform_Tan_TS",
			"SP_0000_Standard_TacticalUniform_Grey",
			"SP_0000_Standard_TacticalUniform_Grey_SS",
			"SP_0000_Standard_TacticalUniform_Grey_TS",
			"SP_0000_Standard_TacticalUniform_BlueDark",
			"SP_0000_Standard_TacticalUniform_BlueDark_SS",
			"SP_0000_Standard_TacticalUniform_BlueDark_TS",
			"SP_0000_Standard_TacticalUniform_BlueFrost",
			"SP_0000_Standard_TacticalUniform_BlueFrost_SS",
			"SP_0000_Standard_TacticalUniform_BlueFrost_TS",
			"SP_0000_Standard_TacticalUniform_GreenOlive",
			"SP_0000_Standard_TacticalUniform_GreenOlive_SS",
			"SP_0000_Standard_TacticalUniform_GreenOlive_TS",
			"SP_0000_Standard_TacticalUniform_Hunter",
			"SP_0000_Standard_TacticalUniform_Hunter_SS",
			"SP_0000_Standard_TacticalUniform_Hunter_TS",
			"SP_0000_Standard_TacticalUniform_Hunter2",
			"SP_0000_Standard_TacticalUniform_Hunter2_SS",
			"SP_0000_Standard_TacticalUniform_Hunter2_TS",
			"SP_0000_Standard_TacticalUniform_ATacsFG",
			"SP_0000_Standard_TacticalUniform_ATacsFG_SS",
			"SP_0000_Standard_TacticalUniform_ATacsFG_TS",
			"SP_0000_Standard_TacticalUniform_NodUrban",
			"SP_0000_Standard_TacticalUniform_NodUrban_SS",
			"SP_0000_Standard_TacticalUniform_NodUrban_TS",
			"SP_0000_Standard_Underwear_Black",
			"SP_0000_Standard_Underwear_Green",
			"SP_0000_Standard_Underwear_Tan",
			"SP_0000_Standard_Underwear_Grey",
			"SP_0000_Standard_Underwear_BlueDark",
			"SP_0000_Standard_Underwear_BlueFrost",
			"SP_0000_Standard_Underwear_BlueSky",
			"SP_0000_Standard_Underwear_GreenOlive",
			"SP_0000_Standard_Underwear_GreenSpring",
			"SP_0000_Standard_Underwear_Brown",
			"SP_0000_Standard_Underwear_Olive",
			"SP_0000_Standard_Underwear_Orange",
			"SP_0000_Standard_Underwear_Pink",
			"SP_0000_Standard_Underwear_Purple",
			"SP_0000_Standard_Underwear_Red",
			"SP_0000_Standard_Underwear_White",
			"SP_0000_Standard_Underwear_Yellow",
			"CFP_KhetPartug_Long_M81",
			"CFP_KhetPartug_Short_M81",
			"CFP_KhetPartug_Long_Olive",
			"CFP_KhetPartug_Short_Olive",
			"CFP_KhetPartug_Long_Light_Olive",
			"CFP_KhetPartug_Short_Light_Olive",
			"CFP_KhetPartug_Long_Olive_Polygon",
			"CFP_KhetPartug_Short_Olive_Polygon",				
			"CFP_BattleDressUniform_3ColorDesert",
			"CFP_BattleDressUniform_AfricanWoodland",
			"CFP_BattleDressUniform_M81",
			"CFP_BattleDressUniform_ChocChip",
			"CFP_BattleDressUniform_DPMWoodland",
			"CFP_BattleDressUniform_DPMWoodlandGreen",
			"CFP_BattleDressUniform_DPM",
			"CFP_BattleDressUniform_edrl",
			"CFP_BattleDressUniform_polygondesert",
			"CFP_BattleDressUniform_tigerstripe",
			"CFP_BattleDressUniform_atacs_au",
			"CFP_BattleDressUniform_multicam",
			"CFP_BattleDressUniform_flora_arid",
			"CFP_BattleDressUniform_multicam_snow",
			"CFP_BattleDressUniform_mtp_snow",
			"CFP_BattleDressUniform_flecktarn_snow",
			"CFP_FieldUniform_3ColorDesert",
			"CFP_FieldUniform_afghan_w",
			"CFP_FieldUniform_AfricanWoodland",
			"CFP_FieldUniform_M81",
			"CFP_FieldUniform_ChocChip",
			"CFP_FieldUniform_DPMWoodland",
			"CFP_FieldUniform_DPM",
			"CFP_FieldUniform_edrl",
			"CFP_FieldUniform_polygondesert",
			"CFP_FieldUniform_tigerstripe",
			"CFP_FieldUniform_tigerstripe2",
			"CFP_FieldUniform_atacs_au",
			"CFP_FieldUniform_flora_arid",
			"CFP_FieldUniform_multicam",
			"CFP_FieldUniform_multicam_snow",
			"CFP_FieldUniform_mtp_snow",
			"CFP_FieldUniform_flecktarn_snow",
			"CFP_FieldUniform_iasfblack",
			"CFP_FieldUniform_m81anasf",
			"CFP_FieldUniform_ana",
			"CFP_FieldUniform_irandpm",
			"CFP_FieldUniform_idf",
			"CFP_FieldUniform_ana_wdlight",
			"CFP_FieldUniform_ana_wddark",
			"CFP_BattleDressUniform_irandpm",
			"CFP_BattleDressUniform_idf",
			"CFP_BattleDressUniform_anawoodland",
			"CFP_BattleDressUniform_ana_spec4ce_wdlight",
			"CFP_BattleDressUniform_ana_spec4ce_wddark",
			"CFP_FieldUniform_ana_spec4cewd_light",
			"CFP_FieldUniform_ana_spec4cewd_dark",
			"CFP_FieldUniform_anp_light",
			"CFP_FieldUniform_anp_dark",
			"CFP_FieldUniform_ancop_light",
			"CFP_FieldUniform_ancop_dark",
			"CFP_BattleDressUniform_anp_light",
			"CFP_BattleDressUniform_anp_dark",
			"CFP_BattleDressUniform_ancop_light",
			"CFP_BattleDressUniform_ancop_dark",
			"CFP_BattleDressUniform_ana_wdlight",
			"CFP_BattleDressUniform_ana_wddark",
			"CFP_FieldUniform_iran_sf_digital",
			"CFP_BattleDressUniform_woodland"

		};
		weapons[] = {
			"SP_0000_Standard_BattleDressUniform_Black",
			"SP_0000_Standard_BattleDressUniform_Green",
			"SP_0000_Standard_BattleDressUniform_Tan",
			"SP_0000_Standard_BattleDressUniform_Grey",
			"SP_0000_Standard_BattleDressUniform_BlueDark",
			"SP_0000_Standard_BattleDressUniform_BlueFrost",
			"SP_0000_Standard_BattleDressUniform_GreenOlive",
			"SP_0000_Standard_BattleDressUniform_Hunter",
			"SP_0000_Standard_BattleDressUniform_Hunter2",
			"SP_0000_Standard_BattleDressUniform_ATacsFG",
			"SP_0000_Standard_BattleDressUniform_NodUrban",
			"SP_0000_Standard_Coverall_Black",
			"SP_0000_Standard_Coverall_Green",
			"SP_0000_Standard_Coverall_Tan",
			"SP_0000_Standard_Coverall_Grey",
			"SP_0000_Standard_Coverall_BlueDark",
			"SP_0000_Standard_Coverall_BlueFrost",
			"SP_0000_Standard_Coverall_GreenOlive",
			"SP_0000_Standard_Coverall_White",
			"SP_0000_Standard_Coverall_Red",
			"SP_0000_Standard_Coverall_Yellow",
			"SP_0000_Standard_Coverall_Brown",
			"SP_0000_Standard_Coverall_Orange",
			"SP_0000_Standard_DiverUniform_Black",
			"SP_0000_Standard_DiverUniform_Green",
			"SP_0000_Standard_DiverUniform_Tan",
			"SP_0000_Standard_DiverUniform_Grey",
			"SP_0000_Standard_DiverUniform_BlueDark",
			"SP_0000_Standard_DiverUniform_BlueFrost",
			"SP_0000_Standard_DiverUniform_GreenOlive",
			"SP_0000_Standard_DiverUniform_Hunter",
			"SP_0000_Standard_DiverUniform_Hunter2",
			"SP_0000_Standard_DiverUniform_ATacsFG",
			"SP_0000_Standard_DiverUniform_NodUrban",
			"SP_0000_Standard_FieldUniform_Black",
			"SP_0000_Standard_FieldUniform_Black_SS",
			"SP_0000_Standard_FieldUniform_Green",
			"SP_0000_Standard_FieldUniform_Green_SS",
			"SP_0000_Standard_FieldUniform_Tan",
			"SP_0000_Standard_FieldUniform_Tan_SS",
			"SP_0000_Standard_FieldUniform_Grey",
			"SP_0000_Standard_FieldUniform_Grey_SS",
			"SP_0000_Standard_FieldUniform_BlueDark",
			"SP_0000_Standard_FieldUniform_BlueDark_SS",
			"SP_0000_Standard_FieldUniform_BlueFrost",
			"SP_0000_Standard_FieldUniform_BlueFrost_SS",
			"SP_0000_Standard_FieldUniform_GreenOlive",
			"SP_0000_Standard_FieldUniform_GreenOlive_SS",
			"SP_0000_Standard_FieldUniform_Hunter",
			"SP_0000_Standard_FieldUniform_Hunter_SS",
			"SP_0000_Standard_FieldUniform_Hunter2",
			"SP_0000_Standard_FieldUniform_Hunter2_SS",
			"SP_0000_Standard_FieldUniform_ATacsFG",
			"SP_0000_Standard_FieldUniform_ATacsFG_SS",
			"SP_0000_Standard_FieldUniform_NodUrban",
			"SP_0000_Standard_FieldUniform_NodUrban_SS",
			"SP_0000_Standard_PulloverUniform_Black",
			"SP_0000_Standard_PulloverUniform_Green",
			"SP_0000_Standard_PulloverUniform_Tan",
			"SP_0000_Standard_PulloverUniform_Grey",
			"SP_0000_Standard_PulloverUniform_BlueDark",
			"SP_0000_Standard_PulloverUniform_BlueFrost",
			"SP_0000_Standard_PulloverUniform_GreenOlive",
			"SP_0000_Standard_PulloverUniform_Hunter",
			"SP_0000_Standard_PulloverUniform_Hunter2",
			"SP_0000_Standard_PulloverUniform_ATacsFG",
			"SP_0000_Standard_PulloverUniform_NodUrban",
			"SP_0000_Standard_WorkUniform_Hunter",
			"SP_0000_Standard_WorkUniform_Hunter2",
			"SP_0000_Standard_WorkUniform_ATacsFG",
			"SP_0000_Standard_WorkUniform_NodUrban",
			"SP_0000_Standard_TacticalUniform_Black",
			"SP_0000_Standard_TacticalUniform_Black_SS",
			"SP_0000_Standard_TacticalUniform_Black_TS",
			"SP_0000_Standard_TacticalUniform_Green",
			"SP_0000_Standard_TacticalUniform_Green_SS",
			"SP_0000_Standard_TacticalUniform_Green_TS",
			"SP_0000_Standard_TacticalUniform_Tan",
			"SP_0000_Standard_TacticalUniform_Tan_SS",
			"SP_0000_Standard_TacticalUniform_Tan_TS",
			"SP_0000_Standard_TacticalUniform_Grey",
			"SP_0000_Standard_TacticalUniform_Grey_SS",
			"SP_0000_Standard_TacticalUniform_Grey_TS",
			"SP_0000_Standard_TacticalUniform_BlueDark",
			"SP_0000_Standard_TacticalUniform_BlueDark_SS",
			"SP_0000_Standard_TacticalUniform_BlueDark_TS",
			"SP_0000_Standard_TacticalUniform_BlueFrost",
			"SP_0000_Standard_TacticalUniform_BlueFrost_SS",
			"SP_0000_Standard_TacticalUniform_BlueFrost_TS",
			"SP_0000_Standard_TacticalUniform_GreenOlive",
			"SP_0000_Standard_TacticalUniform_GreenOlive_SS",
			"SP_0000_Standard_TacticalUniform_GreenOlive_TS",
			"SP_0000_Standard_TacticalUniform_Hunter",
			"SP_0000_Standard_TacticalUniform_Hunter_SS",
			"SP_0000_Standard_TacticalUniform_Hunter_TS",
			"SP_0000_Standard_TacticalUniform_Hunter2",
			"SP_0000_Standard_TacticalUniform_Hunter2_SS",
			"SP_0000_Standard_TacticalUniform_Hunter2_TS",
			"SP_0000_Standard_TacticalUniform_ATacsFG",
			"SP_0000_Standard_TacticalUniform_ATacsFG_SS",
			"SP_0000_Standard_TacticalUniform_ATacsFG_TS",
			"SP_0000_Standard_TacticalUniform_NodUrban",
			"SP_0000_Standard_TacticalUniform_NodUrban_SS",
			"SP_0000_Standard_TacticalUniform_NodUrban_TS",
			"SP_0000_Standard_Underwear_Black",
			"SP_0000_Standard_Underwear_Green",
			"SP_0000_Standard_Underwear_Tan",
			"SP_0000_Standard_Underwear_Grey",
			"SP_0000_Standard_Underwear_BlueDark",
			"SP_0000_Standard_Underwear_BlueFrost",
			"SP_0000_Standard_Underwear_BlueSky",
			"SP_0000_Standard_Underwear_GreenOlive",
			"SP_0000_Standard_Underwear_GreenSpring",
			"SP_0000_Standard_Underwear_Brown",
			"SP_0000_Standard_Underwear_Olive",
			"SP_0000_Standard_Underwear_Orange",
			"SP_0000_Standard_Underwear_Pink",
			"SP_0000_Standard_Underwear_Purple",
			"SP_0000_Standard_Underwear_Red",
			"SP_0000_Standard_Underwear_White",
			"SP_0000_Standard_Underwear_Yellow",
			"CFP_U_KhetPartug_Long_M81",
			"CFP_U_KhetPartug_Short_M81",
			"CFP_U_KhetPartug_Long_Olive",
			"CFP_U_KhetPartug_Short_Olive",
			"CFP_U_KhetPartug_Long_Light_Olive",
			"CFP_U_KhetPartug_Short_Light_Olive",
			"CFP_U_KhetPartug_Long_Olive_Polygon",
			"CFP_U_KhetPartug_Short_Olive_Polygon",						
			"CFP_U_BattleDressUniform_3ColorDesert",
			"CFP_U_BattleDressUniform_AfricanWoodland",
			"CFP_U_BattleDressUniform_M81",
			"CFP_U_BattleDressUniform_ChocChip",
			"CFP_U_BattleDressUniform_DPMWoodland",
			"CFP_BattleDressUniform_DPMWoodlandGreen",
			"CFP_U_BattleDressUniform_DPM",
			"CFP_U_BattleDressUniform_edrl",
			"CFP_U_BattleDressUniform_polygondesert",
			"CFP_U_BattleDressUniform_tigerstripe",
			"CFP_U_BattleDressUniform_multicam",
			"CFP_U_BattleDressUniform_multicam_snow",
			"CFP_U_BattleDressUniform_mtp_snow",
			"CFP_U_BattleDressUniform_flecktarn_snow",
			"CFP_U_FieldUniform_3ColorDesert",
			"CFP_U_FieldUniform_AfricanWoodland",
			"CFP_U_FieldUniform_M81",
			"CFP_U_FieldUniform_ChocChip",
			"CFP_U_FieldUniform_DPMWoodland",
			"CFP_U_FieldUniform_DPM",
			"CFP_U_FieldUniform_edrl",
			"CFP_U_FieldUniform_polygondesert",
			"CFP_U_FieldUniform_tigerstripe",
			"CFP_U_FieldUniform_multicam",
			"CFP_U_FieldUniform_multicam_snow",
			"CFP_U_FieldUniform_mtp_snow",
			"CFP_U_FieldUniform_flecktarn_snow",
			"CFP_FieldUniform_iasfblack",
			"CFP_FieldUniform_m81anasf",
			"CFP_FieldUniform_ana",
			"CFP_FieldUniform_irandpm",
			"CFP_FieldUniform_idf",
			"CFP_FieldUniform_ana_wdlight",
			"CFP_FieldUniform_ana_wddark",
			"CFP_BattleDressUniform_irandpm",
			"CFP_BattleDressUniform_idf",
			"CFP_BattleDressUniform_anawoodland",
			"CFP_BattleDressUniform_ana_spec4ce_wdlight",
			"CFP_BattleDressUniform_ana_spec4ce_wddark",
			"CFP_FieldUniform_ana_spec4cewd_light",
			"CFP_FieldUniform_ana_spec4cewd_dark",
			"CFP_FieldUniform_anp_light",
			"CFP_FieldUniform_anp_dark",
			"CFP_FieldUniform_ancop_light",
			"CFP_FieldUniform_ancop_dark",
			"CFP_BattleDressUniform_anp_light",
			"CFP_BattleDressUniform_anp_dark",
			"CFP_BattleDressUniform_ancop_light",
			"CFP_BattleDressUniform_ancop_dark",
			"CFP_BattleDressUniform_ana_wdlight",
			"CFP_BattleDressUniform_ana_wddark",
			"CFP_U_FieldUniform_iran_sf_digital",
			"CFP_BattleDressUniform_woodland"
		};
        author = MODULE_AUTHOR;
        authors[] = {"SP Craig", "Tupolov","AuburnAlumni"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"CFP_main","CFP_Models"};
        VERSION_CONFIG;
	};
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
