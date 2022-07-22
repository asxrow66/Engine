/*
 * WoW64 USER32 syscall definitions
 *
 * Copyright 2021 Alexandre Julliard
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef __WOW64WIN_SYSCALL_H
#define __WOW64WIN_SYSCALL_H

#define ALL_WIN32_SYSCALLS \
    SYSCALL_ENTRY( NtGdiAddFontMemResourceEx ) \
    SYSCALL_ENTRY( NtGdiAddFontResourceW ) \
    SYSCALL_ENTRY( NtGdiCombineRgn ) \
    SYSCALL_ENTRY( NtGdiCreateBitmap ) \
    SYSCALL_ENTRY( NtGdiCreateClientObj ) \
    SYSCALL_ENTRY( NtGdiCreateDIBBrush ) \
    SYSCALL_ENTRY( NtGdiCreateDIBSection ) \
    SYSCALL_ENTRY( NtGdiCreateEllipticRgn ) \
    SYSCALL_ENTRY( NtGdiCreateHalftonePalette ) \
    SYSCALL_ENTRY( NtGdiCreateHatchBrushInternal ) \
    SYSCALL_ENTRY( NtGdiCreatePaletteInternal ) \
    SYSCALL_ENTRY( NtGdiCreatePatternBrushInternal ) \
    SYSCALL_ENTRY( NtGdiCreatePen ) \
    SYSCALL_ENTRY( NtGdiCreateRectRgn ) \
    SYSCALL_ENTRY( NtGdiCreateRoundRectRgn ) \
    SYSCALL_ENTRY( NtGdiCreateSolidBrush ) \
    SYSCALL_ENTRY( NtGdiDdDDICreateDevice ) \
    SYSCALL_ENTRY( NtGdiDdDDIOpenAdapterFromHdc ) \
    SYSCALL_ENTRY( NtGdiDdDDIQueryStatistics ) \
    SYSCALL_ENTRY( NtGdiDdDDISetQueuedLimit ) \
    SYSCALL_ENTRY( NtGdiDeleteClientObj ) \
    SYSCALL_ENTRY( NtGdiDescribePixelFormat ) \
    SYSCALL_ENTRY( NtGdiDrawStream ) \
    SYSCALL_ENTRY( NtGdiEqualRgn ) \
    SYSCALL_ENTRY( NtGdiExtCreatePen ) \
    SYSCALL_ENTRY( NtGdiExtCreateRegion ) \
    SYSCALL_ENTRY( NtGdiExtGetObjectW ) \
    SYSCALL_ENTRY( NtGdiFlattenPath ) \
    SYSCALL_ENTRY( NtGdiFlush ) \
    SYSCALL_ENTRY( NtGdiGetBitmapBits ) \
    SYSCALL_ENTRY( NtGdiGetBitmapDimension ) \
    SYSCALL_ENTRY( NtGdiGetColorAdjustment ) \
    SYSCALL_ENTRY( NtGdiGetDCDword ) \
    SYSCALL_ENTRY( NtGdiGetDCObject ) \
    SYSCALL_ENTRY( NtGdiGetDCPoint ) \
    SYSCALL_ENTRY( NtGdiGetFontFileData ) \
    SYSCALL_ENTRY( NtGdiGetFontFileInfo ) \
    SYSCALL_ENTRY( NtGdiGetNearestPaletteIndex ) \
    SYSCALL_ENTRY( NtGdiGetPath ) \
    SYSCALL_ENTRY( NtGdiGetRegionData ) \
    SYSCALL_ENTRY( NtGdiGetRgnBox ) \
    SYSCALL_ENTRY( NtGdiGetSpoolMessage ) \
    SYSCALL_ENTRY( NtGdiGetSystemPaletteUse ) \
    SYSCALL_ENTRY( NtGdiGetTransform ) \
    SYSCALL_ENTRY( NtGdiHfontCreate ) \
    SYSCALL_ENTRY( NtGdiInitSpool ) \
    SYSCALL_ENTRY( NtGdiOffsetRgn ) \
    SYSCALL_ENTRY( NtGdiPathToRegion ) \
    SYSCALL_ENTRY( NtGdiPtInRegion ) \
    SYSCALL_ENTRY( NtGdiRectInRegion ) \
    SYSCALL_ENTRY( NtGdiRemoveFontMemResourceEx ) \
    SYSCALL_ENTRY( NtGdiRemoveFontResourceW ) \
    SYSCALL_ENTRY( NtGdiSaveDC ) \
    SYSCALL_ENTRY( NtGdiSetBitmapBits ) \
    SYSCALL_ENTRY( NtGdiSetBitmapDimension ) \
    SYSCALL_ENTRY( NtGdiSetBrushOrg ) \
    SYSCALL_ENTRY( NtGdiSetColorAdjustment ) \
    SYSCALL_ENTRY( NtGdiSetMagicColors ) \
    SYSCALL_ENTRY( NtGdiSetMetaRgn ) \
    SYSCALL_ENTRY( NtGdiSetPixelFormat ) \
    SYSCALL_ENTRY( NtGdiSetRectRgn ) \
    SYSCALL_ENTRY( NtGdiSetTextJustification ) \
    SYSCALL_ENTRY( NtGdiSetVirtualResolution ) \
    SYSCALL_ENTRY( NtGdiSwapBuffers ) \
    SYSCALL_ENTRY( NtGdiTransformPoints ) \
    SYSCALL_ENTRY( NtUserActivateKeyboardLayout ) \
    SYSCALL_ENTRY( NtUserAddClipboardFormatListener ) \
    SYSCALL_ENTRY( NtUserAssociateInputContext ) \
    SYSCALL_ENTRY( NtUserAttachThreadInput ) \
    SYSCALL_ENTRY( NtUserBeginPaint ) \
    SYSCALL_ENTRY( NtUserBuildHwndList ) \
    SYSCALL_ENTRY( NtUserCallHwnd ) \
    SYSCALL_ENTRY( NtUserCallHwndParam ) \
    SYSCALL_ENTRY( NtUserCallMsgFilter ) \
    SYSCALL_ENTRY( NtUserCallNextHookEx ) \
    SYSCALL_ENTRY( NtUserCallNoParam ) \
    SYSCALL_ENTRY( NtUserCallOneParam ) \
    SYSCALL_ENTRY( NtUserCallTwoParam ) \
    SYSCALL_ENTRY( NtUserChangeClipboardChain ) \
    SYSCALL_ENTRY( NtUserCheckMenuItem ) \
    SYSCALL_ENTRY( NtUserChildWindowFromPointEx ) \
    SYSCALL_ENTRY( NtUserCloseClipboard ) \
    SYSCALL_ENTRY( NtUserCloseDesktop ) \
    SYSCALL_ENTRY( NtUserCloseWindowStation ) \
    SYSCALL_ENTRY( NtUserCopyAcceleratorTable ) \
    SYSCALL_ENTRY( NtUserCountClipboardFormats ) \
    SYSCALL_ENTRY( NtUserCreateAcceleratorTable ) \
    SYSCALL_ENTRY( NtUserCreateDesktopEx ) \
    SYSCALL_ENTRY( NtUserCreateInputContext ) \
    SYSCALL_ENTRY( NtUserCreateWindowStation ) \
    SYSCALL_ENTRY( NtUserDeleteMenu ) \
    SYSCALL_ENTRY( NtUserDestroyAcceleratorTable ) \
    SYSCALL_ENTRY( NtUserDestroyInputContext ) \
    SYSCALL_ENTRY( NtUserDispatchMessage ) \
    SYSCALL_ENTRY( NtUserEmptyClipboard ) \
    SYSCALL_ENTRY( NtUserEndMenu ) \
    SYSCALL_ENTRY( NtUserFindExistingCursorIcon ) \
    SYSCALL_ENTRY( NtUserFindWindowEx ) \
    SYSCALL_ENTRY( NtUserGetAncestor ) \
    SYSCALL_ENTRY( NtUserGetAsyncKeyState ) \
    SYSCALL_ENTRY( NtUserGetAtomName ) \
    SYSCALL_ENTRY( NtUserGetCaretBlinkTime ) \
    SYSCALL_ENTRY( NtUserGetCaretPos ) \
    SYSCALL_ENTRY( NtUserGetClassName ) \
    SYSCALL_ENTRY( NtUserGetClipboardData ) \
    SYSCALL_ENTRY( NtUserGetClipboardFormatName ) \
    SYSCALL_ENTRY( NtUserGetClipboardOwner ) \
    SYSCALL_ENTRY( NtUserGetClipboardSequenceNumber ) \
    SYSCALL_ENTRY( NtUserGetClipboardViewer ) \
    SYSCALL_ENTRY( NtUserGetCursor ) \
    SYSCALL_ENTRY( NtUserGetCursorFrameInfo ) \
    SYSCALL_ENTRY( NtUserGetCursorInfo ) \
    SYSCALL_ENTRY( NtUserGetDCEx ) \
    SYSCALL_ENTRY( NtUserGetDoubleClickTime ) \
    SYSCALL_ENTRY( NtUserGetDpiForMonitor ) \
    SYSCALL_ENTRY( NtUserGetForegroundWindow ) \
    SYSCALL_ENTRY( NtUserGetGUIThreadInfo ) \
    SYSCALL_ENTRY( NtUserGetIconSize ) \
    SYSCALL_ENTRY( NtUserGetKeyNameText ) \
    SYSCALL_ENTRY( NtUserGetKeyState ) \
    SYSCALL_ENTRY( NtUserGetKeyboardLayout ) \
    SYSCALL_ENTRY( NtUserGetKeyboardLayoutList ) \
    SYSCALL_ENTRY( NtUserGetKeyboardLayoutName ) \
    SYSCALL_ENTRY( NtUserGetKeyboardState ) \
    SYSCALL_ENTRY( NtUserGetLayeredWindowAttributes ) \
    SYSCALL_ENTRY( NtUserGetMenuItemRect ) \
    SYSCALL_ENTRY( NtUserGetMessage ) \
    SYSCALL_ENTRY( NtUserGetMouseMovePointsEx ) \
    SYSCALL_ENTRY( NtUserGetObjectInformation ) \
    SYSCALL_ENTRY( NtUserGetOpenClipboardWindow ) \
    SYSCALL_ENTRY( NtUserGetPriorityClipboardFormat ) \
    SYSCALL_ENTRY( NtUserGetProcessDpiAwarenessContext ) \
    SYSCALL_ENTRY( NtUserGetProcessWindowStation ) \
    SYSCALL_ENTRY( NtUserGetProp ) \
    SYSCALL_ENTRY( NtUserGetQueueStatus ) \
    SYSCALL_ENTRY( NtUserGetRawInputBuffer ) \
    SYSCALL_ENTRY( NtUserGetRawInputData ) \
    SYSCALL_ENTRY( NtUserGetRawInputDeviceInfo ) \
    SYSCALL_ENTRY( NtUserGetRawInputDeviceList ) \
    SYSCALL_ENTRY( NtUserGetRegisteredRawInputDevices ) \
    SYSCALL_ENTRY( NtUserGetSystemDpiForProcess ) \
    SYSCALL_ENTRY( NtUserGetThreadDesktop ) \
    SYSCALL_ENTRY( NtUserGetTitleBarInfo ) \
    SYSCALL_ENTRY( NtUserGetUpdateRect ) \
    SYSCALL_ENTRY( NtUserGetUpdateRgn ) \
    SYSCALL_ENTRY( NtUserGetUpdatedClipboardFormats ) \
    SYSCALL_ENTRY( NtUserGetWindowRgnEx ) \
    SYSCALL_ENTRY( NtUserInitializeClientPfnArrays ) \
    SYSCALL_ENTRY( NtUserInternalGetWindowText ) \
    SYSCALL_ENTRY( NtUserInvalidateRect ) \
    SYSCALL_ENTRY( NtUserInvalidateRgn ) \
    SYSCALL_ENTRY( NtUserIsClipboardFormatAvailable ) \
    SYSCALL_ENTRY( NtUserKillTimer ) \
    SYSCALL_ENTRY( NtUserLockWindowUpdate ) \
    SYSCALL_ENTRY( NtUserMapVirtualKeyEx ) \
    SYSCALL_ENTRY( NtUserMenuItemFromPoint ) \
    SYSCALL_ENTRY( NtUserMessageCall ) \
    SYSCALL_ENTRY( NtUserMsgWaitForMultipleObjectsEx ) \
    SYSCALL_ENTRY( NtUserNotifyWinEvent ) \
    SYSCALL_ENTRY( NtUserOpenClipboard ) \
    SYSCALL_ENTRY( NtUserOpenDesktop ) \
    SYSCALL_ENTRY( NtUserOpenInputDesktop ) \
    SYSCALL_ENTRY( NtUserOpenWindowStation ) \
    SYSCALL_ENTRY( NtUserPeekMessage ) \
    SYSCALL_ENTRY( NtUserPostMessage ) \
    SYSCALL_ENTRY( NtUserPostThreadMessage ) \
    SYSCALL_ENTRY( NtUserQueryInputContext ) \
    SYSCALL_ENTRY( NtUserRedrawWindow ) \
    SYSCALL_ENTRY( NtUserRegisterHotKey ) \
    SYSCALL_ENTRY( NtUserRegisterRawInputDevices ) \
    SYSCALL_ENTRY( NtUserRemoveClipboardFormatListener ) \
    SYSCALL_ENTRY( NtUserRemoveMenu ) \
    SYSCALL_ENTRY( NtUserRemoveProp ) \
    SYSCALL_ENTRY( NtUserScrollWindowEx ) \
    SYSCALL_ENTRY( NtUserSendInput ) \
    SYSCALL_ENTRY( NtUserSetClipboardData ) \
    SYSCALL_ENTRY( NtUserSetClipboardViewer ) \
    SYSCALL_ENTRY( NtUserSetCursorPos ) \
    SYSCALL_ENTRY( NtUserSetKeyboardState ) \
    SYSCALL_ENTRY( NtUserSetMenuContextHelpId ) \
    SYSCALL_ENTRY( NtUserSetMenuDefaultItem ) \
    SYSCALL_ENTRY( NtUserSetObjectInformation ) \
    SYSCALL_ENTRY( NtUserSetProcessDpiAwarenessContext ) \
    SYSCALL_ENTRY( NtUserSetProcessWindowStation ) \
    SYSCALL_ENTRY( NtUserSetProp ) \
    SYSCALL_ENTRY( NtUserSetSystemTimer ) \
    SYSCALL_ENTRY( NtUserSetThreadDesktop ) \
    SYSCALL_ENTRY( NtUserSetTimer ) \
    SYSCALL_ENTRY( NtUserSetWinEventHook ) \
    SYSCALL_ENTRY( NtUserSetWindowsHookEx ) \
    SYSCALL_ENTRY( NtUserThunkedMenuInfo ) \
    SYSCALL_ENTRY( NtUserThunkedMenuItemInfo ) \
    SYSCALL_ENTRY( NtUserToUnicodeEx ) \
    SYSCALL_ENTRY( NtUserTrackPopupMenuEx ) \
    SYSCALL_ENTRY( NtUserTranslateMessage ) \
    SYSCALL_ENTRY( NtUserUnhookWinEvent ) \
    SYSCALL_ENTRY( NtUserUnhookWindowsHookEx ) \
    SYSCALL_ENTRY( NtUserUnregisterHotKey ) \
    SYSCALL_ENTRY( NtUserUpdateInputContext ) \
    SYSCALL_ENTRY( NtUserVkKeyScanEx ) \
    SYSCALL_ENTRY( NtUserWaitForInputIdle ) \
    SYSCALL_ENTRY( NtUserWindowFromDC )

#endif /* __WOW64WIN_SYSCALL_H */
