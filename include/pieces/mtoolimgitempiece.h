/*
 *   This file is part of mGNCS, a component for MiniGUI.
 * 
 *   Copyright (C) 2008~2018, Beijing FMSoft Technologies Co., Ltd.
 * 
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 * 
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 * 
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 *   Or,
 * 
 *   As this program is a library, any link to this program must follow
 *   GNU General Public License version 3 (GPLv3). If you cannot accept
 *   GPLv3, you need to be licensed from FMSoft.
 * 
 *   If you have got a commercial license of this program, please use it
 *   under the terms and conditions of the commercial license.
 * 
 *   For more information about the commercial license, please refer to
 *   <http://www.minigui.com/en/about/licensing-policy/>.
 */
/*
 ** $Id: mtoolimgitempiece.h 1683 2017-10-26 06:52:09Z weiym $
 **
 ** mtoolimgitempiece.h: 
 **
 ** Copyright (C) 2003 ~ 2010 Beijing Feynman Software Technology Co., Ltd. 
 ** 
 ** All rights reserved by Feynman Software.
 **   
 ** Current maintainer: dongjunjie 
 **  
 ** Create date: 2010年12月24日 
 */

#ifndef _MGNCS_TOOLIMGITEMPIECE_H
#define _MGNCS_TOOLIMGITEMPIECE_H

DECLARE_OBJECT(mToolImageItemPiece)

#define mToolImageItemPieceHeader(clss) \
	mToolImagePieceHeader(clss)

#define mToolImageItemPieceClassHeader(clss, superCls) \
	mToolImagePieceClassHeader(clss, superCls)

DEFINE_OBJECT(mToolImageItemPiece, mToolImagePiece)

#endif

