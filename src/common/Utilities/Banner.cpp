/*
 * Copyright (C) 2008-2019 TrinityCore <https://www.trinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "Banner.h"
#include "GitRevision.h"
#include "StringFormat.h"

void Trinity::Banner::Show(char const* applicationName, void(*log)(char const* text), void(*logExtraInfo)())
{
    /*log(" /$$                                              /$$$$$$                                   ");
    log("| $$                                             /$$__  $$                                  ");
    log("| $$       /$$$$$$  /$$$$$$ /$$ /$$$$$$ /$$$$$$$| $$  \\__/ /$$$$$$  /$$$$$$  /$$$$$$       ");
    log("| $$      /$$__  $$/$$__  $| $$/$$__  $| $$__  $| $$      /$$__  $$/$$__  $$/$$__  $$       ");
    log("| $$     | $$$$$$$| $$  \\ $| $| $$  \\ $| $$  \\ $| $$     | $$  \\ $| $$  \\__| $$$$$$$$  ");
    log("| $$     | $$_____| $$  | $| $| $$  | $| $$  | $| $$    $| $$  | $| $$     | $$_____/       ");
    log("| $$$$$$$|  $$$$$$|  $$$$$$| $|  $$$$$$| $$  | $|  $$$$$$|  $$$$$$| $$     |  $$$$$$$       ");
    log("|________/\\_______/\\____  $|__/\\______/|__/  |__/\\______/ \\______/|__/      \\_______/ ");
    log("                   /$$  \\ $$                                                               ");
    log("                  |  $$$$$$/                                                                ");
    log("                   \\______/                                                                ");*/

    log(Trinity::StringFormat("%s (%s)", GitRevision::GetFullVersion(), applicationName).c_str());
    log("<Ctrl-C> to stop. \n                                                                              ");
    log(" /$$   /$$           /$$  /$$$$$$  /$$                 /$$  /$$$$$$                               ");
    log("| $$  | $$          |__/ /$$__  $$|__/                | $$ /$$__  $$                              ");
    log("| $$  | $$ /$$$$$$$  /$$| $$  \\__/ /$$  /$$$$$$   /$$$$$$$| $$  \\__/  /$$$$$$   /$$$$$$   /$$$$$$ ");
    log("| $$  | $$| $$__  $$| $$| $$$$    | $$ /$$__  $$ /$$__  $$| $$       /$$__  $$ /$$__  $$ /$$__  $$");
    log("| $$  | $$| $$  \\ $$| $$| $$_/    | $$| $$$$$$$$| $$  | $$| $$      | $$  \\ $$| $$  \\__/| $$$$$$$$");
    log("| $$  | $$| $$  | $$| $$| $$      | $$| $$_____/| $$  | $$| $$    $$| $$  | $$| $$      | $$_____/");
    log("|  $$$$$$/| $$  | $$| $$| $$      | $$|  $$$$$$$|  $$$$$$$|  $$$$$$/|  $$$$$$/| $$      |  $$$$$$$");
    log(" \\______/ |__/  |__/|__/|__/      |__/ \\_______/ \\_______/ \\______/  \\______/ |__/       \\_______/");
    log("Based on TrinityCore and the UWoW leak. \n                                                        ");

    if (logExtraInfo)
        logExtraInfo();
}
