/* ========================================================================== */
/*   Server Teleporter (Make for Altron)  [www.altron-wow.eu]                 */
/*   teleport.cpp                                                             */
/*   (c) 2010 Author                                                          */
/*   Mouse                                                                    */
/*   Description                                                              */
/*   World of Warcraft Teleporter                                             */
/* ========================================================================== */

#include "ScriptedPch.h" 

#define STORMWIND_CITY     300
#define IRONFORGE          301
#define DARNASSUS          302
#define EXODAR             303
#define SILVERMOON         304
#define ORGRIMMAR          305
#define UNDERCITY          306
#define THUNDER_BLUFF      307
#define GURUBASHI_ARENA    308
#define DALARAN            309
#define SHATTRATH_CITY     310
#define DK_ZONE            311
#define BOREAN_TUNDRA      312
#define VALIANCE_KEEP      313
#define GROM_GOL_BASE_CAMP 314
#define GADGETZAN          315
#define BOOTY_BAY          316
#define RATCHET            317
#define SHATTRATH          318
#define ISLE_DANAS         319
#define DIRE_MAUL_ARENA    320

bool GoHello_server_teleporter( Player *pPlayer, GameObject *pGO )
{
    if(pPlayer->GetTeam() == ALLIANCE)
    {
        pPlayer->ADD_GOSSIP_ITEM(0, "Teleport to the Stormwind City", GOSSIP_SENDER_MAIN, STORMWIND_CITY);
        pPlayer->ADD_GOSSIP_ITEM(0, "Teleport to the Ironforge", GOSSIP_SENDER_MAIN, IRONFORGE);
        pPlayer->ADD_GOSSIP_ITEM(0, "Teleport to the Darnassus", GOSSIP_SENDER_MAIN, DARNASSUS);
        pPlayer->ADD_GOSSIP_ITEM(0, "Teleport to the Exodar", GOSSIP_SENDER_MAIN, EXODAR);
    }
    
    if(pPlayer->GetTeam() == HORDE)
    {
        pPlayer->ADD_GOSSIP_ITEM(0, "Teleport to the Silvermoon", GOSSIP_SENDER_MAIN, SILVERMOON);
        pPlayer->ADD_GOSSIP_ITEM(0, "Teleport to the Orgrimmar", GOSSIP_SENDER_MAIN, ORGRIMMAR);
        pPlayer->ADD_GOSSIP_ITEM(0, "Teleport to the Undercity", GOSSIP_SENDER_MAIN, UNDERCITY);
        pPlayer->ADD_GOSSIP_ITEM(0, "Teleport to the Thunder Bluff", GOSSIP_SENDER_MAIN, THUNDER_BLUFF);
    }
    
    pPlayer->ADD_GOSSIP_ITEM(0, "Teleport to the Gurubashi Arena", GOSSIP_SENDER_MAIN, GURUBASHI_ARENA);
    pPlayer->ADD_GOSSIP_ITEM(0, "Teleport to the Dalaran", GOSSIP_SENDER_MAIN, DALARAN);
    pPlayer->ADD_GOSSIP_ITEM(0, "Teleport to the DK Zone", GOSSIP_SENDER_MAIN, DK_ZONE);
    pPlayer->ADD_GOSSIP_ITEM(0, "Teleport to the Borean Tundra", GOSSIP_SENDER_MAIN, BOREAN_TUNDRA);
    pPlayer->ADD_GOSSIP_ITEM(0, "Teleport to the Valiance Keep", GOSSIP_SENDER_MAIN, VALIANCE_KEEP);
    pPlayer->ADD_GOSSIP_ITEM(0, "Teleport to the Grol'gom Base Camp", GOSSIP_SENDER_MAIN, GROM_GOL_BASE_CAMP);
    pPlayer->ADD_GOSSIP_ITEM(0, "Teleport to the Gadgetzan", GOSSIP_SENDER_MAIN, GADGETZAN);
    pPlayer->ADD_GOSSIP_ITEM(0, "Teleport to the Booty Bay", GOSSIP_SENDER_MAIN, BOOTY_BAY);
    pPlayer->ADD_GOSSIP_ITEM(0, "Teleport to the Ratchet", GOSSIP_SENDER_MAIN, RATCHET);
    pPlayer->ADD_GOSSIP_ITEM(0, "Teleport to the Shattrath City", GOSSIP_SENDER_MAIN, SHATTRATH);
    pPlayer->ADD_GOSSIP_ITEM(0, "Teleport to the Isle of Quel'Danas", GOSSIP_SENDER_MAIN, ISLE_DANAS);
    pPlayer->ADD_GOSSIP_ITEM(0, "Teleport to the Dire Maul Arena", GOSSIP_SENDER_MAIN, DIRE_MAUL_ARENA);
  
    pPlayer->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, pGO->GetGUID());
    return true;
}

bool GOSelect_server_teleporter( Player *pPlayer, GameObject *pGO, uint32 sender, uint32 action )
{
    if(sender != GOSSIP_SENDER_MAIN) return true;
    if(!pPlayer->getAttackers().empty()) return true;

    switch(action)
    {
    case STORMWIND_CITY:
        pPlayer->TeleportTo(0, -8914.0488, 552.573425, 93.8967, 0);
        pPlayer->CLOSE_GOSSIP_MENU(); break;
    case IRONFORGE:
        pPlayer->TeleportTo(0, -4982.0634, -881.4423, 501.6585, 0);
        pPlayer->CLOSE_GOSSIP_MENU(); break;
    case DARNASSUS:
        pPlayer->TeleportTo(1, 9951.9570, 2280.4577, 1341.3946, 0);
        pPlayer->CLOSE_GOSSIP_MENU(); break;
    case EXODAR:
        pPlayer->TeleportTo(530, -3990.6325, -11853.3886, 0.3220, 0);
        pPlayer->CLOSE_GOSSIP_MENU(); break;
    case SILVERMOON:
        pPlayer->TeleportTo(530, 9409.6591, -7278.5229, 14.1895, 0);
        pPlayer->CLOSE_GOSSIP_MENU(); break;
    case ORGRIMMAR:
        pPlayer->TeleportTo(1, 1475.7580, -4418.1669, 25.4624, 0);
        pPlayer->CLOSE_GOSSIP_MENU(); break;
    case UNDERCITY:
        pPlayer->TeleportTo(0, 1560.9245, 240.4727, -43.1023, 0);
        pPlayer->CLOSE_GOSSIP_MENU(); break;  
    case THUNDER_BLUFF:
        pPlayer->TeleportTo(1, -1318.1850, 181.1651, 68.5518, 0);
        pPlayer->CLOSE_GOSSIP_MENU(); break;
    case GURUBASHI_ARENA:
        pPlayer->TeleportTo(0, -13233.4042, 218.2634, 31.8044, 0);
        pPlayer->CLOSE_GOSSIP_MENU(); break;
    case DALARAN:
        pPlayer->TeleportTo(571, 5807.7885, 588.3062, 660.9388, 0);
        pPlayer->CLOSE_GOSSIP_MENU(); break;
    case DK_ZONE:
        pPlayer->TeleportTo(609, 2352.4519, -5665.9877, 426.0270, 0);
        pPlayer->CLOSE_GOSSIP_MENU(); break;
    case BOREAN_TUNDRA:
        pPlayer->TeleportTo(571, 2836.1191, 6184.3701, 121.9121, 0);
        pPlayer->CLOSE_GOSSIP_MENU(); break;
    case VALIANCE_KEEP:
        pPlayer->TeleportTo(571, 2230.8869, 5131.1660, 5.3442, 0);
        pPlayer->CLOSE_GOSSIP_MENU(); break; 
    case GROM_GOL_BASE_CAMP:
        pPlayer->TeleportTo(0, -12379, 228.6648, 2.9023, 0);
        pPlayer->CLOSE_GOSSIP_MENU(); break;
    case GADGETZAN:
        pPlayer->TeleportTo(1, -7180.1752, -3816.5249, 8.3869, 0);
        pPlayer->CLOSE_GOSSIP_MENU(); break;
    case BOOTY_BAY:
        pPlayer->TeleportTo(0, -14297.2568, 436.3192, 31.7027, 0);
        pPlayer->CLOSE_GOSSIP_MENU(); break;
    case RATCHET:
        pPlayer->TeleportTo(1, -958.5120, -3757.9025, 5.1964, 0);
        pPlayer->CLOSE_GOSSIP_MENU(); break;    
    case SHATTRATH:
        pPlayer->TeleportTo(530, -1866.9254, 5420.2148, -10.4638, 0);
        pPlayer->CLOSE_GOSSIP_MENU(); break;     
    case ISLE_DANAS:
        pPlayer->TeleportTo(530, 12947.4003, -6893.3100, 5.6838, 0);
        pPlayer->CLOSE_GOSSIP_MENU(); break;    
    case DIRE_MAUL_ARENA:
        pPlayer->TeleportTo(1, -3761.5634, 1125.8996, 131.9676, 0);
        pPlayer->CLOSE_GOSSIP_MENU(); break;   
    }

    return true;
}

void AddSC_server_teleporter()
{
    Script *newscript;
    newscript = new Script;
    newscript->Name = "server_teleporter";
    newscript->pGOHello = &GoHello_server_teleporter;
    newscript->pGOSelect = &GOSelect_server_teleporter;
    newscript->RegisterSelf();
}                                                                              