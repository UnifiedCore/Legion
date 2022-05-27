/*
 * Copyright (C) 2008-2015 TrinityCore <http://www.trinitycore.org/>
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

#include "TokenPackets.h"

void WorldPackets::Token::UpdateListedAuctionableTokens::Read()
{
    _worldPacket >> Type;
}

WorldPacket const* WorldPackets::Token::UpdateListedAuctionableTokensResponse::Write()
{
    _worldPacket << UnkInt;
    _worldPacket << Result;
    _worldPacket << static_cast<uint32>(AuctionableTokenAuctionableList.size());
    for (auto const& v : AuctionableTokenAuctionableList)
    {
        _worldPacket << v.DistributionID;
        _worldPacket << v.DateCreated;
        _worldPacket << v.Owner;
        _worldPacket << v.BuyoutPrice;
        _worldPacket << v.EndTime;
    }

    return &_worldPacket;
}

void WorldPackets::Token::RequestWowTokenMarketPrice::Read()
{
    _worldPacket >> UnkInt;
}

WorldPacket const* WorldPackets::Token::WowTokenMarketPriceResponse::Write()
{
    _worldPacket << CurrentMarketPrice;
    _worldPacket << UnkInt;
    _worldPacket << Result;
    _worldPacket << UnkInt2;

    return &_worldPacket;
}

void WorldPackets::Token::CheckVeteranTokenEligibility::Read()
{
    _worldPacket >> UnkInt;
}

WorldPacket const* WorldPackets::Token::WowTokenCanVeteranBuyResult::Write()
{
    _worldPacket << UnkLong;
    _worldPacket << UnkInt;
    _worldPacket << UnkInt2;

    return &_worldPacket;
}
