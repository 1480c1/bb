/*
 * BB: The portable demo
 *
 * (C) 1997-2001 by aa-group (http://aa-project.sourceforge.net)
 *
 * Originally released: 3rd August 1997
 * version: 1.3 [final4]
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

#include "bb.h"

/* A hack - but I've made aalib so I can hack it :) */
struct parameters
{
  unsigned int p[AA_NPARAMS];
};


void backconvert(int x1, int y1, int x2, int y2)
{
    int x, y;
    for (y = y1; y < y2; y++)
	for (x = x1; x < x2; x++) {
	    int n = context->textbuffer[x + y * aa_scrwidth(context)] + 256 * context->attrbuffer[x + y * aa_scrwidth(context)];
	    aa_putpixel(context, x * 2, y * 2, context->parameters[n].p[1]);
	    aa_putpixel(context, x * 2 + 1, y * 2, context->parameters[n].p[0]);
	    aa_putpixel(context, x * 2, y * 2 + 1, context->parameters[n].p[3]);
	    aa_putpixel(context, x * 2 + 1, y * 2 + 1, context->parameters[n].p[2]);
	}
}
