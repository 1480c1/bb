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

#define torusnFaces 256 
POLYS torusobj[]=
{
  {  {43,0,-59, -5247,53,6318},
    {56,-12,-35, -4956,5888,2886},
    {40,-12,-55, -3510,5851,4564},
  },{  {60,0,-38, -7240,-26,3858},
    {56,-12,-35, -4956,5888,2886},
    {43,0,-59, -5247,53,6318},
  },{  {40,-12,-55, -3510,5851,4564},
    {45,-16,-30, -101,8192,270},
    {32,-16,-46, 0,8192,276},
  },{  {56,-12,-35, -4956,5888,2886},
    {45,-16,-30, -101,8192,270},
    {40,-12,-55, -3510,5851,4564},
  },{  {32,-16,-46, 0,8192,276},
    {35,-12,-24, 4861,6166,-2430},
    {25,-12,-36, 3555,6166,-4096},
  },{  {45,-16,-30, -101,8192,270},
    {35,-12,-24, 4861,6166,-2430},
    {32,-16,-46, 0,8192,276},
  },{  {25,-12,-36, 3555,6166,-4096},
    {30,0,-22, 7292,0,-3796},
    {22,0,-32, 5297,0,-6278},
  },{  {35,-12,-24, 4861,6166,-2430},
    {30,0,-22, 7292,0,-3796},
    {25,-12,-36, 3555,6166,-4096},
  },{  {22,0,-32, 5297,0,-6278},
    {35,12,-24, 4752,-6200,-2579},
    {25,12,-36, 3435,-6166,-4228},
  },{  {30,0,-22, 7292,0,-3796},
    {35,12,-24, 4752,-6200,-2579},
    {22,0,-32, 5297,0,-6278},
  },{  {25,12,-36, 3435,-6166,-4228},
    {45,16,-30, -239,-8192,-68},
    {32,16,-46, -275,-8192,34},
  },{  {35,12,-24, 4752,-6200,-2579},
    {45,16,-30, -239,-8192,-68},
    {25,12,-36, 3435,-6166,-4228},
  },{  {32,16,-46, -275,-8192,34},
    {56,12,-35, -5178,-5851,2516},
    {40,12,-55, -3863,-5868,4241},
  },{  {45,16,-30, -239,-8192,-68},
    {56,12,-35, -5178,-5851,2516},
    {32,16,-46, -275,-8192,34},
  },{  {40,12,-55, -3863,-5868,4241},
    {60,0,-38, -7240,-26,3858},
    {43,0,-59, -5247,53,6318},
  },{  {56,12,-35, -5178,-5851,2516},
    {60,0,-38, -7240,-26,3858},
    {40,12,-55, -3863,-5868,4241},
  },{  {60,0,-38, -7240,-26,3858},
    {63,-12,-12, -5701,5851,840},
    {56,-12,-35, -4956,5888,2886},
  },{  {68,0,-12, -8164,-54,811},
    {63,-12,-12, -5701,5851,840},
    {60,0,-38, -7240,-26,3858},
  },{  {56,-12,-35, -4956,5888,2886},
    {51,-16,-10, -211,8192,176},
    {45,-16,-30, -101,8192,270},
  },{  {63,-12,-12, -5701,5851,840},
    {51,-16,-10, -211,8192,176},
    {56,-12,-35, -4956,5888,2886},
  },{  {45,-16,-30, -101,8192,270},
    {39,-12,-9, 5399,6190,-465},
    {35,-12,-24, 4861,6166,-2430},
  },{  {51,-16,-10, -211,8192,176},
    {39,-12,-9, 5399,6190,-465},
    {45,-16,-30, -101,8192,270},
  },{  {35,-12,-24, 4861,6166,-2430},
    {34,0,-9, 8141,100,-904},
    {30,0,-22, 7292,0,-3796},
  },{  {39,-12,-9, 5399,6190,-465},
    {34,0,-9, 8141,100,-904},
    {35,-12,-24, 4861,6166,-2430},
  },{  {30,0,-22, 7292,0,-3796},
    {39,12,-9, 5430,-6132,-655},
    {35,12,-24, 4752,-6200,-2579},
  },{  {34,0,-9, 8141,100,-904},
    {39,12,-9, 5430,-6132,-655},
    {30,0,-22, 7292,0,-3796},
  },{  {35,12,-24, 4752,-6200,-2579},
    {51,16,-10, -208,-8192,-138},
    {45,16,-30, -239,-8192,-68},
  },{  {39,12,-9, 5430,-6132,-655},
    {51,16,-10, -208,-8192,-138},
    {35,12,-24, 4752,-6200,-2579},
  },{  {45,16,-30, -239,-8192,-68},
    {63,12,-12, -5743,-5864,332},
    {56,12,-35, -5178,-5851,2516},
  },{  {51,16,-10, -208,-8192,-138},
    {63,12,-12, -5743,-5864,332},
    {45,16,-30, -239,-8192,-68},
  },{  {56,12,-35, -5178,-5851,2516},
    {68,0,-12, -8164,-54,811},
    {60,0,-38, -7240,-26,3858},
  },{  {63,12,-12, -5743,-5864,332},
    {68,0,-12, -8164,-54,811},
    {56,12,-35, -5178,-5851,2516},
  },{  {68,0,-12, -8164,-54,811},
    {61,-12,12, -5601,5812,-1475},
    {63,-12,-12, -5701,5851,840},
  },{  {65,0,14, -7838,0,-2395},
    {61,-12,12, -5601,5812,-1475},
    {68,0,-12, -8164,-54,811},
  },{  {63,-12,-12, -5701,5851,840},
    {49,-16,9, -208,8192,138},
    {51,-16,-10, -211,8192,176},
  },{  {61,-12,12, -5601,5812,-1475},
    {49,-16,9, -208,8192,138},
    {63,-12,-12, -5701,5851,840},
  },{  {51,-16,-10, -211,8192,176},
    {38,-12,5, 5166,6097,1815},
    {39,-12,-9, 5399,6190,-465},
  },{  {49,-16,9, -208,8192,138},
    {38,-12,5, 5166,6097,1815},
    {51,-16,-10, -211,8192,176},
  },{  {39,-12,-9, 5399,6190,-465},
    {33,0,4, 7840,-50,2512},
    {34,0,-9, 8141,100,-904},
  },{  {38,-12,5, 5166,6097,1815},
    {33,0,4, 7840,-50,2512},
    {39,-12,-9, 5399,6190,-465},
  },{  {34,0,-9, 8141,100,-904},
    {38,12,5, 5154,-6213,1472},
    {39,12,-9, 5430,-6132,-655},
  },{  {33,0,4, 7840,-50,2512},
    {38,12,5, 5154,-6213,1472},
    {34,0,-9, 8141,100,-904},
  },{  {39,12,-9, 5430,-6132,-655},
    {49,16,9, -178,-8192,-250},
    {51,16,-10, -208,-8192,-138},
  },{  {38,12,5, 5154,-6213,1472},
    {49,16,9, -178,-8192,-250},
    {39,12,-9, 5430,-6132,-655},
  },{  {51,16,-10, -208,-8192,-138},
    {61,12,12, -5471,-5834,-1874},
    {63,12,-12, -5743,-5864,332},
  },{  {49,16,9, -178,-8192,-250},
    {61,12,12, -5471,-5834,-1874},
    {51,16,-10, -208,-8192,-138},
  },{  {63,12,-12, -5743,-5864,332},
    {65,0,14, -7838,0,-2395},
    {68,0,-12, -8164,-54,811},
  },{  {61,12,12, -5471,-5834,-1874},
    {65,0,14, -7838,0,-2395},
    {63,12,-12, -5743,-5864,332},
  },{  {65,0,14, -7838,0,-2395},
    {49,-12,34, -4634,5800,-3498},
    {61,-12,12, -5601,5812,-1475},
  },{  {53,0,37, -6338,0,-5210},
    {49,-12,34, -4634,5800,-3498},
    {65,0,14, -7838,0,-2395},
  },{  {61,-12,12, -5601,5812,-1475},
    {40,-16,27, -276,8192,0},
    {49,-16,9, -208,8192,138},
  },{  {49,-12,34, -4634,5800,-3498},
    {40,-16,27, -276,8192,0},
    {61,-12,12, -5601,5812,-1475},
  },{  {49,-16,9, -208,8192,138},
    {30,-12,19, 4051,6254,3479},
    {38,-12,5, 5166,6097,1815},
  },{  {40,-16,27, -276,8192,0},
    {30,-12,19, 4051,6254,3479},
    {49,-16,9, -208,8192,138},
  },{  {38,-12,5, 5166,6097,1815},
    {26,0,16, 6278,0,5297},
    {33,0,4, 7840,-50,2512},
  },{  {30,-12,19, 4051,6254,3479},
    {26,0,16, 6278,0,5297},
    {38,-12,5, 5166,6097,1815},
  },{  {33,0,4, 7840,-50,2512},
    {30,12,19, 4183,-6187,3398},
    {38,12,5, 5154,-6213,1472},
  },{  {26,0,16, 6278,0,5297},
    {30,12,19, 4183,-6187,3398},
    {33,0,4, 7840,-50,2512},
  },{  {38,12,5, 5154,-6213,1472},
    {40,16,27, -34,-8192,-239},
    {49,16,9, -178,-8192,-250},
  },{  {30,12,19, 4183,-6187,3398},
    {40,16,27, -34,-8192,-239},
    {38,12,5, 5154,-6213,1472},
  },{  {49,16,9, -178,-8192,-250},
    {49,12,34, -4378,-5779,-3872},
    {61,12,12, -5471,-5834,-1874},
  },{  {40,16,27, -34,-8192,-239},
    {49,12,34, -4378,-5779,-3872},
    {49,16,9, -178,-8192,-250},
  },{  {61,12,12, -5471,-5834,-1874},
    {53,0,37, -6338,0,-5210},
    {65,0,14, -7838,0,-2395},
  },{  {49,12,34, -4378,-5779,-3872},
    {53,0,37, -6338,0,-5210},
    {61,12,12, -5471,-5834,-1874},
  },{  {53,0,37, -6338,0,-5210},
    {30,-12,50, -2906,5843,-4962},
    {49,-12,34, -4634,5800,-3498},
  },{  {32,0,54, -3858,0,-7240},
    {30,-12,50, -2906,5843,-4962},
    {53,0,37, -6338,0,-5210},
  },{  {49,-12,34, -4634,5800,-3498},
    {24,-16,39, -277,8192,-69},
    {40,-16,27, -276,8192,0},
  },{  {30,-12,50, -2906,5843,-4962},
    {24,-16,39, -277,8192,-69},
    {49,-12,34, -4634,5800,-3498},
  },{  {40,-16,27, -276,8192,0},
    {18,-12,29, 2372,6177,4834},
    {30,-12,19, 4051,6254,3479},
  },{  {24,-16,39, -277,8192,-69},
    {18,-12,29, 2372,6177,4834},
    {40,-16,27, -276,8192,0},
  },{  {30,-12,19, 4051,6254,3479},
    {16,0,24, 3796,0,7292},
    {26,0,16, 6278,0,5297},
  },{  {18,-12,29, 2372,6177,4834},
    {16,0,24, 3796,0,7292},
    {30,-12,19, 4051,6254,3479},
  },{  {26,0,16, 6278,0,5297},
    {18,12,29, 2594,-6189,4733},
    {30,12,19, 4183,-6187,3398},
  },{  {16,0,24, 3796,0,7292},
    {18,12,29, 2594,-6189,4733},
    {26,0,16, 6278,0,5297},
  },{  {30,12,19, 4183,-6187,3398},
    {24,16,39, 68,-8192,-273},
    {40,16,27, -34,-8192,-239},
  },{  {18,12,29, 2594,-6189,4733},
    {24,16,39, 68,-8192,-273},
    {30,12,19, 4183,-6187,3398},
  },{  {40,16,27, -34,-8192,-239},
    {30,12,50, -2513,-5796,-5234},
    {49,12,34, -4378,-5779,-3872},
  },{  {24,16,39, 68,-8192,-273},
    {30,12,50, -2513,-5796,-5234},
    {40,16,27, -34,-8192,-239},
  },{  {49,12,34, -4378,-5779,-3872},
    {32,0,54, -3858,0,-7240},
    {53,0,37, -6338,0,-5210},
  },{  {30,12,50, -2513,-5796,-5234},
    {32,0,54, -3858,0,-7240},
    {49,12,34, -4378,-5779,-3872},
  },{  {32,0,54, -3858,0,-7240},
    {6,-12,57, -828,5826,-5707},
    {30,-12,50, -2906,5843,-4962},
  },{  {6,0,62, -805,-26,-8165},
    {6,-12,57, -828,5826,-5707},
    {32,0,54, -3858,0,-7240},
  },{  {30,-12,50, -2906,5843,-4962},
    {5,-16,45, -174,8192,-209},
    {24,-16,39, -277,8192,-69},
  },{  {6,-12,57, -828,5826,-5707},
    {5,-16,45, -174,8192,-209},
    {30,-12,50, -2906,5843,-4962},
  },{  {24,-16,39, -277,8192,-69},
    {3,-12,33, 468,6132,5430},
    {18,-12,29, 2372,6177,4834},
  },{  {5,-16,45, -174,8192,-209},
    {3,-12,33, 468,6132,5430},
    {24,-16,39, -277,8192,-69},
  },{  {18,-12,29, 2372,6177,4834},
    {3,0,28, 904,100,8141},
    {16,0,24, 3796,0,7292},
  },{  {3,-12,33, 468,6132,5430},
    {3,0,28, 904,100,8141},
    {18,-12,29, 2372,6177,4834},
  },{  {16,0,24, 3796,0,7292},
    {3,12,33, 647,-6155,5368},
    {18,12,29, 2594,-6189,4733},
  },{  {3,0,28, 904,100,8141},
    {3,12,33, 647,-6155,5368},
    {16,0,24, 3796,0,7292},
  },{  {18,12,29, 2594,-6189,4733},
    {5,16,45, 138,-8192,-208},
    {24,16,39, 68,-8192,-273},
  },{  {3,12,33, 647,-6155,5368},
    {5,16,45, 138,-8192,-208},
    {18,12,29, 2594,-6189,4733},
  },{  {24,16,39, 68,-8192,-273},
    {6,12,57, -328,-5859,-5740},
    {30,12,50, -2513,-5796,-5234},
  },{  {5,16,45, 138,-8192,-208},
    {6,12,57, -328,-5859,-5740},
    {24,16,39, 68,-8192,-273},
  },{  {30,12,50, -2513,-5796,-5234},
    {6,0,62, -805,-26,-8165},
    {32,0,54, -3858,0,-7240},
  },{  {6,12,57, -328,-5859,-5740},
    {6,0,62, -805,-26,-8165},
    {30,12,50, -2513,-5796,-5234},
  },{  {6,0,62, -805,-26,-8165},
    {-18,-12,55, 1475,5812,-5601},
    {6,-12,57, -828,5826,-5707},
  },{  {-20,0,59, 2395,0,-7838},
    {-18,-12,55, 1475,5812,-5601},
    {6,0,62, -805,-26,-8165},
  },{  {6,-12,57, -828,5826,-5707},
    {-15,-16,43, -139,8192,-209},
    {5,-16,45, -174,8192,-209},
  },{  {-18,-12,55, 1475,5812,-5601},
    {-15,-16,43, -139,8192,-209},
    {6,-12,57, -828,5826,-5707},
  },{  {5,-16,45, -174,8192,-209},
    {-11,-12,32, -1732,6085,5242},
    {3,-12,33, 468,6132,5430},
  },{  {-15,-16,43, -139,8192,-209},
    {-11,-12,32, -1732,6085,5242},
    {5,-16,45, -174,8192,-209},
  },{  {3,-12,33, 468,6132,5430},
    {-10,0,27, -2326,0,7888},
    {3,0,28, 904,100,8141},
  },{  {-11,-12,32, -1732,6085,5242},
    {-10,0,27, -2326,0,7888},
    {3,-12,33, 468,6132,5430},
  },{  {3,0,28, 904,100,8141},
    {-11,12,32, -1497,-6132,5242},
    {3,12,33, 647,-6155,5368},
  },{  {-10,0,27, -2326,0,7888},
    {-11,12,32, -1497,-6132,5242},
    {3,0,28, 904,100,8141},
  },{  {3,12,33, 647,-6155,5368},
    {-15,16,43, 248,-8192,-177},
    {5,16,45, 138,-8192,-208},
  },{  {-11,12,32, -1497,-6132,5242},
    {-15,16,43, 248,-8192,-177},
    {3,12,33, 647,-6155,5368},
  },{  {5,16,45, 138,-8192,-208},
    {-18,12,55, 1860,-5851,-5461},
    {6,12,57, -328,-5859,-5740},
  },{  {-15,16,43, 248,-8192,-177},
    {-18,12,55, 1860,-5851,-5461},
    {5,16,45, 138,-8192,-208},
  },{  {6,12,57, -328,-5859,-5740},
    {-20,0,59, 2395,0,-7838},
    {6,0,62, -805,-26,-8165},
  },{  {-18,12,55, 1860,-5851,-5461},
    {-20,0,59, 2395,0,-7838},
    {6,12,57, -328,-5859,-5740},
  },{  {-20,0,59, 2395,0,-7838},
    {-40,-12,43, 3435,5872,-4580},
    {-18,-12,55, 1475,5812,-5601},
  },{  {-43,0,47, 5210,0,-6338},
    {-40,-12,43, 3435,5872,-4580},
    {-20,0,59, 2395,0,-7838},
  },{  {-18,-12,55, 1475,5812,-5601},
    {-32,-16,34, 0,8192,-276},
    {-15,-16,43, -139,8192,-209},
  },{  {-40,-12,43, 3435,5872,-4580},
    {-32,-16,34, 0,8192,-276},
    {-18,-12,55, 1475,5812,-5601},
  },{  {-15,-16,43, -139,8192,-209},
    {-25,-12,24, -3666,6064,4118},
    {-11,-12,32, -1732,6085,5242},
  },{  {-32,-16,34, 0,8192,-276},
    {-25,-12,24, -3666,6064,4118},
    {-15,-16,43, -139,8192,-209},
  },{  {-11,-12,32, -1732,6085,5242},
    {-22,0,21, -5297,0,6278},
    {-10,0,27, -2326,0,7888},
  },{  {-25,-12,24, -3666,6064,4118},
    {-22,0,21, -5297,0,6278},
    {-11,-12,32, -1732,6085,5242},
  },{  {-10,0,27, -2326,0,7888},
    {-25,12,24, -3420,-6121,4321},
    {-11,12,32, -1497,-6132,5242},
  },{  {-22,0,21, -5297,0,6278},
    {-25,12,24, -3420,-6121,4321},
    {-10,0,27, -2326,0,7888},
  },{  {-11,12,32, -1497,-6132,5242},
    {-32,16,34, 239,-8192,-34},
    {-15,16,43, 248,-8192,-177},
  },{  {-25,12,24, -3420,-6121,4321},
    {-32,16,34, 239,-8192,-34},
    {-11,12,32, -1497,-6132,5242},
  },{  {-15,16,43, 248,-8192,-177},
    {-40,12,43, 3844,-5826,-4317},
    {-18,12,55, 1860,-5851,-5461},
  },{  {-32,16,34, 239,-8192,-34},
    {-40,12,43, 3844,-5826,-4317},
    {-15,16,43, 248,-8192,-177},
  },{  {-18,12,55, 1860,-5851,-5461},
    {-43,0,47, 5210,0,-6338},
    {-20,0,59, 2395,0,-7838},
  },{  {-40,12,43, 3844,-5826,-4317},
    {-43,0,47, 5210,0,-6338},
    {-18,12,55, 1860,-5851,-5461},
  },{  {-43,0,47, 5210,0,-6338},
    {-56,-12,24, 4986,5817,-2938},
    {-40,-12,43, 3435,5872,-4580},
  },{  {-60,0,26, 7240,0,-3858},
    {-56,-12,24, 4986,5817,-2938},
    {-43,0,47, 5210,0,-6338},
  },{  {-40,-12,43, 3435,5872,-4580},
    {-45,-16,18, 104,8192,-278},
    {-32,-16,34, 0,8192,-276},
  },{  {-56,-12,24, 4986,5817,-2938},
    {-45,-16,18, 104,8192,-278},
    {-40,-12,43, 3435,5872,-4580},
  },{  {-32,-16,34, 0,8192,-276},
    {-35,-12,12, -4786,6167,2485},
    {-25,-12,24, -3666,6064,4118},
  },{  {-45,-16,18, 104,8192,-278},
    {-35,-12,12, -4786,6167,2485},
    {-32,-16,34, 0,8192,-276},
  },{  {-25,-12,24, -3666,6064,4118},
    {-30,0,10, -7281,0,3843},
    {-22,0,21, -5297,0,6278},
  },{  {-35,-12,12, -4786,6167,2485},
    {-30,0,10, -7281,0,3843},
    {-25,-12,24, -3666,6064,4118},
  },{  {-22,0,21, -5297,0,6278},
    {-35,12,12, -4794,-6097,2653},
    {-25,12,24, -3420,-6121,4321},
  },{  {-30,0,10, -7281,0,3843},
    {-35,12,12, -4794,-6097,2653},
    {-22,0,21, -5297,0,6278},
  },{  {-25,12,24, -3420,-6121,4321},
    {-45,16,18, 278,-8192,69},
    {-32,16,34, 239,-8192,-34},
  },{  {-35,12,12, -4794,-6097,2653},
    {-45,16,18, 278,-8192,69},
    {-25,12,24, -3420,-6121,4321},
  },{  {-32,16,34, 239,-8192,-34},
    {-56,12,24, 5178,-5851,-2516},
    {-40,12,43, 3844,-5826,-4317},
  },{  {-45,16,18, 278,-8192,69},
    {-56,12,24, 5178,-5851,-2516},
    {-32,16,34, 239,-8192,-34},
  },{  {-40,12,43, 3844,-5826,-4317},
    {-60,0,26, 7240,0,-3858},
    {-43,0,47, 5210,0,-6338},
  },{  {-56,12,24, 5178,-5851,-2516},
    {-60,0,26, 7240,0,-3858},
    {-40,12,43, 3844,-5826,-4317},
  },{  {-60,0,26, 7240,0,-3858},
    {-63,-12,0, 5696,5843,-822},
    {-56,-12,24, 4986,5817,-2938},
  },{  {-68,0,0, 8164,-54,-816},
    {-63,-12,0, 5696,5843,-822},
    {-60,0,26, 7240,0,-3858},
  },{  {-56,-12,24, 4986,5817,-2938},
    {-51,-16,0, 208,8192,-173},
    {-45,-16,18, 104,8192,-278},
  },{  {-63,-12,0, 5696,5843,-822},
    {-51,-16,0, 208,8192,-173},
    {-56,-12,24, 4986,5817,-2938},
  },{  {-45,-16,18, 104,8192,-278},
    {-39,-12,-2, -5476,6132,468},
    {-35,-12,12, -4786,6167,2485},
  },{  {-51,-16,0, 208,8192,-173},
    {-39,-12,-2, -5476,6132,468},
    {-45,-16,18, 104,8192,-278},
  },{  {-35,-12,12, -4786,6167,2485},
    {-34,0,-2, -8192,0,910},
    {-30,0,10, -7281,0,3843},
  },{  {-39,-12,-2, -5476,6132,468},
    {-34,0,-2, -8192,0,910},
    {-35,-12,12, -4786,6167,2485},
  },{  {-30,0,10, -7281,0,3843},
    {-39,12,-2, -5322,-6201,647},
    {-35,12,12, -4794,-6097,2653},
  },{  {-34,0,-2, -8192,0,910},
    {-39,12,-2, -5322,-6201,647},
    {-30,0,10, -7281,0,3843},
  },{  {-35,12,12, -4794,-6097,2653},
    {-51,16,0, 210,-8192,140},
    {-45,16,18, 278,-8192,69},
  },{  {-39,12,-2, -5322,-6201,647},
    {-51,16,0, 210,-8192,140},
    {-35,12,12, -4794,-6097,2653},
  },{  {-45,16,18, 278,-8192,69},
    {-63,12,0, 5764,-5825,-333},
    {-56,12,24, 5178,-5851,-2516},
  },{  {-51,16,0, 210,-8192,140},
    {-63,12,0, 5764,-5825,-333},
    {-45,16,18, 278,-8192,69},
  },{  {-56,12,24, 5178,-5851,-2516},
    {-68,0,0, 8164,-54,-816},
    {-60,0,26, 7240,0,-3858},
  },{  {-63,12,0, 5764,-5825,-333},
    {-68,0,0, 8164,-54,-816},
    {-56,12,24, 5178,-5851,-2516},
  },{  {-68,0,0, 8164,-54,-816},
    {-61,-12,-24, 5624,5807,1497},
    {-63,-12,0, 5696,5843,-822},
  },{  {-65,0,-25, 7838,0,2395},
    {-61,-12,-24, 5624,5807,1497},
    {-68,0,0, 8164,-54,-816},
  },{  {-63,-12,0, 5696,5843,-822},
    {-49,-16,-21, 205,8192,-137},
    {-51,-16,0, 208,8192,-173},
  },{  {-61,-12,-24, 5624,5807,1497},
    {-49,-16,-21, 205,8192,-137},
    {-63,-12,0, 5696,5843,-822},
  },{  {-51,-16,0, 208,8192,-173},
    {-38,-12,-17, -5147,6132,-1745},
    {-39,-12,-2, -5476,6132,468},
  },{  {-49,-16,-21, 205,8192,-137},
    {-38,-12,-17, -5147,6132,-1745},
    {-51,-16,0, 208,8192,-173},
  },{  {-39,-12,-2, -5476,6132,468},
    {-33,0,-16, -7852,0,-2423},
    {-34,0,-2, -8192,0,910},
  },{  {-38,-12,-17, -5147,6132,-1745},
    {-33,0,-16, -7852,0,-2423},
    {-39,-12,-2, -5476,6132,468},
  },{  {-34,0,-2, -8192,0,910},
    {-38,12,-17, -5279,-6144,-1456},
    {-39,12,-2, -5322,-6201,647},
  },{  {-33,0,-16, -7852,0,-2423},
    {-38,12,-17, -5279,-6144,-1456},
    {-34,0,-2, -8192,0,910},
  },{  {-39,12,-2, -5322,-6201,647},
    {-49,16,-21, 138,-8192,241},
    {-51,16,0, 210,-8192,140},
  },{  {-38,12,-17, -5279,-6144,-1456},
    {-49,16,-21, 138,-8192,241},
    {-39,12,-2, -5322,-6201,647},
  },{  {-51,16,0, 210,-8192,140},
    {-61,12,-24, 5481,-5838,1846},
    {-63,12,0, 5764,-5825,-333},
  },{  {-49,16,-21, 138,-8192,241},
    {-61,12,-24, 5481,-5838,1846},
    {-51,16,0, 210,-8192,140},
  },{  {-63,12,0, 5764,-5825,-333},
    {-65,0,-25, 7838,0,2395},
    {-68,0,0, 8164,-54,-816},
  },{  {-61,12,-24, 5481,-5838,1846},
    {-65,0,-25, 7838,0,2395},
    {-63,12,0, 5764,-5825,-333},
  },{  {-65,0,-25, 7838,0,2395},
    {-49,-12,-46, 4639,5843,3435},
    {-61,-12,-24, 5624,5807,1497},
  },{  {-53,0,-49, 6383,26,5159},
    {-49,-12,-46, 4639,5843,3435},
    {-65,0,-25, 7838,0,2395},
  },{  {-61,-12,-24, 5624,5807,1497},
    {-40,-16,-38, 276,8192,0},
    {-49,-16,-21, 205,8192,-137},
  },{  {-49,-12,-46, 4639,5843,3435},
    {-40,-16,-38, 276,8192,0},
    {-61,-12,-24, 5624,5807,1497},
  },{  {-49,-16,-21, 205,8192,-137},
    {-30,-12,-31, -4096,6166,-3555},
    {-38,-12,-17, -5147,6132,-1745},
  },{  {-40,-16,-38, 276,8192,0},
    {-30,-12,-31, -4096,6166,-3555},
    {-49,-16,-21, 205,8192,-137},
  },{  {-38,-12,-17, -5147,6132,-1745},
    {-26,0,-28, -6278,0,-5297},
    {-33,0,-16, -7852,0,-2423},
  },{  {-30,-12,-31, -4096,6166,-3555},
    {-26,0,-28, -6278,0,-5297},
    {-38,-12,-17, -5147,6132,-1745},
  },{  {-33,0,-16, -7852,0,-2423},
    {-30,12,-31, -4228,-6166,-3435},
    {-38,12,-17, -5279,-6144,-1456},
  },{  {-26,0,-28, -6278,0,-5297},
    {-30,12,-31, -4228,-6166,-3435},
    {-33,0,-16, -7852,0,-2423},
  },{  {-38,12,-17, -5279,-6144,-1456},
    {-40,16,-38, 34,-8192,239},
    {-49,16,-21, 138,-8192,241},
  },{  {-30,12,-31, -4228,-6166,-3435},
    {-40,16,-38, 34,-8192,239},
    {-38,12,-17, -5279,-6144,-1456},
  },{  {-49,16,-21, 138,-8192,241},
    {-49,12,-46, 4317,-5826,3844},
    {-61,12,-24, 5481,-5838,1846},
  },{  {-40,16,-38, 34,-8192,239},
    {-49,12,-46, 4317,-5826,3844},
    {-49,16,-21, 138,-8192,241},
  },{  {-61,12,-24, 5481,-5838,1846},
    {-53,0,-49, 6383,26,5159},
    {-65,0,-25, 7838,0,2395},
  },{  {-49,12,-46, 4317,-5826,3844},
    {-53,0,-49, 6383,26,5159},
    {-61,12,-24, 5481,-5838,1846},
  },{  {-53,0,-49, 6383,26,5159},
    {-30,-12,-62, 2906,5843,4962},
    {-49,-12,-46, 4639,5843,3435},
  },{  {-32,0,-66, 3858,0,7240},
    {-30,-12,-62, 2906,5843,4962},
    {-53,0,-49, 6383,26,5159},
  },{  {-49,-12,-46, 4639,5843,3435},
    {-24,-16,-51, 271,8192,67},
    {-40,-16,-38, 276,8192,0},
  },{  {-30,-12,-62, 2906,5843,4962},
    {-24,-16,-51, 271,8192,67},
    {-49,-12,-46, 4639,5843,3435},
  },{  {-40,-16,-38, 276,8192,0},
    {-18,-12,-41, -2430,6166,-4861},
    {-30,-12,-31, -4096,6166,-3555},
  },{  {-24,-16,-51, 271,8192,67},
    {-18,-12,-41, -2430,6166,-4861},
    {-40,-16,-38, 276,8192,0},
  },{  {-30,-12,-31, -4096,6166,-3555},
    {-16,0,-36, -3796,0,-7292},
    {-26,0,-28, -6278,0,-5297},
  },{  {-18,-12,-41, -2430,6166,-4861},
    {-16,0,-36, -3796,0,-7292},
    {-30,-12,-31, -4096,6166,-3555},
  },{  {-26,0,-28, -6278,0,-5297},
    {-18,12,-41, -2594,-6189,-4733},
    {-30,12,-31, -4228,-6166,-3435},
  },{  {-16,0,-36, -3796,0,-7292},
    {-18,12,-41, -2594,-6189,-4733},
    {-26,0,-28, -6278,0,-5297},
  },{  {-30,12,-31, -4228,-6166,-3435},
    {-24,16,-51, -68,-8192,273},
    {-40,16,-38, 34,-8192,239},
  },{  {-18,12,-41, -2594,-6189,-4733},
    {-24,16,-51, -68,-8192,273},
    {-30,12,-31, -4228,-6166,-3435},
  },{  {-40,16,-38, 34,-8192,239},
    {-30,12,-62, 2516,-5851,5178},
    {-49,12,-46, 4317,-5826,3844},
  },{  {-24,16,-51, -68,-8192,273},
    {-30,12,-62, 2516,-5851,5178},
    {-40,16,-38, 34,-8192,239},
  },{  {-49,12,-46, 4317,-5826,3844},
    {-32,0,-66, 3858,0,7240},
    {-53,0,-49, 6383,26,5159},
  },{  {-30,12,-62, 2516,-5851,5178},
    {-32,0,-66, 3858,0,7240},
    {-49,12,-46, 4317,-5826,3844},
  },{  {-32,0,-66, 3858,0,7240},
    {-6,-12,-69, 828,5826,5707},
    {-30,-12,-62, 2906,5843,4962},
  },{  {-6,0,-74, 805,-26,8165},
    {-6,-12,-69, 828,5826,5707},
    {-32,0,-66, 3858,0,7240},
  },{  {-30,-12,-62, 2906,5843,4962},
    {-5,-16,-57, 174,8192,209},
    {-24,-16,-51, 271,8192,67},
  },{  {-6,-12,-69, 828,5826,5707},
    {-5,-16,-57, 174,8192,209},
    {-30,-12,-62, 2906,5843,4962},
  },{  {-24,-16,-51, 271,8192,67},
    {-3,-12,-45, -468,6132,-5430},
    {-18,-12,-41, -2430,6166,-4861},
  },{  {-5,-16,-57, 174,8192,209},
    {-3,-12,-45, -468,6132,-5430},
    {-24,-16,-51, 271,8192,67},
  },{  {-18,-12,-41, -2430,6166,-4861},
    {-3,0,-40, -904,100,-8141},
    {-16,0,-36, -3796,0,-7292},
  },{  {-3,-12,-45, -468,6132,-5430},
    {-3,0,-40, -904,100,-8141},
    {-18,-12,-41, -2430,6166,-4861},
  },{  {-16,0,-36, -3796,0,-7292},
    {-3,12,-45, -647,-6155,-5368},
    {-18,12,-41, -2594,-6189,-4733},
  },{  {-3,0,-40, -904,100,-8141},
    {-3,12,-45, -647,-6155,-5368},
    {-16,0,-36, -3796,0,-7292},
  },{  {-18,12,-41, -2594,-6189,-4733},
    {-5,16,-57, -138,-8192,208},
    {-24,16,-51, -68,-8192,273},
  },{  {-3,12,-45, -647,-6155,-5368},
    {-5,16,-57, -138,-8192,208},
    {-18,12,-41, -2594,-6189,-4733},
  },{  {-24,16,-51, -68,-8192,273},
    {-6,12,-69, 328,-5859,5740},
    {-30,12,-62, 2516,-5851,5178},
  },{  {-5,16,-57, -138,-8192,208},
    {-6,12,-69, 328,-5859,5740},
    {-24,16,-51, -68,-8192,273},
  },{  {-30,12,-62, 2516,-5851,5178},
    {-6,0,-74, 805,-26,8165},
    {-32,0,-66, 3858,0,7240},
  },{  {-6,12,-69, 328,-5859,5740},
    {-6,0,-74, 805,-26,8165},
    {-30,12,-62, 2516,-5851,5178},
  },{  {-6,0,-74, 805,-26,8165},
    {18,-12,-67, -1475,5812,5601},
    {-6,-12,-69, 828,5826,5707},
  },{  {20,0,-71, -2395,0,7838},
    {18,-12,-67, -1475,5812,5601},
    {-6,0,-74, 805,-26,8165},
  },{  {-6,-12,-69, 828,5826,5707},
    {15,-16,-55, 139,8192,209},
    {-5,-16,-57, 174,8192,209},
  },{  {18,-12,-67, -1475,5812,5601},
    {15,-16,-55, 139,8192,209},
    {-6,-12,-69, 828,5826,5707},
  },{  {-5,-16,-57, 174,8192,209},
    {11,-12,-44, 1794,6120,-5154},
    {-3,-12,-45, -468,6132,-5430},
  },{  {15,-16,-55, 139,8192,209},
    {11,-12,-44, 1794,6120,-5154},
    {-5,-16,-57, 174,8192,209},
  },{  {-3,-12,-45, -468,6132,-5430},
    {10,0,-39, 2512,-50,-7840},
    {-3,0,-40, -904,100,-8141},
  },{  {11,-12,-44, 1794,6120,-5154},
    {10,0,-39, 2512,-50,-7840},
    {-3,-12,-45, -468,6132,-5430},
  },{  {-3,0,-40, -904,100,-8141},
    {11,12,-44, 1497,-6132,-5242},
    {-3,12,-45, -647,-6155,-5368},
  },{  {10,0,-39, 2512,-50,-7840},
    {11,12,-44, 1497,-6132,-5242},
    {-3,0,-40, -904,100,-8141},
  },{  {-3,12,-45, -647,-6155,-5368},
    {15,16,-55, -248,-8192,177},
    {-5,16,-57, -138,-8192,208},
  },{  {11,12,-44, 1497,-6132,-5242},
    {15,16,-55, -248,-8192,177},
    {-3,12,-45, -647,-6155,-5368},
  },{  {-5,16,-57, -138,-8192,208},
    {18,12,-67, -1860,-5851,5461},
    {-6,12,-69, 328,-5859,5740},
  },{  {15,16,-55, -248,-8192,177},
    {18,12,-67, -1860,-5851,5461},
    {-5,16,-57, -138,-8192,208},
  },{  {-6,12,-69, 328,-5859,5740},
    {20,0,-71, -2395,0,7838},
    {-6,0,-74, 805,-26,8165},
  },{  {18,12,-67, -1860,-5851,5461},
    {20,0,-71, -2395,0,7838},
    {-6,12,-69, 328,-5859,5740},
  },{  {20,0,-71, -2395,0,7838},
    {40,-12,-55, -3510,5851,4564},
    {18,-12,-67, -1475,5812,5601},
  },{  {43,0,-59, -5247,53,6318},
    {40,-12,-55, -3510,5851,4564},
    {20,0,-71, -2395,0,7838},
  },{  {18,-12,-67, -1475,5812,5601},
    {32,-16,-46, 0,8192,276},
    {15,-16,-55, 139,8192,209},
  },{  {40,-12,-55, -3510,5851,4564},
    {32,-16,-46, 0,8192,276},
    {18,-12,-67, -1475,5812,5601},
  },{  {15,-16,-55, 139,8192,209},
    {25,-12,-36, 3555,6166,-4096},
    {11,-12,-44, 1794,6120,-5154},
  },{  {32,-16,-46, 0,8192,276},
    {25,-12,-36, 3555,6166,-4096},
    {15,-16,-55, 139,8192,209},
  },{  {11,-12,-44, 1794,6120,-5154},
    {22,0,-32, 5297,0,-6278},
    {10,0,-39, 2512,-50,-7840},
  },{  {25,-12,-36, 3555,6166,-4096},
    {22,0,-32, 5297,0,-6278},
    {11,-12,-44, 1794,6120,-5154},
  },{  {10,0,-39, 2512,-50,-7840},
    {25,12,-36, 3435,-6166,-4228},
    {11,12,-44, 1497,-6132,-5242},
  },{  {22,0,-32, 5297,0,-6278},
    {25,12,-36, 3435,-6166,-4228},
    {10,0,-39, 2512,-50,-7840},
  },{  {11,12,-44, 1497,-6132,-5242},
    {32,16,-46, -275,-8192,34},
    {15,16,-55, -248,-8192,177},
  },{  {25,12,-36, 3435,-6166,-4228},
    {32,16,-46, -275,-8192,34},
    {11,12,-44, 1497,-6132,-5242},
  },{  {15,16,-55, -248,-8192,177},
    {40,12,-55, -3863,-5868,4241},
    {18,12,-67, -1860,-5851,5461},
  },{  {32,16,-46, -275,-8192,34},
    {40,12,-55, -3863,-5868,4241},
    {15,16,-55, -248,-8192,177},
  },{  {43,0,-59, -5247,53,6318},
    {20,0,-71, -2395,0,7838},
    {18,12,-67, -1860,-5851,5461},
  },{  {40,12,-55, -3863,-5868,4241},
    {43,0,-59, -5247,53,6318},
    {18,12,-67, -1860,-5851,5461},
  },};
