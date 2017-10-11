# DayZ Overpoch Mission server files

This repo has all of the custom stuff that one needs to set up an Arma 2 DayZ Overpoch server. I made this because I spent a long time gathering all of the things needed and it seems that nobody has a ready-to-deploy server with files ready for anyone. I hope these files help someone.

## Getting Started

These instructions will get you going with an Overpoch server that includes WAI missions, custom shop prices, full Overwatch integration, vehicle towing, and some extra addons.

### Prerequisites

Currently in this repo are the mission files for the Panthera map. Instructions for installing with a different map are further down...

What you will need in your server directory for these files:

1. All Arma 2 files. These are the ones from the client's game directory, these include things like 'Addons' and 'ArmA2OA.exe'.
2. @DayZ_Epoch - these are the client files for Epoch. Arma 2 needs client files for the server for whatever reason. [Download from Epoch website](http://epochmod.com/a2dayzepoch.php)
3. @DayZOverwatch - these are the client files Overwatch. To get them, you will need DayZ Launcher.
4. @panthera - this is the map that you want to run the server with. For these instructions, you want Panthera. [Download from Armaholic](http://www.armaholic.com/page.php?id=7467)
5. @DayZ_Epoch_Server - These files contain a few custom modifications for the server, such as WAI missions. [Download from Epoch website](http://epochmod.com/a2dayzepoch.php)
6. Four .dlls that came with the above download.
7. One User config folder. In this includes the config.cfg, server.cfg, server logs and the database connection .ini file. Examples are included in the above download. 

### Installing

Now that @DayZ_Epoch, @DayZOverwatch, @panthera, @DayZ_Epoch_Server, your user config folder, and a few extra .dlls are in your server root folder, you have what you need.

1. If you want to use the Epoch server files in this repo that include WAI missions, remove the dayz_server.pbo in the @DayZ_Epoch_Server/addons folder that came with the download from the Epoch website, and add the dayz_server folder. Then pack the server to a .pbo using your favorite pbo packer.
2. Now to establish a connection to your SQL server. Find HiveExt.ini in your user config folder and find the lines that say 'Database = ', 'Username = ', and 'Password = '. Change them accordingly.
3. Create a database. I used MySQL workbench.
4. Now it is time to create the tables that will house all player objects, players, and users. Open the SQL script 'epoch.sql' that is located in the SQL folder included in the Epoch server download. Now run it. This script will add more tables then needed for the mission in this repo, however they will not impact anything; they are just obsolete trader tables.
5. This is technically optional; create another user like 'DayZ'. This is for the sake of logging, so 'root' is not doing everything for the DayZ server.
6. Edit the server.cfg files. The options in this file include server name, passwords, mission directory link, and other low-level server options.
7. Add the contents of the MPMissions folder in this repo to your MP Missions folder.
7. Assuming Panthera, Overwatch, or Epoch have not updated since the time this repo was created, your server should be ready to deploy.
8. Very, very recommended: Change overpoch1.jpg and rules.sqf in the mission folder. Make them your own.
9. start.bat has default settings that connect your ip, port, user config folder and everything else to the server executable. Note that the user config folder is called 'DayZ_Overpoch_instance_4_Panthera'. You can change it to whatever.

When the server first runs, it will be populating the database with vehicles, and may seem choppy FPS-wise. If you enter the server shortly after it launches, it will take a bit until you can play.

If there are any issues in your installation, submit an issue ticket to this repo.

### Customizing

Loot tables are under CfgLoot. There are files to say where in buildings to spawn loot groups, and other files that say what go in the loot groups. These are already configured to spawn overwatch weapons, no need to touch them unless you want to change spawn chances and rates.

Traders are in the CfgServerTrader/Category folder. These include all overwatch things (and some custom items for my server). You can change prices easily. I recommend Excel, as all files have tab-sperated parts, so you can quickly change large chunks of prices. Just copy-paste the .cpp files directly into a speadsheet, and you can change buy and sell columns en mass.
Note that if want to change maps, you NEED to change the server_traders.sqf in the root of the mission. This file contains the 'name' of the trader that each menu set is bound to. To change it to a different map, you will need to dig through the dayz_code.pbo archive to find your trader list file. It will look similar to server_trader.sqf, but contain the default menu IDs. Once you find this trader file, take the contents of that file, and put it in server_trader.sqf. Then, overwrite each trader name/id set with the ones in the custom server_trader.sqf. So after you are done, your new server_trader.sqf should look the same, but the names of the traders will be different, and the #include at the top will be to a different file.

Most of the settings are in init.sqf. If you want to add more addons, this is were to initialize them.

## Authors

* **Bohemia Interactive**
* **Developers of Epoch**
* **Developers of Overwatch**
* **Creators of Panthera**
* **Authors of the Towing script**
* **Authors of WAI Missions**
* **Max Oakes**