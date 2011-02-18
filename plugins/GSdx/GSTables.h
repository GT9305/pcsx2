/*
 *	Copyright (C) 2007-2009 Gabest
 *	http://www.gabest.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with GNU Make; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *  http://www.gnu.org/copyleft/gpl.html
 *
 */

#pragma once

extern const uint8 blockTable32[4][8];
extern const uint8 blockTable32Z[4][8];
extern const uint8 blockTable16[8][4];
extern const uint8 blockTable16S[8][4];
extern const uint8 blockTable16Z[8][4];
extern const uint8 blockTable16SZ[8][4];
extern const uint8 blockTable8[4][8];
extern const uint8 blockTable4[8][4];
extern const uint8 columnTable32[8][8];
extern const uint8 columnTable16[8][16];
extern const uint8 columnTable8[16][16];
extern const uint16 columnTable4[16][32];
extern const uint8 clutTableT32I8[128];
extern const uint8 clutTableT32I4[16];
extern const uint8 clutTableT16I8[32];
extern const uint8 clutTableT16I4[16];

struct D3D9Blend
{
	int bogus;
	int op;
	int src;
	int dst;
};

extern const D3D9Blend blendMapD3D9[3*3*3*3];
