/******************************************************************************

    mamedriv.c

    Copyright Nicola Salmoria and the MAME Team.
    Visit http://mamedev.org for licensing and usage restrictions.

    The list of all available drivers. Drivers have to be included here to be
    recognized by the executable.

    To save some typing, we use a hack here. This file is recursively #included
    twice, with different definitions of the DRIVER() macro. The first one
    declares external references to the drivers; the second one builds an array
    storing all the drivers.

******************************************************************************/

#include "emu.h"

#ifndef DRIVER_RECURSIVE

#define DRIVER_RECURSIVE

/* step 1: declare all external references */
#define DRIVER(NAME) GAME_EXTERN(NAME);
#include "namcos12.c"

/* step 2: define the drivers[] array */
#undef DRIVER
#define DRIVER(NAME) &GAME_NAME(NAME),
const game_driver * const drivers[] =
{
#include "namcos12.c"
	0	/* end of array */
};

#else	/* DRIVER_RECURSIVE */

	/* Namco System 12 */
	DRIVER( tekken3 )	/* 1997.03 Tekken 3 (TET1/VER.E1, Japan) */
	DRIVER( tekken3a )	/* 1997.?? Tekken 3 (TET2/VER.B) */
	DRIVER( tekken3b )	/* 1997.?? Tekken 3 (TET3/VER.A) */
	DRIVER( tekken3c )	/* 1997.?? Tekken 3 (TET2/VER.A) */
	DRIVER( lbgrande )	/* 1997.?? Libero Grande (LG2/VER.A) */
						/* 1997.12 Libero Grande (LG1, Japan) */
	DRIVER( toukon3 )	/* 1997.12 Shin Nihon Pro Wrestling Toukon Retsuden 3 Arcade Edition (TR1/VER.A, Japan) */
	DRIVER( ehrgeiz )	/* 1998.?? Ehrgeiz (EG3/VER.A) */
	DRIVER( ehrgeiza )	/* 1998.?? Ehrgeiz (EG2/VER.A) */
	DRIVER( ehrgeizj )	/* 1998.05 Ehrgeiz (EG1, Japan) */
	DRIVER( sws98 )		/* 1998.06 Super World Stadium '98 (SS81/VER.A, Japan) */
	DRIVER( soulclbr )	/* 1998.?? Soul Calibur (SOC14/VER.C) */
	DRIVER( soulclbrb )	/* 1998.?? Soul Calibur (SOC14/VER.B) */
	DRIVER( soulclbrj )	/* 1998.07 Soul Calibur (SOC11/VER.C, Japan) */
	DRIVER( soulclbrb2 )	/* 1998.?? Soul Calibur (SOC13/VER.B) */
	DRIVER( soulclbrjb )/* 1998.?? Soul Calibur (SOC11/VER.B, Japan) */
	DRIVER( soulclbrja )/* 1998.?? Soul Calibur (SOC11/VER.A2, Japan) */
						/* 1998.07 Techno Drive */
	DRIVER( mdhorse )	/* 1998.11 Derby Quiz My Dream Horse (MDH1/VER.A2, Japan) */
						/* 1998.12 Attack Pla Rail */
	DRIVER( tenkomor )	/* 1998.?? Tenkomori Shooting (TKM2/VER.A1) */
	DRIVER( tenkomorj )	/* 1998.12 Tenkomori Shooting (TKM1/VER.A1, Japan) */
	DRIVER( pacapp )	/* 1998.12 Paca Paca Passion (PPP1/VER.A2, Japan) */
	DRIVER( fgtlayer )	/* 1998.12 Fighting Layer (FTL0/VER.A, Japan) */
						/* 1999.01 Bust A Move (Metro) */
	DRIVER( ptblank2 )	/* 1999.?? Point Blank 2 (GNB5/VER.A) */
	DRIVER( sws99 )		/* 1999.05 Super World Stadium '99 (SS91/VER.A3, Japan) */
	DRIVER( ghlpanic )	/* 1999.?? Ghoul Panic (OB2/VER.A) */
						/* 1999.07 Oh Bakyuun (OB1, Japan) */
	DRIVER( pacapp2 )	/* 1999.07 Paca Paca Passion 2 (PKS1/VER.A, Japan) */
						/* 1999.07 Bust A Move 2 (Metro) */
	DRIVER( tektagt )	/* 1999.?? Tekken Tag Tournament (TEG3/VER.C1) */
	DRIVER( tektagta )	/* 1999.?? Tekken Tag Tournament (TEG3/VER.B) */
	DRIVER( tektagtb )	/* 1999.07 Tekken Tag Tournament (TEG1/VER.B, Japan) */
	DRIVER( tektagtc )	/* 1999.07 Tekken Tag Tournament (TEG1/VER.A, Japan) */
	DRIVER( mrdrillr )	/* 1999.11 Mr Driller (DRI1/VER.A2, Japan) */
						/* 1999.12 UmJammer Lammy NOW! (Japan) */
						/* 1999.12 Quest for Fame (Japan) */
	DRIVER( pacappsp )	/* 1999.12 Paca Paca Passion Special (PSP1/VER.A, Japan) */
	DRIVER( kaiunqz )	/* 1999.12 Kaiun Quiz (KW1/VER.A, Japan) */
	DRIVER( aquarush )	/* 2000.02 Aqua Rush (AQ1/VER.A1, Japan) */
	DRIVER( golgo13 )	/* 2000.03 Golgo 13 (GLG1/VER.A, Japan) */
	DRIVER( sws2000 )	/* 2000.03 Super World Stadium 2000 (SS01/VER.A, Japan) */
						/* 2000.06 Truck Kyousoukyoku (Metro) */
						/* 2000.07 Kart Duel */
						/* 2000.08 Teknowerk */
	DRIVER( g13knd )	/* 2000.10 Golgo 13 Kiseki no Dandou (GLS1/VER.A, Japan) */
	DRIVER( sws2001 )	/* 2001.04 Super World Stadium 2001 (SS11/VER.A, Japan) */

	/* Konami bitmap games */
	DRIVER( junofrst )	/* GX310 (c) 1983 Konami */

#endif	/* DRIVER_RECURSIVE */
