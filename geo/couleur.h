/*
 *  Dr Geo 0.7.0 an interactive geometry software
 * (C) Copyright Hilaire Fernandes  1997-1998
 * hilaire.fernandes@iname.com 
 * 
 *
 *
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public Licences as by published
 * by the Free Software Foundation; either version 2; or (at your option)
 * any later version
 *
 * This program is distributed in the hope that it will entertaining,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILTY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
 * Publis License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.
 * 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef COULEUR_H
#define COULEUR_H

#define DRGEO_NUMBER_COLOR 13

#define P_BLANC (255*65536+255*256+255)
#define P_NOIR (0*65536+0*256+0)
#define P_GRIS (90*65536+90*256+90)
#define P_GRIS_CLAIR (170*65536+170*256+170)
#define P_BLEU_FONCE (45*65536+56*256+255)
#define P_BLEU_CLAIR (80*65536+177*256+255)
#define P_VERT_FONCE (0*65536+100*256+0)
#define P_VERT_CLAIR (0*65536+235*256+0)
#define P_ROUGE (235*65536+0*256+0)
#define P_BORDEAUX (145*65536+0*256+0)
#define P_JAUNE (255*65536+240*256+33)
#define P_ORANGE (255*65536+153*256+43)
#define P_TIPS (255*65536+255*256+192)
#define P_PRINTNG_AREA (70*65536+70*256+70)

enum drgeoColorType
{
  drgeoColorBlack = 0,
  drgeoColorDarkGrey = 1,
  drgeoColorGrey = 2,
  drgeoColorWhite = 3,
  drgeoColorDarkGreen = 4,
  drgeoColorGreen = 5,
  drgeoColorDarkBlue = 6,
  drgeoColorBlue = 7,
  drgeoColorBordeaux = 8,
  drgeoColorRed = 9,
  drgeoColorOrange = 10,
  drgeoColorYellow = 11,
  drgeoColorTips = 12,
  drgeoColorPrintingArea = 13,
  drgeoColorNumber = 14
};


#endif /* _COULEUR_H */
