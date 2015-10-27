// Created by Microsoft (R) C/C++ Compiler Version 14.00.23026.0 (ea13738a).

// compiler-generated file created 10/08/15 at 07:08:04 - DO NOT EDIT!

#pragma once
#pragma pack(push, 8)

#include <comdef.h>

//
// Forward references and typedefs
//
namespace MSForm {
struct __declspec(uuid("9997a384-13eb-4457-861e-59e84d733515"))
/* LIBID */ __MSForms;
struct __declspec(uuid("bef6e003-a874-101a-8bba-00aa00300cab"))
/* dispinterface */ FormFont;
enum fmDropEffect;
enum fmAction;
struct __declspec(uuid("ec72f590-f375-11ce-b9e8-00aa006b1a69"))
/* dispinterface */ IDataAutoWrapper;
struct __declspec(uuid("82b02370-b5bc-11cf-810f-00a0c9030074"))
/* dispinterface */ IReturnInteger;
struct __declspec(uuid("82b02371-b5bc-11cf-810f-00a0c9030074"))
/* dispinterface */ IReturnBoolean;
struct __declspec(uuid("82b02372-b5bc-11cf-810f-00a0c9030074"))
/* dispinterface */ IReturnString;
struct __declspec(uuid("8a683c90-ba84-11cf-8110-00a0c9030074"))
/* dispinterface */ IReturnSingle;
struct __declspec(uuid("8a683c91-ba84-11cf-8110-00a0c9030074"))
/* dispinterface */ IReturnEffect;
struct /* coclass */ ReturnInteger;
struct /* coclass */ ReturnBoolean;
struct /* coclass */ ReturnString;
struct /* coclass */ ReturnSingle;
struct /* coclass */ ReturnEffect;
struct /* coclass */ DataObject;
enum fmMode;
enum fmMousePointer;
enum fmScrollBars;
enum fmScrollAction;
enum fmCycle;
enum fmZOrder;
enum fmBorderStyle;
enum fmTextAlign;
enum fmAlignment;
enum fmBorders;
enum fmBackStyle;
enum fmButtonStyle;
enum fmPicPosition;
enum fmVerticalScrollBarSide;
enum fmLayoutEffect;
enum fmSpecialEffect;
enum fmDragState;
enum fmPictureSizeMode;
enum fmPictureAlignment;
struct __declspec(uuid("04598fc6-866c-11cf-ab7c-00aa00c08fcf"))
/* dispinterface */ IControl;
struct __declspec(uuid("04598fc7-866c-11cf-ab7c-00aa00c08fcf"))
/* dispinterface */ Controls;
struct __declspec(uuid("29b86a70-f52e-11ce-9bce-00aa00608e01"))
/* dispinterface */ IOptionFrame;
struct __declspec(uuid("04598fc8-866c-11cf-ab7c-00aa00c08fcf"))
/* dispinterface */ _UserForm;
struct __declspec(uuid("9a4bbf53-4e46-101b-8bbd-00aa003e3b29"))
/* dispinterface */ ControlEvents;
struct /* coclass */ Control;
struct __declspec(uuid("5b9d8fc8-4a71-101b-97a6-00000b65c08b"))
/* dispinterface */ FormEvents;
struct __declspec(uuid("cf3f94a0-f546-11ce-9bce-00aa00608e01"))
/* dispinterface */ OptionFrameEvents;
struct /* coclass */ UserForm;
struct /* coclass */ Frame;
enum fmButtonEffect;
enum fmOrientation;
enum fmSnapPoint;
enum fmPicturePosition;
enum fmDisplayStyle;
enum fmShowListWhen;
enum fmShowDropButtonWhen;
enum fmMultiSelect;
enum fmListStyle;
enum fmEnterFieldBehavior;
enum fmDragBehavior;
enum fmMatchEntry;
enum fmDropButtonStyle;
enum fmStyle;
enum fmTabOrientation;
enum fmTabStyle;
enum fmIMEMode;
struct __declspec(uuid("04598fc1-866c-11cf-ab7c-00aa00c08fcf"))
/* dispinterface */ ILabelControl;
struct __declspec(uuid("04598fc4-866c-11cf-ab7c-00aa00c08fcf"))
/* dispinterface */ ICommandButton;
struct __declspec(uuid("8bd21d13-ec42-11ce-9e0d-00aa006002f3"))
/* dispinterface */ IMdcText;
struct __declspec(uuid("8bd21d23-ec42-11ce-9e0d-00aa006002f3"))
/* dispinterface */ IMdcList;
struct __declspec(uuid("8bd21d33-ec42-11ce-9e0d-00aa006002f3"))
/* dispinterface */ IMdcCombo;
struct __declspec(uuid("8bd21d43-ec42-11ce-9e0d-00aa006002f3"))
/* dispinterface */ IMdcCheckBox;
struct __declspec(uuid("8bd21d53-ec42-11ce-9e0d-00aa006002f3"))
/* dispinterface */ IMdcOptionButton;
struct __declspec(uuid("8bd21d63-ec42-11ce-9e0d-00aa006002f3"))
/* dispinterface */ IMdcToggleButton;
struct __declspec(uuid("04598fc3-866c-11cf-ab7c-00aa00c08fcf"))
/* dispinterface */ IScrollbar;
struct __declspec(uuid("a38bffc3-a5a0-11ce-8107-00aa00611080"))
/* dispinterface */ Tab;
struct __declspec(uuid("944acf93-a1e6-11ce-8104-00aa00611080"))
/* dispinterface */ Tabs;
struct __declspec(uuid("04598fc2-866c-11cf-ab7c-00aa00c08fcf"))
/* dispinterface */ ITabStrip;
struct __declspec(uuid("79176fb3-b7f2-11ce-97ef-00aa006d2776"))
/* dispinterface */ ISpinbutton;
struct __declspec(uuid("4c599243-6926-101b-9992-00000b65c6f9"))
/* dispinterface */ IImage;
struct __declspec(uuid("5512d111-5cc6-11cf-8d67-00aa00bdce1d"))
/* dispinterface */ IWHTMLSubmitButton;
struct __declspec(uuid("5512d113-5cc6-11cf-8d67-00aa00bdce1d"))
/* dispinterface */ IWHTMLImage;
struct __declspec(uuid("5512d115-5cc6-11cf-8d67-00aa00bdce1d"))
/* dispinterface */ IWHTMLReset;
struct __declspec(uuid("5512d117-5cc6-11cf-8d67-00aa00bdce1d"))
/* dispinterface */ IWHTMLCheckbox;
struct __declspec(uuid("5512d119-5cc6-11cf-8d67-00aa00bdce1d"))
/* dispinterface */ IWHTMLOption;
struct __declspec(uuid("5512d11b-5cc6-11cf-8d67-00aa00bdce1d"))
/* dispinterface */ IWHTMLText;
struct __declspec(uuid("5512d11d-5cc6-11cf-8d67-00aa00bdce1d"))
/* dispinterface */ IWHTMLHidden;
struct __declspec(uuid("5512d11f-5cc6-11cf-8d67-00aa00bdce1d"))
/* dispinterface */ IWHTMLPassword;
struct __declspec(uuid("5512d123-5cc6-11cf-8d67-00aa00bdce1d"))
/* dispinterface */ IWHTMLSelect;
struct __declspec(uuid("5512d125-5cc6-11cf-8d67-00aa00bdce1d"))
/* dispinterface */ IWHTMLTextArea;
struct __declspec(uuid("978c9e22-d4b0-11ce-bf2d-00aa003f40d0"))
/* dispinterface */ LabelControlEvents;
struct /* coclass */ Label;
struct __declspec(uuid("7b020ec1-af6c-11ce-9f46-00aa00574a4f"))
/* dispinterface */ CommandButtonEvents;
struct /* coclass */ CommandButton;
struct __declspec(uuid("8bd21d12-ec42-11ce-9e0d-00aa006002f3"))
/* dispinterface */ MdcTextEvents;
struct /* coclass */ TextBox;
struct __declspec(uuid("8bd21d22-ec42-11ce-9e0d-00aa006002f3"))
/* dispinterface */ MdcListEvents;
struct /* coclass */ ListBox;
struct __declspec(uuid("8bd21d32-ec42-11ce-9e0d-00aa006002f3"))
/* dispinterface */ MdcComboEvents;
struct /* coclass */ ComboBox;
struct __declspec(uuid("8bd21d42-ec42-11ce-9e0d-00aa006002f3"))
/* dispinterface */ MdcCheckBoxEvents;
struct __declspec(uuid("8bd21d52-ec42-11ce-9e0d-00aa006002f3"))
/* dispinterface */ MdcOptionButtonEvents;
struct __declspec(uuid("8bd21d62-ec42-11ce-9e0d-00aa006002f3"))
/* dispinterface */ MdcToggleButtonEvents;
struct /* coclass */ CheckBox;
struct /* coclass */ OptionButton;
struct /* coclass */ ToggleButton;
struct /* coclass */ NewFont;
struct __declspec(uuid("7b020ec2-af6c-11ce-9f46-00aa00574a4f"))
/* dispinterface */ ScrollbarEvents;
struct /* coclass */ ScrollBar;
struct __declspec(uuid("7b020ec7-af6c-11ce-9f46-00aa00574a4f"))
/* dispinterface */ TabStripEvents;
struct /* coclass */ TabStrip;
struct __declspec(uuid("79176fb2-b7f2-11ce-97ef-00aa006d2776"))
/* dispinterface */ SpinbuttonEvents;
struct /* coclass */ SpinButton;
struct __declspec(uuid("4c5992a5-6926-101b-9992-00000b65c6f9"))
/* dispinterface */ ImageEvents;
struct /* coclass */ Image;
struct __declspec(uuid("796ed650-5fe9-11cf-8d68-00aa00bdce1d"))
/* dispinterface */ WHTMLControlEvents;
struct __declspec(uuid("47ff8fe0-6198-11cf-8ce8-00aa006cb389"))
/* dispinterface */ WHTMLControlEvents1;
struct __declspec(uuid("47ff8fe1-6198-11cf-8ce8-00aa006cb389"))
/* dispinterface */ WHTMLControlEvents2;
struct __declspec(uuid("47ff8fe2-6198-11cf-8ce8-00aa006cb389"))
/* dispinterface */ WHTMLControlEvents3;
struct __declspec(uuid("47ff8fe3-6198-11cf-8ce8-00aa006cb389"))
/* dispinterface */ WHTMLControlEvents4;
struct __declspec(uuid("47ff8fe4-6198-11cf-8ce8-00aa006cb389"))
/* dispinterface */ WHTMLControlEvents5;
struct __declspec(uuid("47ff8fe5-6198-11cf-8ce8-00aa006cb389"))
/* dispinterface */ WHTMLControlEvents6;
struct __declspec(uuid("47ff8fe6-6198-11cf-8ce8-00aa006cb389"))
/* dispinterface */ WHTMLControlEvents7;
struct __declspec(uuid("47ff8fe8-6198-11cf-8ce8-00aa006cb389"))
/* dispinterface */ WHTMLControlEvents9;
struct __declspec(uuid("47ff8fe9-6198-11cf-8ce8-00aa006cb389"))
/* dispinterface */ WHTMLControlEvents10;
struct /* coclass */ HTMLSubmit;
struct /* coclass */ HTMLImage;
struct /* coclass */ HTMLReset;
struct /* coclass */ HTMLCheckbox;
struct /* coclass */ HTMLOption;
struct /* coclass */ HTMLText;
struct /* coclass */ HTMLHidden;
struct /* coclass */ HTMLPassword;
struct /* coclass */ HTMLSelect;
struct /* coclass */ HTMLTextArea;
enum fmTransitionEffect;
struct __declspec(uuid("5cef5613-713d-11ce-80c9-00aa00611080"))
/* dispinterface */ IPage;
struct __declspec(uuid("92e11a03-7358-11ce-80cb-00aa00611080"))
/* dispinterface */ Pages;
struct __declspec(uuid("04598fc9-866c-11cf-ab7c-00aa00c08fcf"))
/* dispinterface */ IMultiPage;
struct __declspec(uuid("7b020ec8-af6c-11ce-9f46-00aa00574a4f"))
/* dispinterface */ MultiPageEvents;
struct /* coclass */ MultiPage;
struct /* coclass */ Page;
enum fmListBoxStyles;
enum fmRepeatDirection;
enum fmEnAutoSize;
typedef long OLE_Tangram_COLOR;
typedef long OLE_HANDLE;
typedef VARIANT_BOOL OLE_OPTEXCLUSIVE;
typedef IUnknown * PIROWSET;

//
// Smart pointer typedef declarations
//

_COM_SMARTPTR_TYPEDEF(FormFont, __uuidof(FormFont));
_COM_SMARTPTR_TYPEDEF(IDataAutoWrapper, __uuidof(IDataAutoWrapper));
_COM_SMARTPTR_TYPEDEF(IReturnInteger, __uuidof(IReturnInteger));
_COM_SMARTPTR_TYPEDEF(IReturnBoolean, __uuidof(IReturnBoolean));
_COM_SMARTPTR_TYPEDEF(IReturnString, __uuidof(IReturnString));
_COM_SMARTPTR_TYPEDEF(IReturnSingle, __uuidof(IReturnSingle));
_COM_SMARTPTR_TYPEDEF(IReturnEffect, __uuidof(IReturnEffect));
_COM_SMARTPTR_TYPEDEF(IControl, __uuidof(IControl));
_COM_SMARTPTR_TYPEDEF(Controls, __uuidof(Controls));
_COM_SMARTPTR_TYPEDEF(IOptionFrame, __uuidof(IOptionFrame));
_COM_SMARTPTR_TYPEDEF(_UserForm, __uuidof(_UserForm));
_COM_SMARTPTR_TYPEDEF(ControlEvents, __uuidof(ControlEvents));
_COM_SMARTPTR_TYPEDEF(FormEvents, __uuidof(FormEvents));
_COM_SMARTPTR_TYPEDEF(OptionFrameEvents, __uuidof(OptionFrameEvents));
_COM_SMARTPTR_TYPEDEF(ILabelControl, __uuidof(ILabelControl));
_COM_SMARTPTR_TYPEDEF(ICommandButton, __uuidof(ICommandButton));
_COM_SMARTPTR_TYPEDEF(IMdcText, __uuidof(IMdcText));
_COM_SMARTPTR_TYPEDEF(IMdcList, __uuidof(IMdcList));
_COM_SMARTPTR_TYPEDEF(IMdcCombo, __uuidof(IMdcCombo));
_COM_SMARTPTR_TYPEDEF(IMdcCheckBox, __uuidof(IMdcCheckBox));
_COM_SMARTPTR_TYPEDEF(IMdcOptionButton, __uuidof(IMdcOptionButton));
_COM_SMARTPTR_TYPEDEF(IMdcToggleButton, __uuidof(IMdcToggleButton));
_COM_SMARTPTR_TYPEDEF(IScrollbar, __uuidof(IScrollbar));
_COM_SMARTPTR_TYPEDEF(Tab, __uuidof(Tab));
_COM_SMARTPTR_TYPEDEF(Tabs, __uuidof(Tabs));
_COM_SMARTPTR_TYPEDEF(ITabStrip, __uuidof(ITabStrip));
_COM_SMARTPTR_TYPEDEF(ISpinbutton, __uuidof(ISpinbutton));
_COM_SMARTPTR_TYPEDEF(IImage, __uuidof(IImage));
_COM_SMARTPTR_TYPEDEF(IWHTMLSubmitButton, __uuidof(IWHTMLSubmitButton));
_COM_SMARTPTR_TYPEDEF(IWHTMLImage, __uuidof(IWHTMLImage));
_COM_SMARTPTR_TYPEDEF(IWHTMLReset, __uuidof(IWHTMLReset));
_COM_SMARTPTR_TYPEDEF(IWHTMLCheckbox, __uuidof(IWHTMLCheckbox));
_COM_SMARTPTR_TYPEDEF(IWHTMLOption, __uuidof(IWHTMLOption));
_COM_SMARTPTR_TYPEDEF(IWHTMLText, __uuidof(IWHTMLText));
_COM_SMARTPTR_TYPEDEF(IWHTMLHidden, __uuidof(IWHTMLHidden));
_COM_SMARTPTR_TYPEDEF(IWHTMLPassword, __uuidof(IWHTMLPassword));
_COM_SMARTPTR_TYPEDEF(IWHTMLSelect, __uuidof(IWHTMLSelect));
_COM_SMARTPTR_TYPEDEF(IWHTMLTextArea, __uuidof(IWHTMLTextArea));
_COM_SMARTPTR_TYPEDEF(LabelControlEvents, __uuidof(LabelControlEvents));
_COM_SMARTPTR_TYPEDEF(CommandButtonEvents, __uuidof(CommandButtonEvents));
_COM_SMARTPTR_TYPEDEF(MdcTextEvents, __uuidof(MdcTextEvents));
_COM_SMARTPTR_TYPEDEF(MdcListEvents, __uuidof(MdcListEvents));
_COM_SMARTPTR_TYPEDEF(MdcComboEvents, __uuidof(MdcComboEvents));
_COM_SMARTPTR_TYPEDEF(MdcCheckBoxEvents, __uuidof(MdcCheckBoxEvents));
_COM_SMARTPTR_TYPEDEF(MdcOptionButtonEvents, __uuidof(MdcOptionButtonEvents));
_COM_SMARTPTR_TYPEDEF(MdcToggleButtonEvents, __uuidof(MdcToggleButtonEvents));
_COM_SMARTPTR_TYPEDEF(ScrollbarEvents, __uuidof(ScrollbarEvents));
_COM_SMARTPTR_TYPEDEF(TabStripEvents, __uuidof(TabStripEvents));
_COM_SMARTPTR_TYPEDEF(SpinbuttonEvents, __uuidof(SpinbuttonEvents));
_COM_SMARTPTR_TYPEDEF(ImageEvents, __uuidof(ImageEvents));
_COM_SMARTPTR_TYPEDEF(WHTMLControlEvents, __uuidof(WHTMLControlEvents));
_COM_SMARTPTR_TYPEDEF(WHTMLControlEvents1, __uuidof(WHTMLControlEvents1));
_COM_SMARTPTR_TYPEDEF(WHTMLControlEvents2, __uuidof(WHTMLControlEvents2));
_COM_SMARTPTR_TYPEDEF(WHTMLControlEvents3, __uuidof(WHTMLControlEvents3));
_COM_SMARTPTR_TYPEDEF(WHTMLControlEvents4, __uuidof(WHTMLControlEvents4));
_COM_SMARTPTR_TYPEDEF(WHTMLControlEvents5, __uuidof(WHTMLControlEvents5));
_COM_SMARTPTR_TYPEDEF(WHTMLControlEvents6, __uuidof(WHTMLControlEvents6));
_COM_SMARTPTR_TYPEDEF(WHTMLControlEvents7, __uuidof(WHTMLControlEvents7));
_COM_SMARTPTR_TYPEDEF(WHTMLControlEvents9, __uuidof(WHTMLControlEvents9));
_COM_SMARTPTR_TYPEDEF(WHTMLControlEvents10, __uuidof(WHTMLControlEvents10));
_COM_SMARTPTR_TYPEDEF(IPage, __uuidof(IPage));
_COM_SMARTPTR_TYPEDEF(Pages, __uuidof(Pages));
_COM_SMARTPTR_TYPEDEF(IMultiPage, __uuidof(IMultiPage));
_COM_SMARTPTR_TYPEDEF(MultiPageEvents, __uuidof(MultiPageEvents));

//
// Type library items
//

struct __declspec(uuid("bef6e003-a874-101a-8bba-00aa00300cab"))
FormFont : IDispatch
{};

enum __declspec(uuid("10bb4720-f797-11ce-b9ec-00aa006b1a69"))
fmDropEffect
{
    fmDropEffectNone = 0,
    fmDropEffectCopy = 1,
    fmDropEffectMove = 2,
    fmDropEffectCopyOrMove = 3
};

enum __declspec(uuid("570c03e0-f797-11ce-b9ec-00aa006b1a69"))
fmAction
{
    fmActionCut = 0,
    fmActionCopy = 1,
    fmActionPaste = 2,
    fmActionDragDrop = 3
};

struct __declspec(uuid("ec72f590-f375-11ce-b9e8-00aa006b1a69"))
IDataAutoWrapper : IDispatch
{};

struct __declspec(uuid("82b02370-b5bc-11cf-810f-00a0c9030074"))
IReturnInteger : IDispatch
{};

struct __declspec(uuid("82b02371-b5bc-11cf-810f-00a0c9030074"))
IReturnBoolean : IDispatch
{};

struct __declspec(uuid("82b02372-b5bc-11cf-810f-00a0c9030074"))
IReturnString : IDispatch
{};

struct __declspec(uuid("8a683c90-ba84-11cf-8110-00a0c9030074"))
IReturnSingle : IDispatch
{};

struct __declspec(uuid("8a683c91-ba84-11cf-8110-00a0c9030074"))
IReturnEffect : IDispatch
{};

struct __declspec(uuid("82b02373-b5bc-11cf-810f-00a0c9030074"))
ReturnInteger;
    // [ default ] dispinterface IReturnInteger

struct __declspec(uuid("82b02374-b5bc-11cf-810f-00a0c9030074"))
ReturnBoolean;
    // [ default ] dispinterface IReturnBoolean

struct __declspec(uuid("82b02375-b5bc-11cf-810f-00a0c9030074"))
ReturnString;
    // [ default ] dispinterface IReturnString

struct __declspec(uuid("8a683c92-ba84-11cf-8110-00a0c9030074"))
ReturnSingle;
    // [ default ] dispinterface IReturnSingle

struct __declspec(uuid("8a683c93-ba84-11cf-8110-00a0c9030074"))
ReturnEffect;
    // [ default ] dispinterface IReturnEffect

struct __declspec(uuid("1c3b4210-f441-11ce-b9ea-00aa006b1a69"))
DataObject;
    // [ default ] dispinterface IDataAutoWrapper

enum __declspec(uuid("c63bd250-bcaa-11ce-b64d-00aa004cd6d8"))
fmMode
{
    fmModeInherit = -2,
    fmModeOn = -1,
    fmModeOff = 0
};

enum __declspec(uuid("593104f8-16ba-101b-989c-00006b82871a"))
fmMousePointer
{
    fmMousePointerDefault = 0,
    fmMousePointerArrow = 1,
    fmMousePointerCross = 2,
    fmMousePointerIBeam = 3,
    fmMousePointerSizeNESW = 6,
    fmMousePointerSizeNS = 7,
    fmMousePointerSizeNWSE = 8,
    fmMousePointerSizeWE = 9,
    fmMousePointerUpArrow = 10,
    fmMousePointerHourGlass = 11,
    fmMousePointerNoDrop = 12,
    fmMousePointerAppStarting = 13,
    fmMousePointerHelp = 14,
    fmMousePointerSizeAll = 15,
    fmMousePointerCustom = 99
};

enum __declspec(uuid("5931055e-16ba-101b-989c-00006b82871a"))
fmScrollBars
{
    fmScrollBarsNone = 0,
    fmScrollBarsHorizontal = 1,
    fmScrollBarsVertical = 2,
    fmScrollBarsBoth = 3
};

enum __declspec(uuid("e0abc3c0-d199-11ce-8cce-00aa0044bb60"))
fmScrollAction
{
    fmScrollActionNoChange = 0,
    fmScrollActionLineUp = 1,
    fmScrollActionLineDown = 2,
    fmScrollActionPageUp = 3,
    fmScrollActionPageDown = 4,
    fmScrollActionBegin = 5,
    fmScrollActionEnd = 6,
    _fmScrollActionAbsoluteChange = 7,
    fmScrollActionPropertyChange = 8,
    fmScrollActionControlRequest = 9,
    fmScrollActionFocusRequest = 10
};

enum __declspec(uuid("3dbdd630-dd73-11ce-8cd1-00aa0044bb60"))
fmCycle
{
    fmCycleAllForms = 0,
    fmCycleCurrentForm = 2
};

enum __declspec(uuid("14c73c30-1612-11ce-9e98-00aa00574a4f"))
fmZOrder
{
    fmZOrderFront = 0,
    fmZOrderBack = 1
};

enum __declspec(uuid("5931055c-16ba-101b-989c-00006b82871a"))
fmBorderStyle
{
    fmBorderStyleNone = 0,
    fmBorderStyleSingle = 1
};

enum __declspec(uuid("66baac90-7c2a-11ce-b783-00aa004ba6ae"))
fmTextAlign
{
    fmTextAlignLeft = 1,
    fmTextAlignCenter = 2,
    fmTextAlignRight = 3
};

enum __declspec(uuid("cd474e84-a35f-101a-beb9-00006b827da8"))
fmAlignment
{
    fmAlignmentLeft = 0,
    fmAlignmentRight = 1
};

enum __declspec(uuid("e1fc1640-70df-101b-bc16-00aa003e3b29"))
fmBorders
{
    fmBordersNone = 0,
    fmBordersBox = 1,
    fmBordersLeft = 2,
    fmBordersTop = 3
};

enum __declspec(uuid("1afb3130-c129-11cd-a777-00dd01143c57"))
fmBackStyle
{
    fmBackStyleTransparent = 0,
    fmBackStyleOpaque = 1
};

enum __declspec(uuid("fde774c0-9aa8-11cd-84db-00006b82871a"))
fmButtonStyle
{
    fmButtonStylePushButton = 0,
    fmButtonStyleToggleButton = 1
};

enum __declspec(uuid("9011f7a0-c130-11cd-9be1-00006b82871a"))
fmPicPosition
{
    fmPicPositionCenter = 0,
    fmPicPositionTopLeft = 1,
    fmPicPositionTopCenter = 2,
    fmPicPositionTopRight = 3,
    fmPicPositionCenterLeft = 4,
    fmPicPositionCenterRight = 5,
    fmPicPositionBottomLeft = 6,
    fmPicPositionBottomCenter = 7,
    fmPicPositionBottomRight = 8
};

enum __declspec(uuid("d625ca10-cc59-11ce-b653-00aa004cd6d8"))
fmVerticalScrollBarSide
{
    fmVerticalScrollBarSideRight = 0,
    fmVerticalScrollBarSideLeft = 1
};

enum __declspec(uuid("02dfd4f0-ea2b-11ce-8043-00aa006009fa"))
fmLayoutEffect
{
    fmLayoutEffectNone = 0,
    fmLayoutEffectInitiate = 1,
    _fmLayoutEffectRespond = 2
};

enum __declspec(uuid("a7946240-ea45-11ce-8043-00aa006009fa"))
fmSpecialEffect
{
    fmSpecialEffectFlat = 0,
    fmSpecialEffectRaised = 1,
    fmSpecialEffectSunken = 2,
    fmSpecialEffectEtched = 3,
    fmSpecialEffectBump = 6
};

enum __declspec(uuid("82074c80-ea51-11ce-8043-00aa006009fa"))
fmDragState
{
    fmDragStateEnter = 0,
    fmDragStateLeave = 1,
    fmDragStateOver = 2
};

enum __declspec(uuid("53327010-e90b-11ce-9e0b-00aa006002f3"))
fmPictureSizeMode
{
    fmPictureSizeModeClip = 0,
    fmPictureSizeModeStretch = 1,
    fmPictureSizeModeZoom = 3
};

enum __declspec(uuid("3574bbe0-f520-11ce-83f6-00aa00479846"))
fmPictureAlignment
{
    fmPictureAlignmentTopLeft = 0,
    fmPictureAlignmentTopRight = 1,
    fmPictureAlignmentCenter = 2,
    fmPictureAlignmentBottomLeft = 3,
    fmPictureAlignmentBottomRight = 4
};

struct __declspec(uuid("04598fc6-866c-11cf-ab7c-00aa00c08fcf"))
IControl : IDispatch
{};

struct __declspec(uuid("04598fc7-866c-11cf-ab7c-00aa00c08fcf"))
Controls : IDispatch
{};

struct __declspec(uuid("29b86a70-f52e-11ce-9bce-00aa00608e01"))
IOptionFrame : IDispatch
{};

struct __declspec(uuid("04598fc8-866c-11cf-ab7c-00aa00c08fcf"))
_UserForm : IDispatch
{};

struct __declspec(uuid("9a4bbf53-4e46-101b-8bbd-00aa003e3b29"))
ControlEvents : IDispatch
{};

struct __declspec(uuid("909e0ae0-16dc-11ce-9e98-00aa00574a4f"))
Control;
    // [ default ] dispinterface IControl
    // [ default, source ] dispinterface ControlEvents

struct __declspec(uuid("5b9d8fc8-4a71-101b-97a6-00000b65c08b"))
FormEvents : IDispatch
{};

struct __declspec(uuid("cf3f94a0-f546-11ce-9bce-00aa00608e01"))
OptionFrameEvents : IDispatch
{};

struct __declspec(uuid("c62a69f0-16dc-11ce-9e98-00aa00574a4f"))
UserForm;
    // [ default ] dispinterface _UserForm
    // [ default, source ] dispinterface FormEvents

struct __declspec(uuid("6e182020-f460-11ce-9bcd-00aa00608e01"))
Frame;
    // [ default ] dispinterface IOptionFrame
    // [ default, source ] dispinterface OptionFrameEvents

enum __declspec(uuid("317a54c0-c7b1-11ce-9afd-00aa00600ab8"))
fmButtonEffect
{
    fmButtonEffectFlat = 0,
    fmButtonEffectSunken = 2
};

enum __declspec(uuid("16e571e0-040b-11cf-8283-00aa004ba6ae"))
fmOrientation
{
    fmOrientationAuto = -1,
    fmOrientationVertical = 0,
    fmOrientationHorizontal = 1
};

enum __declspec(uuid("317a54c1-c7b1-11ce-9afd-00aa00600ab8"))
fmSnapPoint
{
    fmSnapPointTopLeft = 0,
    fmSnapPointTopCenter = 1,
    fmSnapPointTopRight = 2,
    fmSnapPointCenterLeft = 3,
    fmSnapPointCenter = 4,
    fmSnapPointCenterRight = 5,
    fmSnapPointBottomLeft = 6,
    fmSnapPointBottomCenter = 7,
    fmSnapPointBottomRight = 8
};

enum __declspec(uuid("317a54c2-c7b1-11ce-9afd-00aa00600ab8"))
fmPicturePosition
{
    fmPicturePositionLeftTop = 0,
    fmPicturePositionLeftCenter = 1,
    fmPicturePositionLeftBottom = 2,
    fmPicturePositionRightTop = 3,
    fmPicturePositionRightCenter = 4,
    fmPicturePositionRightBottom = 5,
    fmPicturePositionAboveLeft = 6,
    fmPicturePositionAboveCenter = 7,
    fmPicturePositionAboveRight = 8,
    fmPicturePositionBelowLeft = 9,
    fmPicturePositionBelowCenter = 10,
    fmPicturePositionBelowRight = 11,
    fmPicturePositionCenter = 12
};

enum __declspec(uuid("a4069f25-4221-11ce-8ea0-00aa004ba6ae"))
fmDisplayStyle
{
    fmDisplayStyleText = 1,
    fmDisplayStyleList = 2,
    fmDisplayStyleCombo = 3,
    fmDisplayStyleCheckBox = 4,
    fmDisplayStyleOptionButton = 5,
    fmDisplayStyleToggle = 6,
    fmDisplayStyleDropList = 7
};

enum __declspec(uuid("a4069f24-4221-11ce-8ea0-00aa004ba6ae"))
fmShowListWhen
{
    fmShowListWhenNever = 0,
    fmShowListWhenButton = 1,
    fmShowListWhenFocus = 2,
    fmShowListWhenAlways = 3
};

enum __declspec(uuid("c5d98c41-4eb2-11ce-8ea0-00aa004ba6ae"))
fmShowDropButtonWhen
{
    fmShowDropButtonWhenNever = 0,
    fmShowDropButtonWhenFocus = 1,
    fmShowDropButtonWhenAlways = 2
};

enum __declspec(uuid("f00164c0-b17b-11ce-a95d-00aa006cb389"))
fmMultiSelect
{
    fmMultiSelectSingle = 0,
    fmMultiSelectMulti = 1,
    fmMultiSelectExtended = 2
};

enum __declspec(uuid("f00164c1-b17b-11ce-a95d-00aa006cb389"))
fmListStyle
{
    fmListStylePlain = 0,
    fmListStyleOption = 1
};

enum __declspec(uuid("6a7167f1-2432-11cf-956f-00aa004b9dfa"))
fmEnterFieldBehavior
{
    fmEnterFieldBehaviorSelectAll = 0,
    fmEnterFieldBehaviorRecallSelection = 1
};

enum __declspec(uuid("e25eb550-24f6-11cf-a6e2-00aa00c0098d"))
fmDragBehavior
{
    fmDragBehaviorDisabled = 0,
    fmDragBehaviorEnabled = 1
};

enum __declspec(uuid("8ccd0ac2-b1ad-11ce-8276-00aa004ba6ae"))
fmMatchEntry
{
    fmMatchEntryFirstLetter = 0,
    fmMatchEntryComplete = 1,
    fmMatchEntryNone = 2
};

enum __declspec(uuid("14d122b0-c6e7-11ce-827c-00aa004ba6ae"))
fmDropButtonStyle
{
    fmDropButtonStylePlain = 0,
    fmDropButtonStyleArrow = 1,
    fmDropButtonStyleEllipsis = 2,
    fmDropButtonStyleReduce = 3
};

enum __declspec(uuid("9c37f9d0-fde5-11ce-9560-00aa004b9dfa"))
fmStyle
{
    fmStyleDropDownCombo = 0,
    fmStyleDropDownList = 2
};

enum __declspec(uuid("ebc7fde1-6899-11ce-80c0-00aa00611080"))
fmTabOrientation
{
    fmTabOrientationTop = 0,
    fmTabOrientationBottom = 1,
    fmTabOrientationLeft = 2,
    fmTabOrientationRight = 3
};

enum __declspec(uuid("ebc7fde3-6899-11ce-80c0-00aa00611080"))
fmTabStyle
{
    fmTabStyleTabs = 0,
    fmTabStyleButtons = 1,
    fmTabStyleNone = 2
};

enum __declspec(uuid("4d067cd0-0d74-11cf-b474-00aa006eb734"))
fmIMEMode
{
    fmIMEModeNoControl = 0,
    fmIMEModeOn = 1,
    fmIMEModeOff = 2,
    fmIMEModeDisable = 3,
    fmIMEModeHiragana = 4,
    fmIMEModeKatakana = 5,
    fmIMEModeKatakanaHalf = 6,
    fmIMEModeAlphaFull = 7,
    fmIMEModeAlpha = 8,
    fmIMEModeHangulFull = 9,
    fmIMEModeHangul = 10,
    fmIMEModeHanziFull = 11,
    fmIMEModeHanzi = 12
};

struct __declspec(uuid("04598fc1-866c-11cf-ab7c-00aa00c08fcf"))
ILabelControl : IDispatch
{};

struct __declspec(uuid("04598fc4-866c-11cf-ab7c-00aa00c08fcf"))
ICommandButton : IDispatch
{};

struct __declspec(uuid("8bd21d13-ec42-11ce-9e0d-00aa006002f3"))
IMdcText : IDispatch
{};

struct __declspec(uuid("8bd21d23-ec42-11ce-9e0d-00aa006002f3"))
IMdcList : IDispatch
{};

struct __declspec(uuid("8bd21d33-ec42-11ce-9e0d-00aa006002f3"))
IMdcCombo : IDispatch
{};

struct __declspec(uuid("8bd21d43-ec42-11ce-9e0d-00aa006002f3"))
IMdcCheckBox : IDispatch
{};

struct __declspec(uuid("8bd21d53-ec42-11ce-9e0d-00aa006002f3"))
IMdcOptionButton : IDispatch
{};

struct __declspec(uuid("8bd21d63-ec42-11ce-9e0d-00aa006002f3"))
IMdcToggleButton : IDispatch
{};

struct __declspec(uuid("04598fc3-866c-11cf-ab7c-00aa00c08fcf"))
IScrollbar : IDispatch
{};

struct __declspec(uuid("a38bffc3-a5a0-11ce-8107-00aa00611080"))
Tab : IDispatch
{};

struct __declspec(uuid("944acf93-a1e6-11ce-8104-00aa00611080"))
Tabs : IDispatch
{};

struct __declspec(uuid("04598fc2-866c-11cf-ab7c-00aa00c08fcf"))
ITabStrip : IDispatch
{};

struct __declspec(uuid("79176fb3-b7f2-11ce-97ef-00aa006d2776"))
ISpinbutton : IDispatch
{};

struct __declspec(uuid("4c599243-6926-101b-9992-00000b65c6f9"))
IImage : IDispatch
{};

struct __declspec(uuid("5512d111-5cc6-11cf-8d67-00aa00bdce1d"))
IWHTMLSubmitButton : IDispatch
{};

struct __declspec(uuid("5512d113-5cc6-11cf-8d67-00aa00bdce1d"))
IWHTMLImage : IDispatch
{};

struct __declspec(uuid("5512d115-5cc6-11cf-8d67-00aa00bdce1d"))
IWHTMLReset : IDispatch
{};

struct __declspec(uuid("5512d117-5cc6-11cf-8d67-00aa00bdce1d"))
IWHTMLCheckbox : IDispatch
{};

struct __declspec(uuid("5512d119-5cc6-11cf-8d67-00aa00bdce1d"))
IWHTMLOption : IDispatch
{};

struct __declspec(uuid("5512d11b-5cc6-11cf-8d67-00aa00bdce1d"))
IWHTMLText : IDispatch
{};

struct __declspec(uuid("5512d11d-5cc6-11cf-8d67-00aa00bdce1d"))
IWHTMLHidden : IDispatch
{};

struct __declspec(uuid("5512d11f-5cc6-11cf-8d67-00aa00bdce1d"))
IWHTMLPassword : IDispatch
{};

struct __declspec(uuid("5512d123-5cc6-11cf-8d67-00aa00bdce1d"))
IWHTMLSelect : IDispatch
{};

struct __declspec(uuid("5512d125-5cc6-11cf-8d67-00aa00bdce1d"))
IWHTMLTextArea : IDispatch
{};

struct __declspec(uuid("978c9e22-d4b0-11ce-bf2d-00aa003f40d0"))
LabelControlEvents : IDispatch
{};

struct __declspec(uuid("978c9e23-d4b0-11ce-bf2d-00aa003f40d0"))
Label;
    // [ default ] dispinterface ILabelControl
    // [ default, source ] dispinterface LabelControlEvents

struct __declspec(uuid("7b020ec1-af6c-11ce-9f46-00aa00574a4f"))
CommandButtonEvents : IDispatch
{};

struct __declspec(uuid("d7053240-ce69-11cd-a777-00dd01143c57"))
CommandButton;
    // [ default ] dispinterface ICommandButton
    // [ default, source ] dispinterface CommandButtonEvents

struct __declspec(uuid("8bd21d12-ec42-11ce-9e0d-00aa006002f3"))
MdcTextEvents : IDispatch
{};

struct __declspec(uuid("8bd21d10-ec42-11ce-9e0d-00aa006002f3"))
TextBox;
    // [ default ] dispinterface IMdcText
    // [ default, source ] dispinterface MdcTextEvents

struct __declspec(uuid("8bd21d22-ec42-11ce-9e0d-00aa006002f3"))
MdcListEvents : IDispatch
{};

struct __declspec(uuid("8bd21d20-ec42-11ce-9e0d-00aa006002f3"))
ListBox;
    // [ default ] dispinterface IMdcList
    // [ default, source ] dispinterface MdcListEvents

struct __declspec(uuid("8bd21d32-ec42-11ce-9e0d-00aa006002f3"))
MdcComboEvents : IDispatch
{};

struct __declspec(uuid("8bd21d30-ec42-11ce-9e0d-00aa006002f3"))
ComboBox;
    // [ default ] dispinterface IMdcCombo
    // [ default, source ] dispinterface MdcComboEvents

struct __declspec(uuid("8bd21d42-ec42-11ce-9e0d-00aa006002f3"))
MdcCheckBoxEvents : IDispatch
{};

struct __declspec(uuid("8bd21d52-ec42-11ce-9e0d-00aa006002f3"))
MdcOptionButtonEvents : IDispatch
{};

struct __declspec(uuid("8bd21d62-ec42-11ce-9e0d-00aa006002f3"))
MdcToggleButtonEvents : IDispatch
{};

struct __declspec(uuid("8bd21d40-ec42-11ce-9e0d-00aa006002f3"))
CheckBox;
    // [ default ] dispinterface IMdcCheckBox
    // [ default, source ] dispinterface MdcCheckBoxEvents

struct __declspec(uuid("8bd21d50-ec42-11ce-9e0d-00aa006002f3"))
OptionButton;
    // [ default ] dispinterface IMdcOptionButton
    // [ default, source ] dispinterface MdcOptionButtonEvents

struct __declspec(uuid("8bd21d60-ec42-11ce-9e0d-00aa006002f3"))
ToggleButton;
    // [ default ] dispinterface IMdcToggleButton
    // [ default, source ] dispinterface MdcToggleButtonEvents

struct __declspec(uuid("afc20920-da4e-11ce-b943-00aa006887b4"))
NewFont;
    // interface IUnknown
    // [ default ] dispinterface Font

struct __declspec(uuid("7b020ec2-af6c-11ce-9f46-00aa00574a4f"))
ScrollbarEvents : IDispatch
{};

struct __declspec(uuid("dfd181e0-5e2f-11ce-a449-00aa004a803d"))
ScrollBar;
    // [ default ] dispinterface IScrollbar
    // [ default, source ] dispinterface ScrollbarEvents

struct __declspec(uuid("7b020ec7-af6c-11ce-9f46-00aa00574a4f"))
TabStripEvents : IDispatch
{};

struct __declspec(uuid("eae50eb0-4a62-11ce-bed6-00aa00611080"))
TabStrip;
    // [ default ] dispinterface ITabStrip
    // [ default, source ] dispinterface TabStripEvents

struct __declspec(uuid("79176fb2-b7f2-11ce-97ef-00aa006d2776"))
SpinbuttonEvents : IDispatch
{};

struct __declspec(uuid("79176fb0-b7f2-11ce-97ef-00aa006d2776"))
SpinButton;
    // [ default ] dispinterface ISpinbutton
    // [ default, source ] dispinterface SpinbuttonEvents

struct __declspec(uuid("4c5992a5-6926-101b-9992-00000b65c6f9"))
ImageEvents : IDispatch
{};

struct __declspec(uuid("4c599241-6926-101b-9992-00000b65c6f9"))
Image;
    // [ default ] dispinterface IImage
    // [ default, source ] dispinterface ImageEvents

struct __declspec(uuid("796ed650-5fe9-11cf-8d68-00aa00bdce1d"))
WHTMLControlEvents : IDispatch
{};

struct __declspec(uuid("47ff8fe0-6198-11cf-8ce8-00aa006cb389"))
WHTMLControlEvents1 : IDispatch
{};

struct __declspec(uuid("47ff8fe1-6198-11cf-8ce8-00aa006cb389"))
WHTMLControlEvents2 : IDispatch
{};

struct __declspec(uuid("47ff8fe2-6198-11cf-8ce8-00aa006cb389"))
WHTMLControlEvents3 : IDispatch
{};

struct __declspec(uuid("47ff8fe3-6198-11cf-8ce8-00aa006cb389"))
WHTMLControlEvents4 : IDispatch
{};

struct __declspec(uuid("47ff8fe4-6198-11cf-8ce8-00aa006cb389"))
WHTMLControlEvents5 : IDispatch
{};

struct __declspec(uuid("47ff8fe5-6198-11cf-8ce8-00aa006cb389"))
WHTMLControlEvents6 : IDispatch
{};

struct __declspec(uuid("47ff8fe6-6198-11cf-8ce8-00aa006cb389"))
WHTMLControlEvents7 : IDispatch
{};

struct __declspec(uuid("47ff8fe8-6198-11cf-8ce8-00aa006cb389"))
WHTMLControlEvents9 : IDispatch
{};

struct __declspec(uuid("47ff8fe9-6198-11cf-8ce8-00aa006cb389"))
WHTMLControlEvents10 : IDispatch
{};

struct __declspec(uuid("5512d110-5cc6-11cf-8d67-00aa00bdce1d"))
HTMLSubmit;
    // [ default ] dispinterface IWHTMLSubmitButton
    // [ default, source ] dispinterface WHTMLControlEvents

struct __declspec(uuid("5512d112-5cc6-11cf-8d67-00aa00bdce1d"))
HTMLImage;
    // [ default ] dispinterface IWHTMLImage
    // [ default, source ] dispinterface WHTMLControlEvents1

struct __declspec(uuid("5512d114-5cc6-11cf-8d67-00aa00bdce1d"))
HTMLReset;
    // [ default ] dispinterface IWHTMLReset
    // [ default, source ] dispinterface WHTMLControlEvents2

struct __declspec(uuid("5512d116-5cc6-11cf-8d67-00aa00bdce1d"))
HTMLCheckbox;
    // [ default ] dispinterface IWHTMLCheckbox
    // [ default, source ] dispinterface WHTMLControlEvents3

struct __declspec(uuid("5512d118-5cc6-11cf-8d67-00aa00bdce1d"))
HTMLOption;
    // [ default ] dispinterface IWHTMLOption
    // [ default, source ] dispinterface WHTMLControlEvents4

struct __declspec(uuid("5512d11a-5cc6-11cf-8d67-00aa00bdce1d"))
HTMLText;
    // [ default ] dispinterface IWHTMLText
    // [ default, source ] dispinterface WHTMLControlEvents5

struct __declspec(uuid("5512d11c-5cc6-11cf-8d67-00aa00bdce1d"))
HTMLHidden;
    // [ default ] dispinterface IWHTMLHidden
    // [ default, source ] dispinterface WHTMLControlEvents6

struct __declspec(uuid("5512d11e-5cc6-11cf-8d67-00aa00bdce1d"))
HTMLPassword;
    // [ default ] dispinterface IWHTMLPassword
    // [ default, source ] dispinterface WHTMLControlEvents7

struct __declspec(uuid("5512d122-5cc6-11cf-8d67-00aa00bdce1d"))
HTMLSelect;
    // [ default ] dispinterface IWHTMLSelect
    // [ default, source ] dispinterface WHTMLControlEvents9

struct __declspec(uuid("5512d124-5cc6-11cf-8d67-00aa00bdce1d"))
HTMLTextArea;
    // [ default ] dispinterface IWHTMLTextArea
    // [ default, source ] dispinterface WHTMLControlEvents10

enum __declspec(uuid("0ee49f40-e956-11ce-8141-00aa00611080"))
fmTransitionEffect
{
    fmTransitionEffectNone = 0,
    fmTransitionEffectCoverUp = 1,
    fmTransitionEffectCoverRightUp = 2,
    fmTransitionEffectCoverRight = 3,
    fmTransitionEffectCoverRightDown = 4,
    fmTransitionEffectCoverDown = 5,
    fmTransitionEffectCoverLeftDown = 6,
    fmTransitionEffectCoverLeft = 7,
    fmTransitionEffectCoverLeftUp = 8,
    fmTransitionEffectPushUp = 9,
    fmTransitionEffectPushRight = 10,
    fmTransitionEffectPushDown = 11,
    fmTransitionEffectPushLeft = 12
};

struct __declspec(uuid("5cef5613-713d-11ce-80c9-00aa00611080"))
IPage : IDispatch
{};

struct __declspec(uuid("92e11a03-7358-11ce-80cb-00aa00611080"))
Pages : IDispatch
{};

struct __declspec(uuid("04598fc9-866c-11cf-ab7c-00aa00c08fcf"))
IMultiPage : IDispatch
{};

struct __declspec(uuid("7b020ec8-af6c-11ce-9f46-00aa00574a4f"))
MultiPageEvents : IDispatch
{};

struct __declspec(uuid("46e31370-3f7a-11ce-bed6-00aa00611080"))
MultiPage;
    // [ default ] dispinterface IMultiPage
    // [ default, source ] dispinterface MultiPageEvents

struct __declspec(uuid("5cef5610-713d-11ce-80c9-00aa00611080"))
Page;
    // [ default ] dispinterface IPage

enum __declspec(uuid("f00164c2-b17b-11ce-a95d-00aa006cb389"))
fmListBoxStyles
{
    _fmListBoxStylesNone = 0,
    _fmListBoxStylesListBox = 1,
    _fmListBoxStylesComboBox = 2
};

enum __declspec(uuid("c3689f20-c231-11ce-a30c-00aa004a3d3c"))
fmRepeatDirection
{
    _fmRepeatDirectionHorizontal = 0,
    _fmRepeatDirectionVertical = 1
};

enum __declspec(uuid("c3689f20-c231-11ce-a30c-00aa004a3d3d"))
fmEnAutoSize
{
    _fmEnAutoSizeNone = 0,
    _fmEnAutoSizeHorizontal = 1,
    _fmEnAutoSizeVertical = 2,
    _fmEnAutoSizeBoth = 3
};

//
// Named GUID constants initializations
//

extern "C" const GUID __declspec(selectany) LIBID_MSForms =
    {0x9997a384,0x13eb,0x4457,{0x86,0x1e,0x59,0xe8,0x4d,0x73,0x35,0x15}};
extern "C" const GUID __declspec(selectany) DIID_FormFont =
    {0xbef6e003,0xa874,0x101a,{0x8b,0xba,0x00,0xaa,0x00,0x30,0x0c,0xab}};
extern "C" const GUID __declspec(selectany) DIID_IDataAutoWrapper =
    {0xec72f590,0xf375,0x11ce,{0xb9,0xe8,0x00,0xaa,0x00,0x6b,0x1a,0x69}};
extern "C" const GUID __declspec(selectany) DIID_IReturnInteger =
    {0x82b02370,0xb5bc,0x11cf,{0x81,0x0f,0x00,0xa0,0xc9,0x03,0x00,0x74}};
extern "C" const GUID __declspec(selectany) DIID_IReturnBoolean =
    {0x82b02371,0xb5bc,0x11cf,{0x81,0x0f,0x00,0xa0,0xc9,0x03,0x00,0x74}};
extern "C" const GUID __declspec(selectany) DIID_IReturnString =
    {0x82b02372,0xb5bc,0x11cf,{0x81,0x0f,0x00,0xa0,0xc9,0x03,0x00,0x74}};
extern "C" const GUID __declspec(selectany) DIID_IReturnSingle =
    {0x8a683c90,0xba84,0x11cf,{0x81,0x10,0x00,0xa0,0xc9,0x03,0x00,0x74}};
extern "C" const GUID __declspec(selectany) DIID_IReturnEffect =
    {0x8a683c91,0xba84,0x11cf,{0x81,0x10,0x00,0xa0,0xc9,0x03,0x00,0x74}};
extern "C" const GUID __declspec(selectany) CLSID_ReturnInteger =
    {0x82b02373,0xb5bc,0x11cf,{0x81,0x0f,0x00,0xa0,0xc9,0x03,0x00,0x74}};
extern "C" const GUID __declspec(selectany) CLSID_ReturnBoolean =
    {0x82b02374,0xb5bc,0x11cf,{0x81,0x0f,0x00,0xa0,0xc9,0x03,0x00,0x74}};
extern "C" const GUID __declspec(selectany) CLSID_ReturnString =
    {0x82b02375,0xb5bc,0x11cf,{0x81,0x0f,0x00,0xa0,0xc9,0x03,0x00,0x74}};
extern "C" const GUID __declspec(selectany) CLSID_ReturnSingle =
    {0x8a683c92,0xba84,0x11cf,{0x81,0x10,0x00,0xa0,0xc9,0x03,0x00,0x74}};
extern "C" const GUID __declspec(selectany) CLSID_ReturnEffect =
    {0x8a683c93,0xba84,0x11cf,{0x81,0x10,0x00,0xa0,0xc9,0x03,0x00,0x74}};
extern "C" const GUID __declspec(selectany) CLSID_DataObject =
    {0x1c3b4210,0xf441,0x11ce,{0xb9,0xea,0x00,0xaa,0x00,0x6b,0x1a,0x69}};
extern "C" const GUID __declspec(selectany) DIID_IControl =
    {0x04598fc6,0x866c,0x11cf,{0xab,0x7c,0x00,0xaa,0x00,0xc0,0x8f,0xcf}};
extern "C" const GUID __declspec(selectany) DIID_Controls =
    {0x04598fc7,0x866c,0x11cf,{0xab,0x7c,0x00,0xaa,0x00,0xc0,0x8f,0xcf}};
extern "C" const GUID __declspec(selectany) DIID_IOptionFrame =
    {0x29b86a70,0xf52e,0x11ce,{0x9b,0xce,0x00,0xaa,0x00,0x60,0x8e,0x01}};
extern "C" const GUID __declspec(selectany) DIID__UserForm =
    {0x04598fc8,0x866c,0x11cf,{0xab,0x7c,0x00,0xaa,0x00,0xc0,0x8f,0xcf}};
extern "C" const GUID __declspec(selectany) DIID_ControlEvents =
    {0x9a4bbf53,0x4e46,0x101b,{0x8b,0xbd,0x00,0xaa,0x00,0x3e,0x3b,0x29}};
extern "C" const GUID __declspec(selectany) CLSID_Control =
    {0x909e0ae0,0x16dc,0x11ce,{0x9e,0x98,0x00,0xaa,0x00,0x57,0x4a,0x4f}};
extern "C" const GUID __declspec(selectany) DIID_FormEvents =
    {0x5b9d8fc8,0x4a71,0x101b,{0x97,0xa6,0x00,0x00,0x0b,0x65,0xc0,0x8b}};
extern "C" const GUID __declspec(selectany) DIID_OptionFrameEvents =
    {0xcf3f94a0,0xf546,0x11ce,{0x9b,0xce,0x00,0xaa,0x00,0x60,0x8e,0x01}};
extern "C" const GUID __declspec(selectany) CLSID_UserForm =
    {0xc62a69f0,0x16dc,0x11ce,{0x9e,0x98,0x00,0xaa,0x00,0x57,0x4a,0x4f}};
extern "C" const GUID __declspec(selectany) CLSID_Frame =
    {0x6e182020,0xf460,0x11ce,{0x9b,0xcd,0x00,0xaa,0x00,0x60,0x8e,0x01}};
extern "C" const GUID __declspec(selectany) DIID_ILabelControl =
    {0x04598fc1,0x866c,0x11cf,{0xab,0x7c,0x00,0xaa,0x00,0xc0,0x8f,0xcf}};
extern "C" const GUID __declspec(selectany) DIID_ICommandButton =
    {0x04598fc4,0x866c,0x11cf,{0xab,0x7c,0x00,0xaa,0x00,0xc0,0x8f,0xcf}};
extern "C" const GUID __declspec(selectany) DIID_IMdcText =
    {0x8bd21d13,0xec42,0x11ce,{0x9e,0x0d,0x00,0xaa,0x00,0x60,0x02,0xf3}};
extern "C" const GUID __declspec(selectany) DIID_IMdcList =
    {0x8bd21d23,0xec42,0x11ce,{0x9e,0x0d,0x00,0xaa,0x00,0x60,0x02,0xf3}};
extern "C" const GUID __declspec(selectany) DIID_IMdcCombo =
    {0x8bd21d33,0xec42,0x11ce,{0x9e,0x0d,0x00,0xaa,0x00,0x60,0x02,0xf3}};
extern "C" const GUID __declspec(selectany) DIID_IMdcCheckBox =
    {0x8bd21d43,0xec42,0x11ce,{0x9e,0x0d,0x00,0xaa,0x00,0x60,0x02,0xf3}};
extern "C" const GUID __declspec(selectany) DIID_IMdcOptionButton =
    {0x8bd21d53,0xec42,0x11ce,{0x9e,0x0d,0x00,0xaa,0x00,0x60,0x02,0xf3}};
extern "C" const GUID __declspec(selectany) DIID_IMdcToggleButton =
    {0x8bd21d63,0xec42,0x11ce,{0x9e,0x0d,0x00,0xaa,0x00,0x60,0x02,0xf3}};
extern "C" const GUID __declspec(selectany) DIID_IScrollbar =
    {0x04598fc3,0x866c,0x11cf,{0xab,0x7c,0x00,0xaa,0x00,0xc0,0x8f,0xcf}};
extern "C" const GUID __declspec(selectany) DIID_Tab =
    {0xa38bffc3,0xa5a0,0x11ce,{0x81,0x07,0x00,0xaa,0x00,0x61,0x10,0x80}};
extern "C" const GUID __declspec(selectany) DIID_Tabs =
    {0x944acf93,0xa1e6,0x11ce,{0x81,0x04,0x00,0xaa,0x00,0x61,0x10,0x80}};
extern "C" const GUID __declspec(selectany) DIID_ITabStrip =
    {0x04598fc2,0x866c,0x11cf,{0xab,0x7c,0x00,0xaa,0x00,0xc0,0x8f,0xcf}};
extern "C" const GUID __declspec(selectany) DIID_ISpinbutton =
    {0x79176fb3,0xb7f2,0x11ce,{0x97,0xef,0x00,0xaa,0x00,0x6d,0x27,0x76}};
extern "C" const GUID __declspec(selectany) DIID_IImage =
    {0x4c599243,0x6926,0x101b,{0x99,0x92,0x00,0x00,0x0b,0x65,0xc6,0xf9}};
extern "C" const GUID __declspec(selectany) DIID_IWHTMLSubmitButton =
    {0x5512d111,0x5cc6,0x11cf,{0x8d,0x67,0x00,0xaa,0x00,0xbd,0xce,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_IWHTMLImage =
    {0x5512d113,0x5cc6,0x11cf,{0x8d,0x67,0x00,0xaa,0x00,0xbd,0xce,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_IWHTMLReset =
    {0x5512d115,0x5cc6,0x11cf,{0x8d,0x67,0x00,0xaa,0x00,0xbd,0xce,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_IWHTMLCheckbox =
    {0x5512d117,0x5cc6,0x11cf,{0x8d,0x67,0x00,0xaa,0x00,0xbd,0xce,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_IWHTMLOption =
    {0x5512d119,0x5cc6,0x11cf,{0x8d,0x67,0x00,0xaa,0x00,0xbd,0xce,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_IWHTMLText =
    {0x5512d11b,0x5cc6,0x11cf,{0x8d,0x67,0x00,0xaa,0x00,0xbd,0xce,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_IWHTMLHidden =
    {0x5512d11d,0x5cc6,0x11cf,{0x8d,0x67,0x00,0xaa,0x00,0xbd,0xce,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_IWHTMLPassword =
    {0x5512d11f,0x5cc6,0x11cf,{0x8d,0x67,0x00,0xaa,0x00,0xbd,0xce,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_IWHTMLSelect =
    {0x5512d123,0x5cc6,0x11cf,{0x8d,0x67,0x00,0xaa,0x00,0xbd,0xce,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_IWHTMLTextArea =
    {0x5512d125,0x5cc6,0x11cf,{0x8d,0x67,0x00,0xaa,0x00,0xbd,0xce,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_LabelControlEvents =
    {0x978c9e22,0xd4b0,0x11ce,{0xbf,0x2d,0x00,0xaa,0x00,0x3f,0x40,0xd0}};
extern "C" const GUID __declspec(selectany) CLSID_Label =
    {0x978c9e23,0xd4b0,0x11ce,{0xbf,0x2d,0x00,0xaa,0x00,0x3f,0x40,0xd0}};
extern "C" const GUID __declspec(selectany) DIID_CommandButtonEvents =
    {0x7b020ec1,0xaf6c,0x11ce,{0x9f,0x46,0x00,0xaa,0x00,0x57,0x4a,0x4f}};
extern "C" const GUID __declspec(selectany) CLSID_CommandButton =
    {0xd7053240,0xce69,0x11cd,{0xa7,0x77,0x00,0xdd,0x01,0x14,0x3c,0x57}};
extern "C" const GUID __declspec(selectany) DIID_MdcTextEvents =
    {0x8bd21d12,0xec42,0x11ce,{0x9e,0x0d,0x00,0xaa,0x00,0x60,0x02,0xf3}};
extern "C" const GUID __declspec(selectany) CLSID_TextBox =
    {0x8bd21d10,0xec42,0x11ce,{0x9e,0x0d,0x00,0xaa,0x00,0x60,0x02,0xf3}};
extern "C" const GUID __declspec(selectany) DIID_MdcListEvents =
    {0x8bd21d22,0xec42,0x11ce,{0x9e,0x0d,0x00,0xaa,0x00,0x60,0x02,0xf3}};
extern "C" const GUID __declspec(selectany) CLSID_ListBox =
    {0x8bd21d20,0xec42,0x11ce,{0x9e,0x0d,0x00,0xaa,0x00,0x60,0x02,0xf3}};
extern "C" const GUID __declspec(selectany) DIID_MdcComboEvents =
    {0x8bd21d32,0xec42,0x11ce,{0x9e,0x0d,0x00,0xaa,0x00,0x60,0x02,0xf3}};
extern "C" const GUID __declspec(selectany) CLSID_ComboBox =
    {0x8bd21d30,0xec42,0x11ce,{0x9e,0x0d,0x00,0xaa,0x00,0x60,0x02,0xf3}};
extern "C" const GUID __declspec(selectany) DIID_MdcCheckBoxEvents =
    {0x8bd21d42,0xec42,0x11ce,{0x9e,0x0d,0x00,0xaa,0x00,0x60,0x02,0xf3}};
extern "C" const GUID __declspec(selectany) DIID_MdcOptionButtonEvents =
    {0x8bd21d52,0xec42,0x11ce,{0x9e,0x0d,0x00,0xaa,0x00,0x60,0x02,0xf3}};
extern "C" const GUID __declspec(selectany) DIID_MdcToggleButtonEvents =
    {0x8bd21d62,0xec42,0x11ce,{0x9e,0x0d,0x00,0xaa,0x00,0x60,0x02,0xf3}};
extern "C" const GUID __declspec(selectany) CLSID_CheckBox =
    {0x8bd21d40,0xec42,0x11ce,{0x9e,0x0d,0x00,0xaa,0x00,0x60,0x02,0xf3}};
extern "C" const GUID __declspec(selectany) CLSID_OptionButton =
    {0x8bd21d50,0xec42,0x11ce,{0x9e,0x0d,0x00,0xaa,0x00,0x60,0x02,0xf3}};
extern "C" const GUID __declspec(selectany) CLSID_ToggleButton =
    {0x8bd21d60,0xec42,0x11ce,{0x9e,0x0d,0x00,0xaa,0x00,0x60,0x02,0xf3}};
extern "C" const GUID __declspec(selectany) CLSID_NewFont =
    {0xafc20920,0xda4e,0x11ce,{0xb9,0x43,0x00,0xaa,0x00,0x68,0x87,0xb4}};
extern "C" const GUID __declspec(selectany) DIID_ScrollbarEvents =
    {0x7b020ec2,0xaf6c,0x11ce,{0x9f,0x46,0x00,0xaa,0x00,0x57,0x4a,0x4f}};
extern "C" const GUID __declspec(selectany) CLSID_ScrollBar =
    {0xdfd181e0,0x5e2f,0x11ce,{0xa4,0x49,0x00,0xaa,0x00,0x4a,0x80,0x3d}};
extern "C" const GUID __declspec(selectany) DIID_TabStripEvents =
    {0x7b020ec7,0xaf6c,0x11ce,{0x9f,0x46,0x00,0xaa,0x00,0x57,0x4a,0x4f}};
extern "C" const GUID __declspec(selectany) CLSID_TabStrip =
    {0xeae50eb0,0x4a62,0x11ce,{0xbe,0xd6,0x00,0xaa,0x00,0x61,0x10,0x80}};
extern "C" const GUID __declspec(selectany) DIID_SpinbuttonEvents =
    {0x79176fb2,0xb7f2,0x11ce,{0x97,0xef,0x00,0xaa,0x00,0x6d,0x27,0x76}};
extern "C" const GUID __declspec(selectany) CLSID_SpinButton =
    {0x79176fb0,0xb7f2,0x11ce,{0x97,0xef,0x00,0xaa,0x00,0x6d,0x27,0x76}};
extern "C" const GUID __declspec(selectany) DIID_ImageEvents =
    {0x4c5992a5,0x6926,0x101b,{0x99,0x92,0x00,0x00,0x0b,0x65,0xc6,0xf9}};
extern "C" const GUID __declspec(selectany) CLSID_Image =
    {0x4c599241,0x6926,0x101b,{0x99,0x92,0x00,0x00,0x0b,0x65,0xc6,0xf9}};
extern "C" const GUID __declspec(selectany) DIID_WHTMLControlEvents =
    {0x796ed650,0x5fe9,0x11cf,{0x8d,0x68,0x00,0xaa,0x00,0xbd,0xce,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_WHTMLControlEvents1 =
    {0x47ff8fe0,0x6198,0x11cf,{0x8c,0xe8,0x00,0xaa,0x00,0x6c,0xb3,0x89}};
extern "C" const GUID __declspec(selectany) DIID_WHTMLControlEvents2 =
    {0x47ff8fe1,0x6198,0x11cf,{0x8c,0xe8,0x00,0xaa,0x00,0x6c,0xb3,0x89}};
extern "C" const GUID __declspec(selectany) DIID_WHTMLControlEvents3 =
    {0x47ff8fe2,0x6198,0x11cf,{0x8c,0xe8,0x00,0xaa,0x00,0x6c,0xb3,0x89}};
extern "C" const GUID __declspec(selectany) DIID_WHTMLControlEvents4 =
    {0x47ff8fe3,0x6198,0x11cf,{0x8c,0xe8,0x00,0xaa,0x00,0x6c,0xb3,0x89}};
extern "C" const GUID __declspec(selectany) DIID_WHTMLControlEvents5 =
    {0x47ff8fe4,0x6198,0x11cf,{0x8c,0xe8,0x00,0xaa,0x00,0x6c,0xb3,0x89}};
extern "C" const GUID __declspec(selectany) DIID_WHTMLControlEvents6 =
    {0x47ff8fe5,0x6198,0x11cf,{0x8c,0xe8,0x00,0xaa,0x00,0x6c,0xb3,0x89}};
extern "C" const GUID __declspec(selectany) DIID_WHTMLControlEvents7 =
    {0x47ff8fe6,0x6198,0x11cf,{0x8c,0xe8,0x00,0xaa,0x00,0x6c,0xb3,0x89}};
extern "C" const GUID __declspec(selectany) DIID_WHTMLControlEvents9 =
    {0x47ff8fe8,0x6198,0x11cf,{0x8c,0xe8,0x00,0xaa,0x00,0x6c,0xb3,0x89}};
extern "C" const GUID __declspec(selectany) DIID_WHTMLControlEvents10 =
    {0x47ff8fe9,0x6198,0x11cf,{0x8c,0xe8,0x00,0xaa,0x00,0x6c,0xb3,0x89}};
extern "C" const GUID __declspec(selectany) CLSID_HTMLSubmit =
    {0x5512d110,0x5cc6,0x11cf,{0x8d,0x67,0x00,0xaa,0x00,0xbd,0xce,0x1d}};
extern "C" const GUID __declspec(selectany) CLSID_HTMLImage =
    {0x5512d112,0x5cc6,0x11cf,{0x8d,0x67,0x00,0xaa,0x00,0xbd,0xce,0x1d}};
extern "C" const GUID __declspec(selectany) CLSID_HTMLReset =
    {0x5512d114,0x5cc6,0x11cf,{0x8d,0x67,0x00,0xaa,0x00,0xbd,0xce,0x1d}};
extern "C" const GUID __declspec(selectany) CLSID_HTMLCheckbox =
    {0x5512d116,0x5cc6,0x11cf,{0x8d,0x67,0x00,0xaa,0x00,0xbd,0xce,0x1d}};
extern "C" const GUID __declspec(selectany) CLSID_HTMLOption =
    {0x5512d118,0x5cc6,0x11cf,{0x8d,0x67,0x00,0xaa,0x00,0xbd,0xce,0x1d}};
extern "C" const GUID __declspec(selectany) CLSID_HTMLText =
    {0x5512d11a,0x5cc6,0x11cf,{0x8d,0x67,0x00,0xaa,0x00,0xbd,0xce,0x1d}};
extern "C" const GUID __declspec(selectany) CLSID_HTMLHidden =
    {0x5512d11c,0x5cc6,0x11cf,{0x8d,0x67,0x00,0xaa,0x00,0xbd,0xce,0x1d}};
extern "C" const GUID __declspec(selectany) CLSID_HTMLPassword =
    {0x5512d11e,0x5cc6,0x11cf,{0x8d,0x67,0x00,0xaa,0x00,0xbd,0xce,0x1d}};
extern "C" const GUID __declspec(selectany) CLSID_HTMLSelect =
    {0x5512d122,0x5cc6,0x11cf,{0x8d,0x67,0x00,0xaa,0x00,0xbd,0xce,0x1d}};
extern "C" const GUID __declspec(selectany) CLSID_HTMLTextArea =
    {0x5512d124,0x5cc6,0x11cf,{0x8d,0x67,0x00,0xaa,0x00,0xbd,0xce,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_IPage =
    {0x5cef5613,0x713d,0x11ce,{0x80,0xc9,0x00,0xaa,0x00,0x61,0x10,0x80}};
extern "C" const GUID __declspec(selectany) DIID_Pages =
    {0x92e11a03,0x7358,0x11ce,{0x80,0xcb,0x00,0xaa,0x00,0x61,0x10,0x80}};
extern "C" const GUID __declspec(selectany) DIID_IMultiPage =
    {0x04598fc9,0x866c,0x11cf,{0xab,0x7c,0x00,0xaa,0x00,0xc0,0x8f,0xcf}};
extern "C" const GUID __declspec(selectany) DIID_MultiPageEvents =
    {0x7b020ec8,0xaf6c,0x11ce,{0x9f,0x46,0x00,0xaa,0x00,0x57,0x4a,0x4f}};
extern "C" const GUID __declspec(selectany) CLSID_MultiPage =
    {0x46e31370,0x3f7a,0x11ce,{0xbe,0xd6,0x00,0xaa,0x00,0x61,0x10,0x80}};
extern "C" const GUID __declspec(selectany) CLSID_Page =
    {0x5cef5610,0x713d,0x11ce,{0x80,0xc9,0x00,0xaa,0x00,0x61,0x10,0x80}};
}
#pragma pack(pop)
